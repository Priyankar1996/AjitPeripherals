#include <pthread.h>
#include <pthreadUtils.h>
#include <Pipes.h>
#include <aa_c_model_internal.h>
#include <aa_c_model.h>
FILE* __report_log_file__ = NULL;
int __trace_on__ = 0;
void _set_trace_file(FILE* fp) {
__report_log_file__ = fp;
}
bit_vector _CRC16_CONST;
#define CRC16_CONST (_CRC16_CONST)

bit_vector _CRC_CONST;
#define CRC_CONST (_CRC_CONST)

bit_vector _ONE_1;
#define ONE_1 (_ONE_1)

bit_vector _ONE_2;
#define ONE_2 (_ONE_2)

bit_vector _ONE_8;
#define ONE_8 (_ONE_8)

bit_vector _ZERO_1;
#define ZERO_1 (_ZERO_1)

bit_vector _ZERO_16;
#define ZERO_16 (_ZERO_16)

bit_vector _ZERO_2;
#define ZERO_2 (_ZERO_2)

bit_vector _ZERO_32;
#define ZERO_32 (_ZERO_32)

bit_vector _ZERO_8;
#define ZERO_8 (_ZERO_8)

bit_vector _dataErrorInterruptStatus;
#define dataErrorInterruptStatus (_dataErrorInterruptStatus)

bit_vector _dataRxEnrty;
#define dataRxEnrty (_dataRxEnrty)

bit_vector _dataRxEnrty1;
#define dataRxEnrty1 (_dataRxEnrty1)

bit_vector _dataRxEnrty2;
#define dataRxEnrty2 (_dataRxEnrty2)

bit_vector _errorInterruptFlag1;
#define errorInterruptFlag1 (_errorInterruptFlag1)

bit_vector _errorInterruptFlag2;
#define errorInterruptFlag2 (_errorInterruptFlag2)

bit_vector _normalInterruptFlag1;
#define normalInterruptFlag1 (_normalInterruptFlag1)

bit_vector _normalInterruptFlag2;
#define normalInterruptFlag2 (_normalInterruptFlag2)

bit_vector _rxBufferPointer;
#define rxBufferPointer (_rxBufferPointer)

bit_vector _sdhcRegisters[256];
#define sdhcRegisters (_sdhcRegisters)

bit_vector _txBufferPointer;
#define txBufferPointer (_txBufferPointer)

