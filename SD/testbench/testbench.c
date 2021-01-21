//main ()
//{
//
//      
//      initialization(0)//for normal initialization
//      blockwrite()
//      blockread()
//
//      swreset()xx
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
#define blocksize 0x04
#define blockcount 0x06
#define argument 0x08
#define transfer 0x0c
#define command 0x0e
#define resp0 0x10
#define resp2 0x14
#define resp4 0x18
#define resp6 0x1c
#define bufferdata 0x20
#define present 0x24
#define hostcontrol 0x28
#define powercontrol 0x29
#define clockcontrol 0x2C
#define swreset 0x2F
#define nintrstatus 0x30
#define eintrstatus 0x32
#define nintrstatusen 0x34
#define eintrstatusen 0x36
#define autocmderror 0x3C
#define hostcontrol2 0x3E
#define capa 0x40

#define SD_Base 0xffff3300//SD base address

int OCR,RCA = 0,addressd;

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

        FILE* fp = NULL;
        if(strcmp(argv[1],"stdout") == 0)
                fp = stdout;
	else if(strcmp(argv[1], "null") != 0)
        {
                fp = fopen(argv[1],"w");
                if(fp == NULL)
                {
                        fprintf(stderr,"Error: could not open trace file %s\n", argv[1]);
                        return(1);
                }
        }
        //SDHC thread is started
        startSdhcThreads();

        //Whether card is inserted is checked
        //card insertion and removal status enable
        //card insertion and removal signal enable              
        flag = CheckInterrupt(0xc0);
        //clear the insertion interrupt
	ack = ReadWriteSDHCRegisters(0,3,(SD_Base + nintrstatus),0x40);
        //present state -> card inserted check
	readData = ReadWriteSDHCRegisters(1,0,(SD_Base+present),0);
        if( ((readData >> 16) &1) !=1)
        {
                fprintf(stderr,"Card not present ");
                return (1);
        }
        //software reset
        ack = ReadWriteSDHCRegisters(0,1,(SD_Base + swreset),1);
        readData = ReadWriteSDHCRegisters(1,0,(SD_Base+capa),0);//reading capabilities register 
        fprintf(stderr," Capabilities reg = %d ",readData);
        fprintf(stderr," Base Clock Frequency For SD Clock is %d ",((readData>>8) & 0xff));
        voltageSupport = (readData>>24) & 0x7;//supported voltages

        if ( atoi(argv[2]) ==0)
        {
                sdclkFreq = (readData>>8) / 50;
                SDclock_powercontrol(sdclkFreq,voltageSupport);//clock and power control done
                err=Initialization();
        }
        else
        {
                sdclkFreq = (readData>>8);
                SDclock_powercontrol(sdclkFreq,voltageSupport);//clock and power control done
                err =UHSInitialization();
        }
        if(err)
                fprintf(stderr,"Error in Initialization");
        else
                fprintf(stderr,"Succesfully Initialized");

        //Blockwrite with 512 bytes block size and 2^31 block count 
        err = BlockWrite(512,65535);
	if(err)
                fprintf(stderr,"Error in Block Write");

        //Blockread with 512 bytes block size
        err = BlockRead(512,65535);
        if(err)
                fprintf(stderr," Error in Block Read");
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
        writeData = (rwbar << 63) | (bytemask<<59) | (phyAdd << 32) | data ;
        write_uint64 ("peripheral_bridge_to_sdhc_request",write_data);
        //In case of write (rwbar =0) there should be a zero recieved as an acknowledgement
	//Otherwise Data is read
        readData = read_uint32("sdhc_to_peripheral_bridge_response");
	returnData = readData;
	return returnData;
}


