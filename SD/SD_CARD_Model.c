#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>
#include <string.h>

// Address location are optional for SD model here.
// But here in this define function we are giving the initial value of the register and not the
// location as I personally don't know how to create a register and will be considering the variable as
// register and using [pointer and address] for the address  related purpose

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

// Ending address of SD card
#define SD_CARD_EndingMemory 0x4FFFFFFF

//SD Card variable
#define SD_Busy 0
#define ack 0
#define SD_abort 0
#define CM_Busy 0

// SD CARD PINS
uint1_t CMD;
uint1_t DAT0;
uint1_t DAT1;
uint1_t DAT2;
uint1_t DAT3;
uint1_t SD_CLOCK;

// Command variable
uint32_t Command1;
uint16_t Command2;
uint64_t COMMAND;
uint8_t COMMAND_INDEX;
uint32_t ARGUMENT;

// Transfer functions

// Command Reading
void cmd_read()
{
  while (1) {
    no_cmd:if(CMD == '1')
              goto no_cmd;
                else
              break;
}
  for (uint8_t i = 0; i < 32; i++) {
      Command1[i] = CMD;
    }
  for (uint8_t i = 0; i < 16; i++) {
      Command2[i] = CMD;
    }

    COMMAND = command_complete(Command1,Command2);
    COMMAND_INDEX = (0|0|(COMMAND<<40));
    ARGUMENT = (COMMAND<<8);
    command_decode();
    goto no_cmd;
}
DEFINE_THREAD(cmd_read)

// Command completing
// creating the complete command of 48 bit by concatenating
// the 32 and 8 bits
uint64_t command_complete(uint32_t COM1, uint16_t COM2)
{
  char s1[40];
  char s2[20];

  // Convert both the integers to string
  sprintf(s1, "%d", COM1);
  sprintf(s2, "%d", COM2);

  // Concatenate both strings
  strcat(s1, s2);

  // Convert the concatenated string
  // to integer
  uint64_t Command = atoi(s1);
  return Command;
}

// Command decoder
// here we have to change COMMAND_INDEX  condition
// with appropriate opcode for command
void command_decode()
{
  if(COMMAND_INDEX == "CMD0")
  {
    CMD0();
  }
  else if (COMMAND_INDEX == "CMD2")
  {
    CMD2();
  }
  else if (COMMAND_INDEX == "CMD3")
  {
    CMD3();
  }
  else if (COMMAND_INDEX == "CMD4")
  {
    CMD4();
  }
  else if (COMMAND_INDEX == "CMD7")
  {
    CMD7();
  }
  else if (COMMAND_INDEX == "CMD8")
  {
    CMD8();
  }
  else if (COMMAND_INDEX == "CMD9")
  {
    CMD9();
  }
  else if (COMMAND_INDEX == "CMD10")
  {
    CMD10();
  }
  else if (COMMAND_INDEX == "CMD11")
  {
    CMD11();
  }
  else if (COMMAND_INDEX == "CMD12")
  {
    CMD12();
  }
  else if (COMMAND_INDEX == "CMD13")
  {
    CMD13();
  }
  else if (COMMAND_INDEX == "CMD15")
  {
    CMD15();
  }
  else if (COMMAND_INDEX == "CMD18")
  {
    CMD18();
  }
  else if (COMMAND_INDEX == "CMD19")
  {
    CMD19();
  }
  else if (COMMAND_INDEX == "CMD20")
  {
    CMD20();
  }
  else if (COMMAND_INDEX == "CMD23")
  {
    CMD23();
  }
  else if (COMMAND_INDEX == "CMD25")
  {
    CMD25();
  }
  else if (COMMAND_INDEX == "CMD27")
  {
    CMD27();
  }
  else if (COMMAND_INDEX == "CMD32")
  {
    CMD32();
  }
  else if (COMMAND_INDEX == "CMD33")
  {
    CMD33();
  }
  else if (COMMAND_INDEX == "CMD38")
  {
    CMD38();
  }
  else if (COMMAND_INDEX == "CM42")
  {
    CMD42();
  }
  else if (COMMAND_INDEX == "CMD55")
  {
    CMD55();
  }
  else if (COMMAND_INDEX == "CMD56")
  {
    CMD56();
  }
  else if (COMMAND_INDEX == "ACMD6")
  {
    ACMD6();
  }
  else if (COMMAND_INDEX == "ACMD13")
  {
    ACMD13();
  }
  else if (COMMAND_INDEX == "ACMD22")
  {
    ACMD22();
  }
  else if (COMMAND_INDEX == "ACMD23")
  {
    ACMD23();
  }
  else if (COMMAND_INDEX == "ACMD41")
  {
    ACMD41();
  }
  else if (COMMAND_INDEX == "ACMD51")
  {
    ACMD51();
  }
}






























































































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