void __init_aa_globals__() 
{
init_static_bit_vector(&(CRC16_CONST), 16);\
bit_vector_clear(&CRC16_CONST);\
CRC16_CONST.val.byte_array[0] = 32;\
CRC16_CONST.val.byte_array[1] = 16;\
init_static_bit_vector(&(CRC_CONST), 8);\
bit_vector_clear(&CRC_CONST);\
CRC_CONST.val.byte_array[0] = 137;\
register_pipe("DAT0Rx", 1024, 8, 0);\
register_pipe("DAT0Tx", 1024, 8, 0);\
register_pipe("DAT1Rx", 1024, 8, 0);\
register_pipe("DAT1Tx", 1024, 8, 0);\
register_pipe("DAT2Rx", 1024, 8, 0);\
register_pipe("DAT2Tx", 1024, 8, 0);\
register_pipe("DAT3Rx", 1024, 8, 0);\
register_pipe("DAT3Tx", 1024, 8, 0);\
init_static_bit_vector(&(ONE_1), 1);\
bit_vector_clear(&ONE_1);\
ONE_1.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_2), 2);\
bit_vector_clear(&ONE_2);\
ONE_2.val.byte_array[0] = 1;\
init_static_bit_vector(&(ONE_8), 8);\
bit_vector_clear(&ONE_8);\
ONE_8.val.byte_array[0] = 1;\
register_signal("SDHC_to_IRC_INT", 1);\
init_static_bit_vector(&(ZERO_1), 1);\
bit_vector_clear(&ZERO_1);\
init_static_bit_vector(&(ZERO_16), 16);\
bit_vector_clear(&ZERO_16);\
init_static_bit_vector(&(ZERO_2), 2);\
bit_vector_clear(&ZERO_2);\
init_static_bit_vector(&(ZERO_32), 32);\
bit_vector_clear(&ZERO_32);\
init_static_bit_vector(&(ZERO_8), 8);\
bit_vector_clear(&ZERO_8);\
register_pipe("commandTx", 4, 8, 0);\
register_pipe("dataBufferRx", 512, 8, 0);\
register_pipe("dataBufferTx", 512, 8, 0);\
init_static_bit_vector(&(dataErrorInterruptStatus), 8);\
init_static_bit_vector(&(dataRxEnrty), 1);\
init_static_bit_vector(&(dataRxEnrty1), 1);\
init_static_bit_vector(&(dataRxEnrty2), 1);\
register_pipe("dummy", 1, 8, 0);\
init_static_bit_vector(&(errorInterruptFlag1), 8);\
init_static_bit_vector(&(errorInterruptFlag2), 8);\
init_static_bit_vector(&(normalInterruptFlag1), 8);\
init_static_bit_vector(&(normalInterruptFlag2), 8);\
register_pipe("peripheral_bridge_to_sdhc_request", 1, 64, 0);\
register_pipe("responseRx", 4, 8, 0);\
init_static_bit_vector(&(rxBufferPointer), 10);\
init_static_bit_vector(&(sdhcRegisters[0]), 8);\
init_static_bit_vector(&(sdhcRegisters[1]), 8);\
init_static_bit_vector(&(sdhcRegisters[2]), 8);\
init_static_bit_vector(&(sdhcRegisters[3]), 8);\
init_static_bit_vector(&(sdhcRegisters[4]), 8);\
init_static_bit_vector(&(sdhcRegisters[5]), 8);\
init_static_bit_vector(&(sdhcRegisters[6]), 8);\
init_static_bit_vector(&(sdhcRegisters[7]), 8);\
init_static_bit_vector(&(sdhcRegisters[8]), 8);\
init_static_bit_vector(&(sdhcRegisters[9]), 8);\
init_static_bit_vector(&(sdhcRegisters[10]), 8);\
init_static_bit_vector(&(sdhcRegisters[11]), 8);\
init_static_bit_vector(&(sdhcRegisters[12]), 8);\
init_static_bit_vector(&(sdhcRegisters[13]), 8);\
init_static_bit_vector(&(sdhcRegisters[14]), 8);\
init_static_bit_vector(&(sdhcRegisters[15]), 8);\
init_static_bit_vector(&(sdhcRegisters[16]), 8);\
init_static_bit_vector(&(sdhcRegisters[17]), 8);\
init_static_bit_vector(&(sdhcRegisters[18]), 8);\
init_static_bit_vector(&(sdhcRegisters[19]), 8);\
init_static_bit_vector(&(sdhcRegisters[20]), 8);\
init_static_bit_vector(&(sdhcRegisters[21]), 8);\
init_static_bit_vector(&(sdhcRegisters[22]), 8);\
init_static_bit_vector(&(sdhcRegisters[23]), 8);\
init_static_bit_vector(&(sdhcRegisters[24]), 8);\
init_static_bit_vector(&(sdhcRegisters[25]), 8);\
init_static_bit_vector(&(sdhcRegisters[26]), 8);\
init_static_bit_vector(&(sdhcRegisters[27]), 8);\
init_static_bit_vector(&(sdhcRegisters[28]), 8);\
init_static_bit_vector(&(sdhcRegisters[29]), 8);\
init_static_bit_vector(&(sdhcRegisters[30]), 8);\
init_static_bit_vector(&(sdhcRegisters[31]), 8);\
init_static_bit_vector(&(sdhcRegisters[32]), 8);\
init_static_bit_vector(&(sdhcRegisters[33]), 8);\
init_static_bit_vector(&(sdhcRegisters[34]), 8);\
init_static_bit_vector(&(sdhcRegisters[35]), 8);\
init_static_bit_vector(&(sdhcRegisters[36]), 8);\
init_static_bit_vector(&(sdhcRegisters[37]), 8);\
init_static_bit_vector(&(sdhcRegisters[38]), 8);\
init_static_bit_vector(&(sdhcRegisters[39]), 8);\
init_static_bit_vector(&(sdhcRegisters[40]), 8);\
init_static_bit_vector(&(sdhcRegisters[41]), 8);\
init_static_bit_vector(&(sdhcRegisters[42]), 8);\
init_static_bit_vector(&(sdhcRegisters[43]), 8);\
init_static_bit_vector(&(sdhcRegisters[44]), 8);\
init_static_bit_vector(&(sdhcRegisters[45]), 8);\
init_static_bit_vector(&(sdhcRegisters[46]), 8);\
init_static_bit_vector(&(sdhcRegisters[47]), 8);\
init_static_bit_vector(&(sdhcRegisters[48]), 8);\
init_static_bit_vector(&(sdhcRegisters[49]), 8);\
init_static_bit_vector(&(sdhcRegisters[50]), 8);\
init_static_bit_vector(&(sdhcRegisters[51]), 8);\
init_static_bit_vector(&(sdhcRegisters[52]), 8);\
init_static_bit_vector(&(sdhcRegisters[53]), 8);\
init_static_bit_vector(&(sdhcRegisters[54]), 8);\
init_static_bit_vector(&(sdhcRegisters[55]), 8);\
init_static_bit_vector(&(sdhcRegisters[56]), 8);\
init_static_bit_vector(&(sdhcRegisters[57]), 8);\
init_static_bit_vector(&(sdhcRegisters[58]), 8);\
init_static_bit_vector(&(sdhcRegisters[59]), 8);\
init_static_bit_vector(&(sdhcRegisters[60]), 8);\
init_static_bit_vector(&(sdhcRegisters[61]), 8);\
init_static_bit_vector(&(sdhcRegisters[62]), 8);\
init_static_bit_vector(&(sdhcRegisters[63]), 8);\
init_static_bit_vector(&(sdhcRegisters[64]), 8);\
init_static_bit_vector(&(sdhcRegisters[65]), 8);\
init_static_bit_vector(&(sdhcRegisters[66]), 8);\
init_static_bit_vector(&(sdhcRegisters[67]), 8);\
init_static_bit_vector(&(sdhcRegisters[68]), 8);\
init_static_bit_vector(&(sdhcRegisters[69]), 8);\
init_static_bit_vector(&(sdhcRegisters[70]), 8);\
init_static_bit_vector(&(sdhcRegisters[71]), 8);\
init_static_bit_vector(&(sdhcRegisters[72]), 8);\
init_static_bit_vector(&(sdhcRegisters[73]), 8);\
init_static_bit_vector(&(sdhcRegisters[74]), 8);\
init_static_bit_vector(&(sdhcRegisters[75]), 8);\
init_static_bit_vector(&(sdhcRegisters[76]), 8);\
init_static_bit_vector(&(sdhcRegisters[77]), 8);\
init_static_bit_vector(&(sdhcRegisters[78]), 8);\
init_static_bit_vector(&(sdhcRegisters[79]), 8);\
init_static_bit_vector(&(sdhcRegisters[80]), 8);\
init_static_bit_vector(&(sdhcRegisters[81]), 8);\
init_static_bit_vector(&(sdhcRegisters[82]), 8);\
init_static_bit_vector(&(sdhcRegisters[83]), 8);\
init_static_bit_vector(&(sdhcRegisters[84]), 8);\
init_static_bit_vector(&(sdhcRegisters[85]), 8);\
init_static_bit_vector(&(sdhcRegisters[86]), 8);\
init_static_bit_vector(&(sdhcRegisters[87]), 8);\
init_static_bit_vector(&(sdhcRegisters[88]), 8);\
init_static_bit_vector(&(sdhcRegisters[89]), 8);\
init_static_bit_vector(&(sdhcRegisters[90]), 8);\
init_static_bit_vector(&(sdhcRegisters[91]), 8);\
init_static_bit_vector(&(sdhcRegisters[92]), 8);\
init_static_bit_vector(&(sdhcRegisters[93]), 8);\
init_static_bit_vector(&(sdhcRegisters[94]), 8);\
init_static_bit_vector(&(sdhcRegisters[95]), 8);\
init_static_bit_vector(&(sdhcRegisters[96]), 8);\
init_static_bit_vector(&(sdhcRegisters[97]), 8);\
init_static_bit_vector(&(sdhcRegisters[98]), 8);\
init_static_bit_vector(&(sdhcRegisters[99]), 8);\
init_static_bit_vector(&(sdhcRegisters[100]), 8);\
init_static_bit_vector(&(sdhcRegisters[101]), 8);\
init_static_bit_vector(&(sdhcRegisters[102]), 8);\
init_static_bit_vector(&(sdhcRegisters[103]), 8);\
init_static_bit_vector(&(sdhcRegisters[104]), 8);\
init_static_bit_vector(&(sdhcRegisters[105]), 8);\
init_static_bit_vector(&(sdhcRegisters[106]), 8);\
init_static_bit_vector(&(sdhcRegisters[107]), 8);\
init_static_bit_vector(&(sdhcRegisters[108]), 8);\
init_static_bit_vector(&(sdhcRegisters[109]), 8);\
init_static_bit_vector(&(sdhcRegisters[110]), 8);\
init_static_bit_vector(&(sdhcRegisters[111]), 8);\
init_static_bit_vector(&(sdhcRegisters[112]), 8);\
init_static_bit_vector(&(sdhcRegisters[113]), 8);\
init_static_bit_vector(&(sdhcRegisters[114]), 8);\
init_static_bit_vector(&(sdhcRegisters[115]), 8);\
init_static_bit_vector(&(sdhcRegisters[116]), 8);\
init_static_bit_vector(&(sdhcRegisters[117]), 8);\
init_static_bit_vector(&(sdhcRegisters[118]), 8);\
init_static_bit_vector(&(sdhcRegisters[119]), 8);\
init_static_bit_vector(&(sdhcRegisters[120]), 8);\
init_static_bit_vector(&(sdhcRegisters[121]), 8);\
init_static_bit_vector(&(sdhcRegisters[122]), 8);\
init_static_bit_vector(&(sdhcRegisters[123]), 8);\
init_static_bit_vector(&(sdhcRegisters[124]), 8);\
init_static_bit_vector(&(sdhcRegisters[125]), 8);\
init_static_bit_vector(&(sdhcRegisters[126]), 8);\
init_static_bit_vector(&(sdhcRegisters[127]), 8);\
init_static_bit_vector(&(sdhcRegisters[128]), 8);\
init_static_bit_vector(&(sdhcRegisters[129]), 8);\
init_static_bit_vector(&(sdhcRegisters[130]), 8);\
init_static_bit_vector(&(sdhcRegisters[131]), 8);\
init_static_bit_vector(&(sdhcRegisters[132]), 8);\
init_static_bit_vector(&(sdhcRegisters[133]), 8);\
init_static_bit_vector(&(sdhcRegisters[134]), 8);\
init_static_bit_vector(&(sdhcRegisters[135]), 8);\
init_static_bit_vector(&(sdhcRegisters[136]), 8);\
init_static_bit_vector(&(sdhcRegisters[137]), 8);\
init_static_bit_vector(&(sdhcRegisters[138]), 8);\
init_static_bit_vector(&(sdhcRegisters[139]), 8);\
init_static_bit_vector(&(sdhcRegisters[140]), 8);\
init_static_bit_vector(&(sdhcRegisters[141]), 8);\
init_static_bit_vector(&(sdhcRegisters[142]), 8);\
init_static_bit_vector(&(sdhcRegisters[143]), 8);\
init_static_bit_vector(&(sdhcRegisters[144]), 8);\
init_static_bit_vector(&(sdhcRegisters[145]), 8);\
init_static_bit_vector(&(sdhcRegisters[146]), 8);\
init_static_bit_vector(&(sdhcRegisters[147]), 8);\
init_static_bit_vector(&(sdhcRegisters[148]), 8);\
init_static_bit_vector(&(sdhcRegisters[149]), 8);\
init_static_bit_vector(&(sdhcRegisters[150]), 8);\
init_static_bit_vector(&(sdhcRegisters[151]), 8);\
init_static_bit_vector(&(sdhcRegisters[152]), 8);\
init_static_bit_vector(&(sdhcRegisters[153]), 8);\
init_static_bit_vector(&(sdhcRegisters[154]), 8);\
init_static_bit_vector(&(sdhcRegisters[155]), 8);\
init_static_bit_vector(&(sdhcRegisters[156]), 8);\
init_static_bit_vector(&(sdhcRegisters[157]), 8);\
init_static_bit_vector(&(sdhcRegisters[158]), 8);\
init_static_bit_vector(&(sdhcRegisters[159]), 8);\
init_static_bit_vector(&(sdhcRegisters[160]), 8);\
init_static_bit_vector(&(sdhcRegisters[161]), 8);\
init_static_bit_vector(&(sdhcRegisters[162]), 8);\
init_static_bit_vector(&(sdhcRegisters[163]), 8);\
init_static_bit_vector(&(sdhcRegisters[164]), 8);\
init_static_bit_vector(&(sdhcRegisters[165]), 8);\
init_static_bit_vector(&(sdhcRegisters[166]), 8);\
init_static_bit_vector(&(sdhcRegisters[167]), 8);\
init_static_bit_vector(&(sdhcRegisters[168]), 8);\
init_static_bit_vector(&(sdhcRegisters[169]), 8);\
init_static_bit_vector(&(sdhcRegisters[170]), 8);\
init_static_bit_vector(&(sdhcRegisters[171]), 8);\
init_static_bit_vector(&(sdhcRegisters[172]), 8);\
init_static_bit_vector(&(sdhcRegisters[173]), 8);\
init_static_bit_vector(&(sdhcRegisters[174]), 8);\
init_static_bit_vector(&(sdhcRegisters[175]), 8);\
init_static_bit_vector(&(sdhcRegisters[176]), 8);\
init_static_bit_vector(&(sdhcRegisters[177]), 8);\
init_static_bit_vector(&(sdhcRegisters[178]), 8);\
init_static_bit_vector(&(sdhcRegisters[179]), 8);\
init_static_bit_vector(&(sdhcRegisters[180]), 8);\
init_static_bit_vector(&(sdhcRegisters[181]), 8);\
init_static_bit_vector(&(sdhcRegisters[182]), 8);\
init_static_bit_vector(&(sdhcRegisters[183]), 8);\
init_static_bit_vector(&(sdhcRegisters[184]), 8);\
init_static_bit_vector(&(sdhcRegisters[185]), 8);\
init_static_bit_vector(&(sdhcRegisters[186]), 8);\
init_static_bit_vector(&(sdhcRegisters[187]), 8);\
init_static_bit_vector(&(sdhcRegisters[188]), 8);\
init_static_bit_vector(&(sdhcRegisters[189]), 8);\
init_static_bit_vector(&(sdhcRegisters[190]), 8);\
init_static_bit_vector(&(sdhcRegisters[191]), 8);\
init_static_bit_vector(&(sdhcRegisters[192]), 8);\
init_static_bit_vector(&(sdhcRegisters[193]), 8);\
init_static_bit_vector(&(sdhcRegisters[194]), 8);\
init_static_bit_vector(&(sdhcRegisters[195]), 8);\
init_static_bit_vector(&(sdhcRegisters[196]), 8);\
init_static_bit_vector(&(sdhcRegisters[197]), 8);\
init_static_bit_vector(&(sdhcRegisters[198]), 8);\
init_static_bit_vector(&(sdhcRegisters[199]), 8);\
init_static_bit_vector(&(sdhcRegisters[200]), 8);\
init_static_bit_vector(&(sdhcRegisters[201]), 8);\
init_static_bit_vector(&(sdhcRegisters[202]), 8);\
init_static_bit_vector(&(sdhcRegisters[203]), 8);\
init_static_bit_vector(&(sdhcRegisters[204]), 8);\
init_static_bit_vector(&(sdhcRegisters[205]), 8);\
init_static_bit_vector(&(sdhcRegisters[206]), 8);\
init_static_bit_vector(&(sdhcRegisters[207]), 8);\
init_static_bit_vector(&(sdhcRegisters[208]), 8);\
init_static_bit_vector(&(sdhcRegisters[209]), 8);\
init_static_bit_vector(&(sdhcRegisters[210]), 8);\
init_static_bit_vector(&(sdhcRegisters[211]), 8);\
init_static_bit_vector(&(sdhcRegisters[212]), 8);\
init_static_bit_vector(&(sdhcRegisters[213]), 8);\
init_static_bit_vector(&(sdhcRegisters[214]), 8);\
init_static_bit_vector(&(sdhcRegisters[215]), 8);\
init_static_bit_vector(&(sdhcRegisters[216]), 8);\
init_static_bit_vector(&(sdhcRegisters[217]), 8);\
init_static_bit_vector(&(sdhcRegisters[218]), 8);\
init_static_bit_vector(&(sdhcRegisters[219]), 8);\
init_static_bit_vector(&(sdhcRegisters[220]), 8);\
init_static_bit_vector(&(sdhcRegisters[221]), 8);\
init_static_bit_vector(&(sdhcRegisters[222]), 8);\
init_static_bit_vector(&(sdhcRegisters[223]), 8);\
init_static_bit_vector(&(sdhcRegisters[224]), 8);\
init_static_bit_vector(&(sdhcRegisters[225]), 8);\
init_static_bit_vector(&(sdhcRegisters[226]), 8);\
init_static_bit_vector(&(sdhcRegisters[227]), 8);\
init_static_bit_vector(&(sdhcRegisters[228]), 8);\
init_static_bit_vector(&(sdhcRegisters[229]), 8);\
init_static_bit_vector(&(sdhcRegisters[230]), 8);\
init_static_bit_vector(&(sdhcRegisters[231]), 8);\
init_static_bit_vector(&(sdhcRegisters[232]), 8);\
init_static_bit_vector(&(sdhcRegisters[233]), 8);\
init_static_bit_vector(&(sdhcRegisters[234]), 8);\
init_static_bit_vector(&(sdhcRegisters[235]), 8);\
init_static_bit_vector(&(sdhcRegisters[236]), 8);\
init_static_bit_vector(&(sdhcRegisters[237]), 8);\
init_static_bit_vector(&(sdhcRegisters[238]), 8);\
init_static_bit_vector(&(sdhcRegisters[239]), 8);\
init_static_bit_vector(&(sdhcRegisters[240]), 8);\
init_static_bit_vector(&(sdhcRegisters[241]), 8);\
init_static_bit_vector(&(sdhcRegisters[242]), 8);\
init_static_bit_vector(&(sdhcRegisters[243]), 8);\
init_static_bit_vector(&(sdhcRegisters[244]), 8);\
init_static_bit_vector(&(sdhcRegisters[245]), 8);\
init_static_bit_vector(&(sdhcRegisters[246]), 8);\
init_static_bit_vector(&(sdhcRegisters[247]), 8);\
init_static_bit_vector(&(sdhcRegisters[248]), 8);\
init_static_bit_vector(&(sdhcRegisters[249]), 8);\
init_static_bit_vector(&(sdhcRegisters[250]), 8);\
init_static_bit_vector(&(sdhcRegisters[251]), 8);\
init_static_bit_vector(&(sdhcRegisters[252]), 8);\
init_static_bit_vector(&(sdhcRegisters[253]), 8);\
init_static_bit_vector(&(sdhcRegisters[254]), 8);\
init_static_bit_vector(&(sdhcRegisters[255]), 8);\
register_pipe("sdhc_to_peripheral_bridge_response", 1, 32, 0);\
init_static_bit_vector(&(txBufferPointer), 10);\
}
void _RW1C_(bit_vector* __pdata, bit_vector* __paddress)
{
MUTEX_DECL(_RW1C_series_block_stmt_65_c_mutex_);
MUTEX_LOCK(_RW1C_series_block_stmt_65_c_mutex_);
_RW1C_inner_inarg_prep_macro__; 
// 	current_data := sdhcRegisters[address] $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_71_c_macro_; 
_RW1C_branch_block_stmt_72_c_export_decl_macro_; 
{
// 		d7 := ( $slice data 7 7 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_76_c_macro_; 
// 		d6 := ( $slice data 6 6 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_80_c_macro_; 
// 		d5 := ( $slice data 5 5 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_84_c_macro_; 
// 		d4 := ( $slice data 4 4 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_88_c_macro_; 
// 		d3 := ( $slice data 3 3 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_92_c_macro_; 
// 		d2 := ( $slice data 2 2 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_96_c_macro_; 
// 		d1 := ( $slice data 1 1 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_100_c_macro_; 
// 		d0 := ( $slice data 0 0 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_104_c_macro_; 
// 		current_d7 := ( $slice current_data 7 7 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_108_c_macro_; 
// 		current_d6 := ( $slice current_data 6 6 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_112_c_macro_; 
// 		current_d5 := ( $slice current_data 5 5 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_116_c_macro_; 
// 		current_d4 := ( $slice current_data 4 4 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_120_c_macro_; 
// 		current_d3 := ( $slice current_data 3 3 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_124_c_macro_; 
// 		current_d2 := ( $slice current_data 2 2 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_128_c_macro_; 
// 		current_d1 := ( $slice current_data 1 1 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_132_c_macro_; 
// 		current_d0 := ( $slice current_data 0 0 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_136_c_macro_; 
// 		b0 := ( $mux d0 ZERO_1  current_d0 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_142_c_macro_; 
// 		b1 := ( $mux d1 ZERO_1  current_d1 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_148_c_macro_; 
// 		b2 := ( $mux d2 ZERO_1  current_d2 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_154_c_macro_; 
// 		b3 := ( $mux d3 ZERO_1  current_d3 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_160_c_macro_; 
// 		b4 := ( $mux d4 ZERO_1  current_d4 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_166_c_macro_; 
// 		b5 := ( $mux d5 ZERO_1  current_d5 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_172_c_macro_; 
// 		b6 := ( $mux d6 ZERO_1  current_d6 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_178_c_macro_; 
// 		b7 := ( $mux d7 ZERO_1  current_d7 )  $buffering 1// bits of buffering = 1. 
_RW1C_assign_stmt_184_c_macro_; 
// 		sdhcRegisters[address] := (((b7 && b6) && (b5 && b4)) && ((b3 && b2) && (b1 && b0))) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_202_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_205,8);\
bit_vector_clear(&konst_205);\
konst_205.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u8_u1_206,1);\
bit_vector_clear(&konst_205);\
konst_205.val.byte_array[0] = 48;\
bit_vector_equal(0, &(address), &(konst_205), &(EQ_u8_u1_206));\
if (has_undefined_bit(&EQ_u8_u1_206)) {fprintf(stderr, "Error: variable EQ_u8_u1_206 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_206));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_206)) { 
// 			normalInterruptFlag1 := (( ~ data ) & normalInterruptFlag1) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_212_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_216,8);\
bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 49;\
__declare_static_bit_vector(EQ_u8_u1_217,1);\
bit_vector_clear(&konst_216);\
konst_216.val.byte_array[0] = 49;\
bit_vector_equal(0, &(address), &(konst_216), &(EQ_u8_u1_217));\
if (has_undefined_bit(&EQ_u8_u1_217)) {fprintf(stderr, "Error: variable EQ_u8_u1_217 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_217));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_217)) { 
// 			normalInterruptFlag2 := (( ~ data ) & normalInterruptFlag2) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_223_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_227,8);\
bit_vector_clear(&konst_227);\
konst_227.val.byte_array[0] = 50;\
__declare_static_bit_vector(EQ_u8_u1_228,1);\
bit_vector_clear(&konst_227);\
konst_227.val.byte_array[0] = 50;\
bit_vector_equal(0, &(address), &(konst_227), &(EQ_u8_u1_228));\
if (has_undefined_bit(&EQ_u8_u1_228)) {fprintf(stderr, "Error: variable EQ_u8_u1_228 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_228));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_228)) { 
// 			errorInterruptFlag1 := (( ~ data ) & errorInterruptFlag1) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_234_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_238,8);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 51;\
__declare_static_bit_vector(EQ_u8_u1_239,1);\
bit_vector_clear(&konst_238);\
konst_238.val.byte_array[0] = 51;\
bit_vector_equal(0, &(address), &(konst_238), &(EQ_u8_u1_239));\
if (has_undefined_bit(&EQ_u8_u1_239)) {fprintf(stderr, "Error: variable EQ_u8_u1_239 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_239));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_239)) { 
// 			errorInterruptFlag2 := (( ~ data ) & errorInterruptFlag2) $buffering 1// bits of buffering = 8. 
_RW1C_assign_stmt_245_c_macro_; 
} 
else {
 ;
}
_RW1C_branch_block_stmt_72_c_export_apply_macro_;
}
_RW1C_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_RW1C_series_block_stmt_65_c_mutex_);
}
void RW1C(uint8_t data , uint8_t address )
{
_RW1C_outer_arg_decl_macro__;
_RW1C_( &__data,  &__address);
_RW1C_outer_op_xfer_macro__;
}


void _bigResponseWrite_(bit_vector* __pCID)
{
MUTEX_DECL(_bigResponseWrite_series_block_stmt_249_c_mutex_);
MUTEX_LOCK(_bigResponseWrite_series_block_stmt_249_c_mutex_);
_bigResponseWrite_inner_inarg_prep_macro__; 
_bigResponseWrite_branch_block_stmt_252_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 119
__declare_static_bit_vector(konst_287,8);\
bit_vector_clear(&konst_287);\
konst_287.val.byte_array[0] = 15;\
__declare_static_bit_vector(ULT_u8_u1_288,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 121
_bigResponseWrite_merge_stmt_254_c_preamble_macro_; 
// 			$phi k := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  next_k $on   $loopback 
 // type of target is $uint<8>
_bigResponseWrite_phi_stmt_255_c_macro_; 
// 			$phi temp := 			  CID $on   $entry 			  next_temp $on   $loopback 
 // type of target is $uint<120>
_bigResponseWrite_phi_stmt_260_c_macro_; 
_bigResponseWrite_merge_stmt_254_c_postamble_macro_; 
// 			address := (16  + k) $buffering 1// bits of buffering = 8. 
_bigResponseWrite_assign_stmt_269_c_macro_; 
// 			sdhcRegisters[address] := ( $slice temp 7 0 )  $buffering 1// bits of buffering = 8. 
_bigResponseWrite_assign_stmt_274_c_macro_; 
// 			next_temp := (temp >> 8 ) $buffering 1// bits of buffering = 120. 
_bigResponseWrite_assign_stmt_279_c_macro_; 
// 			$volatile next_k := (k + 1 ) $buffering 1
_bigResponseWrite_assign_stmt_284_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_287);\
konst_287.val.byte_array[0] = 15;\
bit_vector_less(0, &(next_k), &(konst_287), &(ULT_u8_u1_288));\
if (has_undefined_bit(&ULT_u8_u1_288)) {fprintf(stderr, "Error: variable ULT_u8_u1_288 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_288));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_288)) break;
} 
}
_bigResponseWrite_branch_block_stmt_252_c_export_apply_macro_;
}
_bigResponseWrite_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_bigResponseWrite_series_block_stmt_249_c_mutex_);
}
void _command_generator_(bit_vector*  __pnormalInterruptStatusVar1, bit_vector*  __pnormalInterruptStatusVar2, bit_vector*  __perrorInterruptStatusVar1, bit_vector*  __perrorInterruptStatusVar2, bit_vector*  __pdataErrorInterruptStatusVar1, bit_vector*  __pdataTransferComplete)
{
MUTEX_DECL(_command_generator_series_block_stmt_1813_c_mutex_);
MUTEX_LOCK(_command_generator_series_block_stmt_1813_c_mutex_);
_command_generator_inner_inarg_prep_macro__; 
_command_generator_branch_block_stmt_1820_c_export_decl_macro_; 
{
// 		argumentVal3 := sdhcRegisters[11 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1824_c_macro_; 
// 		argumentVal2 := sdhcRegisters[10 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1828_c_macro_; 
// 		argumentVal1 := sdhcRegisters[9 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1832_c_macro_; 
// 		argumentVal0 := sdhcRegisters[8 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1836_c_macro_; 
// 		command40bits := (((ZERO_1 && ONE_1) && (( $slice sdhcRegisters[15 ] 5 0 )  && argumentVal3)) && ((argumentVal2 && argumentVal1) && argumentVal0)) $buffering 1// bits of buffering = 40. 
_command_generator_assign_stmt_1853_c_macro_; 
// 		current_crc := ZERO_8 $buffering 1// bits of buffering = 8.  Orphaned statement with target current_crc ?? 
_command_generator_assign_stmt_1856_c_macro_; 
// 		$call generate_crc_7 (command40bits ) (crc7 ) 
_command_generator_call_stmt_1859_c_macro_; 
// 		commandbits := ((command40bits && crc7) && ONE_1) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1866_c_macro_; 
_command_generator_branch_block_stmt_1867_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 557
__declare_static_bit_vector(konst_1898,8);\
bit_vector_clear(&konst_1898);\
konst_1898.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u8_u1_1899,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 559
_command_generator_merge_stmt_1869_c_preamble_macro_; 
// 				$phi J := 				  ZERO_8 $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_1870_c_macro_; 
// 				$phi old_commandbits := 				  commandbits $on   $entry 				  new_commandbits $on   $loopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1874_c_macro_; 
_command_generator_merge_stmt_1869_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1883_c_macro_; 
// 				$volatile bit := ( $slice old_commandbits 47 47 )  $buffering 1
_command_generator_assign_stmt_1887_c_macro_; 
// 				commandTx := bit $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1890_c_macro_; 
// 				$volatile new_commandbits := (old_commandbits << 1 ) $buffering 1
_command_generator_assign_stmt_1895_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1898);\
konst_1898.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_1898), &(ULT_u8_u1_1899));\
if (has_undefined_bit(&ULT_u8_u1_1899)) {fprintf(stderr, "Error: variable ULT_u8_u1_1899 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_1899));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_1899)) break;
} 
}
_command_generator_branch_block_stmt_1867_c_export_apply_macro_;
}
// 		response_type := ( $slice sdhcRegisters[14 ] 1 0 )  $buffering 1// bits of buffering = 2. 
_command_generator_assign_stmt_1905_c_macro_; 
// 		dataPresentSelect := (sdhcRegisters[14 ] [] 5 ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1911_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1914,1);\
bit_vector_clear(&konst_1914);\
konst_1914.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_1915,1);\
bit_vector_clear(&konst_1914);\
konst_1914.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_1914), &(EQ_u1_u1_1915));\
if (has_undefined_bit(&EQ_u1_u1_1915)) {fprintf(stderr, "Error: variable EQ_u1_u1_1915 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1915));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1915)) { 
// 			txOrRX := (  $bitreduce |  (sdhcRegisters[12 ] & _h10 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1922_c_macro_; 
// 			presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1926_c_macro_; 
// 			presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1930_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1933,2);\
bit_vector_clear(&konst_1933);\
konst_1933.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_1934,1);\
bit_vector_clear(&konst_1933);\
konst_1933.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_1933), &NEQ_u2_u1_1934);\
if (has_undefined_bit(&NEQ_u2_u1_1934)) {fprintf(stderr, "Error: variable NEQ_u2_u1_1934 has undefined value (%s) at test point.\n", to_string(&NEQ_u2_u1_1934));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u2_u1_1934)) { 
// 			sdhcRegisters[37 ] := ( $mux txOrRX (presentState1Var | _h02 )  (presentState1Var | _h01 ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1945_c_macro_; 
} 
else {
 ;
}
// 			sdhcRegisters[36 ] := (presentState0Var | _h06 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1952_c_macro_; 
} 
else {
 ;
}
// $report (rsp resp 		 response_type response_type 		 dataPresentSelect dataPresentSelect )
_command_generator_stmt_1956_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 583
__declare_static_bit_vector(konst_1959,2);\
bit_vector_clear(&konst_1959);\
konst_1959.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_1960,1);\
__declare_static_bit_vector(konst_1962,2);\
bit_vector_clear(&konst_1962);\
konst_1962.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1963,1);\
__declare_static_bit_vector(OR_u1_u1_1964,1);\
bit_vector_clear(&konst_1959);\
konst_1959.val.byte_array[0] = 2;\
bit_vector_equal(0, &(response_type), &(konst_1959), &(EQ_u2_u1_1960));\
bit_vector_clear(&konst_1962);\
konst_1962.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1962), &(EQ_u2_u1_1963));\
bit_vector_or(&(EQ_u2_u1_1960), &(EQ_u2_u1_1963), &(OR_u1_u1_1964));\
if (has_undefined_bit(&OR_u1_u1_1964)) {fprintf(stderr, "Error: variable OR_u1_u1_1964 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_1964));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_1964)) { 
_command_generator_branch_block_stmt_1965_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 586
__declare_static_bit_vector(konst_2006,6);\
bit_vector_clear(&konst_2006);\
konst_2006.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u6_u1_2007,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 588
_command_generator_merge_stmt_1967_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<6>) 0  ) $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<6>
_command_generator_phi_stmt_1968_c_macro_; 
// 				$phi old_responsebits := 				  ($bitcast ($uint<48>) 0  ) $on   $entry 				  new_responsebits $on   $loopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1973_c_macro_; 
_command_generator_merge_stmt_1967_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1984_c_macro_; 
// 				responsebit := responseRx $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1987_c_macro_; 
// 				responsebits := (($bitcast ($uint<47>) 0  ) && (responsebit [] 0 )) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1996_c_macro_; 
// 				new_responsebits := ((old_responsebits << 1 ) | responsebits) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_2003_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2006);\
konst_2006.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_2006), &(ULT_u6_u1_2007));\
if (has_undefined_bit(&ULT_u6_u1_2007)) {fprintf(stderr, "Error: variable ULT_u6_u1_2007 has undefined value (%s) at test point.\n", to_string(&ULT_u6_u1_2007));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u6_u1_2007)) break;
} 
}
_command_generator_branch_block_stmt_1965_c_export_apply_macro_;
}
// $report (gen_comm f 			 response response )
_command_generator_stmt_2010_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2013,2);\
bit_vector_clear(&konst_2013);\
konst_2013.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_2014,1);\
bit_vector_clear(&konst_2013);\
konst_2013.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_2013), &(EQ_u2_u1_2014));\
if (has_undefined_bit(&EQ_u2_u1_2014)) {fprintf(stderr, "Error: variable EQ_u2_u1_2014 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2014));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2014)) { 
// merge  file .Aa/sdhc.linked.aa, line 603
_command_generator_merge_stmt_2015_c_preamble_macro_; 
_command_generator_merge_stmt_2015_c_postamble_macro_; 
// 			wait := DAT0Rx $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2018_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u8_u1_2022,1);\
bit_vector_equal(0, &(wait), &(ZERO_8), &(EQ_u8_u1_2022));\
if (has_undefined_bit(&EQ_u8_u1_2022)) {fprintf(stderr, "Error: variable EQ_u8_u1_2022 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2022));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2022)) { 
/* 			$place[waitloop]
*/  goto waitloop_1820;
} 
else {
 ;
}
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2027,32);\
bit_vector_clear(&konst_2027);\
konst_2027.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_2029,8);\
bit_vector_clear(&konst_2029);\
konst_2029.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_2030,8);\
__declare_static_bit_vector(konst_2031,8);\
bit_vector_clear(&konst_2031);\
konst_2031.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_2032,1);\
bit_vector_clear(&konst_2027);\
konst_2027.val.byte_array[0] = 14;\
bit_vector_clear(&konst_2029);\
konst_2029.val.byte_array[0] = 8;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2027)])), &(konst_2029), &(AND_u8_u8_2030));\
bit_vector_clear(&konst_2031);\
konst_2031.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_2030), &(konst_2031), &(EQ_u8_u1_2032));\
if (has_undefined_bit(&EQ_u8_u1_2032)) {fprintf(stderr, "Error: variable EQ_u8_u1_2032 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2032));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2032)) { 
// 			$call generate_crc_7 (( $slice response 47 8 )  ) (R1_6_7CRC ) 
_command_generator_call_stmt_2036_c_macro_; 
// 			CommandCRCError := ( $mux (( $slice response 7 1 )  == R1_6_7CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2045_c_macro_; 
} 
else {
 ;
}
// 			checkit := ( $slice response 7 1 )  $buffering 1// bits of buffering = 7. 
_command_generator_assign_stmt_2050_c_macro_; 
// $report (r1crc check 			 CommandCRCError CommandCRCError 			 R1_6_7CRC R1_6_7CRC 			 checkit checkit )
_command_generator_stmt_2054_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2056,32);\
bit_vector_clear(&konst_2056);\
konst_2056.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_2058,8);\
bit_vector_clear(&konst_2058);\
konst_2058.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_2059,8);\
__declare_static_bit_vector(konst_2060,8);\
bit_vector_clear(&konst_2060);\
konst_2060.val.byte_array[0] = 16;\
__declare_static_bit_vector(EQ_u8_u1_2061,1);\
bit_vector_clear(&konst_2056);\
konst_2056.val.byte_array[0] = 14;\
bit_vector_clear(&konst_2058);\
konst_2058.val.byte_array[0] = 16;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2056)])), &(konst_2058), &(AND_u8_u8_2059));\
bit_vector_clear(&konst_2060);\
konst_2060.val.byte_array[0] = 16;\
bit_vector_equal(0, &(AND_u8_u8_2059), &(konst_2060), &(EQ_u8_u1_2061));\
if (has_undefined_bit(&EQ_u8_u1_2061)) {fprintf(stderr, "Error: variable EQ_u8_u1_2061 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2061));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2061)) { 
// 			commandIndexCheck := (( $slice sdhcRegisters[15 ] 5 0 )  == ( $slice response 45 40 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2069_c_macro_; 
// 			CommandIndexError := ( $mux commandIndexCheck _b00000000   _b00001000  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2075_c_macro_; 
} 
else {
 ;
}
// 			sdhcRegisters[19 ] := ( $slice response 39 32 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2081_c_macro_; 
// 			sdhcRegisters[18 ] := ( $slice response 31 24 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2086_c_macro_; 
// 			sdhcRegisters[17 ] := ( $slice response 23 16 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2091_c_macro_; 
// 			sdhcRegisters[16 ] := ( $slice response 15 8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2096_c_macro_; 
// 			presentState2 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2104_c_macro_; 
// 			normalInterrupt2 := sdhcRegisters[48 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2108_c_macro_; 
// 			sdhcRegisters[36 ] := presentState2 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2112_c_macro_; 
// 			commandEndBitError := ( $mux (response [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2121_c_macro_; 
// 			normalInterruptStatusVar_2 := (normalInterrupt2 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2126_c_macro_; 
// 			errorInterruptStatusVar_2 := ((CommandIndexError | CommandCRCError) | commandEndBitError) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2133_c_macro_; 
/* 			$place[normalInterruptResponse2]
*/  goto normalInterruptResponse2_1820;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 632
__declare_static_bit_vector(konst_2138,2);\
bit_vector_clear(&konst_2138);\
konst_2138.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u2_u1_2139,1);\
bit_vector_clear(&konst_2138);\
konst_2138.val.byte_array[0] = 1;\
bit_vector_equal(0, &(response_type), &(konst_2138), &(EQ_u2_u1_2139));\
if (has_undefined_bit(&EQ_u2_u1_2139)) {fprintf(stderr, "Error: variable EQ_u2_u1_2139 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2139));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2139)) { 
_command_generator_branch_block_stmt_2140_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 635
__declare_static_bit_vector(konst_2181,8);\
bit_vector_clear(&konst_2181);\
konst_2181.val.byte_array[0] = 136;\
__declare_static_bit_vector(ULT_u8_u1_2182,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 637
_command_generator_merge_stmt_2142_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<8>) 0  ) $on   $entry 				  next_J $on   $loopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_2143_c_macro_; 
// 				$phi old_bigresponsebits := 				  ($bitcast ($uint<136>) 0  ) $on   $entry 				  new_bigresponsebits $on   $loopback 
 // type of target is $uint<136>
_command_generator_phi_stmt_2148_c_macro_; 
_command_generator_merge_stmt_2142_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_2159_c_macro_; 
// 				bigresponsebit := responseRx $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2162_c_macro_; 
// 				bigresponsebits := (($bitcast ($uint<135>) 0  ) && (bigresponsebit [] 0 )) $buffering 1// bits of buffering = 136. 
_command_generator_assign_stmt_2171_c_macro_; 
// 				new_bigresponsebits := ((old_bigresponsebits << 1 ) | bigresponsebits) $buffering 1// bits of buffering = 136. 
_command_generator_assign_stmt_2178_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2181);\
konst_2181.val.byte_array[0] = 136;\
bit_vector_less(0, &(next_J), &(konst_2181), &(ULT_u8_u1_2182));\
if (has_undefined_bit(&ULT_u8_u1_2182)) {fprintf(stderr, "Error: variable ULT_u8_u1_2182 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_2182));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u8_u1_2182)) break;
} 
}
_command_generator_branch_block_stmt_2140_c_export_apply_macro_;
}
// $report (gen_comm f 			 bigResponse bigResponse )
_command_generator_stmt_2185_c_macro_; 
// 			$volatile CID := ( $slice bigResponse 127 8 )  $buffering 1
_command_generator_assign_stmt_2189_c_macro_; 
// 			$volatile CID_CRC := ( $slice bigResponse 7 1 )  $buffering 1
_command_generator_assign_stmt_2193_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2195,32);\
bit_vector_clear(&konst_2195);\
konst_2195.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_2197,8);\
bit_vector_clear(&konst_2197);\
konst_2197.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_2198,8);\
__declare_static_bit_vector(konst_2199,8);\
bit_vector_clear(&konst_2199);\
konst_2199.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_2200,1);\
bit_vector_clear(&konst_2195);\
konst_2195.val.byte_array[0] = 14;\
bit_vector_clear(&konst_2197);\
konst_2197.val.byte_array[0] = 8;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2195)])), &(konst_2197), &(AND_u8_u8_2198));\
bit_vector_clear(&konst_2199);\
konst_2199.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_2198), &(konst_2199), &(EQ_u8_u1_2200));\
if (has_undefined_bit(&EQ_u8_u1_2200)) {fprintf(stderr, "Error: variable EQ_u8_u1_2200 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2200));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2200)) { 
// 			$call generate_crc_7_120 (CID ) (R2_CRC ) 
_command_generator_call_stmt_2203_c_macro_; 
// 			CommandCRCError1 := ( $mux (crc7 == R2_CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2211_c_macro_; 
} 
else {
 ;
}
// 			commandEndBitError1 := ( $mux (bigResponse [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2221_c_macro_; 
// 			errorInterruptStatusVar_3 := (CommandCRCError1 | commandEndBitError1) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2226_c_macro_; 
// 			$call bigResponseWrite (CID ) () 
_command_generator_call_stmt_2228_c_macro_; 
// 			presentState3 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2236_c_macro_; 
// 			normalInterrupt3 := sdhcRegisters[48 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2240_c_macro_; 
// 			sdhcRegisters[36 ] := presentState3 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2244_c_macro_; 
// 			normalInterruptStatusVar_3 := (normalInterrupt3 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2249_c_macro_; 
/* 			$place[normalInterruptResponse3]
*/  goto normalInterruptResponse3_1820;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 14475024
__declare_static_bit_vector(konst_2254,2);\
bit_vector_clear(&konst_2254);\
__declare_static_bit_vector(EQ_u2_u1_2255,1);\
bit_vector_clear(&konst_2254);\
bit_vector_equal(0, &(response_type), &(konst_2254), &(EQ_u2_u1_2255));\
if (has_undefined_bit(&EQ_u2_u1_2255)) {fprintf(stderr, "Error: variable EQ_u2_u1_2255 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2255));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2255)) { 
// 			presentState1 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2263_c_macro_; 
// 			normalInterrupt1 := sdhcRegisters[48 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2267_c_macro_; 
// 			sdhcRegisters[36 ] := presentState1 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2271_c_macro_; 
// 			normalInterruptStatusVar_1 := (normalInterrupt1 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2276_c_macro_; 
// 			errorInterruptStatusVar_1 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2279_c_macro_; 
/* 			$place[normalInterruptResponse1]
*/  goto normalInterruptResponse1_1820;
} 
else {
 ;
}
}
}
// merge  file .Aa/sdhc.linked.aa, line 676
_command_generator_merge_stmt_2284_c_preamble_macro_; 
// 			$phi normalInterruptStatusVar1 := 			  normalInterruptStatusVar_3 $on   normalInterruptResponse3 			  normalInterruptStatusVar_2 $on   normalInterruptResponse2 			  normalInterruptStatusVar_1 $on   normalInterruptResponse1 
 // type of target is $uint<8>
