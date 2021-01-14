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
#define nintrsignalen 0x38
#define eintrsignalen 0x3A
#define autocmderror 0x3C
#define hostcontrol2 0x3E
#define capa 0x40

#define SD_Base 0x00//SD base address

int OCR,RCA = 0,writed,addressd;

//This function is used to send request to the SDHC.The bit pattern followed as it is in the SD host C model
void SendRequestToSDHC(long int rwbar, long int bytemask, long int PhyAdd, int data)
{
	/*Bit 63: rwbar
          Bit 62-59: bytemask
          Bits 58-56: Unused
	  Bits 55-32: Physical address
          Bits 31- 0: data*/
	uint64_t write_data;
	uint32_t read_data;
	write_data = (rwbar << 63) | (bytemask<<59) | (PhyAdd << 32) | data ;
	write_uint64 ("peripheral_bridge_to_sdhc_request",write_data);
	//In case of write (rwbar =0) there should be a zero recieved as an acknowledgement
	if(rwbar == 0)
	{
		do{
			read_data = read_uint32("sdhc_to_peripheral_bridge_response");
		}while(read_data !=0);
	}
	//When it is a read(rwbar =1) there will be read operation outside this function specific to the operation
}

//This function is for checking the interrupt line
int interrupt_check()
{
    uint8_t intr =0;
    int interrupt;
    intr = read_uint8("SDHC_to_IRC_INT");
    interrupt = (intr & 0x1);
    return interrupt;
}
void clear_normal_interrupt(int d)
//This function clears the normal interrupt status when it is generated.
{
    int Add = SD_Base + nintrstatus ;
    SendRequestToSDHC(0,3,Add,d);
}
void clear_error_interrupt()
{
//This function clears the error interrupt status when it is generated.
    int Add = SD_Base + eintrstatus ;
    SendRequestToSDHC(0,3,Add,0xffff);
}
//Generates interrupt based on the status of interrupt status and 
//signal registers. It checks for their statuses and based on them only
//the following interrrupts are asserted.
void enable_error_interrupt()
{ 
    int status_intr,flag;
    uint32_t status;
    int Add = SD_Base + eintrstatusen ;
    SendRequestToSDHC(0,3,Add,0xffff);//writing to error interrupt status enable register
    Add = SD_Base + eintrsignalen ;
    SendRequestToSDHC(0,3,Add,0xffff);//writing to error interrupt signal enable register
}
// For reading error interrupt status register
void check_error_interrupt()
{
    uint32_t status;
    int Add = SD_Base + eintrstatus ;
    SendRequestToSDHC(1,3,Add,0);//reding from error interrupt status register
    status = read_uint32("sdhc_to_peipheral_bridge_response");
    int error_intr =status;
    fprintf(stderr,"Interrupt status is %d",error_intr);    
    clear_error_interrupt();
}
//The host is looking for a normal interrupt from the host controller here
int generate_normal_interrupt(int data)
{
    int status_intr,flag,error_check;
    uint32_t status;
    int Add = SD_Base + nintrstatusen ;
    SendRequestToSDHC(0,3,Add,data);//Writing into the normal status enable register
    Add = SD_Base + nintrsignalen ;
    SendRequestToSDHC(0,3,Add,data);//Writing into the normal signal enable register
    //Enable error interrupt too
    enable_error_interrupt();
    //checking for interrupt
        while(1){
       		flag = interrupt_check();
                if ( flag ==  1)
                {
                        break;
                }
        }
    Add = SD_Base + nintrstatus ;
    SendRequestToSDHC(1,3,Add,0);//Reading from the normal interrupt status register
    status = read_uint32("sdhc_to_peipheral_bridge_response");
    //Check whether there is any error interrupt bit set or not
    //By checking bit-15 of the status
    error_check = (status >> 15);
    if( error_check == 1)
	    check_error_interrupt();
    // Using temporary variables here to find which bit of the
    // interrrupt status we are checking
    int count = 0,temp_data = data;
    while(1)
    {
        if( (temp_data >>1) != 1)
        {
            count ++;
        }
	else
            break;
    }
    //status_intr can either be zero or one after the next line
    status_intr = (status & data) >> count;
    fprintf(stderr,"Interrupt status is %d",status_intr);
    return flag;
}
// Sets up the argument, transfer and at the command register
// When the upper bytes of the command register are written then the command is sent
void casefunc(int dat, int n)
{
    int flag=0,data;
    int Add =SD_Base+argument;
    SendRequestToSDHC(0,0,Add,dat);
    if ( (n == 17) || (n ==18) || (n==24) || (n==25))
    {
        Add = SD_Base + transfer;
    	data = GenerateTran(n);
        SendRequestToSDHC(0,3,Add,data);
    }
    Add = SD_Base + command;
    data = GenerateCMD(n);
    SendRequestToSDHC(0,3,Add,data);
    flag = generate_normal_interrupt ( 0x1);			
    clear_normal_interrupt(0x01);
}
//This function receives data from SDHC 
//through sdhc_to_peripheral_bridge_response
//Takes the address and bytemask as parameters
int ReceiveFromSDHC(int address, int bytemask_data)
{
    uint32_t read_data;
    int resp;
    int Add= SD_Base + address;
    SendRequestToSDHC(1,bytemask_data,Add,0);
    read_data = read_uint32("sdhc_to_peripheral_bridge_response");
    resp = read_data;
    return resp;	
}

