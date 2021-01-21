//main ()
//{
//
//
//      initialization(0)//for normal initialization
//      blockwrite()
//      blockread()
//
//      SoftwareReset()xx
//      initialization(1)//for UHS initialization
//      blockwrite()
//      blockread()
//
//      }
//
//      readwriteSdhcRegisters()
//      SendCMD(parameter for ACMD)
//      SendACMD()xxxx
//      checkInterrupt()
//      interrupt_check() xxxx
//      clear_interrupt xxxxx
//      casefunc() xxxxx
//      checkDATline()
//
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

//List of registers to be used.
#define BlockSize 0x04
#define BlockCount 0x06
#define Arguement 0x08
#define Transfer 0x0c
#define Command 0x0e
#define Response0 0x10
#define Response2 0x14
#define Response4 0x18
#define Response6 0x1c
#define BufferData 0x20
#define PresentState 0x24
#define HostControl 0x28
#define PowerControl 0x29
#define ClockControl 0x2C
#define SoftwareReset 0x2F
#define NormalInterruptStatus 0x30
#define ErrorInterruptStatus 0x32
#define NormalInterruptStatusEnable 0x34
#define ErrorInterruptStatusEnable 0x36
#define NormalInterruptSignalEnable 0x38
#define ErrorInterruptSignalEnable 0x3A
#define AutoCmdError 0x3C
#define HostControl2 0x3E
#define Capabilities 0x40

#define SDBase 0xffff3300 //SD base address

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

        if (atoi(argv[2]) == 0)
        {
                sdclkFreq = (readData >> 8) / 50;
                SDclock_PowerControl(sdclkFreq, voltageSupport); //clock and power control done
                err = Initialization(0);
        }
        else
        {
                sdclkFreq = (readData >> 8);
                SDclock_PowerControl(sdclkFreq, voltageSupport); //clock and power control done
                err = Initialization(1);
        }
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
// paramater i = 0 for Initialization
// parameter i = 1 for UHS Initialization
int Initialization(int i)
{
        //Series of Commands are generated to initialise it to operate in 3.3V level
        //Max allowable data rate is 25MHz.
        int response = 0;
        int r0,r2,r4,r6;
        int busy = 0, a;
        int cardIsLocked = 0;
        int flag = 0;
        int ack;
        int ccs;//card capacity status
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