_command_generator_phi_stmt_2285_c_macro_; 
// 			$phi errorInterruptStatusVar1 := 			  errorInterruptStatusVar_3 $on   normalInterruptResponse3 			  errorInterruptStatusVar_2 $on   normalInterruptResponse2 			  errorInterruptStatusVar_1 $on   normalInterruptResponse1 
 // type of target is $uint<8>
_command_generator_phi_stmt_2290_c_macro_; 
_command_generator_merge_stmt_2284_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 14156416
__declare_static_bit_vector(konst_2298,1);\
bit_vector_clear(&konst_2298);\
konst_2298.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2299,1);\
bit_vector_clear(&konst_2298);\
konst_2298.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_2298), &(EQ_u1_u1_2299));\
if (has_undefined_bit(&EQ_u1_u1_2299)) {fprintf(stderr, "Error: variable EQ_u1_u1_2299 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2299));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2299)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 14070672
__declare_static_bit_vector(konst_2302,1);\
bit_vector_clear(&konst_2302);\
konst_2302.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2303,1);\
__declare_static_bit_vector(konst_2305,2);\
bit_vector_clear(&konst_2305);\
konst_2305.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_2306,1);\
__declare_static_bit_vector(AND_u1_u1_2307,1);\
bit_vector_clear(&konst_2302);\
konst_2302.val.byte_array[0] = 1;\
bit_vector_equal(0, &(txOrRX), &(konst_2302), &(EQ_u1_u1_2303));\
bit_vector_clear(&konst_2305);\
konst_2305.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_2305), &NEQ_u2_u1_2306);\
bit_vector_and(&(EQ_u1_u1_2303), &(NEQ_u2_u1_2306), &(AND_u1_u1_2307));\
if (has_undefined_bit(&AND_u1_u1_2307)) {fprintf(stderr, "Error: variable AND_u1_u1_2307 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_2307));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_2307)) { 
// 			singleMultipleReadBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2314_c_macro_; 
// 			$call dataRx (singleMultipleReadBlock ) (dataErrorInterruptStatusVar1 ) 
_command_generator_call_stmt_2317_c_macro_; 
// 			dataRxEnrty1 := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2320_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2323_c_macro_; 
// 			transferCompleteData := ( $mux singleMultipleReadBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2330_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 13669680
__declare_static_bit_vector(konst_2333,1);\
bit_vector_clear(&konst_2333);\
konst_2333.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2334,1);\
bit_vector_clear(&konst_2333);\
konst_2333.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_2333), &(EQ_u1_u1_2334));\
if (has_undefined_bit(&EQ_u1_u1_2334)) {fprintf(stderr, "Error: variable EQ_u1_u1_2334 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2334));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2334)) { 
// 			readBlockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_command_generator_assign_stmt_2341_c_macro_; 
// 			$volatile newReadBlockCount := (readBlockCount - 1 ) $buffering 1
_command_generator_assign_stmt_2346_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice newReadBlockCount 15 8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2351_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice newReadBlockCount 7 0 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2356_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			dataTransferComplete := ( $mux (response_type == 3 ) ($bitcast ($uint<8>) 2  )  transferCompleteData )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2367_c_macro_; 
} 
else {
 ;
}
// 		normalInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2371_c_macro_; 
// 		errorInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2374_c_macro_; 
_command_generator_branch_block_stmt_1820_c_export_apply_macro_;
}
_command_generator_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_command_generator_series_block_stmt_1813_c_mutex_);
}
void command_generator(uint8_t*  normalInterruptStatusVar1 , uint8_t*  normalInterruptStatusVar2 , uint8_t*  errorInterruptStatusVar1 , uint8_t*  errorInterruptStatusVar2 , uint8_t*  dataErrorInterruptStatusVar1 , uint8_t*  dataTransferComplete )
{
_command_generator_outer_arg_decl_macro__;
_command_generator_( &__normalInterruptStatusVar1,  &__normalInterruptStatusVar2,  &__errorInterruptStatusVar1,  &__errorInterruptStatusVar2,  &__dataErrorInterruptStatusVar1,  &__dataTransferComplete);
_command_generator_outer_op_xfer_macro__;
}