int CheckInterrupt(int data)
{
	int flag = 0;
	int ack;
	int errorBitCheck;
	uint32_t status;
	uint32_t errorStatus;
	uint8_t interruptLine =0;
	ack = ReadWriteSDHCRegisters(0,3,(SD_Base + nintrstatusen),data);//Writing into the normal status enable register
	ack = ReadWriteSDHCRegisters(0,3,(SD_Base + nintrsignalen),data);//Writing into the normal signal enable register
	//Enable error interrupt too
    	ack = ReadWriteSDHCRegisters(0,3,(SD_Base + eintrstatusen),0xffff);//Writing to error interrupt status enable register
    	ack = ReadWriteSDHCRegisters(0,3,(SD_Base + eintrsignalen),0xffff);//Writing to error interrupt signal enable register
	//Checking the interrupt line
	while(1){
    		interruptLine = read_uint8("SDHC_to_IRC_INT");
    		flag = (interruptLine & 0x1);
		if ( flag ==  1)
			break;
	}
	status = ReadWriteSDHCRegisters(1,3,(SD_Base + nintrstatus),0);//Reading from the normal interrupt status register
	//Check whether there is any error interrupt bit set or not
	//By checking bit-15 of the status
	errorBitCheck = (status >> 15);
	if( errorBitCheck == 1)
	{
    		errorStatus = ReadWriteSDHCRegisters(1,3,(SD_Base + eintrstatus),0);//Reding from error interrupt status register
    		fprintf(stderr,"Error Interrupt status is %d",errorStatus);
    		ack = ReadWriteSDHCRegisters(0,3,(SD_Base + eintrstatus),0xffff);//Clearing error interrupt status
	}
	// Interrrupt status is printed here
	fprintf(stderr,"Normal Interrupt status is %d",status);
	return flag;
}
// i paramater 0 for Initialization
// i parameter 1 for UHS Initialization
int Initialization(int i)
{
//Series of commands are generated to initialise it to operate in 3.3V level
//Max allowable data rate is 25MHz.
        int Resp=0,busy=0,a;
        int Card_Is_Locked=0;
        int flag=0;
        int CCS, Add;
        SendCMD(0);
        SendCMD(8);
        while(Resp!=0x1A)
        {
                Resp = GetResponseFromSDHC();
        }//Voltage accepted and Check pattern echoed
        SendCMD(55);
        Resp = GetResponseFromSDHC();
        if(!Resp)
        {
                flag = 1 ;
                return flag;
        }
        SendACMD(411);//inquiry ACMD41
        Resp = GetResponseFromSDHC();//Contains OCR.
        OCR = (Resp & 0x00111100);
        fprintf(stderr," OCR = %d", OCR);
        while(!busy)
        {
                SendCMD(55);
                Resp = GetResponseFromSDHC();
		if(!Resp)
                {
                        flag =1;
                        return flag;
                }
                SendACMD(412);//first ACMD41 with S18R(bit 24)=0
                Resp = GetResponseFromSDHC();
                CCS = (Resp >> 30) & 1;
                if(CCS == 0)
                        fprintf(stderr,"SDSC\n");
                else
                        fprintf(stderr,"SDHC or SDXC\n");

                busy = Resp >> 31;
        }
        SendCMD(2);
        GetBigResponse();//CID is printed
        SendCMD(3);
        Resp = GetResponseFromSDHC();
        RCA = Resp & 0x11110000;
        return flag;
        SendCMD(7);
        Resp = GetResponseFromSDHC();
        a = checkDATline();
        while(a!=0)
        {
                a = checkDATline();//check until busy bit is present in data line.
        }
	       //Check CARD_IS_LOCKED bit in Response
        Card_Is_Locked = (Resp & 0x02000000)>>25;
        if(Card_Is_Locked)
        {
                SendCMD(42);
                Resp = GetResponseFromSDHC();
        }
        SendCMD(55);
        Resp = GetResponseFromSDHC();
        SendACMD(6);
        Resp = GetResponseFromSDHC();
        //Data Transfer width to 1 (4-bit mode) in Host control 1 register
        Add = SD_Base + hostcontrol;
        SendRequestToSDHC(0,1,Add,2);
}







