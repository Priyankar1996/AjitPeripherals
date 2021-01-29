/*TESTBENCH FOR SD HOST CONTROLLER
  Authors: Arghya Kamal Dey, Priyankar Sarkar,Ajinkya Raghuwanshi,Deval Patel.
  Date: January,2021.
*/
#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>
#include <time.h>
#include "testbench.h"
/************Global Variables**************/
int OCR, RCA = 0, writeAddress;
/******************************************/

// Sequence of operations performed in main function:
// 1. Check if Card is inserted.
// 2. Software reset.
// 3. Clock Enabled.
// 4. Power Enabled.
// 5, Initialization of the card is done.
// 6. If initialized then blocks are written.
// 7. After successful write, blocks are read to check memory.

int main(int argc, char *argv[])
{
        int err = 0;
        int flag = 0;
        int ack;
        int readData;
        int sdclkFreq;
        int voltageSupport;
        int writeArray[FixedBlockSize];
        int writeMultipleBlockArray[FixedBlockSize * MaxBlockCount];
        long int i;
        FILE *fp = NULL;
        if (strcmp(argv[1], "stdout") == 0)
                fp = stdout;
        else if (strcmp(argv[1], "null") != 0)
        {
                fp = fopen(argv[1], "w");
                if (fp == NULL)
                {
                        fprintf(stderr, "Error: could not open trace file %s\n", argv[1]);
                        return (1);
                }
        }
        //SDHC thread is started
        //startSdhcThreads();
        err = ExecuteInitializationSequence();
        if (err)
                fprintf(stderr, "Error in Initialization");
        else
                fprintf(stderr, "Succesfully Initialized");
        //initialize the write array...every 32 bit of the block is incremented by 1 for march test
        for(i = 0; i< FixedBlockSize ;i++)
                writeArray[i] =(int) i;
        //Blockwrite with 512 bytes block size and single block count        
        err = WriteSingleOrMultiple512BytesBlock(1, writeArray);
        if (err)
                fprintf(stderr, "Error in Single Block Write");
        //Blockread with 512 bytes block size and single block read
        err = ReadSingleOrMultiple512BytesBlock(1);
        if (err)
                fprintf(stderr, " Error in Single Block Read");
        return 0;
        //initialize the write multiple block array... every block value is incremented by 1 for march test
        for(i = 0; i< (FixedBlockSize * MaxBlockCount ); i++)
        {
                if(i%FixedBlockSize == 0)
                        writeMultipleBlockArray[i] = (int) i;
                else
                        writeMultipleBlockArray[i] = 0;
        }
        //Blockwrite with 512 bytes block size and 2^16-1 block count which is maximum
        err = WriteSingleOrMultiple512BytesBlock(MaxBlockCount, writeMultipleBlockArray);
        if (err)
                fprintf(stderr, "Error in Multiple Block Write");
        //Blockread with 512 bytes block size
        err = ReadSingleOrMultiple512BytesBlock(MaxBlockCount);
        if (err)
                fprintf(stderr, " Error in Multiple Block Read");
        return 0;
}



int ReadWriteSDHCRegister(long int rwbar, long int bytemask, long int phyAdd, int data)
{
        /*Bit 63: rwbar
          Bit 62-59: bytemask
          Bits 58-56: Unused
          Bits 55-32: Physical address
          Bits 31- 0: data*/
        uint64_t writeData;
        uint32_t readData;
        int returnData;
        writeData = (rwbar << 63) | (bytemask << 59) | (phyAdd << 32) | data;
        write_uint64("peripheral_bridge_to_sdhc_request", writeData);
        //In case of write (rwbar =0) there should be a zero received as an acknowledgement
        //Otherwise Data is read
        readData = read_uint32("sdhc_to_peripheral_bridge_response");
        returnData = readData;
        return returnData;
}