void _dataRx_(bit_vector* __psingleMultipleReadBlock, bit_vector*  __pdataErrorInterruptStatusVar1)
{
MUTEX_DECL(_dataRx_series_block_stmt_541_c_mutex_);
MUTEX_LOCK(_dataRx_series_block_stmt_541_c_mutex_);
_dataRx_inner_inarg_prep_macro__; 
_dataRx_branch_block_stmt_544_c_export_decl_macro_; 
{
// 		presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_548_c_macro_; 
// 		presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_552_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 228
__declare_static_bit_vector(konst_554,32);\
bit_vector_clear(&konst_554);\
konst_554.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_556,8);\
bit_vector_clear(&konst_556);\
konst_556.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_557,1);\
bit_vector_clear(&konst_554);\
konst_554.val.byte_array[0] = 40;\
bit_vector_clear(&konst_556);\
konst_556.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_554)])), &(konst_556), &(BITSEL_u8_u1_557));\
if (has_undefined_bit(&BITSEL_u8_u1_557)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_557 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_557));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_557)) { 
// 			startBit0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_560_c_macro_; 
_dataRx_branch_block_stmt_561_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 232
__declare_static_bit_vector(konst_649,10);\
bit_vector_clear(&konst_649);\
konst_649.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_650,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 234
_dataRx_merge_stmt_563_c_preamble_macro_; 
// 				$phi I_0 := 				  ($bitcast ($uint<10>) 0  ) $on   $entry 				  next_I_0 $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_564_c_macro_; 
// 				$phi dat0 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data0 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_569_c_macro_; 
_dataRx_merge_stmt_563_c_postamble_macro_; 
// 				bit7_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_578_c_macro_; 
// 				bit6_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_581_c_macro_; 
// 				bit5_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_584_c_macro_; 
// 				bit4_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_587_c_macro_; 
// 				bit3_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_590_c_macro_; 
// 				bit2_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_593_c_macro_; 
// 				bit1_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_596_c_macro_; 
// 				bit0_0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_599_c_macro_; 
// 				$volatile next_data0 := ((dat0 << 8 ) | (($bitcast ($uint<1016>) 0  ) && ((((bit7_0 [] 0 ) && (bit6_0 [] 0 )) && ((bit5_0 [] 0 ) && (bit4_0 [] 0 ))) && (((bit3_0 [] 0 ) && (bit2_0 [] 0 )) && ((bit1_0 [] 0 ) && (bit0_0 [] 0 )))))) $buffering 1
_dataRx_assign_stmt_641_c_macro_; 
// 				$volatile next_I_0 := (I_0 + 1 ) $buffering 1
_dataRx_assign_stmt_646_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_649);\
konst_649.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_0), &(konst_649), &(ULT_u10_u1_650));\
if (has_undefined_bit(&ULT_u10_u1_650)) {fprintf(stderr, "Error: variable ULT_u10_u1_650 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_650));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_650)) break;
} 
}
_dataRx_branch_block_stmt_561_c_export_apply_macro_;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 253
__declare_static_bit_vector(konst_686,5);\
bit_vector_clear(&konst_686);\
konst_686.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_687,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 255
_dataRx_merge_stmt_653_c_preamble_macro_; 
// 			$phi K_0 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_K_0 $on   $loopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_654_c_macro_; 
// 			$phi currentCRC_0 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC_0 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_660_c_macro_; 
_dataRx_merge_stmt_653_c_postamble_macro_; 
// 			nextCRC_0 := ((currentCRC_0 << 1 ) | (($bitcast ($uint<15>) 0  ) && (DAT0Rx [] 0 ))) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_678_c_macro_; 
// 			$volatile next_K_0 := (K_0 + 1 ) $buffering 1
_dataRx_assign_stmt_683_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_686);\
konst_686.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_0), &(konst_686), &(ULT_u5_u1_687));\
if (has_undefined_bit(&ULT_u5_u1_687)) {fprintf(stderr, "Error: variable ULT_u5_u1_687 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_687));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_687)) break;
} 
}
// 			stopBit0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_690_c_macro_; 
// 			$volatile stopBitError0 := (stopBit0 == 0 ) $buffering 1
_dataRx_assign_stmt_695_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 266
__declare_static_bit_vector(konst_760,13);\
bit_vector_clear(&konst_760);\
konst_760.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_761,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 268
_dataRx_merge_stmt_697_c_preamble_macro_; 
// 			$phi J_0 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_0 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_698_c_macro_; 
// 			$phi CRC_16_0 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_0 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_704_c_macro_; 
// 			$phi tempData0 := 			  dat0 $on   $entry 			  nextTempData0 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_709_c_macro_; 
_dataRx_merge_stmt_697_c_postamble_macro_; 
// 			$volatile inv0 := ((tempData0 [] 1023 ) ^ (CRC_16_0 [] 15 )) $buffering 1
_dataRx_assign_stmt_722_c_macro_; 
// 			$volatile nextCRC16_0 := (((( $slice CRC_16_0 14 12 )  && ((CRC_16_0 [] 11 ) ^ inv0)) && ( $slice CRC_16_0 10 5 ) ) && ((((CRC_16_0 [] 4 ) ^ inv0) && ( $slice CRC_16_0 3 0 ) ) && inv0)) $buffering 1
_dataRx_assign_stmt_747_c_macro_; 
// 			$volatile nextTempData0 := (tempData0 << 1 ) $buffering 1
_dataRx_assign_stmt_752_c_macro_; 
// 			$volatile next_J_0 := (J_0 + 1 ) $buffering 1
_dataRx_assign_stmt_757_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_760);\
konst_760.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_0), &(konst_760), &(ULT_u13_u1_761));\
if (has_undefined_bit(&ULT_u13_u1_761)) {fprintf(stderr, "Error: variable ULT_u13_u1_761 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_761));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_761)) break;
} 
}
// 			$volatile crcError0 := (nextCRC_0 != nextCRC16_0) $buffering 1
_dataRx_assign_stmt_766_c_macro_; 
// 			startBit1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_769_c_macro_; 
_dataRx_branch_block_stmt_770_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 285
__declare_static_bit_vector(konst_855,10);\
bit_vector_clear(&konst_855);\
konst_855.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_856,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 287
_dataRx_merge_stmt_772_c_preamble_macro_; 
// 				$phi I_1 := 				  ($bitcast ($uint<10>) 0  ) $on   $entry 				  next_I_1 $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_773_c_macro_; 
// 				$phi dat1 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data1 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_778_c_macro_; 
_dataRx_merge_stmt_772_c_postamble_macro_; 
// 				bit7_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_786_c_macro_; 
// 				bit6_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_789_c_macro_; 
// 				bit5_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_792_c_macro_; 
// 				bit4_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_795_c_macro_; 
// 				bit3_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_798_c_macro_; 
// 				bit2_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_801_c_macro_; 
// 				bit1_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_804_c_macro_; 
// 				bit0_1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_807_c_macro_; 
// 				$volatile next_data1 := ((dat1 << 8 ) | (($bitcast ($uint<1016>) 0  ) && ((((bit7_1 [] 0 ) && (bit6_1 [] 0 )) && ((bit5_1 [] 0 ) && (bit4_1 [] 0 ))) && (((bit3_1 [] 0 ) && (bit2_1 [] 0 )) && ((bit1_1 [] 0 ) && (bit0_1 [] 0 )))))) $buffering 1
_dataRx_assign_stmt_847_c_macro_; 
// 				$volatile next_I_1 := (I_1 + 1 ) $buffering 1
_dataRx_assign_stmt_852_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_855);\
konst_855.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_1), &(konst_855), &(ULT_u10_u1_856));\
if (has_undefined_bit(&ULT_u10_u1_856)) {fprintf(stderr, "Error: variable ULT_u10_u1_856 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_856));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_856)) break;
} 
}
_dataRx_branch_block_stmt_770_c_export_apply_macro_;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 306
__declare_static_bit_vector(konst_890,5);\
bit_vector_clear(&konst_890);\
konst_890.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_891,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 308
_dataRx_merge_stmt_859_c_preamble_macro_; 
// 			$phi K_1 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_K_1 $on   $loopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_860_c_macro_; 
// 			$phi currentCRC_1 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC_1 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_865_c_macro_; 
_dataRx_merge_stmt_859_c_postamble_macro_; 
// 			nextCRC_1 := ((currentCRC_1 << 1 ) | (($bitcast ($uint<15>) 0  ) && (DAT1Rx [] 0 ))) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_882_c_macro_; 
// 			$volatile next_K_1 := (K_1 + 1 ) $buffering 1
_dataRx_assign_stmt_887_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_890);\
konst_890.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_1), &(konst_890), &(ULT_u5_u1_891));\
if (has_undefined_bit(&ULT_u5_u1_891)) {fprintf(stderr, "Error: variable ULT_u5_u1_891 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_891));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_891)) break;
} 
}
// 			stopBit1 := DAT1Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_894_c_macro_; 
// $report (DATAreieve rcv 			 stopBit1 stopBit1 			 dat1 dat1 )
_dataRx_stmt_897_c_macro_; 
// 			$volatile stopBitError1 := (stopBit1 == 0 ) $buffering 1
_dataRx_assign_stmt_902_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 320
__declare_static_bit_vector(konst_965,13);\
bit_vector_clear(&konst_965);\
konst_965.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_966,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 322
_dataRx_merge_stmt_904_c_preamble_macro_; 
// 			$phi J_1 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_1 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_905_c_macro_; 
// 			$phi CRC_16_1 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_1 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_910_c_macro_; 
// 			$phi tempData1 := 			  dat1 $on   $entry 			  nextTempData1 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_915_c_macro_; 
_dataRx_merge_stmt_904_c_postamble_macro_; 
// 			$volatile inv1 := ((tempData1 [] 1023 ) ^ (CRC_16_1 [] 15 )) $buffering 1
_dataRx_assign_stmt_928_c_macro_; 
// 			$volatile nextCRC16_1 := (((( $slice CRC_16_1 14 12 )  && ((CRC_16_1 [] 11 ) ^ inv1)) && ( $slice CRC_16_1 10 5 ) ) && ((((CRC_16_1 [] 4 ) ^ inv1) && ( $slice CRC_16_1 3 0 ) ) && inv1)) $buffering 1
_dataRx_assign_stmt_952_c_macro_; 
// 			$volatile nextTempData1 := (tempData1 << 1 ) $buffering 1
_dataRx_assign_stmt_957_c_macro_; 
// 			$volatile next_J_1 := (J_1 + 1 ) $buffering 1
_dataRx_assign_stmt_962_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_965);\
konst_965.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_1), &(konst_965), &(ULT_u13_u1_966));\
if (has_undefined_bit(&ULT_u13_u1_966)) {fprintf(stderr, "Error: variable ULT_u13_u1_966 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_966));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_966)) break;
} 
}
// 			$volatile crcError1 := (nextCRC_1 != nextCRC16_1) $buffering 1
_dataRx_assign_stmt_971_c_macro_; 
// 			startBit2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_974_c_macro_; 
_dataRx_branch_block_stmt_975_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 339
__declare_static_bit_vector(konst_1060,10);\
bit_vector_clear(&konst_1060);\
konst_1060.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_1061,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 341
_dataRx_merge_stmt_977_c_preamble_macro_; 
// 				$phi I_2 := 				  ($bitcast ($uint<10>) 0  ) $on   $entry 				  next_I_2 $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_978_c_macro_; 
// 				$phi dat2 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data2 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_983_c_macro_; 
_dataRx_merge_stmt_977_c_postamble_macro_; 
// 				bit7_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_991_c_macro_; 
// 				bit6_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_994_c_macro_; 
// 				bit5_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_997_c_macro_; 
// 				bit4_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1000_c_macro_; 
// 				bit3_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1003_c_macro_; 
// 				bit2_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1006_c_macro_; 
// 				bit1_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1009_c_macro_; 
// 				bit0_2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1012_c_macro_; 
// 				$volatile next_data2 := ((dat2 << 8 ) | (($bitcast ($uint<1016>) 0  ) && ((((bit7_2 [] 0 ) && (bit6_2 [] 0 )) && ((bit5_2 [] 0 ) && (bit4_2 [] 0 ))) && (((bit3_2 [] 0 ) && (bit2_2 [] 0 )) && ((bit1_2 [] 0 ) && (bit0_2 [] 0 )))))) $buffering 1
_dataRx_assign_stmt_1052_c_macro_; 
// 				$volatile next_I_2 := (I_2 + 1 ) $buffering 1
_dataRx_assign_stmt_1057_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1060);\
konst_1060.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_2), &(konst_1060), &(ULT_u10_u1_1061));\
if (has_undefined_bit(&ULT_u10_u1_1061)) {fprintf(stderr, "Error: variable ULT_u10_u1_1061 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1061));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_1061)) break;
} 
}
_dataRx_branch_block_stmt_975_c_export_apply_macro_;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 360
__declare_static_bit_vector(konst_1095,5);\
bit_vector_clear(&konst_1095);\
konst_1095.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1096,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 362
_dataRx_merge_stmt_1064_c_preamble_macro_; 
// 			$phi K_2 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_K_2 $on   $loopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_1065_c_macro_; 
// 			$phi currentCRC_2 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC_2 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1070_c_macro_; 
_dataRx_merge_stmt_1064_c_postamble_macro_; 
// 			nextCRC_2 := ((currentCRC_2 << 1 ) | (($bitcast ($uint<15>) 0  ) && (DAT2Rx [] 0 ))) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1087_c_macro_; 
// 			$volatile next_K_2 := (K_2 + 1 ) $buffering 1
_dataRx_assign_stmt_1092_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1095);\
konst_1095.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_2), &(konst_1095), &(ULT_u5_u1_1096));\
if (has_undefined_bit(&ULT_u5_u1_1096)) {fprintf(stderr, "Error: variable ULT_u5_u1_1096 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1096));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_1096)) break;
} 
}
// 			stopBit2 := DAT2Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1099_c_macro_; 
// 			$volatile stopBitError2 := (stopBit2 == 0 ) $buffering 1
_dataRx_assign_stmt_1104_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 373
__declare_static_bit_vector(konst_1167,13);\
bit_vector_clear(&konst_1167);\
konst_1167.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_1168,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 375
_dataRx_merge_stmt_1106_c_preamble_macro_; 
// 			$phi J_2 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_2 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1107_c_macro_; 
// 			$phi CRC_16_2 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_2 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1112_c_macro_; 
// 			$phi tempData2 := 			  dat2 $on   $entry 			  nextTempData2 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1117_c_macro_; 
_dataRx_merge_stmt_1106_c_postamble_macro_; 
// 			$volatile inv2 := ((tempData2 [] 1023 ) ^ (CRC_16_2 [] 15 )) $buffering 1
_dataRx_assign_stmt_1130_c_macro_; 
// 			$volatile nextCRC16_2 := (((( $slice CRC_16_2 14 12 )  && ((CRC_16_2 [] 11 ) ^ inv2)) && ( $slice CRC_16_2 10 5 ) ) && ((((CRC_16_2 [] 4 ) ^ inv2) && ( $slice CRC_16_2 3 0 ) ) && inv2)) $buffering 1
_dataRx_assign_stmt_1154_c_macro_; 
// 			$volatile nextTempData2 := (tempData2 << 1 ) $buffering 1
_dataRx_assign_stmt_1159_c_macro_; 
// 			$volatile next_J_2 := (J_2 + 1 ) $buffering 1
_dataRx_assign_stmt_1164_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1167);\
konst_1167.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_2), &(konst_1167), &(ULT_u13_u1_1168));\
if (has_undefined_bit(&ULT_u13_u1_1168)) {fprintf(stderr, "Error: variable ULT_u13_u1_1168 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1168));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_1168)) break;
} 
}
// 			$volatile crcError2 := (nextCRC_2 != nextCRC16_2) $buffering 1
_dataRx_assign_stmt_1173_c_macro_; 
// 			startBit3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1176_c_macro_; 
_dataRx_branch_block_stmt_1177_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 392
__declare_static_bit_vector(konst_1262,10);\
bit_vector_clear(&konst_1262);\
konst_1262.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_1263,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 394
_dataRx_merge_stmt_1179_c_preamble_macro_; 
// 				$phi I_3 := 				  ($bitcast ($uint<10>) 0  ) $on   $entry 				  next_I_3 $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_1180_c_macro_; 
// 				$phi dat3 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data3 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1185_c_macro_; 
_dataRx_merge_stmt_1179_c_postamble_macro_; 
// 				bit7_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1193_c_macro_; 
// 				bit6_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1196_c_macro_; 
// 				bit5_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1199_c_macro_; 
// 				bit4_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1202_c_macro_; 
// 				bit3_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1205_c_macro_; 
// 				bit2_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1208_c_macro_; 
// 				bit1_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1211_c_macro_; 
// 				bit0_3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1214_c_macro_; 
// 				$volatile next_data3 := ((dat3 << 8 ) | (($bitcast ($uint<1016>) 0  ) && ((((bit7_3 [] 0 ) && (bit6_3 [] 0 )) && ((bit5_3 [] 0 ) && (bit4_3 [] 0 ))) && (((bit3_3 [] 0 ) && (bit2_3 [] 0 )) && ((bit1_3 [] 0 ) && (bit0_3 [] 0 )))))) $buffering 1
_dataRx_assign_stmt_1254_c_macro_; 
// 				$volatile next_I_3 := (I_3 + 1 ) $buffering 1
_dataRx_assign_stmt_1259_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1262);\
konst_1262.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_3), &(konst_1262), &(ULT_u10_u1_1263));\
if (has_undefined_bit(&ULT_u10_u1_1263)) {fprintf(stderr, "Error: variable ULT_u10_u1_1263 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1263));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_1263)) break;
} 
}
_dataRx_branch_block_stmt_1177_c_export_apply_macro_;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 413
__declare_static_bit_vector(konst_1297,5);\
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1298,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 415
_dataRx_merge_stmt_1266_c_preamble_macro_; 
// 			$phi K_3 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_K_3 $on   $loopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_1267_c_macro_; 
// 			$phi currentCRC_3 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC_3 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1272_c_macro_; 
_dataRx_merge_stmt_1266_c_postamble_macro_; 
// 			nextCRC_3 := ((currentCRC_3 << 1 ) | (($bitcast ($uint<15>) 0  ) && (DAT3Rx [] 0 ))) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1289_c_macro_; 
// 			$volatile next_K_3 := (K_3 + 1 ) $buffering 1
_dataRx_assign_stmt_1294_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1297);\
konst_1297.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_3), &(konst_1297), &(ULT_u5_u1_1298));\
if (has_undefined_bit(&ULT_u5_u1_1298)) {fprintf(stderr, "Error: variable ULT_u5_u1_1298 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1298));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_1298)) break;
} 
}
// 			stopBit3 := DAT3Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1301_c_macro_; 
// 			$volatile stopBitError3 := (stopBit3 == 0 ) $buffering 1
_dataRx_assign_stmt_1306_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 426
__declare_static_bit_vector(konst_1369,13);\
bit_vector_clear(&konst_1369);\
konst_1369.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_1370,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 428
_dataRx_merge_stmt_1308_c_preamble_macro_; 
// 			$phi J_3 := 			  ($bitcast ($uint<13>) 0  ) $on   $entry 			  next_J_3 $on   $loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1309_c_macro_; 
// 			$phi CRC_16_3 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_3 $on   $loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1314_c_macro_; 
// 			$phi tempData3 := 			  dat3 $on   $entry 			  nextTempData3 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1319_c_macro_; 
_dataRx_merge_stmt_1308_c_postamble_macro_; 
// 			$volatile inv3 := ((tempData3 [] 1023 ) ^ (CRC_16_3 [] 15 )) $buffering 1
_dataRx_assign_stmt_1332_c_macro_; 
// 			$volatile nextCRC16_3 := (((( $slice CRC_16_3 14 12 )  && ((CRC_16_3 [] 11 ) ^ inv3)) && ( $slice CRC_16_3 10 5 ) ) && ((((CRC_16_3 [] 4 ) ^ inv3) && ( $slice CRC_16_3 3 0 ) ) && inv3)) $buffering 1
_dataRx_assign_stmt_1356_c_macro_; 
// 			$volatile nextTempData3 := (tempData3 << 1 ) $buffering 1
_dataRx_assign_stmt_1361_c_macro_; 
// 			$volatile next_J_3 := (J_3 + 1 ) $buffering 1
_dataRx_assign_stmt_1366_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1369);\
konst_1369.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_3), &(konst_1369), &(ULT_u13_u1_1370));\
if (has_undefined_bit(&ULT_u13_u1_1370)) {fprintf(stderr, "Error: variable ULT_u13_u1_1370 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1370));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u13_u1_1370)) break;
} 
}
// 			$volatile crcError3 := (nextCRC_3 != nextCRC16_3) $buffering 1
_dataRx_assign_stmt_1375_c_macro_; 
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1379_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line -327955296
__declare_static_bit_vector(konst_1382,1);\
bit_vector_clear(&konst_1382);\
__declare_static_bit_vector(EQ_u1_u1_1383,1);\
bit_vector_clear(&konst_1382);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1382), &(EQ_u1_u1_1383));\
if (has_undefined_bit(&EQ_u1_u1_1383)) {fprintf(stderr, "Error: variable EQ_u1_u1_1383 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1383));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1383)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1389_c_macro_; 
} 
else {
 ;
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 446
__declare_static_bit_vector(konst_1475,10);\
bit_vector_clear(&konst_1475);\
konst_1475.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1476,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 448
_dataRx_merge_stmt_1392_c_preamble_macro_; 
// 			$phi B := 			  ($bitcast ($uint<10>) 0  ) $on   $entry 			  next_B $on   $loopback 
 // type of target is $uint<10>
_dataRx_phi_stmt_1393_c_macro_; 
// 			$phi dataForBuffer0 := 			  dat0 $on   $entry 			  nextDataForBuffer0 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1398_c_macro_; 
// 			$phi dataForBuffer1 := 			  dat1 $on   $entry 			  nextDataForBuffer1 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1402_c_macro_; 
// 			$phi dataForBuffer2 := 			  dat2 $on   $entry 			  nextDataForBuffer2 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1406_c_macro_; 
// 			$phi dataForBuffer3 := 			  dat3 $on   $entry 			  nextDataForBuffer3 $on   $loopback 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1410_c_macro_; 
_dataRx_merge_stmt_1392_c_postamble_macro_; 
// 			dataBufferRx := ((((dataForBuffer0 [] 1023 ) && (dataForBuffer1 [] 1023 )) && ((dataForBuffer2 [] 1023 ) && (dataForBuffer3 [] 1023 ))) && (((dataForBuffer0 [] 1022 ) && (dataForBuffer1 [] 1022 )) && ((dataForBuffer2 [] 1022 ) && (dataForBuffer3 [] 1022 )))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1447_c_macro_; 
// 			$volatile nextDataForBuffer0 := (dataForBuffer0 << 2 ) $buffering 1
_dataRx_assign_stmt_1452_c_macro_; 
// 			$volatile nextDataForBuffer1 := (dataForBuffer1 << 2 ) $buffering 1
_dataRx_assign_stmt_1457_c_macro_; 
// 			$volatile nextDataForBuffer2 := (dataForBuffer2 << 2 ) $buffering 1
_dataRx_assign_stmt_1462_c_macro_; 
// 			$volatile nextDataForBuffer3 := (dataForBuffer3 << 2 ) $buffering 1
_dataRx_assign_stmt_1467_c_macro_; 
// 			$volatile next_B := (B + 1 ) $buffering 1
_dataRx_assign_stmt_1472_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_1475);\
konst_1475.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_B), &(konst_1475), &(ULT_u10_u1_1476));\
if (has_undefined_bit(&ULT_u10_u1_1476)) {fprintf(stderr, "Error: variable ULT_u10_u1_1476 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1476));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_1476)) break;
} 
}
// 			$volatile stopBitError_Final := ((stopBitError0 | stopBitError1) | (stopBitError2 | stopBitError3)) $buffering 1
_dataRx_assign_stmt_1485_c_macro_; 
// 			$volatile crcError_Final := ((crcError0 | crcError1) | (crcError2 | crcError3)) $buffering 1
_dataRx_assign_stmt_1494_c_macro_; 
// 			dataErrorInterruptStatusVar1_4 := (((ZERO_1 && stopBitError_Final) && crcError_Final) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1507_c_macro_; 
} 
else {
// 			startBit := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1511_c_macro_; 
_dataRx_branch_block_stmt_1512_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 474
_dataRx_merge_stmt_1513_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataRx_phi_stmt_1514_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1519_c_macro_; 
_dataRx_merge_stmt_1513_c_postamble_macro_; 
// 				bit7 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1528_c_macro_; 
// 				bit6 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1531_c_macro_; 
// 				bit5 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1534_c_macro_; 
// 				bit4 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1537_c_macro_; 
// 				bit3 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1540_c_macro_; 
// 				bit2 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1543_c_macro_; 
// 				bit1 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1546_c_macro_; 
// 				bit0 := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1549_c_macro_; 
// 				dataBufferRx := ((((bit7 [] 0 ) && (bit6 [] 0 )) && ((bit5 [] 0 ) && (bit4 [] 0 ))) && (((bit3 [] 0 ) && (bit2 [] 0 )) && ((bit1 [] 0 ) && (bit0 [] 0 )))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1582_c_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && ((((bit7 [] 0 ) && (bit6 [] 0 )) && ((bit5 [] 0 ) && (bit4 [] 0 ))) && (((bit3 [] 0 ) && (bit2 [] 0 )) && ((bit1 [] 0 ) && (bit0 [] 0 )))))) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1623_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1628_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1631,10);\
bit_vector_clear(&konst_1631);\
konst_1631.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1632,1);\
bit_vector_clear(&konst_1631);\
konst_1631.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_1631), &(ULT_u10_u1_1632));\
if (has_undefined_bit(&ULT_u10_u1_1632)) {fprintf(stderr, "Error: variable ULT_u10_u1_1632 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1632));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1632)) { 
/* 				$place[loopback1]
*/  goto loopback1_1512;
} 
else {
 ;
}
_dataRx_branch_block_stmt_1512_c_export_apply_macro_;
}
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1639_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 497
_dataRx_merge_stmt_1640_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K $on   crcloopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_1641_c_macro_; 
// 				$phi currentCRC := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC $on   crcloopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1646_c_macro_; 
_dataRx_merge_stmt_1640_c_postamble_macro_; 
// 			nextCRC := ((currentCRC << 1 ) | (($bitcast ($uint<15>) 0  ) && (DAT0Rx [] 0 ))) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1663_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_1668_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1671,5);\
bit_vector_clear(&konst_1671);\
konst_1671.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1672,1);\
bit_vector_clear(&konst_1671);\
konst_1671.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K), &(konst_1671), &(ULT_u5_u1_1672));\
if (has_undefined_bit(&ULT_u5_u1_1672)) {fprintf(stderr, "Error: variable ULT_u5_u1_1672 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1672));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_1672)) { 
/* 			$place[crcloopback]
*/  goto crcloopback_544;
} 
else {
 ;
}
// 			stopBit := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1677_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1680,1);\
bit_vector_clear(&konst_1680);\
__declare_static_bit_vector(EQ_u1_u1_1681,1);\
bit_vector_clear(&konst_1680);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1680), &(EQ_u1_u1_1681));\
if (has_undefined_bit(&EQ_u1_u1_1681)) {fprintf(stderr, "Error: variable EQ_u1_u1_1681 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1681));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1681)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1687_c_macro_; 
} 
else {
 ;
}
// 			stopBitError := (stopBit == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1693_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 513
_dataRx_merge_stmt_1694_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1695_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1700_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1705_c_macro_; 
_dataRx_merge_stmt_1694_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1718_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1742_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1747_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataRx_assign_stmt_1752_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1755,13);\
bit_vector_clear(&konst_1755);\
konst_1755.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_1756,1);\
bit_vector_clear(&konst_1755);\
konst_1755.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_1755), &(ULT_u13_u1_1756));\
if (has_undefined_bit(&ULT_u13_u1_1756)) {fprintf(stderr, "Error: variable ULT_u13_u1_1756 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1756));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_1756)) { 
/* 			$place[loopback]
*/  goto loopback_544;
} 
else {
 ;
}
// 			crcError := (nextCRC != nextCRC16) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1763_c_macro_; 
// 			dataRxEnrty := ONE_1 $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1766_c_macro_; 
// 			dataErrorInterruptStatusVar1_0 := (((ZERO_1 && stopBitError) && crcError) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1779_c_macro_; 
}
// 		dataErrorInterruptStatusVar1 := ( $mux (sdhcRegisters[40 ] [] 1 ) dataErrorInterruptStatusVar1_4  dataErrorInterruptStatusVar1_0 )  $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1789_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1792,1);\
bit_vector_clear(&konst_1792);\
__declare_static_bit_vector(EQ_u1_u1_1793,1);\
bit_vector_clear(&konst_1792);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1792), &(EQ_u1_u1_1793));\
if (has_undefined_bit(&EQ_u1_u1_1793)) {fprintf(stderr, "Error: variable EQ_u1_u1_1793 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1793));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1793)) { 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1799_c_macro_; 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1805_c_macro_; 
} 
else {
 ;
}
// $report (You check 		 nextCRC16 nextCRC16 		 nextCRC nextCRC 		 rxBufferPointer rxBufferPointer )
_dataRx_stmt_1810_c_macro_; 
_dataRx_branch_block_stmt_544_c_export_apply_macro_;
}
_dataRx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataRx_series_block_stmt_541_c_mutex_);
}
void _dataTx_(bit_vector* __plastBlock, bit_vector* __pblockCountEnable, bit_vector* __pblockCount, bit_vector*  __pblockCountNext, bit_vector*  __ptransferComplete)
{
MUTEX_DECL(_dataTx_series_block_stmt_2377_c_mutex_);
MUTEX_LOCK(_dataTx_series_block_stmt_2377_c_mutex_);
_dataTx_inner_inarg_prep_macro__; 
_dataTx_branch_block_stmt_2383_c_export_decl_macro_; 
{
// if statement :  file .Aa/sdhc.linked.aa, line 709
__declare_static_bit_vector(konst_2385,32);\
bit_vector_clear(&konst_2385);\
konst_2385.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_2387,8);\
bit_vector_clear(&konst_2387);\
konst_2387.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2388,1);\
bit_vector_clear(&konst_2385);\
konst_2385.val.byte_array[0] = 40;\
bit_vector_clear(&konst_2387);\
konst_2387.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2385)])), &(konst_2387), &(BITSEL_u8_u1_2388));\
if (has_undefined_bit(&BITSEL_u8_u1_2388)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_2388 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_2388));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_2388)) { 
_dataTx_branch_block_stmt_2389_c_export_decl_macro_; 
{
{
// do-while:   file .Aa/sdhc.linked.aa, line 712
__declare_static_bit_vector(konst_2494,10);\
bit_vector_clear(&konst_2494);\
konst_2494.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_2495,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 714
_dataTx_merge_stmt_2391_c_preamble_macro_; 
// 				$phi i := 				  next_i $on   $loopback 				  ($bitcast ($uint<10>) 0  ) $on   $entry 
 // type of target is $uint<10>
_dataTx_phi_stmt_2392_c_macro_; 
// 				$phi dat0 := 				  next_data0 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2397_c_macro_; 
// 				$phi dat1 := 				  next_data1 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2402_c_macro_; 
// 				$phi dat2 := 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 				  next_data2 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2407_c_macro_; 
// 				$phi dat3 := 				  next_data3 $on   $loopback 				  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2412_c_macro_; 
_dataTx_merge_stmt_2391_c_postamble_macro_; 
// 				tempBuffer := dataBufferTx $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2420_c_macro_; 
// 				$volatile next_data0 := ((dat0 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 7 )) && (tempBuffer [] 3 ))) $buffering 1
_dataTx_assign_stmt_2438_c_macro_; 
// 				$volatile next_data1 := ((dat1 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 6 )) && (tempBuffer [] 2 ))) $buffering 1
_dataTx_assign_stmt_2454_c_macro_; 
// 				$volatile next_data2 := ((dat2 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 5 )) && (tempBuffer [] 1 ))) $buffering 1
_dataTx_assign_stmt_2470_c_macro_; 
// 				$volatile next_data3 := ((dat3 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 4 )) && (tempBuffer [] 0 ))) $buffering 1
_dataTx_assign_stmt_2486_c_macro_; 
// 				$volatile next_i := (i + 1 ) $buffering 1
_dataTx_assign_stmt_2491_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2494);\
konst_2494.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_i), &(konst_2494), &(ULT_u10_u1_2495));\
if (has_undefined_bit(&ULT_u10_u1_2495)) {fprintf(stderr, "Error: variable ULT_u10_u1_2495 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_2495));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u10_u1_2495)) break;
} 
}
_dataTx_branch_block_stmt_2389_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2500_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 736
__declare_static_bit_vector(konst_2564,11);\
bit_vector_clear(&konst_2564);\
konst_2564.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2565,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 738
_dataTx_merge_stmt_2502_c_preamble_macro_; 
// 			$phi j_0 := 			  next_j_0 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_dataTx_phi_stmt_2503_c_macro_; 
// 			$phi CRC_16_DAT0 := 			  nextCRC16_DAT0 $on   $loopback 			  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_dataTx_phi_stmt_2509_c_macro_; 
// 			$phi tempDataD0 := 			  nextTempDataD0 $on   $loopback 			  dat0 $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2514_c_macro_; 
_dataTx_merge_stmt_2502_c_postamble_macro_; 
// 			$volatile invd0 := ((tempDataD0 [] 1023 ) ^ (CRC_16_DAT0 [] 15 )) $buffering 1
_dataTx_assign_stmt_2527_c_macro_; 
// 			$volatile nextCRC16_DAT0 := (((( $slice CRC_16_DAT0 14 12 )  && ((CRC_16_DAT0 [] 11 ) ^ invd0)) && ( $slice CRC_16_DAT0 10 5 ) ) && ((((CRC_16_DAT0 [] 4 ) ^ invd0) && ( $slice CRC_16_DAT0 3 0 ) ) && invd0)) $buffering 1
_dataTx_assign_stmt_2551_c_macro_; 
// 			$volatile nextTempDataD0 := (tempDataD0 << 1 ) $buffering 1
_dataTx_assign_stmt_2556_c_macro_; 
// 			$volatile next_j_0 := (j_0 + 1 ) $buffering 1
_dataTx_assign_stmt_2561_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2564);\
konst_2564.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_0), &(konst_2564), &(ULT_u11_u1_2565));\
if (has_undefined_bit(&ULT_u11_u1_2565)) {fprintf(stderr, "Error: variable ULT_u11_u1_2565 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2565));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2565)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 751
__declare_static_bit_vector(konst_2628,11);\
bit_vector_clear(&konst_2628);\
konst_2628.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2629,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 753
_dataTx_merge_stmt_2567_c_preamble_macro_; 
// 			$phi j_1 := 			  next_j_1 $on   $loopback 			  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_dataTx_phi_stmt_2568_c_macro_; 
// 			$phi CRC_16_DAT1 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT1 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2573_c_macro_; 
// 			$phi tempDataD1 := 			  nextTempDataD1 $on   $loopback 			  dat1 $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2578_c_macro_; 
_dataTx_merge_stmt_2567_c_postamble_macro_; 
// 			$volatile invd1 := ((tempDataD1 [] 1023 ) ^ (CRC_16_DAT1 [] 15 )) $buffering 1
_dataTx_assign_stmt_2591_c_macro_; 
// 			$volatile nextCRC16_DAT1 := (((( $slice CRC_16_DAT1 14 12 )  && ((CRC_16_DAT1 [] 11 ) ^ invd1)) && ( $slice CRC_16_DAT1 10 5 ) ) && ((((CRC_16_DAT1 [] 4 ) ^ invd1) && ( $slice CRC_16_DAT1 3 0 ) ) && invd1)) $buffering 1
_dataTx_assign_stmt_2615_c_macro_; 
// 			$volatile nextTempDataD1 := (tempDataD1 << 1 ) $buffering 1
_dataTx_assign_stmt_2620_c_macro_; 
// 			$volatile next_j_1 := (j_1 + 1 ) $buffering 1
_dataTx_assign_stmt_2625_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2628);\
konst_2628.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_1), &(konst_2628), &(ULT_u11_u1_2629));\
if (has_undefined_bit(&ULT_u11_u1_2629)) {fprintf(stderr, "Error: variable ULT_u11_u1_2629 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2629));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2629)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 766
__declare_static_bit_vector(konst_2692,11);\
bit_vector_clear(&konst_2692);\
konst_2692.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2693,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 768
_dataTx_merge_stmt_2631_c_preamble_macro_; 
// 			$phi j_2 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_2 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2632_c_macro_; 
// 			$phi CRC_16_DAT2 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT2 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2637_c_macro_; 
// 			$phi tempDataD2 := 			  dat2 $on   $entry 			  nextTempDataD2 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2642_c_macro_; 
_dataTx_merge_stmt_2631_c_postamble_macro_; 
// 			$volatile invd2 := ((tempDataD2 [] 1023 ) ^ (CRC_16_DAT2 [] 15 )) $buffering 1
_dataTx_assign_stmt_2655_c_macro_; 
// 			$volatile nextCRC16_DAT2 := (((( $slice CRC_16_DAT2 14 12 )  && ((CRC_16_DAT2 [] 11 ) ^ invd2)) && ( $slice CRC_16_DAT2 10 5 ) ) && ((((CRC_16_DAT2 [] 4 ) ^ invd2) && ( $slice CRC_16_DAT2 3 0 ) ) && invd2)) $buffering 1
_dataTx_assign_stmt_2679_c_macro_; 
// 			$volatile nextTempDataD2 := (tempDataD2 << 1 ) $buffering 1
_dataTx_assign_stmt_2684_c_macro_; 
// 			$volatile next_j_2 := (j_2 + 1 ) $buffering 1
_dataTx_assign_stmt_2689_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2692);\
konst_2692.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_2), &(konst_2692), &(ULT_u11_u1_2693));\
if (has_undefined_bit(&ULT_u11_u1_2693)) {fprintf(stderr, "Error: variable ULT_u11_u1_2693 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2693));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2693)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 781
__declare_static_bit_vector(konst_2756,11);\
bit_vector_clear(&konst_2756);\
konst_2756.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2757,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 783
_dataTx_merge_stmt_2695_c_preamble_macro_; 
// 			$phi j_3 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_j_3 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2696_c_macro_; 
// 			$phi CRC_16_DAT3 := 			  ($bitcast ($uint<16>) 0  ) $on   $entry 			  nextCRC16_DAT3 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2701_c_macro_; 
// 			$phi tempDataD3 := 			  dat3 $on   $entry 			  nextTempDataD3 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2706_c_macro_; 
_dataTx_merge_stmt_2695_c_postamble_macro_; 
// 			$volatile invd3 := ((tempDataD3 [] 1023 ) ^ (CRC_16_DAT3 [] 15 )) $buffering 1
_dataTx_assign_stmt_2719_c_macro_; 
// 			$volatile nextCRC16_DAT3 := (((( $slice CRC_16_DAT3 14 12 )  && ((CRC_16_DAT3 [] 11 ) ^ invd3)) && ( $slice CRC_16_DAT3 10 5 ) ) && ((((CRC_16_DAT3 [] 4 ) ^ invd3) && ( $slice CRC_16_DAT3 3 0 ) ) && invd3)) $buffering 1
_dataTx_assign_stmt_2743_c_macro_; 
// 			$volatile nextTempDataD3 := (tempDataD3 << 1 ) $buffering 1
_dataTx_assign_stmt_2748_c_macro_; 
// 			$volatile next_j_3 := (j_3 + 1 ) $buffering 1
_dataTx_assign_stmt_2753_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2756);\
konst_2756.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_3), &(konst_2756), &(ULT_u11_u1_2757));\
if (has_undefined_bit(&ULT_u11_u1_2757)) {fprintf(stderr, "Error: variable ULT_u11_u1_2757 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2757));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2757)) break;
} 
}
// 			DAT0Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2760_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 797
__declare_static_bit_vector(konst_2790,11);\
bit_vector_clear(&konst_2790);\
konst_2790.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2791,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 799
_dataTx_merge_stmt_2762_c_preamble_macro_; 
// 			$phi k_0 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_k_0 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2763_c_macro_; 
// 			$phi dat0bit4_0 := 			  dat0 $on   $entry 			  nextbit4_0 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2768_c_macro_; 
_dataTx_merge_stmt_2762_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit4_0 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2777_c_macro_; 
// 			$volatile nextbit4_0 := (dat0bit4_0 << 1 ) $buffering 1
_dataTx_assign_stmt_2782_c_macro_; 
// 			$volatile next_k_0 := (k_0 + 1 ) $buffering 1
_dataTx_assign_stmt_2787_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2790);\
konst_2790.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_0), &(konst_2790), &(ULT_u11_u1_2791));\
if (has_undefined_bit(&ULT_u11_u1_2791)) {fprintf(stderr, "Error: variable ULT_u11_u1_2791 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2791));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2791)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 809
__declare_static_bit_vector(konst_2821,5);\
bit_vector_clear(&konst_2821);\
konst_2821.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2822,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 811
_dataTx_merge_stmt_2793_c_preamble_macro_; 
// 			$phi l_0 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_l_0 $on   $loopback 
 // type of target is $uint<5>
_dataTx_phi_stmt_2794_c_macro_; 
// 			$phi dat0crc4 := 			  nextCRC16_DAT0 $on   $entry 			  nextbitcrc4_0 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2799_c_macro_; 
_dataTx_merge_stmt_2793_c_postamble_macro_; 
// 			DAT0Tx := (dat0crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2808_c_macro_; 
// 			$volatile nextbitcrc4_0 := (dat0crc4 << 1 ) $buffering 1
_dataTx_assign_stmt_2813_c_macro_; 
// 			$volatile next_l_0 := (l_0 + 1 ) $buffering 1
_dataTx_assign_stmt_2818_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2821);\
konst_2821.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_0), &(konst_2821), &(ULT_u5_u1_2822));\
if (has_undefined_bit(&ULT_u5_u1_2822)) {fprintf(stderr, "Error: variable ULT_u5_u1_2822 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2822));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_2822)) break;
} 
}
// 			DAT0Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2825_c_macro_; 
// $report (OUTDATA0 data 			 lastBlock lastBlock )
_dataTx_stmt_2827_c_macro_; 
// 			DAT1Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2830_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 824
__declare_static_bit_vector(konst_2860,11);\
bit_vector_clear(&konst_2860);\
konst_2860.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2861,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 826
_dataTx_merge_stmt_2832_c_preamble_macro_; 
// 			$phi k_1 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_k_1 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2833_c_macro_; 
// 			$phi dat0bit4_1 := 			  dat1 $on   $entry 			  nextbit4_1 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2838_c_macro_; 
_dataTx_merge_stmt_2832_c_postamble_macro_; 
// 			DAT1Tx := (dat0bit4_1 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2847_c_macro_; 
// 			$volatile nextbit4_1 := (dat0bit4_1 << 1 ) $buffering 1
_dataTx_assign_stmt_2852_c_macro_; 
// 			$volatile next_k_1 := (k_1 + 1 ) $buffering 1
_dataTx_assign_stmt_2857_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2860);\
konst_2860.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_1), &(konst_2860), &(ULT_u11_u1_2861));\
if (has_undefined_bit(&ULT_u11_u1_2861)) {fprintf(stderr, "Error: variable ULT_u11_u1_2861 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2861));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2861)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 836
__declare_static_bit_vector(konst_2891,5);\
bit_vector_clear(&konst_2891);\
konst_2891.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2892,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 838
_dataTx_merge_stmt_2863_c_preamble_macro_; 
// 			$phi l_1 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_l_1 $on   $loopback 
 // type of target is $uint<5>
_dataTx_phi_stmt_2864_c_macro_; 
// 			$phi dat1crc4 := 			  nextCRC16_DAT1 $on   $entry 			  nextbitcrc4_1 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2869_c_macro_; 
_dataTx_merge_stmt_2863_c_postamble_macro_; 
// 			DAT1Tx := (dat1crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2878_c_macro_; 
// 			$volatile nextbitcrc4_1 := (dat1crc4 << 1 ) $buffering 1
_dataTx_assign_stmt_2883_c_macro_; 
// 			$volatile next_l_1 := (l_1 + 1 ) $buffering 1
_dataTx_assign_stmt_2888_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2891);\
konst_2891.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_1), &(konst_2891), &(ULT_u5_u1_2892));\
if (has_undefined_bit(&ULT_u5_u1_2892)) {fprintf(stderr, "Error: variable ULT_u5_u1_2892 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2892));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_2892)) break;
} 
}
// 			DAT1Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2895_c_macro_; 
// 			DAT2Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2898_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 850
__declare_static_bit_vector(konst_2928,11);\
bit_vector_clear(&konst_2928);\
konst_2928.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2929,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 852
_dataTx_merge_stmt_2900_c_preamble_macro_; 
// 			$phi k_2 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_k_2 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2901_c_macro_; 
// 			$phi dat0bit4_2 := 			  dat2 $on   $entry 			  nextbit4_2 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2906_c_macro_; 
_dataTx_merge_stmt_2900_c_postamble_macro_; 
// 			DAT2Tx := (dat0bit4_2 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2915_c_macro_; 
// 			$volatile nextbit4_2 := (dat0bit4_2 << 1 ) $buffering 1
_dataTx_assign_stmt_2920_c_macro_; 
// 			$volatile next_k_2 := (k_2 + 1 ) $buffering 1
_dataTx_assign_stmt_2925_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2928);\
konst_2928.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_2), &(konst_2928), &(ULT_u11_u1_2929));\
if (has_undefined_bit(&ULT_u11_u1_2929)) {fprintf(stderr, "Error: variable ULT_u11_u1_2929 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2929));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2929)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 862
__declare_static_bit_vector(konst_2959,5);\
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2960,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 864
_dataTx_merge_stmt_2931_c_preamble_macro_; 
// 			$phi l_2 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_l_2 $on   $loopback 
 // type of target is $uint<5>
_dataTx_phi_stmt_2932_c_macro_; 
// 			$phi dat2crc4 := 			  nextCRC16_DAT2 $on   $entry 			  nextbitcrc4_2 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_2937_c_macro_; 
_dataTx_merge_stmt_2931_c_postamble_macro_; 
// 			DAT2Tx := (dat2crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2946_c_macro_; 
// 			$volatile nextbitcrc4_2 := (dat2crc4 << 1 ) $buffering 1
_dataTx_assign_stmt_2951_c_macro_; 
// 			$volatile next_l_2 := (l_2 + 1 ) $buffering 1
_dataTx_assign_stmt_2956_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_2), &(konst_2959), &(ULT_u5_u1_2960));\
if (has_undefined_bit(&ULT_u5_u1_2960)) {fprintf(stderr, "Error: variable ULT_u5_u1_2960 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2960));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_2960)) break;
} 
}
// 			DAT2Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2963_c_macro_; 
// 			DAT3Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2966_c_macro_; 
{
// do-while:   file .Aa/sdhc.linked.aa, line 876
__declare_static_bit_vector(konst_2996,11);\
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2997,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 878
_dataTx_merge_stmt_2968_c_preamble_macro_; 
// 			$phi k_3 := 			  ($bitcast ($uint<11>) 0  ) $on   $entry 			  next_k_3 $on   $loopback 
 // type of target is $uint<11>
_dataTx_phi_stmt_2969_c_macro_; 
// 			$phi dat0bit4_3 := 			  dat3 $on   $entry 			  nextbit4_3 $on   $loopback 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2974_c_macro_; 
_dataTx_merge_stmt_2968_c_postamble_macro_; 
// 			DAT3Tx := (dat0bit4_3 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2983_c_macro_; 
// 			$volatile nextbit4_3 := (dat0bit4_3 << 1 ) $buffering 1
_dataTx_assign_stmt_2988_c_macro_; 
// 			$volatile next_k_3 := (k_3 + 1 ) $buffering 1
_dataTx_assign_stmt_2993_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_3), &(konst_2996), &(ULT_u11_u1_2997));\
if (has_undefined_bit(&ULT_u11_u1_2997)) {fprintf(stderr, "Error: variable ULT_u11_u1_2997 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2997));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u11_u1_2997)) break;
} 
}
{
// do-while:   file .Aa/sdhc.linked.aa, line 888
__declare_static_bit_vector(konst_3027,5);\
bit_vector_clear(&konst_3027);\
konst_3027.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_3028,1);\
uint8_t do_while_entry_flag;
do_while_entry_flag = 1;
uint8_t do_while_loopback_flag;
do_while_loopback_flag = 0;
while(1) {
// merge  file .Aa/sdhc.linked.aa, line 890
_dataTx_merge_stmt_2999_c_preamble_macro_; 
// 			$phi l_3 := 			  ($bitcast ($uint<5>) 0  ) $on   $entry 			  next_l_3 $on   $loopback 
 // type of target is $uint<5>
_dataTx_phi_stmt_3000_c_macro_; 
// 			$phi dat3crc4 := 			  nextCRC16_DAT3 $on   $entry 			  nextbitcrc4_3 $on   $loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_3005_c_macro_; 
_dataTx_merge_stmt_2999_c_postamble_macro_; 
// 			DAT3Tx := (dat3crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3014_c_macro_; 
// 			$volatile nextbitcrc4_3 := (dat3crc4 << 1 ) $buffering 1
_dataTx_assign_stmt_3019_c_macro_; 
// 			$volatile next_l_3 := (l_3 + 1 ) $buffering 1
_dataTx_assign_stmt_3024_c_macro_; 
do_while_entry_flag = 0;
do_while_loopback_flag = 1;
bit_vector_clear(&konst_3027);\
konst_3027.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_3), &(konst_3027), &(ULT_u5_u1_3028));\
if (has_undefined_bit(&ULT_u5_u1_3028)) {fprintf(stderr, "Error: variable ULT_u5_u1_3028 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_3028));assert(0);} \

if (!bit_vector_to_uint64(0, &ULT_u5_u1_3028)) break;
} 
}
// 			DAT3Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3031_c_macro_; 
// $report (END transmission 			 dat0 dat0 			 dat1 dat1 			 dat2 dat2 			 dat3 dat3 )
_dataTx_stmt_3036_c_macro_; 
} 
else {
_dataTx_branch_block_stmt_3038_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 905
_dataTx_merge_stmt_3039_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataTx_phi_stmt_3040_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3045_c_macro_; 
_dataTx_merge_stmt_3039_c_postamble_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && dataBufferTx)) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3060_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_3065_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3068,10);\
bit_vector_clear(&konst_3068);\
konst_3068.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_3069,1);\
bit_vector_clear(&konst_3068);\
konst_3068.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_3068), &(ULT_u10_u1_3069));\
if (has_undefined_bit(&ULT_u10_u1_3069)) {fprintf(stderr, "Error: variable ULT_u10_u1_3069 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_3069));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_3069)) { 
/* 				$place[loopback1]
*/  goto loopback1_3038;
} 
else {
 ;
}
_dataTx_branch_block_stmt_3038_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_3076_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 919
_dataTx_merge_stmt_3077_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataTx_phi_stmt_3078_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_3083_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3088_c_macro_; 
_dataTx_merge_stmt_3077_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3101_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3125_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3130_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataTx_assign_stmt_3135_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3138,13);\
bit_vector_clear(&konst_3138);\
konst_3138.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_3139,1);\
bit_vector_clear(&konst_3138);\
konst_3138.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_3138), &(ULT_u13_u1_3139));\
if (has_undefined_bit(&ULT_u13_u1_3139)) {fprintf(stderr, "Error: variable ULT_u13_u1_3139 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_3139));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_3139)) { 
/* 			$place[loopback]
*/  goto loopback_2383;
} 
else {
 ;
}
// $report (OUTDATA data 			 dat dat 			 nextCRC16 nextCRC16 			 lastBlock lastBlock )
_dataTx_stmt_3145_c_macro_; 
// 			DAT0Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3148_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 936
_dataTx_merge_stmt_3149_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_K $on   dataloop 
 // type of target is $uint<13>
_dataTx_phi_stmt_3150_c_macro_; 
// 				$phi dat0bit := 				  dat $on   $entry 				  nextbit $on   dataloop 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3155_c_macro_; 
_dataTx_merge_stmt_3149_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit [] 4095 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3164_c_macro_; 
// 			nextbit := (dat0bit << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3169_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 13. 
_dataTx_assign_stmt_3174_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3177,13);\
bit_vector_clear(&konst_3177);\
konst_3177.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_3178,1);\
bit_vector_clear(&konst_3177);\
konst_3177.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_K), &(konst_3177), &(ULT_u13_u1_3178));\
if (has_undefined_bit(&ULT_u13_u1_3178)) {fprintf(stderr, "Error: variable ULT_u13_u1_3178 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_3178));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_3178)) { 
/* 			$place[dataloop]
*/  goto dataloop_2383;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 948
_dataTx_merge_stmt_3181_c_preamble_macro_; 
// 				$phi L := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_L $on   crcloop 
 // type of target is $uint<5>
_dataTx_phi_stmt_3182_c_macro_; 
// 				$phi dat0crc := 				  nextCRC16 $on   $entry 				  nextbitcrc $on   crcloop 
 // type of target is $uint<16>
_dataTx_phi_stmt_3187_c_macro_; 
_dataTx_merge_stmt_3181_c_postamble_macro_; 
// 			DAT0Tx := (dat0crc [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3196_c_macro_; 
// 			nextbitcrc := (dat0crc << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3201_c_macro_; 
// 			next_L := (L + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_3206_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3209,5);\
bit_vector_clear(&konst_3209);\
konst_3209.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_3210,1);\
bit_vector_clear(&konst_3209);\
konst_3209.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_L), &(konst_3209), &(ULT_u5_u1_3210));\
if (has_undefined_bit(&ULT_u5_u1_3210)) {fprintf(stderr, "Error: variable ULT_u5_u1_3210 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_3210));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_3210)) { 
/* 			$place[crcloop]
*/  goto crcloop_2383;
} 
else {
 ;
}
// 			DAT0Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3215_c_macro_; 
}
// 		$guard (blockCountEnable) blockCountNext := (blockCount - 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3222_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3225,1);\
bit_vector_clear(&konst_3225);\
konst_3225.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3226,1);\
bit_vector_clear(&konst_3225);\
konst_3225.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_3225), &(EQ_u1_u1_3226));\
if (has_undefined_bit(&EQ_u1_u1_3226)) {fprintf(stderr, "Error: variable EQ_u1_u1_3226 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3226));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3226)) { 
// 			presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3230_c_macro_; 
// 			presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3234_c_macro_; 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfe ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3240_c_macro_; 
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 968
_dataTx_merge_stmt_3242_c_preamble_macro_; 
_dataTx_merge_stmt_3242_c_postamble_macro_; 
// 		wait := DAT0Rx $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3245_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u8_u1_3249,1);\
bit_vector_equal(0, &(wait), &(ZERO_8), &(EQ_u8_u1_3249));\
if (has_undefined_bit(&EQ_u8_u1_3249)) {fprintf(stderr, "Error: variable EQ_u8_u1_3249 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_3249));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_3249)) { 
/* 			$place[waitloop]
*/  goto waitloop_2383;
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3254,1);\
bit_vector_clear(&konst_3254);\
konst_3254.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3255,1);\
bit_vector_clear(&konst_3254);\
konst_3254.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_3254), &(EQ_u1_u1_3255));\
if (has_undefined_bit(&EQ_u1_u1_3255)) {fprintf(stderr, "Error: variable EQ_u1_u1_3255 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3255));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3255)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hf9 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3261_c_macro_; 
// 			transferComplete := (ZERO_8 | _h02 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3266_c_macro_; 
} 
else {
 ;
}
// $report (OUTDATA data 		 lastBlock lastBlock 		 blockCount blockCount 		 blockCountEnable blockCountEnable )
_dataTx_stmt_3271_c_macro_; 
_dataTx_branch_block_stmt_2383_c_export_apply_macro_;
}
_dataTx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataTx_series_block_stmt_2377_c_mutex_);
}
void _generate_crc_7_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_series_block_stmt_291_c_mutex_);
MUTEX_LOCK(_generate_crc_7_series_block_stmt_291_c_mutex_);
_generate_crc_7_inner_inarg_prep_macro__; 
_generate_crc_7_branch_block_stmt_296_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 141
_generate_crc_7_merge_stmt_297_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<6>) 41  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<6>
_generate_crc_7_phi_stmt_298_c_macro_; 
// 			$phi crc_out := 			  final_crc_out $on   loopback 			  ( $slice message_signal 39 33 )  $on   $entry 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_304_c_macro_; 
// 			$phi temp := 			  next_temp $on   loopback 			  ( $slice message_signal 32 0 )  $on   $entry 
 // type of target is $uint<33>