//Commands are sent by the host to the controller.This function generates 
//the command arguments as data variables.Two separate functions for CMD and ACMD commands.
//the command arguments are sent to casefunc() which completes the command sending procedure
void SendCMD(int n)
{
    //Check Command Inhibit(CMD)
    int present_state,data;
    present_state = ReceiveFromSDHC( present, 0);
    while( (present_state & 0x1) == 1)//command_inhibit(CMD)
	present_state = ReceiveFromSDHC( present, 0);
    while( (present_state & 0x2) == 1)//command_inhibit(DAT)
        present_state = ReceiveFromSDHC( present, 0);      
    switch(n)
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
		case 11:data=0;
			break;
		case 18: data = addressd;
			break;
		case 19:data=0;
			break;
		case 15:data= RCA;//[31:16]RCA
                        break;
		case 17:data=addressd;//data address SDSC cards use byte unit address
				//SDHC and SDXC use block unit address(512 bytes unit)
				//read
                	break;
		case 24:data=addressd;//data address
				//write
                	break;
		case 25: data = addressd;
			break;
		case 8: data = 0x1AA;
                	break;
		case 55:data= RCA ;	//[31:16]RCA
			break;
		default:data=0;
	}
	casefunc(data,n);
}
//Generates Arguments for Application specific commands
void SendACMD(int n)
{
        int data;
	switch(n)
	{
		case 6: data =0x2;
			break;
		case 23: data = 65535;
			break;
		case 411:data = 0;
                 	break;
		case 412:data = OCR;
			break;
		default:data =0;
	}
	casefunc(data,n);
}

//Generates command as per the standard.
/*(13:08)Index
                  (7:6)cmd Type
                  5 Data present
                  4 Command check enable
                  3 crc check enable
                  (1:0) Response type
*/
int GenerateCMD(int n)
{
	int cmd;
	if( (n == 0)||(n==2)||(n==9)||(n==10))//Response generated is R2.
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
	else if ((n == 411) || (n == 412)) //Response generated is R3.
	{
		n=41;
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|(0<<2)|2;
	}
	else if((n == 55)||(n == 3)||(n==8)||(n==17)||(n==19)||(n==24)||(n==25))
	//Response generated is of the type R1/R7.
	{
		if((n==17)||(n==24)||(n==25))
			cmd = (n<<8)|(0<<6)|(1<<5)|(1<<4)|(1<<3)|(0<<2)|2;
		else
			cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
	}
	else//CMD7
	{
		cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
	}
	return (cmd & 0x0000ffff);
}

int GenerateTran(int n)
//Generates Transfer register values
{
	// 5 Multi/single block
	// 4 Data Transfer Direction select
	// (3:2) Auto CMD Enable
	// 1 Block Count Enable
	// 0 DMA enable
	int tran=0;
	if ( (n==17))
		tran = 8;
	else if ( n== 18)
		tran = 24;
	else if (n ==24 )
		tran = 0;
	else if (n ==25)
		tran = 16;
	else 
		tran =0;
	return (tran & 0x0000ffff);	
}

