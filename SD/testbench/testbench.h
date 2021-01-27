/************************** Constant Definitions *****************************/
#define BlockSize 0x04
#define BlockCount 0x06
#define Arguement 0x08
#define Transfer 0x0c
#define Command 0x0e
#define Response0 0x10
#define Response2 0x14
#define Response4 0x18
#define Response6 0x1c
#define BufferData 0x20
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

#define SDBase 0xffff3300 // SD Base Address.


/******************************* Function Prototypes **********************************/
int ReadWriteSDHCRegister(long int rwbar, long int bytemask, long int phyAdd, int data);
// Performs read/write operations on SDHC Register Set.
//
// Returns 0 as acknowledgement if write operation is performed on any 
// of the register else returns the data in case of read operation.
//
//        VARIABLES           PURPOSE
//          rwbar          Write=0,Read=1
//         bytemask     Masks the byte if unused.
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
//        VARIABLES             PURPOSE
//          data               

int ExecuteInitializationSequence();
//   Sends a sequence of commands required to initialize
//   the SD Card.
//
//   Returns 0 if no error is encountered throughout the
//   process else 1.

int PerformTuningSequence();
//   Sends the 'execute tuning command' for 40 times
//   until the card is tuned to the Sampling 
//   Clock Edges. 
//
//   Returns 0 if sampling point is obtained else 1. 

void SendGeneralCommand(int n);
// Sends General Command to SDcard.
//
//      VARIABLE     PURPOSE
//        n       Sends General
//                  CommandID       
                
void SendApplicationSpecificCommand(int n);
// Sends Application Specific Command to SDCard. 
//
//        VARIABLE          PURPOSE
//           n         Sends Application
//                    Specific Command ID

int WriteSingleOrMultiple512BytesBlock(int bsize, int bcount);
// Function to write single and multiple blocks of 512bytes.
//        VARIABLE           PURPOSE
//         bsize          Sets the size of
//                        individual blocks
//         bcount         Provides the number
//                        of blocks to be written

int ReadSingleOrMultiple512BytesBlock(int bsize, int bcount);
// Function to read single and multiple blocks of 512bytes.
//        VARIABLE           PURPOSE
//         bsize          Sets the size of
//                        individual blocks
//         bcount         Provides the number
//                        of blocks to be read