_generate_crc_7_phi_stmt_309_c_macro_; 
_generate_crc_7_merge_stmt_297_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 149
__declare_static_bit_vector(konst_318,7);\
bit_vector_clear(&konst_318);\
konst_318.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_319,1);\
__declare_static_bit_vector(konst_320,1);\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_321,1);\
bit_vector_clear(&konst_318);\
konst_318.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_318), &(BITSEL_u7_u1_319));\
bit_vector_clear(&konst_320);\
konst_320.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_319), &(konst_320), &(EQ_u1_u1_321));\
if (has_undefined_bit(&EQ_u1_u1_321)) {fprintf(stderr, "Error: variable EQ_u1_u1_321 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_321));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_321)) { 
// 			a := (crc_out [] 5 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_326_c_macro_; 
// 			b := (crc_out [] 4 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_331_c_macro_; 
// 			c := (crc_out [] 3 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_336_c_macro_; 
// 			d := ((crc_out [] 2 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_343_c_macro_; 
// 			e := (crc_out [] 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_348_c_macro_; 
// 			f := (crc_out [] 0 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_353_c_macro_; 
// 			g := ((temp [] 32 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_360_c_macro_; 
// 			crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_375_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_296;
} 
else {
// 			crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 32 )) $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_385_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_296;
}
// merge  file .Aa/sdhc.linked.aa, line 163
_generate_crc_7_merge_stmt_388_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_389_c_macro_; 
_generate_crc_7_merge_stmt_388_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_assign_stmt_398_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_assign_stmt_403_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_406,6);\
bit_vector_clear(&konst_406);\
__declare_static_bit_vector(UGT_u6_u1_407,1);\
bit_vector_clear(&konst_406);\
bit_vector_greater(0, &(next_I), &(konst_406), &(UGT_u6_u1_407));\
if (has_undefined_bit(&UGT_u6_u1_407)) {fprintf(stderr, "Error: variable UGT_u6_u1_407 has undefined value (%s) at test point.\n", to_string(&UGT_u6_u1_407));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u6_u1_407)) { 
/* 			$place[loopback]
*/  goto loopback_296;
} 
else {
 ;
}
_generate_crc_7_branch_block_stmt_296_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_413_c_macro_; 
_generate_crc_7_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_series_block_stmt_291_c_mutex_);
}
void _generate_crc_7_120_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_120_series_block_stmt_415_c_mutex_);
MUTEX_LOCK(_generate_crc_7_120_series_block_stmt_415_c_mutex_);
_generate_crc_7_120_inner_inarg_prep_macro__; 
_generate_crc_7_120_branch_block_stmt_418_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 183
_generate_crc_7_120_merge_stmt_419_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<8>) 121  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<8>
_generate_crc_7_120_phi_stmt_420_c_macro_; 
// 			$phi crc_out := 			  ( $slice message_signal 119 113 )  $on   $entry 			  final_crc_out $on   loopback 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_425_c_macro_; 
// 			$phi temp := 			  ( $slice message_signal 112 0 )  $on   $entry 			  next_temp $on   loopback 
 // type of target is $uint<113>
