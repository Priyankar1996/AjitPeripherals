#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>

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
  
long int lockbit=0;
long int r/w = 0;
long int bytemask;
long int PhyAdd;
int data;
int OCR;
int RCA = 0;

void SendRequestToSDHC()
{
	/*Bit 73: lock bit
          Bit 72: read/write-bar
          Bits 71-68: Byte-mask
	  Bits 67-32: Physical address
          Bits 31- 0: Write-data*/
	uint64_t write_data0;
	uint16_t write_data1;
	
	write_data0 = (lockbit<<63)|(r/w<<62)|(bytemask<<58)|(PhyAdd<<22)|(data>>10);
	write_data1 = (data<<6);

	write_uint64 ("in_data_0",write_data0);
	write_uint16 ("in_data_1",write_data1);
}


//DEFINE_THREAD(SendRequestToSDHC);

int GetResponseFromSDHC()
{
	
	//int response_pipe_read_data[read_data_length];
	/*Bits 32: Error-bit
	  Bits 31-0: Read-Data*/
	uint64_t read_data;
	int resp;
	//r/w=1;
	//PhyAdd= SD_Base + resp0;
	//data = 0;
	//SendRequestToSDHC();

	read_uint64("out_data",read_data);
	resp = read_data;
	return resp;

}
void GetBigResponse()
{
	uint64_t read_data;
	int r0,r2,r4,r6;
	//r/w = 1;
	//data = 0;
	//
        //	PhyAdd= SD_Base + resp0;
        //	SendRequestToSDHC();
	//	read_uint64("out_data",read_data);
	//	r0 = read_data;
	//	PhyAdd= SD_Base + resp2;
        //      SendRequestToSDHC();
        //      read_uint64("out_data",read_data);
        //      r2 = read_data;
	//      PhyAdd= SD_Base + resp4;
        //      SendRequestToSDHC();
        //      read_uint64("out_data",read_data);
        //      r4 = read_data;
	//      PhyAdd= SD_Base + resp6;
        //      SendRequestToSDHC();
        //      read_uint64("out_data",read_data);
        //      r6 = read_data;
	
}

//DEFINE_THREAD(GetResponseFromSDHC);


int Initialization()
{
	int Resp=0,busy=0;
	int flag=0;

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
		CCS = Resp >> 30;
		if(CCS == 0)
			fprintf(stderr,"SDSC\n");
		else
			fprintf(stderr,"SDHC or SDXC\n");

		busy = Resp >> 31;
	}
        SendCMD(2);
	GetBigResponse();//CID
        SendCMD(3);
	Resp = GetResponseFromSDHC();
	RCA = Resp & 0x11110000;
	return flag;

}

void UHSInitialization()
{
	int Resp=0,busy=0,flag=0;
	SendCMD(0);
	SendCMD(8);
	while(Resp!=0x1A)
	{
		Resp = GetResponseFromSDHC();
	}//Voltage accepted and Check pattern echoed
	SendCMD(55);
	SendACMD(411);//Inquiry ACMD41.
	Resp = GetResponseFromSDHC();
	while(busy!=1)
	{
		SendCMD(55);
		SendACMD(412);//first ACMD41 with S18R(bit 24)=1,HCS=1
		Resp = GetResponseFromSDHC();
		busy = Resp & 0x80000000;
	}
	SendCMD(11);
	Resp = GetResponseFromSDHC();
	if(!Resp)
	{
		flag=1;
		fprintf(stderr,"Switching not possible.Check the following:\n 1.Voltage Switch Support \n 2.Incorrect ACMD41(S18)\n 3.Not in ready state\n 4.Voltage already switched");
		return flag;
	}
	checkDATline();
	SendCMD(2);
	GetBigResponse()
	SendCMD(3);
	Resp = GetResponseFromSDHC();
	RCA= Resp & 0x11110000;
	SendCMD(7);
	Resp = GetResponseFromSDHC();
	while(checkDATLine()!=0)
	{
		checkDATLine();
	}
	//Check CARD_IS_LOCKED bit in Response
	Card_Is_Locked = Resp & 0x200000000
	if(Card_Is_Locked)
	{
		SendCMD(42);
	SendCMD(42);
	SendCMD(55);
	SendACMD(6);
	SendCMD(19);
}
void Blockwrite()
//CMD7
//ACMD6
//CMD6
//CMD19
//CMD24
//CMD15
{
	SendCMD(7);
	SendCMD(55);
	SendACMD(6);
	SendCMD(6);
	SendCMD(19);
	SendCMD(24);
	SendCMD(15);
}

void BlockRead()
{
	SendCMD(7);
        SendCMD(55);
        SendACMD(6);
        SendCMD(6);
	SendCMD(19);
        SendCMD(17);
        SendCMD(15);	
}
void casefunc(int dat, int n)
{
			PhyAdd =SD_Base+argument;
                        data = dat;
                        SendRequestToSDHC();
                        PhyAdd = SD_Base + transfer;
                        data = GenerateCMD(n);
                        SendRequestToSDHC();

}
void SendCMD(int n)
{
	switch(n)
	{
		case 0: data = 0;
			break;

		case 2: data = 0;
                      	break;

		case 3: data = 0;
                       	break;

		case 6:	data=;
                        break;

		case 7: data=0;//[31:16]RCA
                        break;
		
		case 11:data=0;
			break;

		case 19:data=0;
			break;

		case 15:data=0;//[31:16]RCA
                        break;

		case 17:data=0;//data address SDSC cards use byte unit address
				//SDHC and SDXC use block unit address(512 bytes unit)
				//read
                        break;

		case 24:data=;//data address
				//write
                        break;

		case 8: data = 0x1AA;
                        break;

		case 55:data= RCA ;	//[31:16]RCA
			break;

		default:data=0;
	}
	casefunc(data,n);
}

void sendACMD(int n)
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
	if( n== (0||2||9||10))//R2
	{
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(1<<3)|(0<<2)|1;
		/*(13:08)Index 
		  (7:6)cmd Type 
		  5 Data present 
		  4 Command check enable 
		  3 crc check enable 
		  (1:0) Response type*/

	}
	else if (n == 411 || 412) //R3
	{
		n=41;
		cmd = (n<<8)|(0<<6)|(0<<5)|(0<<4)|(0<<3)|(0<<2)|2;
	}
	else if( n== (55||3||8))//R1,R7
	{
		cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|2;
	}
	else//CMD7
	{
		cmd = (n<<8)|(0<<6)|(0<<5)|(1<<4)|(1<<3)|(0<<2)|3;
	}
	return cmd;

}


int main()
{

	//Test initialization-T1
		// CMD0 Arguement 0x0000
		// CMD0 Command  0x001A
		// CMD8 Arguement 
		// CMD8 Command
		// CMD55 Arguement
		// CMD55 Command
		// ACMD41 Arguement
		// ACMD41 Command
		// CMD2 Arguement
		// CMD2 Command
		// CMD3 Arguement
		// CMD3 Command	
	//Test single block write-T2
	//Test single block read-T3
	//Test multiple block write-T4
	//Test multiple block read-T5
	int err;
	while(1)
	{
		err=Initialization();
		if(err)
			fprintf(stderr,"Error in Initialization");
		else
			fprintf(stderr,"Succesfully Initialized");

		Blockwrite();
		BlockRead();

	}

	return 0;
}