//This function is used for checking the interrupts
//The data shows which interrupt to enable
void EnableInterruptStatusRegistersAndCheckInterruptLine(int data)
{
        int flag = 0;
        int ack;
        int errorBitCheck;
        uint32_t status;
        uint32_t errorStatus;
        uint8_t interruptLine = 0;
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatusEnable), data);  //Writing into the normal status enable register
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptSignalEnable), data);  //Writing into the normal signal enable register
        //Enable error interrupt registers too.
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + ErrorInterruptStatusEnable), 0xffff); //Writing to error interrupt status enable register
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + ErrorInterruptSignalEnable), 0xffff); //Writing to error interrupt signal enable register
        //Checking the interrupt line
        while (1)
        {
                interruptLine = read_uint8("SDHC_to_IRC_INT");
                flag = (interruptLine & 0x1);
                if (flag == 1)
                        break;
        }
        status = ReadWriteSDHCRegister(1, 3, (SDBase + NormalInterruptStatus), 0); //Reading from the normal interrupt status register
        //Check whether there is any error interrupt bit 
        //set or not by checking bit-15 of the status.
        errorBitCheck = (status >> 15);
        if (errorBitCheck == 1)
        {
                errorStatus = ReadWriteSDHCRegister(1, 3, (SDBase + ErrorInterruptStatus), 0); //Reding from error interrupt status register
                fprintf(stderr, "Error Interrupt status is %d\n", errorStatus);
                ack = ReadWriteSDHCRegister(0, 3, (SDBase + ErrorInterruptStatus), 0xffff); //Clearing error interrupt status
        }
        // Interrrupt status is printed here
        fprintf(stderr, "Normal Interrupt status is %d\n", status);
}

