#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include "sdcard.c"
#include "testbench.h"


#ifdef AA2C
#include "aa_c_model.h" 
#else
#include "vhdlCStubs.h"
#endif

// Performs read/write operations on SDHC Register Set.
int ReadWriteSDHCRegister(long int rwbar, int regSize, long int phyAdd, int data)
{
        /*Bit 63: rwbar
          Bit 62-59: bytemask
          Bits 58-56: Unused
          Bits 55-32: Physical address
          Bits 31- 0: data*/
        uint64_t writeData;
        uint32_t readData;
        long int address = phyAdd;
        long int bytemask;
        int returnData;
	unsigned int dataToSend;
        //Swap endian 
        //fprintf(stderr,"rwbar = %ld\n, regSize = %d\n, phyAdd = %lx\n, data = %x\n",rwbar,regSize,phyAdd,data);
        if(regSize == 4)
        {
	        dataToSend = ((data & 0x000000ff) << 24) |((data & 0x0000ff00) << 8) |((data & 0x00ff0000) >> 8) | ((data & 0xff000000) >> 24);
                bytemask = 0xf;
        }
        else if(regSize == 2)
        {
                if ((phyAdd & 0x3) == 0)
                {
                        dataToSend = (((data & 0x000000ff) << 24) |((data & 0x0000ff00) << 8));       
                        bytemask = 0xc;
                }
                else
                {
                        dataToSend = (((data & 0x000000ff) << 8) | ((data & 0x0000ff00) >> 8));
                        address = phyAdd - 2;
                        bytemask = 0x3;
                }         
        }
        else 
        {
                if((phyAdd & 0x3)==0)
                {
                        dataToSend = ((data & 0x000000ff) << 24);
                        bytemask = 0x8;
                }
                else if ((phyAdd & 0x3)==1)
                {
                        dataToSend = ((data & 0x000000ff) << 16);
                        address = phyAdd - 1;
                        bytemask = 0x4;
                }
                else if((phyAdd & 0x3)==2)
                {
                        dataToSend = ((data & 0x000000ff) << 8);
                        address = phyAdd - 2;
                        bytemask = 0x2;       
                }
                else
                {
                        dataToSend = ((data & 0x000000ff) << 0);
                        address = phyAdd - 3;
                        bytemask = 0x1;
                }             
        }
       // fprintf(stderr,"rwbar = %ld\n, regSize = %d\n, phyAdd = %lx\n, data = %lx\n bytemask = %ld\n",rwbar,regSize,address,dataToSend,bytemask);
        writeData = (rwbar << 63) | (bytemask << 59) | (address << 32) | dataToSend;
	//fprintf(stderr,"writedata is %lx\n",writeData);
        write_uint64("peripheral_bridge_to_sdhc_request", writeData);
        //In case of write (rwbar =0) there should be a zero received as an acknowledgement
        //Otherwise Data is read
        readData = read_uint32("sdhc_to_peripheral_bridge_response");
        //Swap endian
        if(regSize == 4)
                returnData = ((readData & 0x000000ff) << 24) | ((readData & 0x0000ff00)<<8) |((readData & 0x00ff0000)>>8)| ((readData & 0xff000000)>>24) ;
        else if(regSize == 2)
        {
                if ((phyAdd & 0x3) == 0)
                        returnData = (((readData & 0xff000000) >> 24) |((readData & 0x00ff0000) >> 8));       
                else
                        returnData = (((readData & 0x000000ff) << 8) | ((readData & 0x0000ff00) >> 8));      
        }
        else 
        {
                if((phyAdd & 0x3)==0)
                        returnData = ((readData & 0xff000000) >> 24);
                else if ((phyAdd & 0x3)==1)
                        returnData = ((readData & 0x00ff0000) >> 16);
                else if((phyAdd & 0x3)==2)
                        returnData = ((readData & 0x0000ff00) >> 8);
                else
                        returnData = ((readData & 0x000000ff) >> 0);
        }
        return returnData;
}
void EnableInterruptStatusRegistersAndCheckInterruptLine(int data)
{
        int flag = 0;
        int ack;
        int errorBitCheck;
        uint32_t status;
        uint32_t errorStatus;
        uint8_t interruptLine = 0;
        ack = ReadWriteSDHCRegister(0, 2, (SDBase + NormalInterruptStatusEnable), data);  //Writing into the normal status enable register
        ack = ReadWriteSDHCRegister(0, 2, (SDBase + NormalInterruptSignalEnable), data);  //Writing into the normal signal enable register
        //Enable error interrupt registers too.
        ack = ReadWriteSDHCRegister(0, 2, (SDBase + ErrorInterruptStatusEnable), 0xffff); //Writing to error interrupt status enable register
        ack = ReadWriteSDHCRegister(0, 2, (SDBase + ErrorInterruptSignalEnable), 0xffff); //Writing to error interrupt signal enable register
        //Checking the interrupt line

        while (1)
        {
                interruptLine = read_uint8("SDHC_to_IRC_INT");
               
                flag = (interruptLine & 0x1);
                fprintf(stderr,"HOST:interrupt %x\n",flag);
                if (flag == 1)
                        break;
        }
        status = ReadWriteSDHCRegister(1, 2, (SDBase + NormalInterruptStatus), 0); //Reading from the normal interrupt status register
        //Check whether there is any error interrupt bit 
        //set or not by checking bit-15 of the status.
        errorBitCheck = (status >> 15);
        if (errorBitCheck == 1)
        {
                errorStatus = ReadWriteSDHCRegister(1, 2, (SDBase + ErrorInterruptStatus), 0); //Reading from error interrupt status register
                fprintf(stderr, "HOST:Error Interrupt status is %x\n", errorStatus);
                ack = ReadWriteSDHCRegister(0, 2, (SDBase + ErrorInterruptStatus), 0xffff); //Clearing error interrupt status
        }
        // Interrrupt status is printed here
        fprintf(stderr, "HOST:Normal Interrupt status is %x\n", status);
}
void SendGeneralCommand(int n)
{
uint8_t interruptLine;
int flag;
    //Check Command Inhibit(CMD)
    int presentState,data;
    int ack;
    int cmd; // Generating command index
    /*presentState = ReadWriteSDHCRegister(1,4,(SDBase + PresentState),0);
    while( (presentState & 0x1) == 1)//command_inhibit(CMD) (to check whether command line is busy or not)
	presentState = ReadWriteSDHCRegister(1,4,(SDBase + PresentState),0);
    while( (presentState & 0x2) == 2)//command_inhibit(DAT) (to check whether DAT lines are busy or not)
        presentState = ReadWriteSDHCRegister(1,4,(SDBase + PresentState),0);
        */      
    switch(n)//For finding the value to be stored in Argument Register
    {
		case 0: data = 0;
			break;

		case 2: data = 0;
                      	break;

		case 3: data = 0;
                       	break;

		case 6:	data=0x80000000;
                        break;

		case 7: data= RCA ;//[31:16]RCA
                        break;

                case 8: data = 0x1AA;
                	break;

		case 11:data=0;
			break;

                case 15:data= RCA;//[31:16]RCA
                        break;

		case 17:data=writeAddress;
                	break;

		case 18: data = writeAddress;
			break;

		case 19:data=0;
			break;
                
                case 23:data = MaxBlockCount;
                        break;

		case 24:data=writeAddress;//data address for write
                	break;

		case 25: data = writeAddress;//data address for write
			break;

                case 42: data = 0;
                        break;

		case 55:data= RCA ;	//[31:16]RCA
			break;

		default:data=0;
	}
        ack = ReadWriteSDHCRegister(0,4,(SDBase + Argument),data);//Write the Argument register
        if ( (n == 17) || (n ==18) || (n==24) || (n==25))//Write the Transfer register.
        {
                if (n==17)
                {
		        data = 0x10;
                }
	        else if (n== 18)
		        data = 0x32;

	        else if (n ==24)
		        data = 0;

	        else if (n ==25)
		        data = 0x22;

	        else 
		        data =0;

                ack = ReadWriteSDHCRegister(0,2,(SDBase + Transfer),data);
        }
        //Generate Command register values... Divided in terms type of response expected
	if( (n == 0)|| (n==4) ||(n==15))
        //No response
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|0;
        else if((n==2)||(n==9)||(n==10))
        //R2 Response is generated.
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
        else if((n == 55)||(n == 3)||(n==8)||(n==17)||(n==18)||(n==19)||(n==24)||(n==25) ||(n==23))
        //Response generated is of the type R1/R7/R6.
        {
                if((n==17)||(n==18)||(n==24)||(n==25))
                        cmd = (n<<8)|(0<<6)|(1<<5)|(1<<4)|(1<<3)|(0<<2)|2;
                else
                        cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
        }
        else
        //Response Type R1b, R5b.
        {
                
                if((n==7) || (n==12)||(n==20)||(n==28)||(n==29)||(n==38))
                {
                        cmd = (n<<8)|(0<<6)|(1<<5)|(1<<4)|(1<<3)|(0<<2)|3;
                }
                else
                {
                        cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
                }
        }
        
        ack = ReadWriteSDHCRegister(0,2,(SDBase + Command),cmd);//Write into Command register
        //fprintf(stderr,"Here\n");
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegister(0, 2, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete Interrupt
        fprintf(stderr,"HOST:Command Complete\n");
        if((n==7) || (n==12)||(n==20)||(n==28)||(n==29)||(n==38))
        {
                EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);//Checking Command Complete Interrupt	
                fprintf(stderr,"HOST:Checking Transfer Complete for R1b\n");		
                ack = ReadWriteSDHCRegister(0, 2, (SDBase + NormalInterruptStatus), 0x2);//Clear Command Complete Interrupt
        }
        //do{
        //interruptLine = read_uint8("SDHC_to_IRC_INT");
        //flag = (interruptLine & 0x1);
        //fprintf(stderr,"interrupt after clear %x\n",flag);
        //}while(flag==1);
        //while(1){}
}
void SendApplicationSpecificCommand(int n)
{
        int data;
        int cmd,ack;//For generating Command register value
	switch(n)
	{
		case 6: data =0x2;
			break;

		case 23: data = MaxBlockCount;
			break;

		case 411:data = 0;
                 	break;

		case 412:data = (1<<30) | (1<<28) | (1<<24) | OCR;
		//HCS = 1(High capacity support) 
                //XPC =1(maximum performance) 
                //S18R =1 (Switching to 1.8V)
			break;
		
                default:data =0;
	}
	ack = ReadWriteSDHCRegister(0,4,(SDBase + Argument),data);//Write the Argument register
        //Generate Command register values... Divided in terms type of response expected
        if ((n == 411) || (n == 412)) //Response generated is R3.
        {
                n=41;
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|(0<<2)|2;
        }
        else if((n == 6) || (n==23))
        //Response generated is of the type R1.
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
        else//Response Type R1b, R5b
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
        ack = ReadWriteSDHCRegister(0,2,(SDBase + Command),cmd);//Write into Command register
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegister(0,2, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete interrupt
}
int WriteSingleOrMultiple512BytesBlock(int blockCount, int * writeData)
//Sets up the SD Card to write data into the flash.
//Supports single and multiple BlockWrite.
{
	int flag = 0,ack;
        int blockData;
	int response;
        int count = blockCount;
        int newcount =0;
	writeAddress= 0;
        long int i ;
        //Set Block Size to fixed 512 bytes
        ack = ReadWriteSDHCRegister(0,2,(SDBase + BlockSize),512);
	//Set Block Count Register
        ack = ReadWriteSDHCRegister(0,2,(SDBase + BlockCount),blockCount);
	if (blockCount ==1)
		SendGeneralCommand(24);
	else
	{
		//Pre-erased
		//Sets the number of write blocks to be pre-erased before writing.
		SendGeneralCommand(55);
		response = ReadWriteSDHCRegister(1,4, (SDBase + Response0),0);
		SendApplicationSpecificCommand(23);
                response = ReadWriteSDHCRegister(1,4, (SDBase + Response0),0);
		SendGeneralCommand(25);
	}
	response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
	//Wait for Buffer Write Ready Interrupt
	while(count!=0)
	{
		EnableInterruptStatusRegistersAndCheckInterruptLine(0x10);		
		fprintf(stderr,"HOST:Buffer Write Ready Interrupt occured,ready to write buffer\n");
                ack = ReadWriteSDHCRegister(0,2, (SDBase + NormalInterruptStatus), 0x10);//clear Buffer write ready interrupt
		fprintf(stderr,"HOST:Buffer Write Ready Interrupt cleared\n");
		//Set block data
		for(i=0; i< (FixedBlockSize) ; i++)
                {
                        ack = ReadWriteSDHCRegister(0,4,(SDBase + BufferDataPort),writeData[i+newcount]);
                        //fprintf(stderr,"writedata =%x\n",writeData[i+newcount]);
                }
		count--;
                newcount = newcount + 128;
	}
	EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);//Wait for Transfer complete Interrupt
        fprintf(stderr,"HOST:Transfer Complete Interrupt Occurred\n");
        ack = ReadWriteSDHCRegister(0,2,(SDBase + NormalInterruptStatus), 0x2);//clear the transfer complete interrupt
	//SendGeneralCommand(15);  //sends the card into inactive state
	//response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
	return flag ;
}
int ReadSingleOrMultiple512BytesBlock(int blockCount)
//Sets up the SD Card to read data from the flash.
//It supports single and multiple BlockRead
//and checks the data read to confirm march test
{
	
	int flag =0;
	int response,ack;
	int blockData;
        int count = blockCount;
        long int i;
	//Set Block Size to 512 bytes
        ack = ReadWriteSDHCRegister(0,2,(SDBase + BlockSize),512);
	//Set Block Count to maximum value possible (65535)
        ack = ReadWriteSDHCRegister(0,2,(SDBase + BlockCount),blockCount);
	if (blockCount ==1)
		SendGeneralCommand(17);
	else
        {
                SendGeneralCommand(23);
		SendGeneralCommand(18);
        }
        response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
	//Wait for Buffer Read Ready Interrupt
	while(count!=0)
	{
		EnableInterruptStatusRegistersAndCheckInterruptLine(0x20);
		fprintf(stderr,"HOST:Buffer Read Ready Interrupt occured,ready to read buffer\n");
		ack = ReadWriteSDHCRegister(0,2, (SDBase + NormalInterruptStatus), 0x20);
		fprintf(stderr,"HOST:Buffer Read Ready Interrupt cleared\n");
		//Get Block Data
		for(i=0; i< (FixedBlockSize); i++)
		{
                        blockData = ReadWriteSDHCRegister(1,4,(SDBase + BufferDataPort),0);
			fprintf(stderr,"HOST: Blockdata[%d] = %d\n", i, blockData);
			if((blockCount ==1) && (blockData != i))
			{
				fprintf(stderr,"HOST:Error: Expected = %d , Actual =%d \n", i, blockData);
				flag =1;
			}
                        else if((((count==1)  && (blockData != 3)) || ((count==2)  && (blockData != 2) )|| ((count==3)  && (blockData != 1))) && (blockCount !=1))
                        {
                                fprintf(stderr,"HOST: MultipleError: Expected = %d, Actual = %d\n", (i+1),blockData);
                                flag =1;
                        }
		}
		count--;
	}
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);//Wait for transfer complete interrupt
        ack = ReadWriteSDHCRegister(0,2, (SDBase + NormalInterruptStatus), 0x2);//clear transfer complete interrupt
        //SendGeneralCommand(15);
        //response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        return flag;
}

