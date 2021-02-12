#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>

#ifdef AA2C
#include "aa_c_model.h" 
#else
#include "vhdlCStubs.h"
#endif

#define MESSAGE_ARRAY_LENGTH 40

void Sender()
{
    while(1)
    {
        int i;
        for(i=0;i<MESSAGE_ARRAY_LENGTH;i++)
        {
            uint64_t message_val = 824633720831 + i;
            write_uint64("SENT MESSSAGE IS:",message_val);
        }
    }
}

void Receiver()
{
    while (1)
    {
        int i;
        for(i=0;i< MESSAGE_ARRAY_LENGTH;i++)
        {
            uint8_t generated_CRC = read_uint8("CRC EQUIVALENT");
            fprintf(stdout,"CRC_EQUIVALENT",generated_CRC);
        }
    }
}

DEFINE_THREAD(Sender);
DEFINE_THREAD(Receiver);

int main(int argc, char* argv[])
{

    if(argc < 2)
	{
		fprintf(stderr,"Usage: %s [trace-file]\n trace-file=null for no trace, stdout for stdout\n",
				argv[0]);
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

    #ifdef AA2C
    init_pipe_handler();
    start_daemons (fp,0);
    #endif

    PTHREAD_DECL(Receiver);
    PTHREAD_CREATE(Receiver);

    PTHREAD_DECL(Sender);
    PTHREAD_CREATE(Sender);

    return 0;
    
}

