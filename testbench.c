#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>


#define write_data_length 74
#define read_data_length 33

void request_pipe_write()
{
	int  request_pipe_write_data[write_data_length];
	/*Bit 73: lock bit
          Bit 72: read/write-bar
          Bits 71-68: Byte-mask
	  Bits 67-32: Physical address
          Bits 31- 00: Write-data*/
	int request_pipe_write_req;
	int request_pipe_write_ack;
	

}
DEFINE_THREAD(request_pipe_write);

void response_pipe_read()
{
	int response_pipe_read_data[read_data_length];
	/*Bits 32: Error-bit
	  Bits 31-00: Read-Data*/
	int response_pipe_read_req;
	int response_pipe_read_ack;



}
DEFINE_THREAD(response_pipe_read);


int main()
{
	return 0;
}

