#include <pthread.h>
#include <signal.h>
#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <pipeHandler.h>

// R1 (Status) values
#define ST_OUT_OF_RANGE      0x80000000  // 31   E
#define ST_ADDRESS_ERROR     0x40000000  // 30   E
#define ST_BLOCK_LEN_ERROR   0x20000000  // 29   E
#define ST_ERASE_SEQ_ERROR   0x10000000  // 28   E
#define ST_ERASE_PARAM_ERROR 0x08000000  // 27   E
#define ST_WP_VIOLATION      0x04000000  // 26   E
#define ST_CARD_IS_LOCKED    0x02000000  // 25   E
#define ST_LOCK_UNLOCK_FAIL  0x01000000  // 24   E
#define ST_COM_CRC_ERROR     0x00800000  // 23   E
#define ST_ILLEGAL_COMMAND   0x00400000  // 22   E
#define ST_CARD_ECC_FAILED   0x00200000  // 21   E
#define ST_CC_ERROR          0x00100000  // 20   E
#define ST_ERROR             0x00080000  // 19   E
#define ST_CSD_OVERWRITE     0x00010000  // 16   E
#define ST_WP_ERASE_SKIP     0x00008000  // 15   E
#define ST_CARD_ECC_DISABLED 0x00004000  // 14   E
#define ST_ERASE_RESET       0x00002000  // 13   E
#define ST_CARD_STATE        0x00001e00  // 12:9
#define ST_READY_FOR_DATA    0x00000100  // 8
#define ST_APP_CMD           0x00000020  // 5
#define ST_AKE_SEQ_ERROR     0x00000004  // 3    E

//CURRENT_STATE of the  card status
#define INACTIVE_STATE 111
#define IDLE_STATE 0
#define READY_STATE 1
#define IDENT_STATE 2
#define STBY_STATE 3
#define TRAN_STATE 4
#define DATA_STATE 5
#define RCV_STATE 6
#define PRG_STATE 7
#define DIS_STATE 8

// Response types.
#define RESP_NO    0     // No response
#define RESP_R1    1     // 48  RESP0    contains card status
#define RESP_R1b  11     // 48  RESP0    contains card status, data line indicates busy
#define RESP_R2I   2     // 136 RESP0..3 contains 128 bit CID shifted down by 8 bits as no CRC
#define RESP_R2S  12     // 136 RESP0..3 contains 128 bit CSD shifted down by 8 bits as no CRC
#define RESP_R3    3     // 48  RESP0    contains OCR register
#define RESP_R6    6     // 48  RESP0    contains RCA and status bits 23,22,19,12:0
#define RESP_R7    7     // 48  RESP0    contains voltage acceptance and check pattern

#define RCA_NO     1
#define RCA_YES    2
//Global Variables------------------------------------
int writeAddress=0,RCA=0,OCR;
//-----------------------------------
typedef struct SDCommand
  {
  const char* name;
  unsigned long int code;
  unsigned char resp;
  unsigned char rca;
  } SDCommand;


