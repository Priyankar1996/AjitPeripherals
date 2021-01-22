/*TESTBENCH FOR SD HOST CONTROLLER
  Authors: Arghya Kamal Dey, Priyankar Sarkar,Ajinkya Raghuwanshi,Deval Patel.
  Date: December,2020.
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

int OCR, RCA = 0, addressd;

// Main function
// Check if Card is inserted
// Software reset
// Clock Enabled
// Power Enabled
// Initialization of the card is done
// If initialized then blocks are written
// After successful write block read is done to check memory
int main(int argc, char *argv[])
{
        int err = 0;
        int flag = 0;
        int ack;
        int readData;
        int sdclkFreq;
        int voltageSupport;

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
        startSdhcThreads();

        err = Initialization();

        if (err)
                fprintf(stderr, "Error in Initialization");
        else
                fprintf(stderr, "Succesfully Initialized");

        //Blockwrite with 512 bytes block size and 2^31 block count
        err = BlockWrite(512, 65535);
        if (err)
                fprintf(stderr, "Error in Block Write");

        //Blockread with 512 bytes block size
        err = BlockRead(512, 65535);
        if (err)
                fprintf(stderr, " Error in Block Read");
        return 0;
}

//This function is used to read from or write into the SDHC registers .
// When rwbar = 0 then write and if rwbar = 1 then read
//The bit pattern followed as it is in the SD host C model
int ReadWriteSDHCRegisters(long int rwbar, long int bytemask, long int phyAdd, int data)
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
        //In case of write (rwbar =0) there should be a zero recieved as an acknowledgement
        //Otherwise Data is read
        readData = read_uint32("sdhc_to_peripheral_bridge_response");
        returnData = readData;
        return returnData;
}

//This function is used for checking the interrupts
//The data shows which interrupt to enable
void CheckInterrupt(int data)
{
        int flag = 0;
        int ack;
        int errorBitCheck;
        uint32_t status;
        uint32_t errorStatus;
        uint8_t interruptLine = 0;
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatusEnable), data);  //Writing into the normal status enable register
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptSignalEnable), data);  //Writing into the normal signal enable register
                                                                                           //Enable error interrupt too
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + ErrorInterruptStatusEnable), 0xffff); //Writing to error interrupt status enable register
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + ErrorInterruptSignalEnable), 0xffff); //Writing to error interrupt signal enable register
        //Checking the interrupt line
        while (1)
        {
                interruptLine = read_uint8("SDHC_to_IRC_INT");
                flag = (interruptLine & 0x1);
                if (flag == 1)
                        break;
        }
        status = ReadWriteSDHCRegisters(1, 3, (SDBase + NormalInterruptStatus), 0); //Reading from the normal interrupt status register
        //Check whether there is any error interrupt bit set or not
        //By checking bit-15 of the status
        errorBitCheck = (status >> 15);
        if (errorBitCheck == 1)
        {
                errorStatus = ReadWriteSDHCRegisters(1, 3, (SDBase + ErrorInterruptStatus), 0); //Reding from error interrupt status register
                fprintf(stderr, "Error Interrupt status is %d\n", errorStatus);
                ack = ReadWriteSDHCRegisters(0, 3, (SDBase + ErrorInterruptStatus), 0xffff); //Clearing error interrupt status
        }
        // Interrrupt status is printed here
        fprintf(stderr, "Normal Interrupt status is %d\n", status);
}

void SendCMD(int n)
{
    //Check Command Inhibit(CMD)
    int presentState,data;
    int ack;
    int cmd; // Generating command index
    presentState = ReadWriteSDHCRegisters(1,0,(SDBase + PresentState),0);
    while( (presentState & 0x1) == 1)//command_inhibit(CMD)
	presentState = ReadWriteSDHCRegisters(1,0,(SDBase + PresentState),0);
    while( (presentState & 0x2) == 1)//command_inhibit(DAT)
        presentState = ReadWriteSDHCRegisters(1,0,(SDBase + PresentState),0);      
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
		case 17:data=addressd;//data address SDSC cards use byte unit address
				//SDHC and SDXC use block unit address(512 bytes unit)
				//read
                	break;
		case 18: data = addressd;
			break;
		case 19:data=0;
			break;
		case 24:data=addressd;//data address
				//write
                	break;
		case 25: data = addressd;
			break;
                case 42: data = 0;
                        break;
		case 55:data= RCA ;	//[31:16]RCA
			break;
		default:data=0;
	}
        ack = ReadWriteSDHCRegisters(0,0,(SDBase + Arguement),data);//Write the Argument register
        if ( (n == 17) || (n ==18) || (n==24) || (n==25))//Write into the Transfer register
        {
                if (n==17)
		        data = 8;
	        else if ( n== 18)
		        data = 24;
	        else if (n ==24 )
		        data = 0;
	        else if (n ==25)
		        data = 16;
	        else 
		        data =0;	
                ack = ReadWriteSDHCRegisters(0,3,(SDBase + Transfer),data);
        }
        //Generate Command register values... Divided in terms type of response expected
	if( (n == 0)|| (n==4) ||(n==15))//No response
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|0;
        else if((n==2)||(n==9)||(n==10))//Response generated is R2.
                cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
        else if((n == 55)||(n == 3)||(n==8)||(n==17)||(n==19)||(n==24)||(n==25))
        //Response generated is of the type R1/R7/R6.
        {
                if((n==17)||(n==24)||(n==25))
                        cmd = (n<<8)|(0<<6)|(1<<5)|(1<<4)|(1<<3)|(0<<2)|2;
                else
                        cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
        }
        else//Response Type R1b, R5b
        {
                cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
        }
        ack = ReadWriteSDHCRegisters(0,3,(SDBase + Command),cmd);//Write into Command register
        CheckInterrupt(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete Interrupt
}
void SendACMD(int n)
{
        int data;
        int cmd;//For generating Command register value
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
	ack = ReadWriteSDHCRegisters(0,0,(SDBase + Arguement),data);//Write the Argument register
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
        ack = ReadWriteSDHCRegisters(0,3,(SDBase + Command),cmd);//Write into Command register
        CheckInterrupt(0x1);//Checking Command Complete Interrupt			
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatus), 0x1);//Clear Command Complete interrupt
}
//For high clock speeds, tuning of the block is necessary.
//This function generates tuning blocks.
int tuning()
{
	int response=0,count=40;
        int executeTuning;
        int samplingClockSelect;
        int ack ;
        int readTuningData;
	ack = ReadWriteSDHCRegisters(0,3,(SDBase + HostControl2),0x40);//Set Execute Tuning to 1
	while(count!=0)
	{	
		//Send CMD19
		SendCMD(19);
		response = ReadWriteSDHCRegisters(1, 0, (SDBase + Response0), 0);
		//Check for Buffer Read Ready
		CheckInterrupt(0x20);
		//Clear Buffer Read Ready
		ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatus), 0x20);
		//execute tuning read
		readTuningData = ReadWriteSDHCRegisters(1,3,(SDBase + HostControl2),0);
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
int Initialization()
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
        CheckInterrupt(0xc0);
        //clear the insertion interrupt
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatus), 0x40);
        //PresentState state -> card inserted check
        readData = ReadWriteSDHCRegisters(1, 0, (SDBase + PresentState), 0);
        if (((readData >> 16) & 1) != 1)
        {
                fprintf(stderr, "Card not Present\n ");
                return (1);
        }
        //software reset
        ack = ReadWriteSDHCRegisters(0, 1, (SDBase + SoftwareReset), 1);
        readData = ReadWriteSDHCRegisters(1, 0, (SDBase + Capabilities), 0); //reading Capabilitiesbilities register
        fprintf(stderr, " Capabilitiesbilities reg = %d \n", readData);
        fprintf(stderr, " Base Clock Frequency For SD Clock is %d \n", ((readData >> 8) & 0xff));
        voltageSupport = (readData >> 24) & 0x7; //supported voltages
        sdclkFreq = (readData >> 8);//SD clock frequency set to base frequency 
	data =(sdclk_freq<<6) | 1 ;
        ack = ReadWriteSDHCRegisters(0,3,(SDBase + ClockControl),data);//Internal clock enable and SDCLK frequency select
        readData = ReadWriteSDHCRegisters(1,3,(SDBase + ClockControl),0);
        while( ((readData >>1)&1) !=1)
        {
               readData = ReadWriteSDHCRegisters(1,3,(SDBase + ClockControl),0);
        }//Run until Internal Clock Stable

        //SD clock Enable
        ack = ReadWriteSDHCRegisters(0,3,(SDBase + ClockControl),4);
         //SD bus Power control
        if((voltageSupport >>2))
                data = 0xb;//1.8V power
        else
                data = 0xf;//3.3V power
        ack = ReadWriteSDHCRegisters(0,1, (SDBase + PowerControl),data);

        SendCMD(0);
        SendCMD(8);
        response = ReadWriteSDHCRegisters(1, 0, (SDBase + Response0), 0);
        fprintf(stderr, " CMD8 Response is %d\n", response);
        if (response != 0x1AA)
        {
                return 1;
        }
        //Voltage accepted and Check pattern echoed
        SendCMD(55);
        response = ReadWriteSDHCRegisters(1, 0, (SDBase + Response0), 0);
        fprintf(stderr, "CMD55 Response is %d\n", response);
        SendACMD(411);                                                    //inquiry ACMD41
        response = ReadWriteSDHCRegisters(1, 0, (SDBase + Response0), 0); //Contains OCR.
        OCR = (response & 0x00111100);
        fprintf(stderr, " OCR = %d\n", OCR);
        while (!busy)
        {
                SendCMD(55);
                SendACMD(412); //first ACMD41 with S18R(bit 24)=1 HCS =1
                response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
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
                SendCMD(11);
	        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
	        if(response!=0x200)
	        {
		        flag=1;
		        fprintf(stderr,"Switching not possible.Check the following:\n 1.Voltage Switch Support \n 2.Incorrect ACMD41(S18)\n 3.Not in ready state\n 4.Voltage already switched Response = %d",response);
		        return flag;
	        }
                //Stop providing SD clock to the card
	        //SD clock Enable = 0
	        ack = ReadWriteSDHCRegisters(0,3,(SDBase + ClockControl),0);
	        response = ReadWriteSDHCRegisters(1,0,(SDBase + PresentState),0);//DAT[3:0]level read
	        if(((response >> 20) & 0xf) != 0)
                {
                        fprintf(stderr,"DAT line not zero\n");
                        return 1;
                }
	        //1.8V Signal Enable
	        ack = ReadWriteSDHCRegisters(0,3,(SDBase + HostControl2),0x8);
                //wait for 5ms
	        //check 1.8V signal
	        response = ReadWriteSDHCRegisters(1,3,(SDBase + HostControl2),0);
	        if( ((response >>3) & 1) == 0)
	        {
		        fprintf(stderr,"Error in 1.8 Volt signalling");
		        return 1;
	        }
                //Provide SD clock
                ack = ReadWriteSDHCRegisters(0,3,(SDBase + ClockControl),4);
                //wait for 1ns
                response = ReadWriteSDHCRegisters(1,0,(SDBase + PresentState),0);//DAT[3:0] level read
	        if(((response >> 20) & 0xf)!=0xf)
	        {
                        fprintf(stderr,"Error in SD clock Enable\n");
		        return 1;
	        }
        }
        SendCMD(2);
        //CID is printed
        r0 = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        r2 = ReadWriteSDHCRegisters(1,0,(SDBase + Response2),0);
    	r4 = ReadWriteSDHCRegisters(1,0,(SDBase + Response4),0);
    	r6 = ReadWriteSDHCRegisters(1,0,(SDBase + Response6),0);
	fprintf(stderr," The response is %d %d %d %d", r6,r4,r2,r0);
        SendCMD(3);
        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);;
        RCA = response & 0x11110000;

        SendCMD(7);
        // CMD7 is busy with response type therefore Transfer complete has to be checked too
        CheckInterrupt(0x2);
        ack = ReadWriteSDHCRegisters(0, 3, (SDBase + NormalInterruptStatus), 0x2);//clear the interrupt
        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        //Check CARD_IS_LOCKED bit in response
        cardIsLocked = (response & 0x02000000) >> 25;
        if (cardIsLocked)
        {
                SendCMD(42);
                response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        }
        SendCMD(55);
        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        SendACMD(6);
        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        SendCMD(6);//set-mode cmd(6)
        response = ReadWriteSDHCRegisters(1,0,(SDBase + Response0),0);
        //Data Transfer width to 1 (4-bit mode) in Host control 1 register
        ack = ReadWriteSDHCRegisters(0, 1, (SDBase + HostControl), 2);
        flag = tuning ();
	return flag;
}


