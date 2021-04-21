#include <stdlib.h>
#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <Pipes.h>
#include <SocketLib.h>
void RW1C(uint8_t data,uint8_t address);
void command_generator(uint8_t* normalInterruptStatusVar1,uint8_t* normalInterruptStatusVar2,uint8_t* errorInterruptStatusVar1,uint8_t* errorInterruptStatusVar2,uint8_t* dataErrorInterruptStatusVar1,uint8_t* dataTransferComplete);
void global_storage_initializer_();
void sdhc_daemon();
void sdhc_register_write(uint8_t address,uint8_t data);