static SDCommand sdCommandTable[] =
  {
  { "GO_IDLE_STATE", 0x000000000000, RESP_NO , RCA_NO},
  { "ALL_SEND_CID" , 0x020000000000, RESP_R2I, RCA_NO},
  { "SEND_REL_ADDR", 0x030000000000, RESP_R6 , RCA_NO},
  { "SET_DSR"      , 0x040000000000, RESP_NO , RCA_NO},
  { "SWITCH_FUNC"  , 0x060000000000, RESP_R1 , RCA_NO},
  { "CARD_SELECT"  , 0x070000000000, RESP_R1b, RCA_YES},
  { "SEND_IF_COND" , 0x080000000000, RESP_R7 , RCA_NO},
  { "SEND_CSD"     , 0x090000000000, RESP_R2S, RCA_YES},
  { "SEND_CID"     , 0x0A0000000000, RESP_R2I, RCA_YES},
  { "VOLT_SWITCH"  , 0x0B0000000000, RESP_R1 , RCA_NO},
  { "STOP_TRANS"   , 0x0C0000000000, RESP_R1b, RCA_NO},
  { "SEND_STATUS"  , 0x0D0000000000, RESP_R1 , RCA_YES},
  { "GO_INACTIVE"  , 0x0F0000000000, RESP_NO , RCA_YES},
  { "SET_BLOCKLEN" , 0x100000000000, RESP_R1 , RCA_NO},
  { "READ_SINGLE"  , 0x110000000000, RESP_R1 , RCA_NO},
  { "READ_MULTI"   , 0x120000000000, RESP_R1 , RCA_NO},
  { "SEND_TUNING"  , 0x130000000000, RESP_R1 , RCA_NO},
  { "SPEED_CLASS"  , 0x140000000000, RESP_R1b, RCA_NO},
  { "SET_BLOCKCNT" , 0x170000000000, RESP_R1 , RCA_NO},
  { "WRITE_SINGLE" , 0x180000000000, RESP_R1 , RCA_NO},
  { "WRITE_MULTI"  , 0x190000000000, RESP_R1 , RCA_NO},
  { "PROGRAM_CSD"  , 0x1B0000000000, RESP_R1 , RCA_NO},
  { "SET_WRITE_PR" , 0x1C0000000000, RESP_R1b, RCA_NO},
  { "CLR_WRITE_PR" , 0x1D0000000000, RESP_R1b, RCA_NO},
  { "SND_WRITE_PR" , 0x1E0000000000, RESP_R1 , RCA_NO},
  { "ERASE_WR_ST"  , 0x200000000000, RESP_R1 , RCA_NO},
  { "ERASE_WR_END" , 0x210000000000, RESP_R1 , RCA_NO},
  { "ERASE"        , 0x260000000000, RESP_R1b, RCA_NO},
  { "LOCK_UNLOCK"  , 0x2A0000000000, RESP_R1 , RCA_NO},
  { "APP_CMD"      , 0x370000000000, RESP_R1 , RCA_NO},
  { "GEN_CMD"      , 0x380000000000, RESP_R1 , RCA_NO},

  // APP commands must be prefixed by an APP_CMD.
  { "SET_BUS_WIDTH", 0x060000000000, RESP_R1 , RCA_NO},
  { "SD_STATUS"    , 0x0D0000000000, RESP_R1 , RCA_YES}, // RCA???
  { "SEND_NUM_WRBL", 0x160000000000, RESP_R1 , RCA_NO},
  { "SEND_NUM_ERS" , 0x170000000000, RESP_R1 , RCA_NO},
  { "SD_SENDOPCOND", 0x290000000000, RESP_R3 , RCA_NO},
  { "SET_CLR_DET"  , 0x2A0000000000, RESP_R1 , RCA_NO},
  { "SEND_SCR"     , 0x330000000000, RESP_R1 , RCA_NO},
  };

typedef struct SDDescriptor
  {
  // Static information about the SD Card.

  unsigned long int CID[2];
  unsigned long int CSD[2];
  unsigned int scr[2];
  unsigned int ocr;

  // Dynamic information.
  unsigned long int rca;
  unsigned long int cardState;//12:9 of status
  unsigned long int status;//32 bit staus to be sent in the response

  SDCommand* lastCmd;
  unsigned int lastArg;
  } SDDescriptor;

