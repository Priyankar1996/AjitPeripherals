// LIST OF REGISTERS TO BE USED
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

int ReadWriteSDHCRegisters(long int rwbar, long int bytemask, long int phyAdd, int data);
/* Performs read/write operations on SDHC Registers
        VARIABLES           PURPOSE
          rwbar          Write=0,Read=1
         bytemask     Masks the byte if unused.
          phyAdd       Points to the location 
                        of the register file.
           data       Stores the data to be written
                        into the registers.*/ 
         

void CheckInterrupt(int data);
/* Checks the 'SDHC_to_IRC_INT' line. 

   Interrupts are set when the corresponding 
   bits in the 'InterruptStatusEnable' and 
   'InterruptSignaLEnable' Registers are asserted to 1. */                  

int Initialization();
/* Initialises the SD card*/

int tuning();
/* Provides a tuning block pattern for UHS modes
   (UHS50 and UHS104 only)*/

void SendCMD(int n);
/* Sends General Command to SDcard.
      VARIABLE     PURPOSE
        n       Sends CommandID */       
                
void SendACMD(int n);
/* Sends Application Specific Command to SDCard. 
        VARIABLE          PURPOSE
           n         Sends App.Command ID */

int BlockWrite(int bsize, int bcount);
/* Function to write singla and multiple blocks.
        VARIABLE           PURPOSE
         bsize          Sets the size of
                        individual blocks
         bcount         Provides the number
                        of blocks to be written*/

int BlockRead(int bsize, int bcount);
/* Function to read singla and multiple blocks.
        VARIABLE           PURPOSE
         bsize          Sets the size of
                        individual blocks
         bcount         Provides the number
                        of blocks to be read*/
