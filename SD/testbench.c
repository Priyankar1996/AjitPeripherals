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
	/*Bit 73: lock bit
          Bit 72: read/write-bar
          Bits 71-68: Byte-mask
	  Bits 67-32: Physical address
          Bits 31- 0: Write-data*/
	uint64_t write_data0;
	uint16_t write_data1;
	
	write_data0 = (lockbit<<63)|(rw<<62)|(bytemask<<58)|(PhyAdd<<22)|(data>>10);
	write_data1 = (data<<6);

	write_uint64 ("in_data_0",write_data0);
	write_uint16 ("in_data_1",write_data1);
}
void casefunc(int dat, int n)
{

			PhyAdd =SD_Base+argument;
                        data = dat;
                        SendRequestToSDHC();
                        PhyAdd = SD_Base + transfer;
			bytemask = 3;
                        data = GenerateTran(n);
                        SendRequestToSDHC();
			PhyAdd = SD_Base + command;
			bytemask = 3;
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

		case 6:	data=0x80000000;
                        break;


		case 7: data= RCA ;//[31:16]RCA
                        break;

		//case 7: data=RCA;//[31:16]RCA
                //break;

		
		case 11:data=0;
			break;

		case 19:data=0;
			break;

		case 15:data= RCA;//[31:16]RCA
                        break;

		case 17:data=0;//data address SDSC cards use byte unit address
				//SDHC and SDXC use block unit address(512 bytes unit)
				//read
                break;

		case 24:data=addressd;//data address
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

	uint64_t read_data;
       	int resp;
	rw = 1;
	PhyAdd = SD_Base + present ;
	data = 0;
	SendRequestToSDHC();
	
	read_data = read_uint64("out_data");
	resp = (read_data >> 20) & 0xf;
	return resp;		
}


//DEFINE_THREAD(SendRequestToSDHC);

int GetResponseFromSDHC()
{
	
	//int response_pipe_read_data[read_data_length];
	/*Bits 32: Error-bit
	  Bits 31-0: Read-Data*/
	uint64_t read_data;
	int resp;
	rw=1;
	PhyAdd= SD_Base + resp0;
	data = 0;
	SendRequestToSDHC();

	read_data = read_uint64("out_data");
	resp = read_data;
	return resp;

}
void GetBigResponse()
{
	uint64_t read_data;
	int r0,r2,r4,r6;
	rw = 1;
	data = 0;
	
              PhyAdd= SD_Base + resp0;
              SendRequestToSDHC();
	      	  read_data = read_uint64("out_data");
	      	  r0 = read_data;
	          PhyAdd= SD_Base + resp2;
              SendRequestToSDHC();
              read_data = read_uint64("out_data");
              r2 = read_data;
	          PhyAdd= SD_Base + resp4;
              SendRequestToSDHC();
              read_data = read_uint64("out_data");
              r4 = read_data;
	          PhyAdd= SD_Base + resp6;
              SendRequestToSDHC();
              read_data = read_uint64("out_data");
              r6 = read_data;
	
}

//DEFINE_THREAD(GetResponseFromSDHC);


int Initialization()
{
	int Resp=0,busy=0;
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

}

int UHSInitialization()
{
	int Resp=0,busy=0,flag=0;
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
	if(!Resp)
	{
		flag=1;
		fprintf(stderr,"Switching not possible.Check the following:\n 1.Voltage Switch Support \n 2.Incorrect ACMD41(S18)\n 3.Not in ready state\n 4.Voltage already switched");
		return flag;
	}
	int a = checkDATline();
	while(a!=0xf)
	{
		a = checkDATline();//dat[3:0]=1111 indicates switching successful.This function will check [23:20] bit in the present state register.
	}
	a =0;
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
	int count=40;
	while(count!=0)
	{
		SendCMD(19);// to be used only if SDR50 and SDR104 mode is used.
		Resp = GetResponseFromSDHC();
		count--;
	}
}
//int writed;
//int addressd;
int Blockwrite(int bsize, int bcount)
{
	int flag = 0;
	int Resp;
	//writed = x;
	addressd= 0;
	SendCMD(19);
	Resp = GetResponseFromSDHC();
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
		SendCMD(24);
	}
	else
	{
		SendCMD(25);
	}
	Resp = GetResponseFromSDHC();
	//Wait for Buffer Write Ready Interrupt
	/*while(bcount!=0)
	{
		if(!buffer_write_ready_interrrupt)
		{
			bcount=bcount;
		}
		else
		{
			buffer_write_ready_interrupt=0;
			bcount--;
			//DATA WRITE
		}

	}*/
	SendCMD(15);
	Resp = GetResponseFromSDHC();
	return flag ;
}

int BlockRead(int bsize, int bcount)
{
	int flag =0;
	int Resp;
	SendCMD(19);
	Resp = GetResponseFromSDHC();
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
	//Wait for Buffer Read Ready Interrupt
	/*while(bcount!=0)
	{
		if(!buffer_read_ready_interrrupt)
		{
			bcount=bcount;
		}
		else
		{
			buffer_read_ready_interrupt=0;
			bcount--;
			//READ_DATA
		}
	}*/
    SendCMD(15);
	Resp = GetResponseFromSDHC();
	return flag;
}


int main(int argc, char *argv[])
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
	int err,i;
	int read_data;
	while(1)
	{
		if (argc <2)
		{
			fprintf(stderr," 0 for Initialization\n 1 for UHSInitialization\n");
			return(1);
		}
		if ( atoi(argv[1]) ==0)
			err=Initialization();
		else
		    err =UHSInitialization();
		if(err)
		{
			fprintf(stderr,"Error in Initialization");
			break;
		}
		else
			fprintf(stderr,"Succesfully Initialized");
		
		//Blockwrite with 512 bytes block size and 2^31 block count 
			err = Blockwrite(512,65535);
			if(err)
	                {
                	        fprintf(stderr,"Error in BlockWrite");
                        	break;
        	        }
		
		for(i=0;i<1024;i++)
		{
			read_data=BlockRead();
			if(read_data!=i)
			{
				fprintf(stderr,"Data %d does not match with expected %d",read_data,i);
				break;
			}
		}
	}

	return 0;
}
