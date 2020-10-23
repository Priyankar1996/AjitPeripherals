#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>
#include <stdbool.h>

typedef bool uint1_t;
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
  

//#define write_data_length 74
//#define read_data_length 33

void request_pipe_write()
{
	//int  request_pipe_write_data[write_data_length];
	/*Bit 73: lock bit
          Bit 72: read/write-bar
          Bits 71-68: Byte-mask
	  Bits 67-32: Physical address
          Bits 31- 0: Write-data*/
	uint1_t lock bit;
	uint1_t RW;
	uint8_t byte_mask;
	uint8_t address1;
	uint32_t address0;
	uint32_t wdata;
	uint1_t request_pipe_write_req;
	uint1_t request_pipe_write_ack;
	

}
DEFINE_THREAD(request_pipe_write);

void response_pipe_read()
{
	
	//int response_pipe_read_data[read_data_length];
	/*Bits 32: Error-bit
	  Bits 31-0: Read-Data*/
	uint1_t error_bit;
	uint32_t rdata;
	uint8_t response_pipe_read_req;
	uint8_t response_pipe_read_ack;



}
DEFINE_THREAD(response_pipe_read);

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
	//
	return 0;
}