// The SD card descriptor.
static SDDescriptor sdCard;
static uint8_t CRC7_one(uint8_t t, uint8_t data) {
	const uint8_t g = 0x89;
	uint8_t i;

	t ^= data;
	for (i = 0; i < 8; i++) {
		if (t & 0x80) t ^= g;
		t <<= 1;
	}

	return t;
}
uint8_t* CRC_16(uint8_t * data, int length)
{
        uint8_t *crc;
        int i,count =0,temp;
        int inv;
        crc  = (uint8_t *)malloc(16 * sizeof(uint8_t));
        for(i=0;i<16;i++)
        {
                crc[i] = 0;
        }
        for(i=0;i<length;i++)
        {
                inv = data[i] ^ crc[15];
                crc[15] = crc[14];
                crc[14] = crc[13];
                crc[13] = crc[12];
                crc[12] = crc[11] ^ inv;
                crc[11] = crc[10];
                crc[10] = crc[9];
                crc[9] = crc[8];
                crc[8] = crc[7];
                crc[7] = crc[6];
                crc[6] = crc[5];
                crc[5] = crc[4] ^ inv;
                crc[4] = crc[3];
                crc[3] = crc[2];
                crc[2] = crc[1];
                crc[1] = crc[0];
                crc[0] = inv;
        }
        for(i=0;i<8;i++)
        {
                temp = crc[i];
                crc[i] = crc[15-i];
                crc[15-i]= temp;       
        }
        return crc;
}
void sdcard()
{
        int i,j,k;
        uint8_t command[48];
        unsigned long int commandBits=0;
        unsigned char resp;
        unsigned long int response;
        unsigned long int response40bits;
        uint8_t responsebit;
        long int temp;
        unsigned long long t;
        unsigned long long t2;
        unsigned long int commandIndex,argumentBits; 
        unsigned long int nextState,tempStatus,numberOfBlocks;
        uint8_t crc7=0, crc7Resp=0;
        unsigned long int data[2];
        unsigned int temp_ocr;
        uint8_t readStart,readStop;
        uint8_t dataBlock[4096];
        uint8_t dataBlock0[1024], dataBlock1[1024], dataBlock2[1024], dataBlock3[1024];
        uint8_t dataBlocks[100][4096];
        //uint8_t **dataBlocks = NULL;
        uint8_t CRC16[16];
        uint8_t* crc;
        int dataPointer = 0, datapt =0;
        long int rows;
        int busWidth;
       //dataBlocks = malloc(100 * sizeof(uint8_t *));
        //for(rows=0;rows<100;rows++)
        //        dataBlocks[i] = malloc(4096 * sizeof(uint8_t));
        sdCard.cardState = INACTIVE_STATE;
        sdCard.status = 0;
        sdCard.rca = 0x1;
        sdCard.CID[0]= 0x0353445353303847;
        sdCard.CID[1]= 0x803c023c6100e652;
        sdCard.CSD[0]=0;
        sdCard.CSD[1]=0;
        sdCard.ocr = 0x40ff8000;
        //CID[0]= 0x0353445353303847;
        //CID[1]= 0x803c023c6100e652;
        while (1)
        {
        crc7 = 0;
        crc7Resp = 0;
        //Reading command line
        read_uint8_n("commandTx",command,48);
        //for(i=47;i>=0;i--)
        //        fprintf(stderr,"%x",command[i]);
        //fprintf(stderr,"\n");
        //from array to a single variable conversion
        for(i=0;i<48;i++)
                commandBits = ((commandBits<<1U) | command[i]);
        //Command Index calcuated
        commandIndex = (commandBits & 0x3f0000000000);
        argumentBits = (commandBits & 0x00ffffffff00) >> 8;
        //Checking CRC7 of the input command
        for(i=0;i<5;i++)
                crc7 = CRC7_one(crc7,(uint8_t)(commandBits>>(40U-(8*i))));       
        //fprintf(stderr,"CRC7 = %x\n",crc7);
        
        //Searching through the command table for a match in index
        j=0;
        while(1)
        {
                if(sdCommandTable[j].code == commandIndex)
                {
                        fprintf(stderr,"SD:Command=%d name=%s\n",(sdCommandTable[j].code >>40U),sdCommandTable[j].name);
                        resp = sdCommandTable[j].resp;
                        break;
                }
                else
                        j++;
        }
        //Card state transition
        switch (commandIndex)
        {
        case 0x000000000000:
                nextState = IDLE_STATE;
                break;
        case 0x020000000000:
                if(sdCard.cardState == READY_STATE)
                        nextState = IDENT_STATE;
                break;
        case 0x030000000000:
                if((sdCard.cardState == IDENT_STATE) ||(sdCard.cardState == STBY_STATE))
                        nextState = STBY_STATE;
                break;
        case 0x040000000000:
                if(sdCard.cardState == STBY_STATE)
                        nextState = STBY_STATE;
                break;
        case 0x070000000000:
                if(sdCard.cardState == STBY_STATE)
                        nextState = TRAN_STATE;
                else if(sdCard.cardState == DIS_STATE)
                        nextState = PRG_STATE;
                break;
        case 0x080000000000:
                if(sdCard.cardState == IDLE_STATE)
                        nextState = IDLE_STATE;
                break;
        case 0x090000000000:
                if(sdCard.cardState == STBY_STATE)
                        nextState = STBY_STATE;
                break;
        case 0x0A0000000000:
                if(sdCard.cardState == STBY_STATE)
                        nextState = STBY_STATE;
                break;
        case 0x0B0000000000:
                if(sdCard.cardState == READY_STATE)
                        nextState = READY_STATE;
                break;
        case 0x0C0000000000:
                if(sdCard.cardState == DATA_STATE)
                        nextState = TRAN_STATE;
                break;
        case 0x0D0000000000:
                if((sdCard.status & ST_APP_CMD) == 0)
                {
                        if((sdCard.cardState == STBY_STATE)||(sdCard.cardState == TRAN_STATE)|| (sdCard.cardState == DATA_STATE)|| (sdCard.cardState == RCV_STATE)|| (sdCard.cardState == PRG_STATE)||(sdCard.cardState == DIS_STATE))
                                nextState = sdCard.cardState;
                }
                else//APP_CMD
                {
                        if(sdCard.cardState == TRAN_STATE)
                                nextState = DATA_STATE;
                }
                break;
        case 0x0F0000000000:
                if((sdCard.cardState == STBY_STATE)||(sdCard.cardState == TRAN_STATE)|| (sdCard.cardState == DATA_STATE)|| (sdCard.cardState == RCV_STATE)|| (sdCard.cardState == PRG_STATE)||(sdCard.cardState == DIS_STATE))
                        nextState = INACTIVE_STATE;
                break;
        case 0x100000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = TRAN_STATE;
                break;
        case 0x110000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = DATA_STATE;
                break;
        case 0x120000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = DATA_STATE;
                break;
        case 0x130000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = DATA_STATE;
                break;
        case 0x140000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = PRG_STATE;
                break;
        case 0x170000000000:
                if((sdCard.status & ST_APP_CMD) == 0)
                {
                        numberOfBlocks = argumentBits;
                        if(sdCard.cardState == TRAN_STATE)
                                nextState = TRAN_STATE;
                }
                else//APP_CMD
                {
                        numberOfBlocks = argumentBits;
                        if(sdCard.cardState == TRAN_STATE)
                                nextState = TRAN_STATE;
                }
                break;
        case 0x180000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = RCV_STATE;
                break;
        case 0x190000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = RCV_STATE;
                break;
        case 0x1B0000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = RCV_STATE;
                break;
        case 0x1C0000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = PRG_STATE;
                break;
        case 0x1D0000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = PRG_STATE;
                break;
        case 0x1E0000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = DATA_STATE;
                break;
        case 0x200000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = TRAN_STATE;
                break;
        case 0x210000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = TRAN_STATE;
                break;
        case 0x260000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = PRG_STATE;
                break;
        case 0x2A0000000000:
                if(sdCard.cardState == TRAN_STATE)
                        nextState = RCV_STATE;
                break;
        case 0x370000000000:
                if((sdCard.cardState == IDLE_STATE)||(sdCard.cardState == STBY_STATE)||(sdCard.cardState == TRAN_STATE)|| (sdCard.cardState == DATA_STATE)|| (sdCard.cardState == RCV_STATE)|| (sdCard.cardState == PRG_STATE)||(sdCard.cardState == DIS_STATE))
                        nextState = sdCard.cardState;
                break;
        //ACMD
        case 0x060000000000:
                if(sdCard.cardState == TRAN_STATE)
                {
                        busWidth = (argumentBits & 0x3);
                        nextState = TRAN_STATE;
                }
                break;
        case 0x290000000000:
                if((commandBits & 0x0000ffff0000) == 0)
                {
                        //Inquiry ACMD41
                        if(sdCard.cardState == IDLE_STATE)
                                nextState = IDLE_STATE;
                }
                else
                {
                        if(((commandBits & 0x0000ffff0000)>> 8U )== (sdCard.ocr & 0x00ffff00))
                        {
                                
                                if(sdCard.cardState == IDLE_STATE)
                                {
                                        if((commandBits & 0x0000000100000000) != 0)//S18R
                                        {
                                                sdCard.ocr = sdCard.ocr | 0x81000000;//S18A and busy = 1
                                                nextState = READY_STATE;
                                        }
                                        else
                                        {
                                                sdCard.ocr = sdCard.ocr | 0x80000000;//S18A =0 and busy = 1
                                                nextState = READY_STATE;

                                        }
                                }
                        }
                        else
                        {
                                if(sdCard.cardState == IDLE_STATE)
                                        nextState = INACTIVE_STATE;
                        }
                }
                break;
        
        default:
                nextState = sdCard.cardState;
                sdCard.status = sdCard.status | ST_ILLEGAL_COMMAND;
                break;
        }



        //Response is defined here wrt the response type
        switch (resp)
        {
        case RESP_NO:
                break;
        case RESP_R1:
        case RESP_R1b:
                response40bits = 0x0|commandIndex|sdCard.status;
                for(i=0;i<5;i++)
                        crc7Resp = CRC7_one(crc7Resp,(uint8_t)(response40bits>>(40U-(8*i)))); 
                response = response40bits | crc7Resp | 0x1U;
                for(i=0;i<48;i++)
                {
                        temp =(response & 0x800000000000);
                        responsebit = (temp >> 47) & 0x1;
                        write_uint8("responseRx",responsebit);
                        fprintf(stderr,"%x",responsebit);
                        response = response << 1U;
                }
                if(resp == RESP_R1b)
                {
                        write_uint8("DAT0Rx",0x0);
                        write_uint8("DAT0Rx",0x1);
                }
                fprintf(stderr,"\n");
                break;
        case RESP_R2I:
        case RESP_R2S:
                if((commandIndex == 0x020000000000) || (commandIndex == 0x0A0000000000))
                {
                        data[1] = sdCard.CID[1]; data[0] = sdCard.CID[0];
                }
                else if(commandIndex == 0x090000000000)
                {
                        data[1] = sdCard.CSD[1]; data[0] = sdCard.CSD[0];
                }
                for(i=135;i>=0;i--)
                {
                        //fprintf(stderr,"debug\n");
                        if((i==135)||(i==134))
                        {
                                write_uint8("responseRx",0x0);
                                fprintf(stderr,"0");
                        }
                        else if ((i<=133)&&(i>=128))
                        {
                                write_uint8("responseRx",0x1);
                                fprintf(stderr,"1");
                        }
                        else if((i<=127)&&(i>=64))
                        {
                                t =(data[0] & 0x8000000000000000);
                                responsebit = (t >> 63) & 0x1;
                                write_uint8("responseRx",responsebit);
                                fprintf(stderr,"%x",responsebit);
                                data[0] = data[0] << 1U;
                        }
                        else if((i<=63)&&(i>=1))
                        {
                                t2 =(data[1] & 0x8000000000000000);
                                responsebit = (t2 >> 63) & 0x1;
                                write_uint8("responseRx",responsebit);
                                fprintf(stderr,"%x",responsebit);
                                data[1] = data[1] << 1U;
                        }
                        else
                                write_uint8("responseRx",0x1);
                }
                fprintf(stderr,"\n");
                break;
        case RESP_R3:
                temp_ocr = sdCard.ocr;
                for(i=47;i>=0;i--)
                {
                        //fprintf(stderr,"debug\n");
                        if((i==47)||(i==46))
                        {
                                write_uint8("responseRx",0x0);
                                fprintf(stderr,"0");
                        
                        }
                        else if ((i<=45)&&(i>=40))
                        {
                                write_uint8("responseRx",0x1);
                                fprintf(stderr,"1");
                        }
                        else if((i<=39)&&(i>=8))
                        {
                                t =(temp_ocr & 0x80000000);
                                responsebit = (t >> 31) & 0x1;
                                write_uint8("responseRx",responsebit);
                                fprintf(stderr,"%x",responsebit);
                                temp_ocr = temp_ocr << 1U;
                        }
                        else
                        {
                                write_uint8("responseRx",0x1);
                                fprintf(stderr,"1");
                        }
                }
                fprintf(stderr,"\n");
                break;
        case RESP_R6:
                response40bits = 0x0|commandIndex|(sdCard.rca <<24)| (sdCard.status & 0xffff00);
                for(i=0;i<5;i++)
                        crc7Resp = CRC7_one(crc7Resp,(uint8_t)(response40bits>>(40U-(8*i)))); 
                response = response40bits | crc7Resp | 0x1U;
                for(i=0;i<48;i++)
                {
                        temp =(response & 0x800000000000);
                        responsebit = (temp >> 47) & 0x1;
                        write_uint8("responseRx",responsebit);
                        fprintf(stderr,"%x",responsebit);
                        response = response << 1U;
                }
                fprintf(stderr,"\n");
                break;
        case RESP_R7:
                response40bits = 0x0 |(commandBits & 0x3fffffffff00);
                for(i=0;i<5;i++)
                        crc7Resp = CRC7_one(crc7Resp,(uint8_t)(response40bits>>(40U-(8*i)))); 
                response = response40bits | crc7Resp | 0x1U;
                for(i=0;i<48;i++)
                {
                        temp =(response & 0x800000000000);
                        responsebit = (temp >> 47) & 0x1;
                        write_uint8("responseRx",responsebit);
                        fprintf(stderr,"%x",responsebit);
                        response = response << 1U;
                }
                fprintf(stderr,"\n");
                break;
        default:
                break;
        }
        //CMD17 Single Read
        if(commandIndex == 0x110000000000)
        {
              dataPointer = argumentBits;
              if(busWidth == 0)
              {
                write_uint8("DAT0Rx",0x0);
                for(i=0;i<4096;i++)
                {
                         dataBlock[i] = dataBlocks[dataPointer][i]; 
                }
                write_uint8_n("DAT0Rx",dataBlock,4096);
                crc = CRC_16(dataBlock,4096);
                //for(i=0;i<16;i++)
                //{
                //         write_uint8("DAT0Rx",0x0);
                //}
                write_uint8_n("DAT0Rx",crc,16);
                write_uint8("DAT0Rx",0x1);
                nextState = PRG_STATE;
                nextState = TRAN_STATE;
                
              //for(i=0;i<4095;i++)
                //fprintf(stderr,"%x",dataBlock[i]);
                dataPointer ++;
              }
              else
              {
                       datapt = 0;
                       //fprintf(stderr,"\nStarts\n\n");
                        for(i=0;i<4096;i=i+8)
                        {
                                dataBlock[i] = dataBlocks[dataPointer][i];
                                dataBlock[i+1] = dataBlocks[dataPointer][i+1];
                                dataBlock[i+2] = dataBlocks[dataPointer][i+2];
                                dataBlock[i+3] = dataBlocks[dataPointer][i+3];
                                dataBlock[i+4] = dataBlocks[dataPointer][i+4];
                                dataBlock[i+5] = dataBlocks[dataPointer][i+5];
                                dataBlock[i+6] = dataBlocks[dataPointer][i+6];
                                dataBlock[i+7] = dataBlocks[dataPointer][i+7];
                                //fprintf(stderr,"%x%x%x%x%x%x%x%x\n",dataBlock[i],dataBlock[i+1],dataBlock[i+2],dataBlock[i+3],dataBlock[i+4],dataBlock[i+5],dataBlock[i+6],dataBlock[i+7]); 
                        }
                        //fprintf(stderr,"Here\n");
                        for(i=0;i<1024;i++)
                        {
                                dataBlock0[i] = dataBlock[datapt];
                                dataBlock1[i] = dataBlock[datapt+1];
                                dataBlock2[i] = dataBlock[datapt+2];
                                dataBlock3[i] = dataBlock[datapt+3];
                                datapt = datapt +4 ;
                        }
                        datapt =0;
                
                        write_uint8("DAT0Rx",0x0);
                        write_uint8_n("DAT0Rx",dataBlock0,1024);
                        crc = CRC_16(dataBlock0,1024);
                        write_uint8_n("DAT0Rx",crc,16);
                        //for(i=0;i<16;i++)
                        //{
                        //        write_uint8("DAT0Rx",0x0);
                        //}
                        
                        write_uint8("DAT0Rx",0x1);

                        write_uint8("DAT1Rx",0x0);
                        write_uint8_n("DAT1Rx",dataBlock1,1024);
                        crc = CRC_16(dataBlock1,1024);
                        write_uint8_n("DAT1Rx",crc,16);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT1Rx",0x0);
                        }*/
                        write_uint8("DAT1Rx",0x1);

                        write_uint8("DAT2Rx",0x0);
                        write_uint8_n("DAT2Rx",dataBlock2,1024);
                        crc = CRC_16(dataBlock2,1024);
                        write_uint8_n("DAT2Rx",crc,16);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT2Rx",0x0);
                        }*/
                        write_uint8("DAT2Rx",0x1);

                        write_uint8("DAT3Rx",0x0);
                        write_uint8_n("DAT3Rx",dataBlock3,1024);
                        crc = CRC_16(dataBlock3,1024);
                        write_uint8_n("DAT3Rx",crc,16);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT3Rx",0x0);
                        }*/
                        write_uint8("DAT3Rx",0x1);    
                        nextState = TRAN_STATE;
                dataPointer ++;
              }

        }
        //CMD18 Multiple Read
        if(commandIndex == 0x120000000000)
        {
              dataPointer = argumentBits;
              for(k=0;k<numberOfBlocks;k++)
              {
              if(busWidth == 0)
              {
                write_uint8("DAT0Rx",0x0);
                for(i=0;i<4096;i++)
                {
                         dataBlock[i] = dataBlocks[dataPointer][i]; 
                }
                write_uint8_n("DAT0Rx",dataBlock,4096);
                crc = CRC_16(dataBlock,4096);
                write_uint8_n("DAT0Rx",crc,16);
                /*for(i=0;i<16;i++)
                {
                         write_uint8("DAT0Rx",0x0);
                }*/
                write_uint8("DAT0Rx",0x1);
                nextState = PRG_STATE;
                nextState = TRAN_STATE;
                
              //for(i=0;i<4095;i++)
                //fprintf(stderr,"%x",dataBlock[i]);
                dataPointer ++;
              }
        
              else
              {
                       for(i=0;i<4095;i++)
                        {
                                dataBlock[i] = dataBlocks[dataPointer][i]; 
                        }
                        for(i=0;i<1024;i++)
                        {
                                dataBlock0[i] = dataBlock[datapt];
                                dataBlock1[i] = dataBlock[datapt+1];
                                dataBlock2[i] = dataBlock[datapt+2];
                                dataBlock3[i] = dataBlock[datapt+3];
                                datapt = datapt +4 ;
                        }
                        datapt =0;
                        write_uint8("DAT0Rx",0x0);
                        write_uint8_n("DAT0Rx",dataBlock0,1024);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT0Rx",0x0);
                        }*/
                        crc = CRC_16(dataBlock0,1024);
                        write_uint8_n("DAT0Rx",crc,16);
                        write_uint8("DAT0Rx",0x1);

                        write_uint8("DAT1Rx",0x0);
                        write_uint8_n("DAT1Rx",dataBlock1,1024);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT1Rx",0x0);
                        }*/
                        crc = CRC_16(dataBlock1,1024);
                        write_uint8_n("DAT1Rx",crc,16);
                        write_uint8("DAT1Rx",0x1);

                        write_uint8("DAT2Rx",0x0);
                        write_uint8_n("DAT2Rx",dataBlock2,1024);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT2Rx",0x0);
                        }*/
                        crc = CRC_16(dataBlock2,1024);
                        write_uint8_n("DAT2Rx",crc,16);
                        write_uint8("DAT2Rx",0x1);

                        write_uint8("DAT3Rx",0x0);
                        write_uint8_n("DAT3Rx",dataBlock3,1024);
                        /*for(i=0;i<16;i++)
                        {
                                write_uint8("DAT3Rx",0x0);
                        }*/
                        crc = CRC_16(dataBlock3,1024);
                        write_uint8_n("DAT3Rx",crc,16);
                        write_uint8("DAT3Rx",0x1);    
                        dataPointer++;
              }
              
              }

        }

        //ACMD23 Pre-Erase
        if((commandIndex == 0x170000000000) && ((sdCard.status & ST_APP_CMD)!=0))
        {
                for(i=dataPointer;i<numberOfBlocks; i++)
                {
                        for(k=0;k<4096;k++)
                                dataBlocks[i][k] = 0;
                }    
                fprintf(stderr,"SD:Erased\n");
        }
        
        //CMD24 Single Write
        if(commandIndex == 0x180000000000)
        {
                //fprintf(stderr,"bus width =%d\n",busWidth);
                dataPointer = argumentBits;
              if(busWidth == 0)
              {
                readStart = read_uint8("DAT0Tx");
                read_uint8_n("DAT0Tx",dataBlock,4096);
                read_uint8_n("DAT0Tx",CRC16,16);
                readStop = read_uint8("DAT0Tx");
                nextState = PRG_STATE;
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x1);
                nextState = TRAN_STATE;
                for(i=0;i<4096;i++)
                {
                        dataBlocks[dataPointer][i] = dataBlock[i]; 
                }
                //for(i=0;i<4096;i++)
                //   fprintf(stderr,"%x",dataBlock[i]);
                dataPointer ++;
              }
              else
              {
                      //fprintf(stderr,"Here at 24\n");
                readStart = read_uint8("DAT0Tx");
                read_uint8_n("DAT0Tx",dataBlock0,1024);
                read_uint8_n("DAT0Tx",CRC16,16);
                readStop = read_uint8("DAT0Tx");
                readStart = read_uint8("DAT1Tx");
                read_uint8_n("DAT1Tx",dataBlock1,1024);
                read_uint8_n("DAT1Tx",CRC16,16);
                readStop = read_uint8("DAT1Tx");
                readStart = read_uint8("DAT2Tx");
                read_uint8_n("DAT2Tx",dataBlock2,1024);
                read_uint8_n("DAT2Tx",CRC16,16);
                readStop = read_uint8("DAT2Tx");
                readStart = read_uint8("DAT3Tx");
                read_uint8_n("DAT3Tx",dataBlock3,1024);
                read_uint8_n("DAT3Tx",CRC16,16);
                readStop = read_uint8("DAT3Tx");
                nextState = PRG_STATE;
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x0);
                write_uint8("DAT0Rx",0x1);
                nextState = TRAN_STATE;
                datapt =0;
                for(i=0;i<1024;i++)
                {
                        dataBlock[datapt] = dataBlock0[i];
                        dataBlock[datapt+1] = dataBlock1[i];
                        dataBlock[datapt+2] = dataBlock2[i];
                        dataBlock[datapt+3] = dataBlock3[i];
                        datapt = datapt +4 ;
                        //fprintf(stderr,"%x%x%x%x\n",dataBlock0[i],dataBlock1[i],dataBlock2[i],dataBlock3[i]);
                }
                //fprintf(stderr,"blocks\n");
                datapt =0;
                for(i=0;i<4096;i++)
                {
                        dataBlocks[dataPointer][i] = dataBlock[i]; 
                }
               // for(i=0;i<4096;i=i+8)
               // {
               //    fprintf(stderr,"%x%x%x%x%x%x%x%x\n",dataBlock[i],dataBlock[i+1],dataBlock[i+2],dataBlock[i+3],dataBlock[i+4],dataBlock[i+5],dataBlock[i+6],dataBlock[i+7]);
               // }
                dataPointer ++;
                      //fprintf(stderr,"Here at the end\n");
              }

        }
        //CMD25 Multiple Write
        if(commandIndex == 0x190000000000)
        {
                dataPointer = argumentBits;
                for(k=0;k<numberOfBlocks;k++)
                {
                        if(busWidth == 0)
                        {
                               // fprintf(stderr,"Here at 25\n");
                        readStart = read_uint8("DAT0Tx");
                        read_uint8_n("DAT0Tx",dataBlock,4096);
                        read_uint8_n("DAT0Tx",CRC16,16);
                        readStop = read_uint8("DAT0Tx");
                        nextState = PRG_STATE;
                        write_uint8("DAT0Rx",0x0);
                        write_uint8("DAT0Rx",0x0);
                        write_uint8("DAT0Rx",0x0);
                        write_uint8("DAT0Rx",0x1);
                        nextState = TRAN_STATE;
                        for(i=0;i<4096;i++)
                        {
                                dataBlocks[dataPointer][i] = dataBlock[i]; 
                        }
                        //for(i=0;i<4096;i++)
                        //        fprintf(stderr,"%x",dataBlock[i]);
                        dataPointer ++;
                        }
                        else
                        {
                                readStart = read_uint8("DAT0Tx");
                                read_uint8_n("DAT0Tx",dataBlock0,1024);
                                read_uint8_n("DAT0Tx",CRC16,16);
                                readStop = read_uint8("DAT0Tx");
                                readStart = read_uint8("DAT1Tx");
                                read_uint8_n("DAT1Tx",dataBlock1,1024);
                                read_uint8_n("DAT1Tx",CRC16,16);
                                readStop = read_uint8("DAT1Tx");
                                readStart = read_uint8("DAT2Tx");
                                read_uint8_n("DAT2Tx",dataBlock2,1024);
                                read_uint8_n("DAT2Tx",CRC16,16);
                                readStop = read_uint8("DAT2Tx");
                                readStart = read_uint8("DAT3Tx");
                                read_uint8_n("DAT3Tx",dataBlock3,1024);
                                read_uint8_n("DAT3Tx",CRC16,16);
                                readStop = read_uint8("DAT3Tx");
                                nextState = PRG_STATE;
                                write_uint8("DAT0Rx",0x0);
                                write_uint8("DAT0Rx",0x0);
                                write_uint8("DAT0Rx",0x0);
                                write_uint8("DAT0Rx",0x1);
                                nextState = TRAN_STATE;
                                for(i=0;i<1024;i++)
                                {
                                        dataBlock[datapt] = dataBlock0[i];
                                        dataBlock[datapt+1] = dataBlock1[i];
                                        dataBlock[datapt+2] = dataBlock2[i];
                                        dataBlock[datapt+3] = dataBlock3[i];
                                        datapt = datapt + 4;
                                }
                                datapt =0;
                                for(i=0;i<4096;i++)
                                {
                                        dataBlocks[dataPointer][i] = dataBlock[i]; 
                                }
                                //for(i=0;i<4095;i++)
                                //fprintf(stderr,"%x",dataBlock[i]);
                                dataPointer ++;

                        }
                }

        }
        //fprintf(stderr,"\n");
        //State update
        sdCard.cardState = nextState;
        tempStatus = sdCard.status & (~ ST_CARD_STATE);
        sdCard.status = tempStatus | (sdCard.cardState << 9);
        //fprintf(stderr,"CRC check %x\n",(uint8_t)(commandBits & 0xfe));
        if(crc7 != (uint8_t)(commandBits & 0xfe))
        {       
                //fprintf(stderr,"Here\n");
                sdCard.status = sdCard.status | ST_COM_CRC_ERROR;
        }
        else
                sdCard.status = sdCard.status & (~ ST_COM_CRC_ERROR);
        if(commandIndex == 0x370000000000)
                sdCard.status = sdCard.status | ST_APP_CMD;
        else
                sdCard.status = sdCard.status & (~ ST_APP_CMD);
        //fprintf(stderr,"status = %lx\n card State = %lx\n",sdCard.status,sdCard.cardState);
        }
        
        

}