#include <vhdlCStubs.h>
void RW1C(uint8_t data,uint8_t address)
{
char buffer[4096];  char* ss;  sprintf(buffer, "call RW1C ");
append_int(buffer,2); ADD_SPACE__(buffer);
append_uint8_t(buffer,data); ADD_SPACE__(buffer);
append_uint8_t(buffer,address); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void command_generator(uint8_t* normalInterruptStatusVar1,uint8_t* normalInterruptStatusVar2,uint8_t* errorInterruptStatusVar1,uint8_t* errorInterruptStatusVar2,uint8_t* dataErrorInterruptStatusVar1,uint8_t* dataTransferComplete)
{
char buffer[4096];  char* ss;  sprintf(buffer, "call command_generator ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,6); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
append_int(buffer,8); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
*normalInterruptStatusVar1 = get_uint8_t(buffer,&ss);
*normalInterruptStatusVar2 = get_uint8_t(NULL,&ss);
*errorInterruptStatusVar1 = get_uint8_t(NULL,&ss);
*errorInterruptStatusVar2 = get_uint8_t(NULL,&ss);
*dataErrorInterruptStatusVar1 = get_uint8_t(NULL,&ss);
*dataTransferComplete = get_uint8_t(NULL,&ss);
return;
}
void global_storage_initializer_()
{
char buffer[4096];  char* ss;  sprintf(buffer, "call global_storage_initializer_ ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void sdhc_daemon()
{
char buffer[4096];  char* ss;  sprintf(buffer, "call sdhc_daemon ");
append_int(buffer,0); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
void sdhc_register_write(uint8_t address,uint8_t data)
{
char buffer[4096];  char* ss;  sprintf(buffer, "call sdhc_register_write ");
append_int(buffer,2); ADD_SPACE__(buffer);
append_uint8_t(buffer,address); ADD_SPACE__(buffer);
append_uint8_t(buffer,data); ADD_SPACE__(buffer);
append_int(buffer,0); ADD_SPACE__(buffer);
send_packet_and_wait_for_response(buffer,strlen(buffer)+1,"localhost",9999);
return;
}
