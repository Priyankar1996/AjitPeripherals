/************************** Constant Definitions *****************************/
//List of SDHC Registers.
#define BlockSize 0x04
#define BlockCount 0x06
#define Argument 0x08
#define Transfer 0x0c
#define Command 0x0e
#define Response0 0x10
#define Response2 0x14
#define Response4 0x18
#define Response6 0x1c
#define BufferDataPort 0x20
#define PresentState 0x24
#define HostControl 0x28
#define PowerControl 0x29
#define ClockControl 0x2C
#define SoftwareReset 0x2F
#define NormalInterruptStatus 0x30
#define ErrorInterruptStatus 0x32
#define NormalInterruptStatusEnable 0x34
#define ErrorInterruptStatusEnable 0x36
#define NormalInterruptSignalEnable 0x38
#define ErrorInterruptSignalEnable 0x3A
#define AutoCmdError 0x3C
#define HostControl2 0x3E
#define Capabilities 0x40
#define MaxCurrentCapabilities 72
#define PresetValue 96
#define HostControllerVersion 254

#define SDBase 0xff3300 // SD Base Address.
#define FixedBlockSize 128
#define MaxBlockCount 3


/******************************* Function Prototypes **********************************/
/**************************************************************************************/
int ReadWriteSDHCRegister(long int rwbar,int regSize, long int phyAdd, int data);
// Performs read/write operations on SDHC Register Set.
//
// Returns 0 as acknowledgement if write operation is performed on any 
// of the register else returns the data in case of read operation.
//
//        PARAMETERS           PURPOSE
//          rwbar          Write=0,Read=1
//         regSize      Tells the size of the register.
//          phyAdd       Points to the location 
//                        of the register file.
//           data       Stores the data to be written
//                        into the register.          

void EnableInterruptStatusRegistersAndCheckInterruptLine(int data);
//   Interrupts are set when the corresponding 
//   bits in the 'InterruptStatusEnable' and 
//   'InterruptSignaLEnable' Registers are asserted 
//   to 1.                  
//
//   Checks the 'SDHC_to_IRC_INT' line and print its 
//   corresponding status.
//
//        PARAMETER             PURPOSE
//          data             It specifies the interrupt 
//                          to be enabled. It is directly
//                          written into the 'InterruptStatusEnable'
//                          and 'InterruptSignalEnable' Registers

int ExecuteInitializationSequence();
//   Sends a sequence of commands required to initialize
//   the SD Card. Refer to pg.100-103 of 
//   SD Host Controller Simplified Specification Version 3.00.
//
//   Returns 0 if no error is encountered throughout the
//   process else 1.
//
//   Side effects :  1.RCA global variable value is read from response here.
//                   2.OCR global variable value is read from response here.

//int PerformTuningSequence();
//   Sends the 'execute tuning command' for 40 times
//   until the card is tuned to the Sampling 
//   Clock Edges. Refer to pg. 73 of 
//   SD Host Controller Simplified Specification Version 3.00.
//
//   Returns 0 if sampling point is obtained else 1. 

void SendGeneralCommand(int n);
// Sends General Command to SD Host controller.
// For sending command it writes to Argument, Block Size, Block Count, 
// Transfer and Command register. Refer to pg.107 of 
// SD Host Controller Simplified Specification Version 3.00.
//
//      PARAMETER     PURPOSE
//        n       Sends General
//                  CommandID     
//
                
void SendApplicationSpecificCommand(int n);
// Sends Application Specific Command to SD Host Controller. 
// For sending application specific command it writes to 
// Argument and Command register. Refer to pg.107 of 
// SD Host Controller Simplified Specification Version 3.00.
//
//        PARAMETER          PURPOSE
//           n         Sends Application
//                    Specific Command ID

int WriteSingleOrMultiple512BytesBlock(int blockCount, int * writeData);
// Function to write single and multiple blocks of 512bytes thorugh Buffer Data Port Register.
// Refer to page no. 111-112(Transaction using DAT(Data) line) of
// SD Host Controller Simplified Specification Version 3.00.
//
//         PARAMETER           PURPOSE
//         blockCount         Provides the number
//                          of blocks to be written
//
//  Returns 0 if blocks are written successfully otherwise 1
//
//  Side effect : writeAddress global variable value is declared here.

int ReadSingleOrMultiple512BytesBlock(int blockCount);
// Function to read single and multiple blocks of 512bytes through Buffer Data Port Register.
// Refer to page no. 111-112(Transaction using DAT(Data) line) of
// SD Host Controller Simplified Specification Version 3.00.
//
//         PARAMETER           PURPOSE
//         blockCount         Provides the number
//                           of blocks to be read
//
//    Returns 0 if blocks are read successfully otherwise 1

/*************************************************************************************/