int checkDATline()
{
//Checks the status of the data lines(Required for commands' responses).
	uint32_t read_data;
    	int resp;
	int Add = SD_Base + present ;
	SendRequestToSDHC(1,0,Add,0);
	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	resp = (read_data >> 20) & 0xf;
	return resp;		
}
// Recieves response from resp0 register for 32 bit responses
int GetResponseFromSDHC()
{
	//Bits 31-0: Read-Data
	uint32_t read_data;
	int resp;
	int Add= SD_Base + resp0;
	SendRequestToSDHC(1,0,Add,0);
	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	resp = read_data;
	return resp;
}

void GetBigResponse()
{//Recieves a 128bit response.
	uint32_t read_data;
	int r0,r2,r4,r6;
    	int Add= SD_Base + resp0;
   	SendRequestToSDHC(1,0,Add,0);
	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	r0 = read_data;
	Add= SD_Base + resp2;
    	SendRequestToSDHC(1,0,Add,0);
    	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
    	r2 = read_data;
    	Add= SD_Base + resp4;
    	SendRequestToSDHC(1,0,Add,0);
    	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
    	r4 = read_data;
	Add= SD_Base + resp6;
    	SendRequestToSDHC(1,0,Add,0);
    	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
    	r6 = read_data;
	fprintf(stderr," The response is %d %d %d %d", r6,r4,r2,r0);
}

int tuning()
{
	//For high clock speeds, tuning of the block is necessary.This function
	//generates tuning blocks.
	int Resp=0,count=40,execute_tuning,sampling_clock_select, buffer_read_ready=0;
	int Add = SD_Base + hostcontrol2;
	SendRequestToSDHC(0,3,Add,0x40);
	uint32_t read_tuning_data;
	while(count!=0)
	{	
		//Send CMD19
		SendCMD(19);
		Resp= GetResponseFromSDHC();
		//Check for Buffer Read Ready
		while( buffer_read_ready == 0){
		buffer_read_ready = generate_normal_interrupt(0x20);
		}
		//Clear Buffer Read Ready
		clear_normal_interrupt(0x20);
		//execute tuning read
		Add = SD_Base + hostcontrol2;
		SendRequestToSDHC(1,3,Add,0);
		read_tuning_data=read_uint32("sdhc_to_peripheral_bridge_response");
		execute_tuning = (read_tuning_data & 0x40)>>6;
		if(execute_tuning==0)
			break;
		else
			count--;
	}
	sampling_clock_select= (read_tuning_data & 0x80)>>7;
	if(sampling_clock_select==1)
		return 0;
	else
		return 1;
}

int Initialization()
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
	//Data Transfer width to 1 in Host control register
	Add = SD_Base + hostcontrol;
        SendRequestToSDHC(0,1,Add,2);
}