_generate_crc_7_120_phi_stmt_430_c_macro_; 
_generate_crc_7_120_merge_stmt_419_c_postamble_macro_; 
// 		crc_out_print := (crc_out >> 6 ) $buffering 1// bits of buffering = 7.  Orphaned statement with target crc_out_print ?? 
_generate_crc_7_120_assign_stmt_441_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 192
__declare_static_bit_vector(konst_444,7);\
bit_vector_clear(&konst_444);\
konst_444.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_445,1);\
__declare_static_bit_vector(konst_446,1);\
bit_vector_clear(&konst_446);\
konst_446.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_447,1);\
bit_vector_clear(&konst_444);\
konst_444.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_444), &(BITSEL_u7_u1_445));\
bit_vector_clear(&konst_446);\
konst_446.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_445), &(konst_446), &(EQ_u1_u1_447));\
if (has_undefined_bit(&EQ_u1_u1_447)) {fprintf(stderr, "Error: variable EQ_u1_u1_447 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_447));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_447)) { 
// 			a := (crc_out [] 5 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_452_c_macro_; 
// 			b := (crc_out [] 4 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_457_c_macro_; 
// 			c := (crc_out [] 3 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_462_c_macro_; 
// 			d := ((crc_out [] 2 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_469_c_macro_; 
// 			e := (crc_out [] 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_474_c_macro_; 
// 			f := (crc_out [] 0 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_479_c_macro_; 
// 			g := ((temp [] 112 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_486_c_macro_; 
// 			crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_501_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_418;
} 
else {
// 			crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 112 )) $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_511_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_418;
}
// merge  file .Aa/sdhc.linked.aa, line 206
_generate_crc_7_120_merge_stmt_514_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_515_c_macro_; 
_generate_crc_7_120_merge_stmt_514_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_524_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_529_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_532,8);\
bit_vector_clear(&konst_532);\
__declare_static_bit_vector(UGT_u8_u1_533,1);\
bit_vector_clear(&konst_532);\
bit_vector_greater(0, &(next_I), &(konst_532), &(UGT_u8_u1_533));\
if (has_undefined_bit(&UGT_u8_u1_533)) {fprintf(stderr, "Error: variable UGT_u8_u1_533 has undefined value (%s) at test point.\n", to_string(&UGT_u8_u1_533));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u8_u1_533)) { 
/* 			$place[loopback]
*/  goto loopback_418;
} 
else {
 ;
}
_generate_crc_7_120_branch_block_stmt_418_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_539_c_macro_; 
_generate_crc_7_120_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_120_series_block_stmt_415_c_mutex_);
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_3274_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_3274_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_3274_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _resetRegisters_(bit_vector* __presetCondition)
{
MUTEX_DECL(_resetRegisters_series_block_stmt_3277_c_mutex_);
MUTEX_LOCK(_resetRegisters_series_block_stmt_3277_c_mutex_);
_resetRegisters_inner_inarg_prep_macro__; 
// 	sdhcRegisters[64 ] := _h8A  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3282_c_macro_; 
// 	sdhcRegisters[65 ] := _h64  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3286_c_macro_; 
// 	sdhcRegisters[66 ] := _h20  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3290_c_macro_; 
// 	sdhcRegisters[67 ] := _h05  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3294_c_macro_; 
// 	sdhcRegisters[68 ] := _h31  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3298_c_macro_; 
// 	sdhcRegisters[69 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3302_c_macro_; 
// 	sdhcRegisters[70 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3306_c_macro_; 
// 	sdhcRegisters[71 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3310_c_macro_; 
// 	sdhcRegisters[72 ] := _h64  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3314_c_macro_; 
// 	sdhcRegisters[73 ] := _h96  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3318_c_macro_; 
// 	sdhcRegisters[74 ] := _hC8  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3322_c_macro_; 
// 	sdhcRegisters[75 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3326_c_macro_; 
// 	sdhcRegisters[76 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3330_c_macro_; 
// 	sdhcRegisters[77 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3334_c_macro_; 
// 	sdhcRegisters[78 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3338_c_macro_; 
// 	sdhcRegisters[79 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3342_c_macro_; 
// 	sdhcRegisters[96 ] := _h7D  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3346_c_macro_; 
// 	sdhcRegisters[97 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3350_c_macro_; 
// 	sdhcRegisters[98 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3354_c_macro_; 
// 	sdhcRegisters[99 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3358_c_macro_; 
// 	sdhcRegisters[100 ] := _h01  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3362_c_macro_; 
// 	sdhcRegisters[101 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3366_c_macro_; 
// 	sdhcRegisters[102 ] := _h04  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3370_c_macro_; 
// 	sdhcRegisters[103 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3374_c_macro_; 
// 	sdhcRegisters[104 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3378_c_macro_; 
// 	sdhcRegisters[105 ] := _h40  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3382_c_macro_; 
// 	sdhcRegisters[106 ] := _h01  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3386_c_macro_; 
// 	sdhcRegisters[107 ] := _h80  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3390_c_macro_; 
// 	sdhcRegisters[108 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3394_c_macro_; 
// 	sdhcRegisters[109 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3398_c_macro_; 
// 	sdhcRegisters[110 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3402_c_macro_; 
// 	sdhcRegisters[111 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3406_c_macro_; 
// 	sdhcRegisters[254 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3410_c_macro_; 
// 	sdhcRegisters[255 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3414_c_macro_; 
_resetRegisters_branch_block_stmt_3415_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1029
_resetRegisters_merge_stmt_3416_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<9>) 0  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<9>
_resetRegisters_phi_stmt_3417_c_macro_; 
_resetRegisters_merge_stmt_3416_c_postamble_macro_; 
// 		current_register_value := sdhcRegisters[I] $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3427_c_macro_; 
// 		current_softwarereset_register_value := sdhcRegisters[47 ] $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3431_c_macro_; 
// 		$volatile condition := ((I >= 64 ) & (I < 72 )) $buffering 1
_resetRegisters_assign_stmt_3440_c_macro_; 
// 		$volatile condition2 := ((I >= 72 ) & (I < 80 )) $buffering 1
_resetRegisters_assign_stmt_3449_c_macro_; 
// 		$volatile condition3 := ((I >= 96 ) & (I < 112 )) $buffering 1
_resetRegisters_assign_stmt_3458_c_macro_; 
// 		$volatile condition4 := ((I >= 254 ) & (I < 256 )) $buffering 1
_resetRegisters_assign_stmt_3467_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1039
__declare_static_bit_vector(OR_u1_u1_3471,1);\
__declare_static_bit_vector(OR_u1_u1_3474,1);\
__declare_static_bit_vector(OR_u1_u1_3475,1);\
bit_vector_or(&(condition), &(condition2), &(OR_u1_u1_3471));\
bit_vector_or(&(condition3), &(condition4), &(OR_u1_u1_3474));\
bit_vector_or(&(OR_u1_u1_3471), &(OR_u1_u1_3474), &(OR_u1_u1_3475));\
if (has_undefined_bit(&OR_u1_u1_3475)) {fprintf(stderr, "Error: variable OR_u1_u1_3475 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_3475));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_3475)) { 
/* null */ ;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1042
__declare_static_bit_vector(EQ_u2_u1_3481,1);\
bit_vector_equal(0, &(resetCondition), &(ZERO_2), &(EQ_u2_u1_3481));\
if (has_undefined_bit(&EQ_u2_u1_3481)) {fprintf(stderr, "Error: variable EQ_u2_u1_3481 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3481));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3481)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3485_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1045
__declare_static_bit_vector(EQ_u2_u1_3490,1);\
__declare_static_bit_vector(konst_3492,9);\
bit_vector_clear(&konst_3492);\
konst_3492.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u9_u1_3493,1);\
__declare_static_bit_vector(konst_3495,9);\
bit_vector_clear(&konst_3495);\
konst_3495.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u9_u1_3496,1);\
__declare_static_bit_vector(OR_u1_u1_3497,1);\
__declare_static_bit_vector(AND_u1_u1_3498,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3490));\
bit_vector_clear(&konst_3492);\
konst_3492.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3492), &(EQ_u9_u1_3493));\
bit_vector_clear(&konst_3495);\
konst_3495.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3495), &(EQ_u9_u1_3496));\
bit_vector_or(&(EQ_u9_u1_3493), &(EQ_u9_u1_3496), &(OR_u1_u1_3497));\
bit_vector_and(&(EQ_u2_u1_3490), &(OR_u1_u1_3497), &(AND_u1_u1_3498));\
if (has_undefined_bit(&AND_u1_u1_3498)) {fprintf(stderr, "Error: variable AND_u1_u1_3498 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3498));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3498)) { 
// 			sdhcRegisters[I] := (current_register_value & _hfe ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3504_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3508,2);\
bit_vector_clear(&konst_3508);\
konst_3508.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3509,2);\
bit_vector_clear(&type_cast_3509);\
type_cast_3509.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3510,1);\
bit_vector_clear(&konst_3508);\
konst_3508.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3509), &(konst_3508));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3509), &(EQ_u2_u1_3510));\
if (has_undefined_bit(&EQ_u2_u1_3510)) {fprintf(stderr, "Error: variable EQ_u2_u1_3510 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3510));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3510)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3513,9);\
bit_vector_clear(&konst_3513);\
konst_3513.val.byte_array[0] = 32;\
__declare_static_bit_vector(UGE_u9_u1_3514,1);\
__declare_static_bit_vector(konst_3516,9);\
bit_vector_clear(&konst_3516);\
konst_3516.val.byte_array[0] = 36;\
__declare_static_bit_vector(ULT_u9_u1_3517,1);\
__declare_static_bit_vector(AND_u1_u1_3518,1);\
bit_vector_clear(&konst_3513);\
konst_3513.val.byte_array[0] = 32;\
bit_vector_greater_equal(0, &(I), &(konst_3513), &(UGE_u9_u1_3514));\
bit_vector_clear(&konst_3516);\
konst_3516.val.byte_array[0] = 36;\
bit_vector_less(0, &(I), &(konst_3516), &(ULT_u9_u1_3517));\
bit_vector_and(&(UGE_u9_u1_3514), &(ULT_u9_u1_3517), &(AND_u1_u1_3518));\
if (has_undefined_bit(&AND_u1_u1_3518)) {fprintf(stderr, "Error: variable AND_u1_u1_3518 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3518));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3518)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3522_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3526,9);\
bit_vector_clear(&konst_3526);\
konst_3526.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u9_u1_3527,1);\
bit_vector_clear(&konst_3526);\
konst_3526.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3526), &(EQ_u9_u1_3527));\
if (has_undefined_bit(&EQ_u9_u1_3527)) {fprintf(stderr, "Error: variable EQ_u9_u1_3527 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3527));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3527)) { 
// 			sdhcRegisters[I] := (current_register_value & _h09 ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3533_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3537,9);\
bit_vector_clear(&konst_3537);\
konst_3537.val.byte_array[0] = 37;\
__declare_static_bit_vector(EQ_u9_u1_3538,1);\
bit_vector_clear(&konst_3537);\
konst_3537.val.byte_array[0] = 37;\
bit_vector_equal(0, &(I), &(konst_3537), &(EQ_u9_u1_3538));\
if (has_undefined_bit(&EQ_u9_u1_3538)) {fprintf(stderr, "Error: variable EQ_u9_u1_3538 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3538));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3538)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3542_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3546,9);\
bit_vector_clear(&konst_3546);\
konst_3546.val.byte_array[0] = 42;\
__declare_static_bit_vector(EQ_u9_u1_3547,1);\
bit_vector_clear(&konst_3546);\
konst_3546.val.byte_array[0] = 42;\
bit_vector_equal(0, &(I), &(konst_3546), &(EQ_u9_u1_3547));\
if (has_undefined_bit(&EQ_u9_u1_3547)) {fprintf(stderr, "Error: variable EQ_u9_u1_3547 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3547));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3547)) { 
// 			sdhcRegisters[I] := (current_register_value & _h0C ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3553_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3557,9);\
bit_vector_clear(&konst_3557);\
konst_3557.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u9_u1_3558,1);\
bit_vector_clear(&konst_3557);\
konst_3557.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3557), &(EQ_u9_u1_3558));\
if (has_undefined_bit(&EQ_u9_u1_3558)) {fprintf(stderr, "Error: variable EQ_u9_u1_3558 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3558));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3558)) { 
// 			sdhcRegisters[I] := (current_register_value & _hC1 ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3564_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
}
}
}
// 		$volatile next_I := (I + 1 ) $buffering 1
_resetRegisters_assign_stmt_3574_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3577,9);\
bit_vector_clear(&konst_3577);\
konst_3577.val.byte_array[1] = 1;\
__declare_static_bit_vector(ULT_u9_u1_3578,1);\
bit_vector_clear(&konst_3577);\
konst_3577.val.byte_array[1] = 1;\
bit_vector_less(0, &(next_I), &(konst_3577), &(ULT_u9_u1_3578));\
if (has_undefined_bit(&ULT_u9_u1_3578)) {fprintf(stderr, "Error: variable ULT_u9_u1_3578 has undefined value (%s) at test point.\n", to_string(&ULT_u9_u1_3578));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u9_u1_3578)) { 
/* 			$place[loopback]
*/  goto loopback_3415;
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u2_u1_3584,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3584));\
if (has_undefined_bit(&EQ_u2_u1_3584)) {fprintf(stderr, "Error: variable EQ_u2_u1_3584 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3584));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3584)) { 
// 			sdhcRegisters[47 ] := (current_softwarereset_register_value & _hfd ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3590_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3594,2);\
bit_vector_clear(&konst_3594);\
konst_3594.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3595,2);\
bit_vector_clear(&type_cast_3595);\
type_cast_3595.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3596,1);\
bit_vector_clear(&konst_3594);\
konst_3594.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3595), &(konst_3594));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3595), &(EQ_u2_u1_3596));\
if (has_undefined_bit(&EQ_u2_u1_3596)) {fprintf(stderr, "Error: variable EQ_u2_u1_3596 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3596));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3596)) { 
// 			sdhcRegisters[47 ] := (current_softwarereset_register_value & _hfb ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3602_c_macro_; 
} 
else {
 ;
}
_resetRegisters_branch_block_stmt_3415_c_export_apply_macro_;
}
_resetRegisters_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_resetRegisters_series_block_stmt_3277_c_mutex_);
}
void _sdhc_daemon_()
{
MUTEX_DECL(_sdhc_daemon_series_block_stmt_3928_c_mutex_);
MUTEX_LOCK(_sdhc_daemon_series_block_stmt_3928_c_mutex_);
_sdhc_daemon_inner_inarg_prep_macro__; 
// 	SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3931_c_macro_; 
// 	normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3934_c_macro_; 
// 	normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3937_c_macro_; 
// 	errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3940_c_macro_; 
// 	errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3943_c_macro_; 
// 	txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3947_c_macro_; 
// 	rxBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3951_c_macro_; 
// 	dataRxEnrty := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3954_c_macro_; 
// 	dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3957_c_macro_; 
// 	dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3960_c_macro_; 
// 	dataErrorInterruptStatus := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3963_c_macro_; 
// 	$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_3965_c_macro_; 
_sdhc_daemon_branch_block_stmt_3966_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1258
_sdhc_daemon_merge_stmt_3967_c_preamble_macro_; 
_sdhc_daemon_merge_stmt_3967_c_postamble_macro_; 
// 		request := peripheral_bridge_to_sdhc_request $buffering 1// bits of buffering = 64. 
_sdhc_daemon_assign_stmt_3970_c_macro_; 
// 		$volatile rwbar := ( $slice request 63 63 )  $buffering 1
_sdhc_daemon_assign_stmt_3974_c_macro_; 
// 		$volatile bytemask := ( $slice request 62 59 )  $buffering 1
_sdhc_daemon_assign_stmt_3978_c_macro_; 
// 		$volatile unused := ( $slice request 58 56 )  $buffering 1
_sdhc_daemon_assign_stmt_3982_c_macro_; 
// 		$volatile addressunused := ( $slice request 55 40 )  $buffering 1
_sdhc_daemon_assign_stmt_3986_c_macro_; 
// 		$volatile address := ( $slice request 39 32 )  $buffering 1
_sdhc_daemon_assign_stmt_3990_c_macro_; 
// 		$volatile data3 := ( $slice request 31 24 )  $buffering 1
_sdhc_daemon_assign_stmt_3994_c_macro_; 
// 		$volatile data2 := ( $slice request 23 16 )  $buffering 1
_sdhc_daemon_assign_stmt_3998_c_macro_; 
// 		$volatile data1 := ( $slice request 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_4002_c_macro_; 
// 		$volatile data0 := ( $slice request 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4006_c_macro_; 
// 		$volatile b3 := ( $slice bytemask 3 3 )  $buffering 1
_sdhc_daemon_assign_stmt_4010_c_macro_; 
// 		$volatile b2 := ( $slice bytemask 2 2 )  $buffering 1
_sdhc_daemon_assign_stmt_4014_c_macro_; 
// 		$volatile b1 := ( $slice bytemask 1 1 )  $buffering 1
_sdhc_daemon_assign_stmt_4018_c_macro_; 
// 		$volatile b0 := ( $slice bytemask 0 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4022_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1274
__declare_static_bit_vector(konst_4025,1);\
bit_vector_clear(&konst_4025);\
__declare_static_bit_vector(EQ_u1_u1_4026,1);\
bit_vector_clear(&konst_4025);\
bit_vector_equal(0, &(rwbar), &(konst_4025), &(EQ_u1_u1_4026));\
if (has_undefined_bit(&EQ_u1_u1_4026)) {fprintf(stderr, "Error: variable EQ_u1_u1_4026 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4026));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4026)) { 
// 			$guard (b3) $call sdhc_register_write (address data3 ) () 
_sdhc_daemon_call_stmt_4030_c_macro_; 
// 			$guard (b2) $call sdhc_register_write ((address + 1 ) data2 ) () 
_sdhc_daemon_call_stmt_4036_c_macro_; 
// 			$guard (b1) $call sdhc_register_write ((address + 2 ) data1 ) () 
_sdhc_daemon_call_stmt_4042_c_macro_; 
// 			$guard (b0) $call sdhc_register_write ((address + 3 ) data0 ) () 
_sdhc_daemon_call_stmt_4048_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ZERO_32 $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_4051_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4054,8);\
bit_vector_clear(&konst_4054);\
konst_4054.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4055,8);\
__declare_static_bit_vector(konst_4056,8);\
bit_vector_clear(&konst_4056);\
konst_4056.val.byte_array[0] = 47;\
__declare_static_bit_vector(EQ_u8_u1_4057,1);\
bit_vector_clear(&konst_4054);\
konst_4054.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4054), &(ADD_u8_u8_4055));\
bit_vector_clear(&konst_4056);\
konst_4056.val.byte_array[0] = 47;\
bit_vector_equal(0, &(ADD_u8_u8_4055), &(konst_4056), &(EQ_u8_u1_4057));\
if (has_undefined_bit(&EQ_u8_u1_4057)) {fprintf(stderr, "Error: variable EQ_u8_u1_4057 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_4057));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_4057)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4059,32);\
bit_vector_clear(&konst_4059);\
konst_4059.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4061,8);\
bit_vector_clear(&konst_4061);\
__declare_static_bit_vector(BITSEL_u8_u1_4062,1);\
bit_vector_clear(&konst_4059);\
konst_4059.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4061);\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4059)])), &(konst_4061), &(BITSEL_u8_u1_4062));\
if (has_undefined_bit(&BITSEL_u8_u1_4062)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4062 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4062));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4062)) { 
// 			$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_4064_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4067,32);\
bit_vector_clear(&konst_4067);\
konst_4067.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4069,8);\
bit_vector_clear(&konst_4069);\
konst_4069.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_4070,1);\
bit_vector_clear(&konst_4067);\
konst_4067.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4069);\
konst_4069.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4067)])), &(konst_4069), &(BITSEL_u8_u1_4070));\
if (has_undefined_bit(&BITSEL_u8_u1_4070)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4070 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4070));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4070)) { 
// 			$call resetRegisters (ONE_2 ) () 
_sdhc_daemon_call_stmt_4072_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4075,32);\
bit_vector_clear(&konst_4075);\
konst_4075.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4077,8);\
bit_vector_clear(&konst_4077);\
konst_4077.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_4078,1);\
bit_vector_clear(&konst_4075);\
konst_4075.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4077);\
konst_4077.val.byte_array[0] = 2;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4075)])), &(konst_4077), &(BITSEL_u8_u1_4078));\
if (has_undefined_bit(&BITSEL_u8_u1_4078)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4078 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4078));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4078)) { 
// 			$call resetRegisters (($bitcast ($uint<2>) 2  ) ) () 
_sdhc_daemon_call_stmt_4081_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			commandInhibit_CMD := ((sdhcRegisters[36 ] & _h01 ) == 0 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4091_c_macro_; 
// 			$volatile addresscheck := (((address + 3 ) == _h0f ) & b0) $buffering 1
_sdhc_daemon_assign_stmt_4100_c_macro_; 
// 			presentState := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4108_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(AND_u1_u1_4112,1);\
bit_vector_and(&(addresscheck), &(commandInhibit_CMD), &(AND_u1_u1_4112));\
if (has_undefined_bit(&AND_u1_u1_4112)) {fprintf(stderr, "Error: variable AND_u1_u1_4112 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4112));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4112)) { 
// 			sdhcRegisters[36 ] := (presentState | _h01 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4118_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4121_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4124_c_macro_; 
// 			$call command_generator () (normalInterruptStatusVar1 normalInterruptStatusVar2 errorInterruptStatusVar1 errorInterruptStatusVar2 dataErrorInterruptStatusVar1 dataTransferComplete ) 
_sdhc_daemon_call_stmt_4131_c_macro_; 
// 			normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4134_c_macro_; 
// 			normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4137_c_macro_; 
// 			errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4140_c_macro_; 
// 			errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4143_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4147,10);\
bit_vector_clear(&konst_4147);\
__declare_static_bit_vector(UGT_u10_u1_4148,1);\
bit_vector_clear(&konst_4147);\
bit_vector_greater(0, &(rxBufferPointer), &(konst_4147), &(UGT_u10_u1_4148));\
if (has_undefined_bit(&UGT_u10_u1_4148)) {fprintf(stderr, "Error: variable UGT_u10_u1_4148 has undefined value (%s) at test point.\n", to_string(&UGT_u10_u1_4148));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u10_u1_4148)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] | _h08 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4155_c_macro_; 
// 			bufferReadReady := (ZERO_8 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4160_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4165_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4169,10);\
bit_vector_clear(&konst_4169);\
konst_4169.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_4170,1);\
bit_vector_clear(&konst_4169);\
konst_4169.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_4169), &(ULT_u10_u1_4170));\
if (has_undefined_bit(&ULT_u10_u1_4170)) {fprintf(stderr, "Error: variable ULT_u10_u1_4170 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_4170));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_4170)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] | _h04 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4177_c_macro_; 
// 			bufferWriteReady := (ZERO_8 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4182_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4187_c_macro_; 
} 
else {
 ;
}
// 			$volatile bufferDataPortCheck := (address == 32 ) $buffering 1
_sdhc_daemon_assign_stmt_4193_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4196,1);\
bit_vector_clear(&konst_4196);\
konst_4196.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4197,1);\
__declare_static_bit_vector(konst_4199,10);\
bit_vector_clear(&konst_4199);\
konst_4199.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_4200,1);\
__declare_static_bit_vector(AND_u1_u1_4201,1);\
bit_vector_clear(&konst_4196);\
konst_4196.val.byte_array[0] = 1;\
bit_vector_equal(0, &(bufferDataPortCheck), &(konst_4196), &(EQ_u1_u1_4197));\
bit_vector_clear(&konst_4199);\
konst_4199.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_4199), &(ULT_u10_u1_4200));\
bit_vector_and(&(EQ_u1_u1_4197), &(ULT_u10_u1_4200), &(AND_u1_u1_4201));\
if (has_undefined_bit(&AND_u1_u1_4201)) {fprintf(stderr, "Error: variable AND_u1_u1_4201 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4201));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4201)) { 
// 			dataBufferTx := sdhcRegisters[32 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4205_c_macro_; 
// 			dataBufferTx := sdhcRegisters[33 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4209_c_macro_; 
// 			dataBufferTx := sdhcRegisters[34 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4213_c_macro_; 
// 			dataBufferTx := sdhcRegisters[35 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4217_c_macro_; 
// 			txBufferPointer := (txBufferPointer + 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_4222_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4225,10);\
bit_vector_clear(&konst_4225);\
konst_4225.val.byte_array[1] = 2;\
__declare_static_bit_vector(EQ_u10_u1_4226,1);\
bit_vector_clear(&konst_4225);\
konst_4225.val.byte_array[1] = 2;\
bit_vector_equal(0, &(txBufferPointer), &(konst_4225), &(EQ_u10_u1_4226));\
if (has_undefined_bit(&EQ_u10_u1_4226)) {fprintf(stderr, "Error: variable EQ_u10_u1_4226 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_4226));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_4226)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] & _hfb ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4233_c_macro_; 
// 			singleMultipleBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4240_c_macro_; 
// 			blockCountEnable := ((  $bitreduce |  (sdhcRegisters[12 ] & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4249_c_macro_; 
// 			blockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4256_c_macro_; 
// 			blockCountTrue := (blockCount == 1 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4261_c_macro_; 
// 			lastBlock := (( ~ singleMultipleBlock ) | (blockCountEnable & blockCountTrue)) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4269_c_macro_; 
// 			$call dataTx (lastBlock blockCountEnable blockCount ) (blockCountNext transferComplete ) 
_sdhc_daemon_call_stmt_4275_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice blockCountNext 15 8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4280_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice blockCountNext 7 0 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4285_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4290_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4295_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
// 			$volatile readBufferDataPortCheck := (address == 32 ) $buffering 1
_sdhc_daemon_assign_stmt_4303_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4306,1);\
bit_vector_clear(&konst_4306);\
konst_4306.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4307,1);\
__declare_static_bit_vector(konst_4309,10);\
bit_vector_clear(&konst_4309);\
__declare_static_bit_vector(NEQ_u10_u1_4310,1);\
__declare_static_bit_vector(AND_u1_u1_4311,1);\
bit_vector_clear(&konst_4306);\
konst_4306.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBufferDataPortCheck), &(konst_4306), &(EQ_u1_u1_4307));\
bit_vector_clear(&konst_4309);\
bit_vector_not_equal(0, &(rxBufferPointer), &(konst_4309), &NEQ_u10_u1_4310);\
bit_vector_and(&(EQ_u1_u1_4307), &(NEQ_u10_u1_4310), &(AND_u1_u1_4311));\
if (has_undefined_bit(&AND_u1_u1_4311)) {fprintf(stderr, "Error: variable AND_u1_u1_4311 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4311));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4311)) { 
// 			sdhcRegisters[32 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4315_c_macro_; 
// 			sdhcRegisters[33 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4319_c_macro_; 
// 			sdhcRegisters[34 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4323_c_macro_; 
// 			sdhcRegisters[35 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4327_c_macro_; 
// 			rxBufferPointer := (rxBufferPointer - 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_4332_c_macro_; 
// 			singleMultipleReadBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4339_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4342,10);\
bit_vector_clear(&konst_4342);\
__declare_static_bit_vector(EQ_u10_u1_4343,1);\
bit_vector_clear(&konst_4342);\
bit_vector_equal(0, &(rxBufferPointer), &(konst_4342), &(EQ_u10_u1_4343));\
if (has_undefined_bit(&EQ_u10_u1_4343)) {fprintf(stderr, "Error: variable EQ_u10_u1_4343 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_4343));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_4343)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4350_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4353,1);\
bit_vector_clear(&konst_4353);\
konst_4353.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4354,1);\
bit_vector_clear(&konst_4353);\
konst_4353.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_4353), &(EQ_u1_u1_4354));\
if (has_undefined_bit(&EQ_u1_u1_4354)) {fprintf(stderr, "Error: variable EQ_u1_u1_4354 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4354));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4354)) { 
// 			readBlockCountEnable := ((  $bitreduce |  (sdhcRegisters[12 ] & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4363_c_macro_; 
// 			readBlockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4370_c_macro_; 
// 			readBlockCountTrue := (readBlockCount == 1 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4375_c_macro_; 
// 			readLastBlock := (readBlockCountEnable & readBlockCountTrue) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4380_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4383,16);\
bit_vector_clear(&konst_4383);\
__declare_static_bit_vector(NEQ_u16_u1_4384,1);\
bit_vector_clear(&konst_4383);\
bit_vector_not_equal(0, &(readBlockCount), &(konst_4383), &NEQ_u16_u1_4384);\
if (has_undefined_bit(&NEQ_u16_u1_4384)) {fprintf(stderr, "Error: variable NEQ_u16_u1_4384 has undefined value (%s) at test point.\n", to_string(&NEQ_u16_u1_4384));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u16_u1_4384)) { 
// 			newReadBlockCount := (readBlockCount - 1 ) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4389_c_macro_; 
// 			$call dataRx (readLastBlock ) (dataErrorInterruptStatusVar ) 
_sdhc_daemon_call_stmt_4392_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4395_c_macro_; 
// 			dataRxEnrty2 := ONE_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4398_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice newReadBlockCount 15 8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4403_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice newReadBlockCount 7 0 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4408_c_macro_; 
// 			readDataTransferComplete := ( $mux readLastBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4415_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4420_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4425_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
 ;
}
} 
else {
 ;
}
// 			readdata3 := ( $mux b3 sdhcRegisters[(address + 0 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4438_c_macro_; 
// 			readdata2 := ( $mux b2 sdhcRegisters[(address + 1 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4447_c_macro_; 
// 			readdata1 := ( $mux b1 sdhcRegisters[(address + 2 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4456_c_macro_; 
// 			readdata0 := ( $mux b0 sdhcRegisters[(address + 3 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4465_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ((readdata3 && readdata2) && (readdata1 && readdata0)) $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_4474_c_macro_; 
}
// 		dataErrorInterruptStatus := ((( $mux dataRxEnrty1 dataErrorInterruptStatusVar1  _b0  )  | ( $mux dataRxEnrty2 dataErrorInterruptStatusVar  _b0  ) ) | ( $mux (( ~ dataRxEnrty1 ) & ( ~ dataRxEnrty2 )) ZERO_8  _b0  ) ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4495_c_macro_; 
// 		sdhcRegisters[50 ] := (((sdhcRegisters[50 ] | (dataErrorInterruptStatus | errorInterruptStatusVar1)) & errorInterruptFlag1) & sdhcRegisters[54 ]) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4509_c_macro_; 
// 		sdhcRegisters[51 ] := (((sdhcRegisters[51 ] | errorInterruptStatusVar2) & errorInterruptFlag2) & sdhcRegisters[55 ]) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4521_c_macro_; 
// 		errorInterruptBit := (((  $bitreduce |  sdhcRegisters[50 ] ) | (  $bitreduce |  sdhcRegisters[51 ] )) && ($bitcast ($uint<7>) 0  )) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4533_c_macro_; 
// 		checkInterruptEnable := ((  $bitreduce |  sdhcRegisters[52 ] ) | (  $bitreduce |  sdhcRegisters[53 ] )) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4542_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1376
__declare_static_bit_vector(konst_4545,1);\
bit_vector_clear(&konst_4545);\
konst_4545.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4546,1);\
bit_vector_clear(&konst_4545);\
konst_4545.val.byte_array[0] = 1;\
bit_vector_equal(0, &(checkInterruptEnable), &(konst_4545), &(EQ_u1_u1_4546));\
if (has_undefined_bit(&EQ_u1_u1_4546)) {fprintf(stderr, "Error: variable EQ_u1_u1_4546 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4546));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4546)) { 
// 			interrupt := (((((readDataTransferComplete | dataTransferComplete) | transferComplete) | ((bufferReadReady | bufferWriteReady) | normalInterruptStatusVar1)) & sdhcRegisters[52 ]) & normalInterruptFlag1) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4564_c_macro_; 
// 			sdhcRegisters[48 ] := interrupt $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4568_c_macro_; 
// 			sdhcRegisters[49 ] := errorInterruptBit $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4572_c_macro_; 
// 			interruptLine := (sdhcRegisters[56 ] & interrupt) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4578_c_macro_; 
// 			errorInterruptLine := ((sdhcRegisters[50 ] & sdhcRegisters[58 ]) | (sdhcRegisters[51 ] & sdhcRegisters[59 ])) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4591_c_macro_; 
// 			SDHC_to_IRC_INT := ((  $bitreduce |  interruptLine ) | (  $bitreduce |  errorInterruptLine )) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4598_c_macro_; 
} 
else {
// 			sdhcRegisters[48 ] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4603_c_macro_; 
// 			SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4606_c_macro_; 
}
// $report (int check 		 dataErrorInterruptStatus dataErrorInterruptStatus 		 errorInterruptStatusVar1 errorInterruptStatusVar1 		 errorInterruptFlag1 errorInterruptFlag1 )
_sdhc_daemon_stmt_4611_c_macro_; 
/* 		$place[loopback]
*/  goto loopback_3966;
_sdhc_daemon_branch_block_stmt_3966_c_export_apply_macro_;
}
_sdhc_daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_daemon_series_block_stmt_3928_c_mutex_);
}
void sdhc_daemon()
{
_sdhc_daemon_outer_arg_decl_macro__;
_sdhc_daemon_();
_sdhc_daemon_outer_op_xfer_macro__;
}


