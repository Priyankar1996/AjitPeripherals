#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>

//#ifndef AA2C
 //       #include "vhdlCStubs.h"
//#else
//        #include "aa_c_model.h"
//#endif


//typedef bool uint1_t;
//registers

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
#define blockgapcontrol 0x2A
#define wakeupcontrol 0x2B
#define clockcontrol 0x2C
#define timeoutcontrol 0x2E
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
#define maxIcap 0x48
#define HCversion 0xFE


#define SD_Base 0x00//SD base address
  

long int rw = 0;
long int bytemask;
long int PhyAdd;
int data;
int OCR;
int RCA = 0;
int writed;
int addressd;



void SendRequestToSDHC()
{
	/*Bit 63: rw
          Bit 62-59: bytemask
          Bits 58-56: Unused
	  Bits 55-32: Physical address
          Bits 31- 0: Write-data*/
	uint64_t write_data;
	
	write_data = (rw << 63) | (bytemask<<59) | (PhyAdd << 32) | data ;

	write_uint64 ("peripheral_bridge_to_sdhc_request",write_data);
}

int normalinterrupt()
{
        uint8_t intr =0;
        int interrupt;
        intr = read_uint8("nintrrupt");

        interrupt = (intr & 0x1);

        return interrupt;
}

int errorinterrupt()
{
        uint8_t intr =0;
        int interrupt;
        intr = read_uint8("eintrrupt");

        interrupt = (intr & 0x1);
        return interrupt;
}

void interrupt_clear(int d)
{
        int flag =0;
        PhyAdd = SD_Base + nintrstatus ;
        bytemask = 3;
        rw = 0;
        data = data;
        SendRequestToSDHC();


}

int generate_interrupt(int data)
{
        int status_intr,flag;
        uint32_t status;
        PhyAdd = SD_Base + nintrstatusen ;
        bytemask = 3;
        rw = 0;
        data = data;
        SendRequestToSDHC();
        PhyAdd = SD_Base + nintrsignalen ;
        bytemask = 3;
        rw = 0;
        data = data;
        SendRequestToSDHC();

        PhyAdd = SD_Base + nintrstatus ;
        bytemask = 3;
        rw = 1;

        status = read_uint32("sdhc_to_peipheral_bridge_response");

        int count =0;
        int temp_data = data;
        while(1)
        {
                if( (temp_data >>1) != 1)
                {
                        count ++;
                }
		 else
                        break;
        }

        status_intr = (status & data) >> count;

        fprintf(stderr,"Interrupt status is %d",status_intr);

        //checking for interrupt
        while(1){
        flag = normalinterrupt();

                if ( flag ==  1)
                {
                        break;
                }

        }
        return flag;
}






void casefunc(int dat, int n)
{
			int flag=0;
			PhyAdd =SD_Base+argument;
                        data = dat;
			bytemask = 0;
			rw = 0;
                        SendRequestToSDHC();
			if ( (n == 17) || (n ==18) || (n==24) || (n==25))
			{
                        	PhyAdd = SD_Base + transfer;
				bytemask = 3;
				rw = 0;
                        	data = GenerateTran(n);
                        	SendRequestToSDHC();
			}
			PhyAdd = SD_Base + command;
			bytemask = 3;
			rw = 0;
                        data = GenerateCMD(n);
                        SendRequestToSDHC();
			flag = generate_interrupt ( 0x1);			
			interrupt_clear(0x01);

}
int ReceiveFromSDHC(int address, int bytemask_data)
{
	uint32_t read_data;
        int resp;
        rw = 1 ;
        PhyAdd= SD_Base + address;
    
	bytemask = bytemask_data ;
        SendRequestToSDHC();

        read_data = read_uint32("sdhc_to_peripheral_bridge_response");
        resp = read_data;
        return resp;
	
}