int UHSInitialization()
{
//UHSInitialisation is used to initialise the HC to operate in high speed modes.
//Operating voltage is 1.8V for data tranfer and max allowable data rate is 108MHz.
//Note: Card can be set up using UHSInitialisation() only.
	int Resp=0,busy=0,flag=0,a;
	int Card_Is_Locked=0;
	int Add;
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
	SendACMD(411);//Inquiry ACMD41.
	Resp = GetResponseFromSDHC();
	OCR = (Resp & 0x00111100);
	while(busy!=1)
	{
		SendCMD(55);
		SendACMD(412);//first ACMD41 with S18R(bit 24)=1,HCS=1
		Resp = GetResponseFromSDHC();
		busy = Resp>>31;
	}
	if(((Resp>>30)&1)== 0)//CCS
	{
		fprintf(stderr,"SDSC\n");
		flag = 1;
		return flag;
	}
	if(((Resp>>24)&1)== 0)//S18R
	{
		fprintf(stderr,"S18R not one\n");
		flag =1;
		return flag;
	}
	SendCMD(11);
	Resp = GetResponseFromSDHC();
	if(Resp!=0x200)
	{
		flag=1;
		fprintf(stderr,"Switching not possible.Check the following:\n 1.Voltage Switch Support \n 2.Incorrect ACMD41(S18)\n 3.Not in ready state\n 4.Voltage already switched Response = %d",Resp);
		return flag;
	}
	//Stop providing SD clock to the card
	//SD clock Enable = 0
	Add = SD_Base + clockcontrol;
	SendRequestToSDHC(0,3,Add,0);

	a = checkDATline();
	//If data lines are not zero then an error has occurred
	if( a!= 0)
	{
		fprintf(stderr,"Error");
		return 1;
	}

	Add = SD_Base + hostcontrol2;
	//1.8V Signal Enable
	SendRequestToSDHC(0,3,Add,0x8);
	//check 1.8V signal
	Resp = ReceiveFromSDHC(hostcontrol2,3);
	if( ((Resp >>3) & 1) == 0)
	{
		fprintf(stderr,"Error in 1.8 Volt signalling");
		return 1;
	}
	//Provide SD clock
	Add = SD_Base + clockcontrol;
        SendRequestToSDHC(0,3,Add,4);
	a = checkDATline();
	while(a!=0xf)
	{
		a = checkDATline();//dat[3:0]=1111 indicates switching successful.This function will check [23:20] bit in the present state register.
	}
	a = 0;
	SendCMD(2);
	GetBigResponse();
	SendCMD(3);
	Resp = GetResponseFromSDHC();
	RCA= Resp & 0x11110000;
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
	SendCMD(6);//set-mode cmd(6)
	Resp = GetResponseFromSDHC();
	// Data Transfer Width to 1 in host control 1
	Add = SD_Base + hostcontrol;
        SendRequestToSDHC(0,1,Add,2);
	flag = tuning ();
	return flag;
}
// Blocks are written in accordance to march test
int Blockwrite(int bsize, int bcount)
{
//Sets up the SD Card to write data into the flash.
//Supports single and multiple blockwrite.
	int flag = 0,i,data;
	int Resp;
	addressd= 0;
	//Set Block Size 
	int Add = SD_Base + blocksize;
        SendRequestToSDHC(0,3,Add,bsize);
	//Set Block Count
	Add = SD_Base + blockcount;
        SendRequestToSDHC(0,3,Add,bcount);
	if (bcount ==1)
	{
		SendCMD(24);
	}
	else
	{
		//Pre-erased
		SendCMD(55);
		Resp = GetResponseFromSDHC();
		SendACMD(23);
		SendCMD(25);
	}
	Resp = GetResponseFromSDHC();
	//Wait for Buffer Write Ready Interrupt
	int buffer_write_ready_interrupt;
	while(bcount!=0)
	{
			buffer_write_ready_interrupt=generate_normal_interrupt(0x10);		
			fprintf(stderr,"Buffer Write Ready Interrupt occured,ready to write buffer");
			clear_normal_interrupt(0x10);
			fprintf(stderr,"Buffer Write Ready Interrupt cleared,wait for interrupt to occur");
			//Set block data
			Add = SD_Base + bufferdata;
			for(i=0; i<128 ; i++)
			{
				data = i;
				SendRequestToSDHC(0,0,Add,data);
			}
			bcount--;
	}
	int transfer_complete = generate_normal_interrupt(0x2);
	clear_normal_interrupt(0x2);
	SendCMD(15);
	Resp = GetResponseFromSDHC();
	return flag ;
}
// Here blocks are read and checked for correctness of the data according to march test
int BlockRead(int bsize, int bcount)
{
	//Sets up the SD Card to read data from the flash.
	//Supports single and multiple blockwrite.
	int flag =0,i;
	int Resp;
	int block_data;
	//Set Block Size 
	int Add = SD_Base + blocksize;
        SendRequestToSDHC(0,3,Add,bsize);
	//Set Block Count
	Add = SD_Base + blockcount;
        SendRequestToSDHC(0,3,Add,bcount);
	if (bcount ==1)
		SendCMD(17);
	else
		SendCMD(18);
	Resp = GetResponseFromSDHC();
	int buffer_read_ready_interrupt;
	//Wait for Buffer Read Ready Interrupt
	while(bcount!=0)
	{
		buffer_read_ready_interrupt=generate_normal_interrupt(0x20);
		fprintf(stderr,"Buffer Read Ready Interrupt occured,ready to write buffer");
		clear_normal_interrupt(0x20);
		fprintf(stderr,"Buffer Read Ready Interrupt cleared,wait for interrupt to occur");
		//Get Block Data
		for(i=0; i< 128; i++)
		{
			block_data = ReceiveFromSDHC(bufferdata,0);
			fprintf(stderr," Blockdata[%d] %d", i, block_data);
			if(block_data != i)
			{
				fprintf(stderr,"Error ..Expected = %d , Actual =%d ", i, block_data);
				flag =1;
			}
		}
		bcount--;
	}
    int transfer_complete = generate_normal_interrupt(0x2);
    clear_normal_interrupt(0x2);
    SendCMD(15);
    Resp = GetResponseFromSDHC();
    return flag;
}
//SD clock control and power control function
void SDclock_powercontrol(int sdclk_freq,int voltage_support)
{
	 int Add,data,read_data;
	 Add = SD_Base + clockcontrol;
	 data =(sdclk_freq<<6) | 1 ;
         SendRequestToSDHC(0,3,Add,data);//Internal clock enable and SDCLK frequency select
         read_data = ReceiveFromSDHC(clockcontrol,3);
         while( ((read_data >>1)&1) !=1)
         {
               read_data = ReceiveFromSDHC(clockcontrol,3);
         }//Run until Internal Clock Stable

         //SD clock Enable
         Add = SD_Base + clockcontrol;
         SendRequestToSDHC(0,3,Add,4);
         //SD bus Power control
         Add = SD_Base + powercontrol;
         if((voltage_support >>2))
                 data = 0xb;//1.8V power
         else
                 data = 0xf;//3.3V power
         SendRequestToSDHC(0,1,Add,data);
}
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
	int err,i,flag=0;
	int read_data,Add,data;
	int sdclk_freq;
	int voltage_support;
	
		if (argc <2)
		{
			fprintf(stderr," \n null for no-trace, stdout for stdout \n0 for Initialization 1 for UHSInitialization\n");
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
		//SDHC thread is started
		start_sdhc_threads();

		//Whether card is inserted is checked
		//card insertion and removal status enable
		//card insertion and removal signal enable		
		flag = generate_normal_interrupt(0xc0);
		//clear the insertion interrupt
		clear_normal_interrupt(0x40);
		//present state -> card inserted check
		read_data = ReceiveFromSDHC(present,0);
		
		if( ((read_data >> 16) &1) !=1)
		{
			fprintf(stderr,"Card not present ");
			return (1);
		}
		//software reset
		Add = SD_Base + swreset;
		SendRequestToSDHC(0,1,Add,1);

		read_data = ReceiveFromSDHC(capa, 0);	//reading capabilities register	
		fprintf(stderr," Capabilities reg = %d ",read_data);

		fprintf(stderr," Base Clock Frequency For SD Clock is %d ",((read_data>>8) & 0xff));
	       	
		voltage_support = (read_data>>24) & 0x7;//supported voltages

		if ( atoi(argv[2]) ==0)
		{
			sdclk_freq = (read_data>>8) / 50;
			SDclock_powercontrol(sdclk_freq,voltage_support);//clock and power control done
			err=Initialization();
		}
		else
		{
			sdclk_freq = (read_data>>8);
                        SDclock_powercontrol(sdclk_freq,voltage_support);//clock and power control done
			err =UHSInitialization();
		}
		if(err)
			fprintf(stderr,"Error in Initialization");
		else
			fprintf(stderr,"Succesfully Initialized");
		
		//Blockwrite with 512 bytes block size and 2^31 block count 
		err = Blockwrite(512,65535);
		if(err)
            		fprintf(stderr,"Error in BlockWrite");
        	
		//Blockread with 512 bytes block size
		err = BlockRead(512,65535);
		if(err)
			fprintf(stderr," Error in Block read");
	return 0;
}