int ExecuteInitializationSequence()
{ 
        int response = 0;
        int r0,r2,r4,r6;
        int readData;
        int data;
        int voltageSupport;
        int sdclkFreq;
        int busy = 0;
        int cardIsLocked = 0;
        int flag = 0;
        int ack;
        int ccs;//Card Capacity status
        
        readData = ReadWriteSDHCRegister(1,4, (SDBase + Capabilities), 0);
        ack = ReadWriteSDHCRegister(0, 1, (SDBase + SoftwareReset), 1);
        fprintf(stderr, "HOST:Capabilities reg = %x \n", readData);
        fprintf(stderr, "HOST:Base Clock Frequency For SD Clock is %d \n", ((readData >> 8) & 0xff));
        SendGeneralCommand(0);
        SendGeneralCommand(8);
                response = ReadWriteSDHCRegister(1,4, (SDBase + Response0), 0);
                fprintf(stderr, "HOST:CMD8 Response is %x\n", response);
                if (response != 0x1AA)
                {
                        return 1;
                }
        SendGeneralCommand(55);
        response = ReadWriteSDHCRegister(1,4, (SDBase + Response0), 0);
        fprintf(stderr, "HOST:CMD55 Response is %x\n", response);
        SendApplicationSpecificCommand(411);                                                    //inquiry ACMD41
        response = ReadWriteSDHCRegister(1,4, (SDBase + Response0), 0); //Contains OCR.
        OCR = response;
        fprintf(stderr, "HOST:OCR = %x\n",OCR);
        while (!busy)
        {
                SendGeneralCommand(55);
                SendApplicationSpecificCommand(412); //first ACMD41 with S18R(bit 24)=1 HCS =1
                response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
                busy = response >> 31U;
        }
        ccs = (response >> 30) & 1;
        if (ccs == 0)
        {
                fprintf(stderr, "HOST:SDSC\n");
                return 1;
        }
        else
                fprintf(stderr, "HOST:SDHC or SDXC\n");
                    

        SendGeneralCommand(2);
        //CID is printed
        r0 = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        r2 = ReadWriteSDHCRegister(1,4,(SDBase + Response2),0);
        r4 = ReadWriteSDHCRegister(1,4,(SDBase + Response4),0);
        r6 = ReadWriteSDHCRegister(1,4,(SDBase + Response6),0);
        fprintf(stderr,"HOST:The response is %x%x%x%x\n", r6,r4,r2,r0);
        SendGeneralCommand(3);
        response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        RCA = ((response & 0x11110000)>>16u);
        fprintf(stderr,"HOST:RCA = %lx\n",RCA);
        SendGeneralCommand(7);
        response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        //fprintf(stderr,"response  for CMD7= %lx\n",response);
        //Check CARD_IS_LOCKED bit in response
        cardIsLocked = (response & 0x02000000) >> 25;
        
        SendGeneralCommand(55);
        response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        SendApplicationSpecificCommand(6);
        response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);
        ack = ReadWriteSDHCRegister(0,1, (SDBase + HostControl), 2);
   
	return flag;
}