void SendGeneralCommand(int n)
{
    //Check Command Inhibit(CMD)
    int presentState,data;
    int ack;
    int cmd; // Generating command index
    presentState = ReadWriteSDHCRegister(1,0,(SDBase + PresentState),0);
    while( (presentState & 0x1) == 1)//command_inhibit(CMD) (to check whether command line is busy or not)
	presentState = ReadWriteSDHCRegister(1,0,(SDBase + PresentState),0);
    while( (presentState & 0x2) == 2)//command_inhibit(DAT) (to check whether DAT lines are busy or not)
        presentState = ReadWriteSDHCRegister(1,0,(SDBase + PresentState),0);      
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
		case 17:data=writeAddress;//data address SDSC cards use byte unit address
				//SDHC and SDXC use block unit address(512 bytes unit)
				//read
                	break;
		case 18: data = writeAddress;
			break;
		case 19:data=0;
			break;
		case 24:data=writeAddress;//data address for wite
                	break;
		case 25: data = writeAddress;//data address for write
			break;
                case 42: data = 0;
                        break;
		case 55:data= RCA ;	//[31:16]RCA
			break;
		default:data=0;
	}
        ack = ReadWriteSDHCRegister(0,0,(SDBase + Arguement),data);//Write the Argument register
        if ( (n == 17) || (n ==18) || (n==24) || (n==25))//Write into the Transfer register
        {
                if (n==17)
		        data = 8;
	        else if ( n== 18)
		        data = 24;
	        else if (n ==24 )
		        data = 0;
	        else if (n ==25)
		        data = 18;
	        else 
		        data =0;	
                ack = ReadWriteSDHCRegister(0,3,(SDBase + Transfer),data);
        }
        //Generate Command register values... Divided in terms type of response expected
	if( (n == 0)|| (n==4) ||(n==15))//No response
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|0;
        else if((n==2)||(n==9)||(n==10))//Response generated is R2.
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
        else if((n == 55)||(n == 3)||(n==8)||(n==17)||(n==18)||(n==19)||(n==24)||(n==25))
        //Response generated is of the type R1/R7/R6.
        {
                if((n==17)||(n==18)||(n==24)||(n==25))
                        cmd = (n<<8)|(0<<6)|(1<<5)|(1<<4)|(1<<3)|(0<<2)|2;
                else
                        cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
        }
        else//Response Type R1b, R5b
        {
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
        }
        ack = ReadWriteSDHCRegister(0,3,(SDBase + Command),cmd);//Write into Command register
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete Interrupt
}
void SendApplicationSpecificCommand(int n)
{
        int data;
        int cmd,ack;//For generating Command register value
	switch(n)
	{
		case 6: data =0x2;
			break;
		case 23: data = 65535;
			break;
		case 411:data = 0;
                 	break;
		case 412:data = (1<<30) | (1<<28) | (1<<24) | OCR;
		//HCS = 1(High capacity support); XPC =1(maximum performance); S18R =1 (Switching to 1.8V)
			break;
		default:data =0;
	}
	ack = ReadWriteSDHCRegister(0,0,(SDBase + Arguement),data);//Write the Argument register
        //Generate Command register values... Divided in terms type of response expected
        if ((n == 411) || (n == 412)) //Response generated is R3.
        {
                n=41;
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|(0<<2)|2;
        }
        else if(n == 6)
        //Response generated is of the type R1.
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
        else//Response Type R1b, R5b
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
        ack = ReadWriteSDHCRegister(0,3,(SDBase + Command),cmd);//Write into Command register
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete interrupt
}
//For high clock speeds, tuning of the block is necessary.
//This function generates tuning blocks.
int PerformTuningSequence()
{
	int response=0,count=40;
        int executeTuning;
        int samplingClockSelect;
        int ack ;
        int readTuningData;
	ack = ReadWriteSDHCRegister(0,3,(SDBase + HostControl2),0x40);//Set Execute Tuning to 1
	while(count!=0)
	{	
		//Send CMD19
		SendGeneralCommand(19);
		response = ReadWriteSDHCRegister(1, 0, (SDBase + Response0), 0);
		//Check for Buffer Read Ready
		EnableInterruptStatusRegistersAndCheckInterruptLine(0x20);
		//Clear Buffer Read Ready
		ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x20);
		//execute tuning read
		readTuningData = ReadWriteSDHCRegister(1,3,(SDBase + HostControl2),0);
		executeTuning = (readTuningData & 0x40)>>6;
		if(executeTuning==0)
			break;
		else
			count--;
	}
	samplingClockSelect= (readTuningData & 0x80)>>7;
	if(samplingClockSelect==1)
		return 0;
	else
		return 1;
}
//Series of Commands are generated to initialise the SD card
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
        int ccs;//card capacity status
        //Whether card is inserted is checked
        //card insertion and removal status enable
        //card insertion and removal signal enable
        EnableInterruptStatusRegistersAndCheckInterruptLine(0xc0);
        //clear the insertion interrupt
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x40);
        //PresentState state -> card inserted check
        readData = ReadWriteSDHCRegister(1, 0, (SDBase + PresentState), 0);
        if (((readData >> 16) & 1) != 1)
        {
                fprintf(stderr, "Card not Present\n ");
                return (1);
        }
        //reading Capabilities register
        readData = ReadWriteSDHCRegister(1, 0, (SDBase + Capabilities), 0);
	//software reset asserted
        ack = ReadWriteSDHCRegister(0, 1, (SDBase + SoftwareReset), 1);
        fprintf(stderr, " Capabilitiesbilities reg = %d \n", readData);
        fprintf(stderr, " Base Clock Frequency For SD Clock is %d \n", ((readData >> 8) & 0xff));
        voltageSupport = (readData >> 24) & 0x7; //supported voltages
        sdclkFreq = (readData >> 8);//SD clock frequency set to base frequency 
	data =(sdclkFreq << 6) | 1 ;
        ack = ReadWriteSDHCRegister(0,3,(SDBase + ClockControl),data);//Internal clock enable and SDCLK frequency select
        readData = ReadWriteSDHCRegister(1,3,(SDBase + ClockControl),0);
        while( ((readData >>1)&1) !=1)
        {
               readData = ReadWriteSDHCRegister(1,3,(SDBase + ClockControl),0);
        }//Run until Internal Clock Stable

        //SD clock Enable
        ack = ReadWriteSDHCRegister(0,3,(SDBase + ClockControl),4);
         //SD bus Power control
        if((voltageSupport >>2))
                data = 0xb;//1.8V power
        else
                data = 0xf;//3.3V power
        ack = ReadWriteSDHCRegister(0,1, (SDBase + PowerControl),data);
	//software reset deasserted	
        ack = ReadWriteSDHCRegister(0, 1, (SDBase + SoftwareReset), 0);
        SendGeneralCommand(0);
        SendGeneralCommand(8);
        response = ReadWriteSDHCRegister(1, 0, (SDBase + Response0), 0);
        fprintf(stderr, " CMD8 Response is %d\n", response);
        if (response != 0x1AA)
        {
                return 1;
        }
        //Voltage accepted and Check pattern echoed
        SendGeneralCommand(55);
        response = ReadWriteSDHCRegister(1, 0, (SDBase + Response0), 0);
        fprintf(stderr, "CMD55 Response is %d\n", response);
        SendApplicationSpecificCommand(411);                                                    //inquiry ACMD41
        response = ReadWriteSDHCRegister(1, 0, (SDBase + Response0), 0); //Contains OCR.
        OCR = (response & 0x00111100);
        fprintf(stderr, " OCR = %d\n", OCR);
        while (!busy)
        {
                SendGeneralCommand(55);
                SendApplicationSpecificCommand(412); //first ACMD41 with S18R(bit 24)=1 HCS =1
                response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
                busy = response >> 31;
        }
        ccs = (response >> 30) & 1;
        if (ccs == 0)
        {
                fprintf(stderr, "SDSC\n");
                return 1;
        }
        else
                fprintf(stderr, "SDHC or SDXC\n");
        if(((response>>24)&1)== 0)//S18A
		fprintf(stderr,"S18A not one\n");
        else//S18A =1 start signal voltage switch procedure
        {
                SendGeneralCommand(11);
	        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
	        if(response!=0x200)
	        {
		        flag=1;
		        fprintf(stderr,"Switching not possible.Check the following:\n 1.Voltage Switch Support \n 2.Incorrect ACMD41(S18)\n 3.Not in ready state\n 4.Voltage already switched Response = %d",response);
		        return flag;
	        }
                //Stop providing SD clock to the card
	        //SD clock Enable = 0
	        ack = ReadWriteSDHCRegister(0,3,(SDBase + ClockControl),0);
	        response = ReadWriteSDHCRegister(1,0,(SDBase + PresentState),0);//DAT[3:0]level read
	        if(((response >> 20) & 0xf) != 0)
                {
                        fprintf(stderr,"DAT line not zero\n");
                        return 1;
                }
	        //1.8V Signal Enable
	        ack = ReadWriteSDHCRegister(0,3,(SDBase + HostControl2),0x8);
                //wait for 5ms
	        //check 1.8V signal
	        response = ReadWriteSDHCRegister(1,3,(SDBase + HostControl2),0);
	        if( ((response >>3) & 1) == 0)
	        {
		        fprintf(stderr,"Error in 1.8 Volt signalling");
		        return 1;
	        }
                //Provide SD clock
                ack = ReadWriteSDHCRegister(0,3,(SDBase + ClockControl),4);
                //wait for 1ns
                response = ReadWriteSDHCRegister(1,0,(SDBase + PresentState),0);//DAT[3:0] level read
	        if(((response >> 20) & 0xf)!=0xf)
	        {
                        fprintf(stderr,"Error in SD clock Enable\n");
		        return 1;
	        }
        }
        SendGeneralCommand(2);
        //CID is printed
        r0 = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        r2 = ReadWriteSDHCRegister(1,0,(SDBase + Response2),0);
    	r4 = ReadWriteSDHCRegister(1,0,(SDBase + Response4),0);
    	r6 = ReadWriteSDHCRegister(1,0,(SDBase + Response6),0);
	fprintf(stderr," The response is %d %d %d %d", r6,r4,r2,r0);
        SendGeneralCommand(3);
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);;
        RCA = response & 0x11110000;

        SendGeneralCommand(7);
        // CMD7 is busy with response type therefore Transfer complete has to be checked too
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x2);//clear the interrupt
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        //Check CARD_IS_LOCKED bit in response
        cardIsLocked = (response & 0x02000000) >> 25;
        if (cardIsLocked)
        {
                SendGeneralCommand(42);
                response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        }
        SendGeneralCommand(55);
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        SendApplicationSpecificCommand(6);
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        SendGeneralCommand(6);//set-mode cmd(6)
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        //Data Transfer width to 1 (4-bit mode) in Host control 1 register
        ack = ReadWriteSDHCRegister(0, 1, (SDBase + HostControl), 2);
        flag = PerformTuningSequence ();
	return flag;
}
//Sets up the SD Card to read data from the flash.
//Supports single and multiple BlockWrite.
//And Checks the data read to confirm march test
int ReadSingleOrMultiple512BytesBlock(int blockCount)
{
	
	int flag =0;
	int response,ack;
	int blockData;
        int count = blockCount;
        long int i;
	//Set Block Size to 512 bytes
        ack = ReadWriteSDHCRegister(0,3,(SDBase + FixedBlockSize),512);
	//Set Block Count to maximum value possible (65535)
        ack = ReadWriteSDHCRegister(0,3,(SDBase + BlockCount),blockCount);
	if (blockCount ==1)
		SendGeneralCommand(17);
	else
		SendGeneralCommand(18);
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
	//Wait for Buffer Read Ready Interrupt
	while(count!=0)
	{
		EnableInterruptStatusRegistersAndCheckInterruptLine(0x20);
		fprintf(stderr,"Buffer Read Ready Interrupt occured,ready to write buffer\n");
		ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x20);
		fprintf(stderr,"Buffer Read Ready Interrupt cleared,wait for interrupt to occur\n");
		//Get Block Data
		for(i=0; i< (FixedBlockSize * blockCount); i++)
		{
                        blockData = ReadWriteSDHCRegister(1,0,(SDBase + BufferDataPort),0);
			fprintf(stderr," Blockdata[%d] %d\n", i, blockData);
			if((blockCount ==1) && (blockData != i))
			{
				fprintf(stderr,"Error: Expected = %d , Actual =%d \n", i, blockData);
				flag =1;
			}
                        else if ((blockCount !=1) && (i % FixedBlockSize == 0) && (blockData != (i / FixedBlockSize)))
                        {
                                fprintf(stderr," Error: Expected = %d, Actual = %d\n", (i/FixedBlockSize),blockData);
                                flag =1;
                        }
		}
		count--;
	}
        EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);//Wait for transfer complete interrupt
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x2);//clear transfer complete interrupt
        SendGeneralCommand(15);
        response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
        return flag;
}
//Sets up the SD Card to write data into the flash.
//Supports single and multiple BlockWrite.
int WriteSingleOrMultiple512BytesBlock(int blockCount, int * writeData)
{
	int flag = 0,ack;
        int blockData;
	int response;
        int count = blockCount;
	writeAddress= 0;
        long int i ;
        //Set Block Size to fixed 512 bytes
        ack = ReadWriteSDHCRegister(0,3,(SDBase + FixedBlockSize),512);
	//Set Block Count Register
        ack = ReadWriteSDHCRegister(0,3,(SDBase + BlockCount),blockCount);
	if (blockCount ==1)
		SendGeneralCommand(24);
	else
	{
		//Pre-erased
		//Sets the number of write blocks to be pre-erased before writing.
		SendGeneralCommand(55);
		response = ReadWriteSDHCRegister(1,0, (SDBase + Response0),0);
		SendApplicationSpecificCommand(23);
                response = ReadWriteSDHCRegister(1,0, (SDBase + Response0),0);
		SendGeneralCommand(25);
	}
	response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
	//Wait for Buffer Write Ready Interrupt
	while(count!=0)
	{
		EnableInterruptStatusRegistersAndCheckInterruptLine(0x10);		
		fprintf(stderr,"Buffer Write Ready Interrupt occured,ready to write buffer\n");
                ack = ReadWriteSDHCRegister(0,3, (SDBase + NormalInterruptStatus), 0x10);//clear Buffer write ready interrupt
		fprintf(stderr,"Buffer Write Ready Interrupt cleared,wait for interrupt to occur\n");
		//Set block data
		for(i=0; i< (FixedBlockSize * blockCount) ; i++)
                        ack = ReadWriteSDHCRegister(0,3,(SDBase + BufferDataPort),writeData[i]);
		count--;
	}
	EnableInterruptStatusRegistersAndCheckInterruptLine(0x2);//Wait for Transfer complete Interrupt
        ack = ReadWriteSDHCRegister(0, 3, (SDBase + NormalInterruptStatus), 0x2);//clear the transfer complete interrupt
	SendGeneralCommand(15);  //sends the card into inactive state
	response = ReadWriteSDHCRegister(1,0,(SDBase + Response0),0);
	return flag ;
}
