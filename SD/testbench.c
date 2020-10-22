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
#define resp6 0x1e
#define bufferdata 0x20
#define present 0x24
#define capa 0x40


#define SD_Base 0x00//SD base address
  

#define write_data_length 74
#define read_data_length 33

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
	//Test single block write-T2
	//Test single block read-T3
	//Test multiple block write-T4
	//Test multiple block read-T5
	return 0;
}