void _sdhc_register_write_(bit_vector* __paddress, bit_vector* __pdata)
{
MUTEX_DECL(_sdhc_register_write_series_block_stmt_3606_c_mutex_);
MUTEX_LOCK(_sdhc_register_write_series_block_stmt_3606_c_mutex_);
_sdhc_register_write_inner_inarg_prep_macro__; 
_sdhc_register_write_branch_block_stmt_3609_c_export_decl_macro_; 
{
// switch statement :  file .Aa/sdhc.linked.aa, line 1087
if (has_undefined_bit(&address)) {fprintf(stderr, "Error: variable address has undefined value (%s) at test point.\n", to_string(&address));assert(0);} \

__declare_static_bit_vector(konst_3612,8);\
bit_vector_clear(&konst_3612);\
konst_3612.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3612);\
konst_3612.val.byte_array[0] = 5;\
__declare_static_bit_vector(konst_3620,8);\
bit_vector_clear(&konst_3620);\
konst_3620.val.byte_array[0] = 12;\
bit_vector_clear(&konst_3620);\
konst_3620.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_3628,8);\
bit_vector_clear(&konst_3628);\
konst_3628.val.byte_array[0] = 13;\
bit_vector_clear(&konst_3628);\
konst_3628.val.byte_array[0] = 13;\
__declare_static_bit_vector(konst_3634,8);\
bit_vector_clear(&konst_3634);\
konst_3634.val.byte_array[0] = 14;\
bit_vector_clear(&konst_3634);\
konst_3634.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_3642,8);\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 15;\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 15;\
__declare_static_bit_vector(konst_3650,8);\
bit_vector_clear(&konst_3650);\
konst_3650.val.byte_array[0] = 16;\
bit_vector_clear(&konst_3650);\
konst_3650.val.byte_array[0] = 16;\
__declare_static_bit_vector(konst_3653,8);\
bit_vector_clear(&konst_3653);\
konst_3653.val.byte_array[0] = 17;\
bit_vector_clear(&konst_3653);\
konst_3653.val.byte_array[0] = 17;\
__declare_static_bit_vector(konst_3656,8);\
bit_vector_clear(&konst_3656);\
konst_3656.val.byte_array[0] = 18;\
bit_vector_clear(&konst_3656);\
konst_3656.val.byte_array[0] = 18;\
__declare_static_bit_vector(konst_3659,8);\
bit_vector_clear(&konst_3659);\
konst_3659.val.byte_array[0] = 19;\
bit_vector_clear(&konst_3659);\
konst_3659.val.byte_array[0] = 19;\
__declare_static_bit_vector(konst_3662,8);\
bit_vector_clear(&konst_3662);\
konst_3662.val.byte_array[0] = 20;\
bit_vector_clear(&konst_3662);\
konst_3662.val.byte_array[0] = 20;\
__declare_static_bit_vector(konst_3665,8);\
bit_vector_clear(&konst_3665);\
konst_3665.val.byte_array[0] = 21;\
bit_vector_clear(&konst_3665);\
konst_3665.val.byte_array[0] = 21;\
__declare_static_bit_vector(konst_3668,8);\
bit_vector_clear(&konst_3668);\
konst_3668.val.byte_array[0] = 22;\
bit_vector_clear(&konst_3668);\
konst_3668.val.byte_array[0] = 22;\
__declare_static_bit_vector(konst_3671,8);\
bit_vector_clear(&konst_3671);\
konst_3671.val.byte_array[0] = 23;\
bit_vector_clear(&konst_3671);\
konst_3671.val.byte_array[0] = 23;\
__declare_static_bit_vector(konst_3674,8);\
bit_vector_clear(&konst_3674);\
konst_3674.val.byte_array[0] = 24;\
bit_vector_clear(&konst_3674);\
konst_3674.val.byte_array[0] = 24;\
__declare_static_bit_vector(konst_3677,8);\
bit_vector_clear(&konst_3677);\
konst_3677.val.byte_array[0] = 25;\
bit_vector_clear(&konst_3677);\
konst_3677.val.byte_array[0] = 25;\
__declare_static_bit_vector(konst_3680,8);\
bit_vector_clear(&konst_3680);\
konst_3680.val.byte_array[0] = 26;\
bit_vector_clear(&konst_3680);\
konst_3680.val.byte_array[0] = 26;\
__declare_static_bit_vector(konst_3683,8);\
bit_vector_clear(&konst_3683);\
konst_3683.val.byte_array[0] = 27;\
bit_vector_clear(&konst_3683);\
konst_3683.val.byte_array[0] = 27;\
__declare_static_bit_vector(konst_3686,8);\
bit_vector_clear(&konst_3686);\
konst_3686.val.byte_array[0] = 28;\
bit_vector_clear(&konst_3686);\
konst_3686.val.byte_array[0] = 28;\
__declare_static_bit_vector(konst_3689,8);\
bit_vector_clear(&konst_3689);\
konst_3689.val.byte_array[0] = 29;\
bit_vector_clear(&konst_3689);\
konst_3689.val.byte_array[0] = 29;\
__declare_static_bit_vector(konst_3692,8);\
bit_vector_clear(&konst_3692);\
konst_3692.val.byte_array[0] = 30;\
bit_vector_clear(&konst_3692);\
konst_3692.val.byte_array[0] = 30;\
__declare_static_bit_vector(konst_3695,8);\
bit_vector_clear(&konst_3695);\
konst_3695.val.byte_array[0] = 31;\
bit_vector_clear(&konst_3695);\
konst_3695.val.byte_array[0] = 31;\
__declare_static_bit_vector(konst_3698,8);\
bit_vector_clear(&konst_3698);\
konst_3698.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3698);\
konst_3698.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_3701,8);\
bit_vector_clear(&konst_3701);\
konst_3701.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3701);\
konst_3701.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3704,8);\
bit_vector_clear(&konst_3704);\
konst_3704.val.byte_array[0] = 38;\
bit_vector_clear(&konst_3704);\
konst_3704.val.byte_array[0] = 38;\
__declare_static_bit_vector(konst_3707,8);\
bit_vector_clear(&konst_3707);\
konst_3707.val.byte_array[0] = 39;\
bit_vector_clear(&konst_3707);\
konst_3707.val.byte_array[0] = 39;\
__declare_static_bit_vector(konst_3710,8);\
bit_vector_clear(&konst_3710);\
konst_3710.val.byte_array[0] = 41;\
bit_vector_clear(&konst_3710);\
konst_3710.val.byte_array[0] = 41;\
__declare_static_bit_vector(konst_3718,8);\
bit_vector_clear(&konst_3718);\
konst_3718.val.byte_array[0] = 46;\
bit_vector_clear(&konst_3718);\
konst_3718.val.byte_array[0] = 46;\
__declare_static_bit_vector(konst_3726,8);\
bit_vector_clear(&konst_3726);\
konst_3726.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3726);\
konst_3726.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_3734,8);\
bit_vector_clear(&konst_3734);\
konst_3734.val.byte_array[0] = 48;\
bit_vector_clear(&konst_3734);\
konst_3734.val.byte_array[0] = 48;\
__declare_static_bit_vector(konst_3739,8);\
bit_vector_clear(&konst_3739);\
konst_3739.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3739);\
konst_3739.val.byte_array[0] = 49;\
__declare_static_bit_vector(konst_3742,8);\
bit_vector_clear(&konst_3742);\
konst_3742.val.byte_array[0] = 50;\
bit_vector_clear(&konst_3742);\
konst_3742.val.byte_array[0] = 50;\
__declare_static_bit_vector(konst_3747,8);\
bit_vector_clear(&konst_3747);\
konst_3747.val.byte_array[0] = 51;\
bit_vector_clear(&konst_3747);\
konst_3747.val.byte_array[0] = 51;\
__declare_static_bit_vector(konst_3752,8);\
bit_vector_clear(&konst_3752);\
konst_3752.val.byte_array[0] = 53;\
bit_vector_clear(&konst_3752);\
konst_3752.val.byte_array[0] = 53;\
__declare_static_bit_vector(konst_3760,8);\
bit_vector_clear(&konst_3760);\
konst_3760.val.byte_array[0] = 55;\
bit_vector_clear(&konst_3760);\
konst_3760.val.byte_array[0] = 55;\
__declare_static_bit_vector(konst_3768,8);\
bit_vector_clear(&konst_3768);\
konst_3768.val.byte_array[0] = 57;\
bit_vector_clear(&konst_3768);\
konst_3768.val.byte_array[0] = 57;\
__declare_static_bit_vector(konst_3776,8);\
bit_vector_clear(&konst_3776);\
konst_3776.val.byte_array[0] = 59;\
bit_vector_clear(&konst_3776);\
konst_3776.val.byte_array[0] = 59;\
__declare_static_bit_vector(konst_3784,8);\
bit_vector_clear(&konst_3784);\
konst_3784.val.byte_array[0] = 60;\
bit_vector_clear(&konst_3784);\
konst_3784.val.byte_array[0] = 60;\
__declare_static_bit_vector(konst_3787,8);\
bit_vector_clear(&konst_3787);\
konst_3787.val.byte_array[0] = 61;\
bit_vector_clear(&konst_3787);\
konst_3787.val.byte_array[0] = 61;\
__declare_static_bit_vector(konst_3793,8);\
bit_vector_clear(&konst_3793);\
konst_3793.val.byte_array[0] = 63;\
bit_vector_clear(&konst_3793);\
konst_3793.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_3801,8);\
bit_vector_clear(&konst_3801);\
konst_3801.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3801);\
konst_3801.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3804,8);\
bit_vector_clear(&konst_3804);\
konst_3804.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3804);\
konst_3804.val.byte_array[0] = 65;\
__declare_static_bit_vector(konst_3807,8);\
bit_vector_clear(&konst_3807);\
konst_3807.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3807);\
konst_3807.val.byte_array[0] = 66;\
__declare_static_bit_vector(konst_3810,8);\
bit_vector_clear(&konst_3810);\
konst_3810.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3810);\
konst_3810.val.byte_array[0] = 67;\
__declare_static_bit_vector(konst_3813,8);\
bit_vector_clear(&konst_3813);\
konst_3813.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3813);\
konst_3813.val.byte_array[0] = 68;\
__declare_static_bit_vector(konst_3816,8);\
bit_vector_clear(&konst_3816);\
konst_3816.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3816);\
konst_3816.val.byte_array[0] = 69;\
__declare_static_bit_vector(konst_3819,8);\
bit_vector_clear(&konst_3819);\
konst_3819.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3819);\
konst_3819.val.byte_array[0] = 70;\
__declare_static_bit_vector(konst_3822,8);\
bit_vector_clear(&konst_3822);\
konst_3822.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3822);\
konst_3822.val.byte_array[0] = 71;\
__declare_static_bit_vector(konst_3828,8);\
bit_vector_clear(&konst_3828);\
konst_3828.val.byte_array[0] = 72;\
bit_vector_clear(&konst_3828);\
konst_3828.val.byte_array[0] = 72;\
__declare_static_bit_vector(konst_3831,8);\
bit_vector_clear(&konst_3831);\
konst_3831.val.byte_array[0] = 73;\
bit_vector_clear(&konst_3831);\
konst_3831.val.byte_array[0] = 73;\
__declare_static_bit_vector(konst_3834,8);\
bit_vector_clear(&konst_3834);\
konst_3834.val.byte_array[0] = 74;\
bit_vector_clear(&konst_3834);\
konst_3834.val.byte_array[0] = 74;\
__declare_static_bit_vector(konst_3837,8);\
bit_vector_clear(&konst_3837);\
konst_3837.val.byte_array[0] = 75;\
bit_vector_clear(&konst_3837);\
konst_3837.val.byte_array[0] = 75;\
__declare_static_bit_vector(konst_3843,8);\
bit_vector_clear(&konst_3843);\
konst_3843.val.byte_array[0] = 76;\
bit_vector_clear(&konst_3843);\
konst_3843.val.byte_array[0] = 76;\
__declare_static_bit_vector(konst_3849,8);\
bit_vector_clear(&konst_3849);\
konst_3849.val.byte_array[0] = 77;\
bit_vector_clear(&konst_3849);\
konst_3849.val.byte_array[0] = 77;\
__declare_static_bit_vector(konst_3855,8);\
bit_vector_clear(&konst_3855);\
konst_3855.val.byte_array[0] = 78;\
bit_vector_clear(&konst_3855);\
konst_3855.val.byte_array[0] = 78;\
__declare_static_bit_vector(konst_3861,8);\
bit_vector_clear(&konst_3861);\
konst_3861.val.byte_array[0] = 79;\
bit_vector_clear(&konst_3861);\
konst_3861.val.byte_array[0] = 79;\
__declare_static_bit_vector(konst_3867,8);\
bit_vector_clear(&konst_3867);\
konst_3867.val.byte_array[0] = 96;\
bit_vector_clear(&konst_3867);\
konst_3867.val.byte_array[0] = 96;\
__declare_static_bit_vector(konst_3870,8);\
bit_vector_clear(&konst_3870);\
konst_3870.val.byte_array[0] = 97;\
bit_vector_clear(&konst_3870);\
konst_3870.val.byte_array[0] = 97;\
__declare_static_bit_vector(konst_3873,8);\
bit_vector_clear(&konst_3873);\
konst_3873.val.byte_array[0] = 98;\
bit_vector_clear(&konst_3873);\
konst_3873.val.byte_array[0] = 98;\
__declare_static_bit_vector(konst_3876,8);\
bit_vector_clear(&konst_3876);\
konst_3876.val.byte_array[0] = 99;\
bit_vector_clear(&konst_3876);\
konst_3876.val.byte_array[0] = 99;\
__declare_static_bit_vector(konst_3879,8);\
bit_vector_clear(&konst_3879);\
konst_3879.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3879);\
konst_3879.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3882,8);\
bit_vector_clear(&konst_3882);\
konst_3882.val.byte_array[0] = 101;\
bit_vector_clear(&konst_3882);\
konst_3882.val.byte_array[0] = 101;\
__declare_static_bit_vector(konst_3885,8);\
bit_vector_clear(&konst_3885);\
konst_3885.val.byte_array[0] = 102;\
bit_vector_clear(&konst_3885);\
konst_3885.val.byte_array[0] = 102;\
__declare_static_bit_vector(konst_3888,8);\
bit_vector_clear(&konst_3888);\
konst_3888.val.byte_array[0] = 103;\
bit_vector_clear(&konst_3888);\
konst_3888.val.byte_array[0] = 103;\
__declare_static_bit_vector(konst_3891,8);\
bit_vector_clear(&konst_3891);\
konst_3891.val.byte_array[0] = 104;\
bit_vector_clear(&konst_3891);\
konst_3891.val.byte_array[0] = 104;\
__declare_static_bit_vector(konst_3894,8);\
bit_vector_clear(&konst_3894);\
konst_3894.val.byte_array[0] = 105;\
bit_vector_clear(&konst_3894);\
konst_3894.val.byte_array[0] = 105;\
__declare_static_bit_vector(konst_3897,8);\
bit_vector_clear(&konst_3897);\
konst_3897.val.byte_array[0] = 106;\
bit_vector_clear(&konst_3897);\
konst_3897.val.byte_array[0] = 106;\
__declare_static_bit_vector(konst_3900,8);\
bit_vector_clear(&konst_3900);\
konst_3900.val.byte_array[0] = 107;\
bit_vector_clear(&konst_3900);\
konst_3900.val.byte_array[0] = 107;\
__declare_static_bit_vector(konst_3903,8);\
bit_vector_clear(&konst_3903);\
konst_3903.val.byte_array[0] = 108;\
bit_vector_clear(&konst_3903);\
konst_3903.val.byte_array[0] = 108;\
__declare_static_bit_vector(konst_3906,8);\
bit_vector_clear(&konst_3906);\
konst_3906.val.byte_array[0] = 109;\
bit_vector_clear(&konst_3906);\
konst_3906.val.byte_array[0] = 109;\
__declare_static_bit_vector(konst_3909,8);\
bit_vector_clear(&konst_3909);\
konst_3909.val.byte_array[0] = 110;\
bit_vector_clear(&konst_3909);\
konst_3909.val.byte_array[0] = 110;\
__declare_static_bit_vector(konst_3912,8);\
bit_vector_clear(&konst_3912);\
konst_3912.val.byte_array[0] = 111;\
bit_vector_clear(&konst_3912);\
konst_3912.val.byte_array[0] = 111;\
__declare_static_bit_vector(konst_3915,8);\
bit_vector_clear(&konst_3915);\
konst_3915.val.byte_array[0] = 254;\
bit_vector_clear(&konst_3915);\
konst_3915.val.byte_array[0] = 254;\
__declare_static_bit_vector(konst_3918,8);\
bit_vector_clear(&konst_3918);\
konst_3918.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3918);\
konst_3918.val.byte_array[0] = 255;\
switch (bit_vector_to_uint64(0, &address)) { 
 case 5 : {
// 			sdhcRegisters[address] := (data & _h7f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3618_c_macro_; 
break;}
 case 12 : {
// 			sdhcRegisters[address] := (data & _h3f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3626_c_macro_; 
break;}
 case 13 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3632_c_macro_; 
break;}
 case 14 : {
// 			sdhcRegisters[address] := (data & _hfb ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3640_c_macro_; 
break;}
 case 15 : {
// 			sdhcRegisters[address] := (data & _h3f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3648_c_macro_; 
break;}
 case 16 : {
/* null */ ;
break;}
 case 17 : {
/* null */ ;
break;}
 case 18 : {
/* null */ ;
break;}
 case 19 : {
/* null */ ;
break;}
 case 20 : {
/* null */ ;
break;}
 case 21 : {
/* null */ ;
break;}
 case 22 : {
/* null */ ;
break;}
 case 23 : {
/* null */ ;
break;}
 case 24 : {
/* null */ ;
break;}
 case 25 : {
/* null */ ;
break;}
 case 26 : {
/* null */ ;
break;}
 case 27 : {
/* null */ ;
break;}
 case 28 : {
/* null */ ;
break;}
 case 29 : {
/* null */ ;
break;}
 case 30 : {
/* null */ ;
break;}
 case 31 : {
/* null */ ;
break;}
 case 36 : {
/* null */ ;
break;}
 case 37 : {
/* null */ ;
break;}
 case 38 : {
/* null */ ;
break;}
 case 39 : {
/* null */ ;
break;}
 case 41 : {
// 			sdhcRegisters[address] := (data & _hf ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3716_c_macro_; 
break;}
 case 46 : {
// 			sdhcRegisters[address] := (data & _hf ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3724_c_macro_; 
break;}
 case 47 : {
// 			sdhcRegisters[address] := (data & _h7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3732_c_macro_; 
break;}
 case 48 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3737_c_macro_; 