void SendCMD(int n)
{

	//Check Command Inhibit(CMD)
	int present_state;
	present_state = ReceiveFromSDHC( present, 0);
	while( (present_state & 0x1) == 1)//command_inhibit(CMD)
	{
		present_state = ReceiveFromSDHC( present, 0);
	}

	while( (present_state & 0x2) == 1)//command_inhibit(DAT)
        {
                present_state = ReceiveFromSDHC( present, 0);
        }

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

void SendACMD(int n)
{
	switch(n)
	{
		case 6: data =0x2;
			    break;
		case 411:data = 0;
                 break;
		case 412:data = OCR;
			 break;
		default:data =0;
	}
	casefunc(data,n);
}


int GenerateCMD(int n)
{
	int cmd;
	if( (n == 0)||(n==2)||(n==9)||(n==10))//R2
	{
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
		/*(13:08)Index 
		  (7:6)cmd Type 
		  5 Data present 
		  4 Command check enable 
		  3 crc check enable 
		  (1:0) Response type*/

	}
	else if ((n == 411) || (n == 412)) //R3
	{
		n=41;
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|(0<<2)|2;
	}
	else if((n == 55)||(n == 3)||(n==8)||(n==17)||(n==19)||(n==24)||(n==25))//R1,R7
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
{
	// 5 Multi/single block
	// 4 Data Transfer Direction select
	// (3:2) Auto CMD Enable
	// 1 Block Count Enable
	// 0 DMA enable
	int tran=0;
	if ( (n==17))
	{
		tran = 8;

	}
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

	uint32_t read_data;
       	int resp;
	rw = 1;
	PhyAdd = SD_Base + present ;
	data = 0;
	SendRequestToSDHC();
	
	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	resp = (read_data >> 20) & 0xf;
	return resp;		
}


int GetResponseFromSDHC()
{
	
	/*
	  Bits 31-0: Read-Data*/
	uint32_t read_data;
	int resp;
	rw=1;
	PhyAdd= SD_Base + resp0;
	data = 0;
	SendRequestToSDHC();

	read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	resp = read_data;
	return resp;

}
void GetBigResponse()
{
	uint32_t read_data;
	int r0,r2,r4,r6;
	rw = 1;
	data = 0;
	
              PhyAdd= SD_Base + resp0;
              SendRequestToSDHC();
	      	  read_data = read_uint32("sdhc_to_peripheral_bridge_response");
	      	  r0 = read_data;
	          PhyAdd= SD_Base + resp2;
              SendRequestToSDHC();
              read_data = read_uint32("sdhc_to_peripheral_bridge_response");
              r2 = read_data;
	          PhyAdd= SD_Base + resp4;
              SendRequestToSDHC();
              read_data = read_uint32("sdhc_to_peripheral_bridge_response");
              r4 = read_data;
	          PhyAdd= SD_Base + resp6;
              SendRequestToSDHC();
              read_data = read_uint32("sdhc_to_peripheral_bridge_response");
              r6 = read_data;
}
int tuning()
{
	int Resp=0,count=40,execute_tuning,sampling_clock_select, buffer_read_ready=0;
	PhyAdd = SD_Base + hostcontrol2;
	bytemask = 3;
	data  = 0x40;
	rw=0;
	uint32_t read_tuning_data;
	SendRequestToSDHC();
	while(count!=0)
	{	
		//Send CMD19
		SendCMD(19);
		Resp= GetResponseFromSDHC();
		//Check for Buffer Read Ready
		while( buffer_read_ready == 0){
		buffer_read_ready = generate_interrupt(0x20);
		}
		//Clear Buffer Read Ready
		interrupt_clear(0x20);
		//execute tuning read
		PhyAdd = SD_Base + hostcontrol2;
	        bytemask = 3;
       		rw=1;
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
	int Resp=0,busy=0,a;
	int Card_Is_Locked=0;
	int flag=0;
	int CCS;
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
	GetBigResponse();//CID --not printed as of now
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
	PhyAdd = SD_Base + hostcontrol;
        rw = 0;
        bytemask = 1;
        data = 2;
        SendRequestToSDHC();


}

int UHSInitialization()
{
	int Resp=0,busy=0,flag=0,a;
	int Card_Is_Locked=0;
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
	PhyAdd = SD_Base + clockcontrol;
	rw = 0;
        bytemask = 3;
	data = 0;
	SendRequestToSDHC();

	a = checkDATline();
	if( a!= 0)
	{
		fprintf(stderr,"Error");
		return 1;
	}

	PhyAdd = SD_Base + hostcontrol2;
	rw = 0;
	bytemask = 3;
	data = 0x8;//1.8V Signal Enable
	SendRequestToSDHC();
	//wait 5ms
	//
	//
	//check 1.8V signal
	Resp = ReceiveFromSDHC(hostcontrol2,3);
	if( ((Resp >>3) & 1) == 0)
	{
		fprintf(stderr,"Error in 1.8 Volt signalling");
		return 1;
	}

	//Provide SD clock
	PhyAdd = SD_Base + clockcontrol;
        rw = 0;
        bytemask = 3;
        data = 4;
        SendRequestToSDHC();
	// wait for 1ms
	//
	//
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
	PhyAdd = SD_Base + hostcontrol;
        rw = 0;
        bytemask = 1;
        data = 2;
        SendRequestToSDHC();


	flag = tuning ();
	return flag;
	//int count=40;
	//while(count!=0)
	//{
	//	SendCMD(19);// to be used only if SDR50 and SDR104 mode is used.
	//	Resp = GetResponseFromSDHC();
	//	count--;
	//}
}
//int writed;
//int addressd;
int Blockwrite(int bsize, int bcount)
{
	int flag = 0,i;
	int Resp;
	//writed = x;
	addressd= 0;
	//Set Block Size 
	PhyAdd = SD_Base + blocksize;
        bytemask = 3;
	rw =0;
        data = bsize ;
        SendRequestToSDHC();
	//Set Block Count
	PhyAdd = SD_Base + blockcount;
        bytemask = 3;
	rw =0;
        data = bcount;
        SendRequestToSDHC();
	if (bcount ==1)
	{
		SendCMD(24);
	}
	else
	{
		SendCMD(25);
	}
	Resp = GetResponseFromSDHC();
	//Wait for Buffer Write Ready Interrupt
	int buffer_write_ready_interrupt;
	while(bcount!=0)
	{
			buffer_write_ready_interrupt=generate_interrupt(0x10);		
			fprintf(stderr,"Buffer Write Ready Interrupt occured,ready to write buffer");
			interrupt_clear(0x10);
			fprintf(stderr,"Buffer Write Ready Interrupt cleared,wait for interrupt to occur");
			//Set block data
			
			PhyAdd = SD_Base + bufferdata;
			bytemask = 0;
			rw = 0;
			for(i=0; i<128 ; i++)
			{
				data = i;
				SendRequestToSDHC();
			}
			bcount--;
	
	}
	int transfer_complete = generate_interrupt(0x2);
	interrupt_clear(0x2);
	SendCMD(15);
	Resp = GetResponseFromSDHC();
	return flag ;
}

int BlockRead(int bsize, int bcount)
{
	int flag =0,i;
	int Resp;
	int block_data;
	//Set Block Size 
	PhyAdd = SD_Base + blocksize;
        bytemask = 3;
        data = bsize ;
        SendRequestToSDHC();
	//Set Block Count
	PhyAdd = SD_Base + blockcount;
        bytemask = 3;
        data = bcount;
        SendRequestToSDHC();
	if (bcount ==1)
	{
		SendCMD(17);
	}
	else
	{
		SendCMD(18);
	}
	Resp = GetResponseFromSDHC();
	int buffer_read_ready_interrupt;
	//Wait for Buffer Read Ready Interrupt
	while(bcount!=0)
	{

			buffer_read_ready_interrupt=generate_interrupt(0x20);
			fprintf(stderr,"Buffer Read Ready Interrupt occured,ready to write buffer");
			interrupt_clear(0x20);
			fprintf(stderr,"Buffer Read Ready Interrupt cleared,wait for interrupt to occur");
			//Get Block Data
			for(i=0; i< 128; i++)
			{
				block_data = ReceiveFromSDHC(bufferdata,0);
				fprintf(stderr," Blockdata[%d] %d", i, block_data);
				if(block_data != i){
					fprintf(stderr,"Error ..Expected = %d , Actual =%d ", i, block_data);
					flag =1;
				}
			}
			bcount--;
		
	}
	int transfer_complete = generate_interrupt(0x2);
        interrupt_clear(0x2);
        SendCMD(15);
	Resp = GetResponseFromSDHC();
	return flag;
}


int main(int argc, char *argv[])
{

	int err,i,flag=0;
	int read_data;
	int sdclk_freq;
	
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
//#ifdef AA2C
//        init_pipe_handler();
//        start_daemons (fp,0);
//#endif
		//card insertion and removal status enable
	
		//card insertion and removal signal enable
		
		flag = generate_interrupt(0xc0);
		//clear the insertion interrupt
		interrupt_clear(0x40);
		//present state -> card inserted check
		read_data = ReceiveFromSDHC(present,0);
		
		if( ((read_data >> 16) &1) !=1)
		{
			fprintf(stderr,"Card not present ");
			return (1);
		}
		//software reset
		PhyAdd = SD_Base + swreset;
		rw = 0;
		bytemask = 1;
		data = 1;
		SendRequestToSDHC();

		read_data = ReceiveFromSDHC(capa, 0);	//reading capabilities register	
		fprintf(stderr," Capabilities reg = %d ",read_data);

		fprintf(stderr," Base Clock Frequency For SD Clock is %d ",(read_data>>8));
	       	
		
		if ( atoi(argv[2]) ==0)
		{
			sdclk_freq = (read_data>>8) / 50;
			PhyAdd = SD_Base + clockcontrol;
	                rw = 0;
        	        bytemask = 3;
                	data =(sdclk_freq<<6) | 1 ;
               		SendRequestToSDHC();//Internal clock enable and SDCLK frequency select

			read_data = ReceiveFromSDHC(clockcontrol,3);

			while( ((read_data >>1)&1) !=1)
			{
				read_data = ReceiveFromSDHC(clockcontrol,3);
			}//Run until Internal Clock Stable

			//SD clock Enable
			PhyAdd = SD_Base + clockcontrol;
                        rw = 0;
                        bytemask = 3;
                        data = 4;
                        SendRequestToSDHC();
			
			err=Initialization();
		}
		else
		{
			sdclk_freq = (read_data>>8);
                        PhyAdd = SD_Base + clockcontrol;
                        rw = 0;
                        bytemask = 3;
                        data =(sdclk_freq<<6) | 1 ;
                        SendRequestToSDHC();//Internal clock enable and SDCLK frequency select

                        read_data = ReceiveFromSDHC(clockcontrol,3);

                        while( ((read_data >>1)&1) !=1)
                        {
                                read_data = ReceiveFromSDHC(clockcontrol,3);
                        }//Run until Internal Clock Stable

                        //SD clock Enable
                        PhyAdd = SD_Base + clockcontrol;
                        rw = 0;
                        bytemask = 3;
                        data = 4;
                        SendRequestToSDHC();

			err =UHSInitialization();
		}
		if(err)
		{
			fprintf(stderr,"Error in Initialization");
		}
		else
			fprintf(stderr,"Succesfully Initialized");
		
		//Blockwrite with 512 bytes block size and 2^31 block count 
		err = Blockwrite(512,65535);
		if(err)
	    	{
            		fprintf(stderr,"Error in BlockWrite");
        	}	
		
	
		err = BlockRead(512,65535);
			if(err)
			{
				fprintf(stderr," Error in Block read");
			}
	

	return 0;
}
