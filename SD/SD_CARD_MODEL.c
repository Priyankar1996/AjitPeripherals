// SD Card model for SD Card Host controller:
// Authors: Ajinkya.S.Raghuwanshi, Deval.Patel, Priyankar. Sarkaar, Arghey. Dev
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
#include <string.h>
##include <stdio.h>


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




// Now creating the register for the SD card











// Memory
//Here also for SD model we can set variable starting memory location
#define SD_CARD_StartingMemory 0x4F000000

// Ending address of SD card
#define SD_CARD_EndingMemory 0x4FFFFFFF

//SD Card variable
int SD_Busy 0
int ack 0
int SD_abort 0
int CM_Busy 0

// SD CARD PINS
// int CMD;
// int DAT0;
// int DAT1;
// int DAT2;
// int DAT3;
int SD_CLOCK;

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
    SD_Busy = 1;
    CM_Busy = 1;
    ack = 1;
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


// Now we work on the responses
// R1: response
void r1_write()
{
    uint64_t COMMAND_COMPLETE_R1 = (0|0|(COMMAND<<40)|(CARD_STATUS<<8)|1|0|1|0|1|0|0|1); // Here the segment of 1010100 is the CRC before 1
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",(COMMAND_COMPLETE_R1<<16));
    SD_Busy = 0;
    CM_Busy = 0;

}

// R1b: response
void r1b_write()
{
    uint64_t COMMAND_COMPLETE_R1B = (0|0|(COMMAND<<40)|(CARD_STATUS<<8)|1|0|1|0|1|0|0|1); // Here the segment of 1010100 is the CRC before 1
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",(COMMAND_COMPLETE_R1B<<16));
    SD_Busy = 0;
    CM_Busy = 0;
    write_uint1_n{"DAT0",1};
    write_uint1_n{"DAT1",1};
    write_uint1_n{"DAT2",1};
    write_uint1_n{"DAT3",1};

}

// R2: response
void r2_write()
{
    // here we named the CSD register values as CSD_register
    uint64_t CSD_register1 = (CSD_register>>64);
    uint64_t CSD_register2 = (CSD_register<<64);
    uint8_t COMMAND_COMPLETE_R21 = (0|0|1|1|1|1|1|1);
    uint64_t COMMAND_COMPLETE_R22 = CSD_register1;
    uint64_t COMMAND_COMPLETE_R23 = CSD_register2;
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",COMMAND_COMPLETE_R21);
    write_uint1_n("CMD",COMMAND_COMPLETE_R22);
    write_uint1_n("CMD",COMMAND_COMPLETE_R23);
    SD_Busy = 0;
    CM_Busy = 0;

}

// R3: response
void r3_write()
{
    uint64_t COMMAND_COMPLETE_R3 = (0|0|1|1|1|1|1|1|(OCR_register<<8)|1|1|1|1|1|1|1|1); // Here the segment of 1010100 is the CRC before 1
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",(COMMAND_COMPLETE_R3<<16));
    SD_Busy = 0;
    CM_Busy = 0;

}


// R6: response
void r6_write()
{
    // here we named the CSR register values as CSR_register
    // i don't know if uint1_t works
    // but how to take a single bit
    uint2_t CSR_register2223 = (8>>CSR_register<<22);
    uint1_t CSR_register19 = (12>> CSR_register<<19);
    uint16_t CSR_register12 = (CSR_register>>16);
    uint64_t COMMAND_COMPLETE_R6 = (0|0|0|0|0|0|1|1|CSR_register2223|CSR_register19|(CSR_register12>>3)|1|0|1|0|1|0|0|1);
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",COMMAND_COMPLETE_R6);
    SD_Busy = 0;
    CM_Busy = 0;

}

// R7: response
void r7_write()
{
    uint32_t reserved18 = 0;
    // I have to write the voltage_accepted and the echo_check_pattern variable
    uint4_t = voltage_accepted = 0;
    uint8_t echo_check_pattern = 0;
    uint64_t COMMAND_COMPLETE_R7 = (0|0|0|0|1|0|0|0|(reserved18<<14)|0|0|voltage_accepted|echo_check_pattern|1|0|1|0|1|0|0|1);
    // writing the responses (not sure if it will work)
    // To be thought about if a loop is required or it will do
    // write_uint1_n is a valid function is to be verified
    write_uint1_n("CMD",COMMAND_COMPLETE_R3);
    SD_Busy = 0;
    CM_Busy = 0;

}
