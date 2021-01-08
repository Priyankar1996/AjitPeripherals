// SD Card model for SD Card Host controller:
// Authors: Ajinkya.S.Raghuwanshi, Deval.Patel, Priyanka Sarkaar, Arghey.Dev
// DAte: January 2021

#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>

// Address location are optional for SD model here.
// But here in this define function we are giving the initial value of the register and not the
// location as I personally don't know how to create a register and will be considering the variable as
// register and using [pointer and address] for the address  related purpose.

#define CID 0x04
#define RCA 0x1A
#define CSD 0x1C
#define SCR 0x32
#define OCR 0x3A
#define SSR 0x3E
#define CSR 0xA2

// Memory 
//Here also for SD model we can set variable starting memory location
#define SD_CARD_StartingMemory 0x4F000000

//SD Card variable
#define SD_Busy 0 
#define ack 0
#define SD_abort 0

// Transfer functions

//Read function
void read_data_request()
{
	//CMD line request provided
	if (ack == 1)
	{
		read_data_request_ack(1);
		//int wait_for_free_SD();
	}	
	else
	{
		read_data_request_ack(0);
		SD_Busy = 1;
		//Read data through DAT LINES
		SD_Card_read_pipe(Starting_Data_read_location);
	}	
}
DEFINE_THREAD(read_data_request);

//Read Acknowledge fn
void read_data_request_ack(uint1_t SD_Busy)
{
	if(SD_Busy == 1 ) 
	{
		//Send data through CMD line to be 1 
		// That is the SD card is busy
		ack = 0;
	}
	else
	{
		//Send data through CMD Line to be 0
		// That is the SD Card is ready to be read
		ack = 1;
	}
}
DEFINE_THREAD(read_data_request_ack);

//SD_Card_read_pipe
void SD_Card_read_pipe(uint64_t Starting_address)
{
	while(1)
	{
		// Here read data is to be modified to 
		// the location we want it to be read.
		uint64_t read_data; // Through the 4 DAT Lines
		if(SD_abort == 1 )
		{
			break;
		}
	}
}

//Write function
void write_data_request()
{
	//CMD line request provided
	if (ack == 1)
	{
		write_data_request_ack(1);
		//int wait_for_free_SD();
	}	
	else
	{
		write__data_request_ack(0);
		SD_Busy = 1;
		//Write data through DAT LINES
		SD_Card_write_pipe(Starting_Data_write_location);
	}	
}
DEFINE_THREAD(write_data_request);

//Write Acknowledge function
void write_data_request_ack(uint1_t SD_Busy)
{
	if(SD_Busy == 1 ) 
	{
		//Send data through CMD line to be 1 
		// That is the SD card is busy
		ack = 0;
	}
	else
	{
		//Send data through CMD Line to be 0
		// That is the SD Card is ready to be written
		ack = 1;
	}
}
DEFINE_THREAD(write_data_request_ack);

//SD_Card_write_pipe
void SD_Card_write_pipe(uint64_t Starting_address)
{
	while(1)
	{
		// Here write data is to be modified to 
		// the location we want it to be written.
		uint64_t write_data; // Through the 4 DAT Lines
		if(SD_abort == 1 )
		{
			break;
		}
	}
}