break;}
 case 49 : {
/* null */ ;
break;}
 case 50 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3745_c_macro_; 
break;}
 case 51 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3750_c_macro_; 
break;}
 case 53 : {
// 			sdhcRegisters[address] := (data & _h1f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3758_c_macro_; 
break;}
 case 55 : {
// 			sdhcRegisters[address] := (data & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3766_c_macro_; 
break;}
 case 57 : {
// 			sdhcRegisters[address] := (data & _h1f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3774_c_macro_; 
break;}
 case 59 : {
// 			sdhcRegisters[address] := (data & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3782_c_macro_; 
break;}
 case 60 : {
/* null */ ;
break;}
 case 61 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3791_c_macro_; 
break;}
 case 63 : {
// 			sdhcRegisters[address] := (data & _hC0 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3799_c_macro_; 
break;}
 case 64 : {
/* null */ ;
break;}
 case 65 : {
/* null */ ;
break;}
 case 66 : {
/* null */ ;
break;}
 case 67 : {
/* null */ ;
break;}
 case 68 : {
/* null */ ;
break;}
 case 69 : {
/* null */ ;
break;}
 case 70 : {
/* null */ ;
break;}
 case 71 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3826_c_macro_; 
break;}
 case 72 : {
/* null */ ;
break;}
 case 73 : {
/* null */ ;
break;}
 case 74 : {
/* null */ ;
break;}
 case 75 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3841_c_macro_; 
break;}
 case 76 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3847_c_macro_; 
break;}
 case 77 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3853_c_macro_; 
break;}
 case 78 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3859_c_macro_; 
break;}
 case 79 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3865_c_macro_; 
break;}
 case 96 : {
/* null */ ;
break;}
 case 97 : {
/* null */ ;
break;}
 case 98 : {
/* null */ ;
break;}
 case 99 : {
/* null */ ;
break;}
 case 100 : {
/* null */ ;
break;}
 case 101 : {
/* null */ ;
break;}
 case 102 : {
/* null */ ;
break;}
 case 103 : {
/* null */ ;
break;}
 case 104 : {
/* null */ ;
break;}
 case 105 : {
/* null */ ;
break;}
 case 106 : {
/* null */ ;
break;}
 case 107 : {
/* null */ ;
break;}
 case 108 : {
/* null */ ;
break;}
 case 109 : {
/* null */ ;
break;}
 case 110 : {
/* null */ ;
break;}
 case 111 : {
/* null */ ;
break;}
 case 254 : {
/* null */ ;
break;}
 case 255 : {
/* null */ ;
break;}
 default : {
// 			sdhcRegisters[address] := data $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3924_c_macro_; 
break;}
}
_sdhc_register_write_branch_block_stmt_3609_c_export_apply_macro_;
}
_sdhc_register_write_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_register_write_series_block_stmt_3606_c_mutex_);
}
void sdhc_register_write(uint8_t address , uint8_t data )
{
_sdhc_register_write_outer_arg_decl_macro__;
_sdhc_register_write_( &__address,  &__data);
_sdhc_register_write_outer_op_xfer_macro__;
}


DEFINE_THREAD(sdhc_daemon);
PTHREAD_DECL(sdhc_daemon);
void start_daemons(FILE* fp, int trace_on) {
__report_log_file__ = fp;
__trace_on__ = trace_on;
__init_aa_globals__(); 
PTHREAD_CREATE(sdhc_daemon);
}
void stop_daemons() {
PTHREAD_CANCEL(sdhc_daemon);
}