int writeAndRead(long int addr, uint32_t data, char* regName,  int regSize)
{
  long int rwbar=0;
  long int phyAdd=(SDBase+addr);
  fprintf(stderr,"\r\n#\r\nRegister under test:%s, data written is 0x%lx\r\n",regName,data);  
  int writeAck=ReadWriteSDHCRegister(0, regSize, phyAdd, data);
  fprintf(stderr, "write acknowledgment for  register is 0x%x\r\n",writeAck);
  int readData=ReadWriteSDHCRegister(1, regSize, phyAdd, 0);
  fprintf(stderr, "data read from  register %s is 0x%x\r\n", regName,readData);
}


DEFINE_THREAD(sdcard);


int main(int argc, char* argv[])
{
	int ack;
        int err;
        long int i,j;
        int response;
        int interruptLine;
        int flag;
        unsigned int busy =0;
        int ccs;
        int r0,r2,r4,r6;
        int cardIsLocked =0;
        int readData;
        int writeArray[FixedBlockSize];
        int writeMultipleBlockArray[FixedBlockSize * MaxBlockCount];
if(argc < 2)
	{
		fprintf(stderr,"Usage: %s [trace-file]\n trace-file=null for no trace, stdout for stdout\n",
				argv[0]);
		return(1);
	}

	FILE* fp = NULL;
	if(strcmp(argv[1],"stdout") == 0)
	{
		fp = stdout;
	}
	else if(strcmp(argv[1], "null") != 0)
	{
		fp = fopen(argv[1],"w");
		if(fp == NULL)
		{
			fprintf(stderr,"Error: could not open trace file %s\n", argv[1]);
			return(1);
		}
	}

#ifdef AA2C
    init_pipe_handler();
    start_daemons (fp,0);
#endif
PTHREAD_DECL(sdcard);
PTHREAD_CREATE(sdcard);



err = ExecuteInitializationSequence();
if (err)
        fprintf(stderr, "Error in Initialization");
else
        fprintf(stderr, "Succesfully Initialized");
//Initializing the write array by incrementing
//every 32 bit of the block by 1.
for(i = 0; i< FixedBlockSize ;i++)
       writeArray[i] = (int) i;
//Blockwrite with 512 bytes block size and single block count.        
err = WriteSingleOrMultiple512BytesBlock(1, writeArray);
if (err)
        fprintf(stderr, "HOST:Error in Single Block Write");
err = ReadSingleOrMultiple512BytesBlock(1);
if (err)
        fprintf(stderr, "HOST: Error in Single Block Read");


for(i=0;i<MaxBlockCount * FixedBlockSize;i++)
{
        writeMultipleBlockArray[i]= (int) ((i/FixedBlockSize)+1);       
}

//Blockwrite with 512 bytes block size and 2^16-1 block count which is maximum
err = WriteSingleOrMultiple512BytesBlock(MaxBlockCount, writeMultipleBlockArray);
if (err)
        fprintf(stderr, "HOST:Error in Multiple Block Write");
err = ReadSingleOrMultiple512BytesBlock(MaxBlockCount);
if (err)
        fprintf(stderr, "HOST: Error in Multiple Block Read");    
SendGeneralCommand(15);
response = ReadWriteSDHCRegister(1,4,(SDBase + Response0),0);    

PTHREAD_JOIN(sdcard);


return 0;
}
