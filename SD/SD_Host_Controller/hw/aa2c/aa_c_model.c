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
register_pipe("DAT0Rx", 1, 8, 0);\
register_pipe("DAT0Tx", 1, 8, 0);\
register_pipe("DAT1Rx", 1, 8, 0);\
register_pipe("DAT1Tx", 1, 8, 0);\
register_pipe("DAT2Rx", 1, 8, 0);\
register_pipe("DAT2Tx", 1, 8, 0);\
register_pipe("DAT3Rx", 1, 8, 0);\
register_pipe("DAT3Tx", 1, 8, 0);\
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
register_pipe("commandTx", 1, 8, 0);\
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
register_pipe("responseRx", 1, 8, 0);\
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
// merge  file .Aa/sdhc.linked.aa, line 119
_bigResponseWrite_merge_stmt_253_c_preamble_macro_; 
// 			$phi k := 			  ($bitcast ($uint<8>) 0  ) $on   $entry 			  next_k $on   loopback 
 // type of target is $uint<8>
_bigResponseWrite_phi_stmt_254_c_macro_; 
// 			$phi temp := 			  CID $on   $entry 			  next_temp $on   loopback 
 // type of target is $uint<120>
_bigResponseWrite_phi_stmt_259_c_macro_; 
_bigResponseWrite_merge_stmt_253_c_postamble_macro_; 
// 		address := (16  + k) $buffering 1// bits of buffering = 8. 
_bigResponseWrite_assign_stmt_268_c_macro_; 
// 		sdhcRegisters[address] := ( $slice temp 7 0 )  $buffering 1// bits of buffering = 8. 
_bigResponseWrite_assign_stmt_273_c_macro_; 
// 		next_temp := (temp >> 8 ) $buffering 1// bits of buffering = 120. 
_bigResponseWrite_assign_stmt_278_c_macro_; 
// 		$volatile next_k := (k + 1 ) $buffering 1
_bigResponseWrite_assign_stmt_283_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_286,8);\
bit_vector_clear(&konst_286);\
konst_286.val.byte_array[0] = 15;\
__declare_static_bit_vector(ULT_u8_u1_287,1);\
bit_vector_clear(&konst_286);\
konst_286.val.byte_array[0] = 15;\
bit_vector_less(0, &(next_k), &(konst_286), &(ULT_u8_u1_287));\
if (has_undefined_bit(&ULT_u8_u1_287)) {fprintf(stderr, "Error: variable ULT_u8_u1_287 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_287));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_287)) { 
/* 			$place[loopback]
*/  goto loopback_252;
} 
else {
 ;
}
_bigResponseWrite_branch_block_stmt_252_c_export_apply_macro_;
}
_bigResponseWrite_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_bigResponseWrite_series_block_stmt_249_c_mutex_);
}
void _command_generator_(bit_vector*  __pnormalInterruptStatusVar1, bit_vector*  __pnormalInterruptStatusVar2, bit_vector*  __perrorInterruptStatusVar1, bit_vector*  __perrorInterruptStatusVar2, bit_vector*  __pdataErrorInterruptStatusVar1, bit_vector*  __pdataTransferComplete)
{
MUTEX_DECL(_command_generator_series_block_stmt_1773_c_mutex_);
MUTEX_LOCK(_command_generator_series_block_stmt_1773_c_mutex_);
_command_generator_inner_inarg_prep_macro__; 
_command_generator_branch_block_stmt_1780_c_export_decl_macro_; 
{
// 		argumentVal3 := sdhcRegisters[11 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1784_c_macro_; 
// 		argumentVal2 := sdhcRegisters[10 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1788_c_macro_; 
// 		argumentVal1 := sdhcRegisters[9 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1792_c_macro_; 
// 		argumentVal0 := sdhcRegisters[8 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1796_c_macro_; 
// 		command40bits := (((ZERO_1 && ONE_1) && (( $slice sdhcRegisters[15 ] 5 0 )  && argumentVal3)) && ((argumentVal2 && argumentVal1) && argumentVal0)) $buffering 1// bits of buffering = 40. 
_command_generator_assign_stmt_1813_c_macro_; 
// 		current_crc := ZERO_8 $buffering 1// bits of buffering = 8.  Orphaned statement with target current_crc ?? 
_command_generator_assign_stmt_1816_c_macro_; 
// 		$call generate_crc_7 (command40bits ) (crc7 ) 
_command_generator_call_stmt_1819_c_macro_; 
// 		commandbits := ((command40bits && crc7) && ONE_1) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1826_c_macro_; 
_command_generator_branch_block_stmt_1827_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 560
_command_generator_merge_stmt_1828_c_preamble_macro_; 
// 				$phi J := 				  ZERO_8 $on   $entry 				  next_J $on   commandloopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_1829_c_macro_; 
// 				$phi old_commandbits := 				  commandbits $on   $entry 				  new_commandbits $on   commandloopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1833_c_macro_; 
_command_generator_merge_stmt_1828_c_postamble_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1842_c_macro_; 
// 			bit := ( $slice old_commandbits 47 47 )  $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1846_c_macro_; 
// 			commandTx := bit $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1849_c_macro_; 
// 			new_commandbits := (old_commandbits << 1 ) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1854_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1857,8);\
bit_vector_clear(&konst_1857);\
konst_1857.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u8_u1_1858,1);\
bit_vector_clear(&konst_1857);\
konst_1857.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_1857), &(ULT_u8_u1_1858));\
if (has_undefined_bit(&ULT_u8_u1_1858)) {fprintf(stderr, "Error: variable ULT_u8_u1_1858 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_1858));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_1858)) { 
/* 				$place[commandloopback]
*/  goto commandloopback_1827;
} 
else {
 ;
}
_command_generator_branch_block_stmt_1827_c_export_apply_macro_;
}
// 		response_type := ( $slice sdhcRegisters[14 ] 1 0 )  $buffering 1// bits of buffering = 2. 
_command_generator_assign_stmt_1866_c_macro_; 
// 		dataPresentSelect := (sdhcRegisters[14 ] [] 5 ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1872_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1875,1);\
bit_vector_clear(&konst_1875);\
konst_1875.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_1876,1);\
bit_vector_clear(&konst_1875);\
konst_1875.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_1875), &(EQ_u1_u1_1876));\
if (has_undefined_bit(&EQ_u1_u1_1876)) {fprintf(stderr, "Error: variable EQ_u1_u1_1876 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1876));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1876)) { 
// 			txOrRX := (  $bitreduce |  (sdhcRegisters[12 ] & _h10 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1883_c_macro_; 
// 			presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1887_c_macro_; 
// 			presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1891_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1894,2);\
bit_vector_clear(&konst_1894);\
konst_1894.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_1895,1);\
bit_vector_clear(&konst_1894);\
konst_1894.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_1894), &NEQ_u2_u1_1895);\
if (has_undefined_bit(&NEQ_u2_u1_1895)) {fprintf(stderr, "Error: variable NEQ_u2_u1_1895 has undefined value (%s) at test point.\n", to_string(&NEQ_u2_u1_1895));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u2_u1_1895)) { 
// 			sdhcRegisters[37 ] := ( $mux txOrRX (presentState1Var | _h02 )  (presentState1Var | _h01 ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1906_c_macro_; 
} 
else {
 ;
}
// 			sdhcRegisters[36 ] := (presentState0Var | _h06 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_1913_c_macro_; 
} 
else {
 ;
}
// $report (rsp resp 		 response_type response_type 		 dataPresentSelect dataPresentSelect )
_command_generator_stmt_1917_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 586
__declare_static_bit_vector(konst_1920,2);\
bit_vector_clear(&konst_1920);\
konst_1920.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_1921,1);\
__declare_static_bit_vector(konst_1923,2);\
bit_vector_clear(&konst_1923);\
konst_1923.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1924,1);\
__declare_static_bit_vector(OR_u1_u1_1925,1);\
bit_vector_clear(&konst_1920);\
konst_1920.val.byte_array[0] = 2;\
bit_vector_equal(0, &(response_type), &(konst_1920), &(EQ_u2_u1_1921));\
bit_vector_clear(&konst_1923);\
konst_1923.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1923), &(EQ_u2_u1_1924));\
bit_vector_or(&(EQ_u2_u1_1921), &(EQ_u2_u1_1924), &(OR_u1_u1_1925));\
if (has_undefined_bit(&OR_u1_u1_1925)) {fprintf(stderr, "Error: variable OR_u1_u1_1925 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_1925));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_1925)) { 
_command_generator_branch_block_stmt_1926_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 589
_command_generator_merge_stmt_1927_c_preamble_macro_; 
// 					$phi J := 					  ($bitcast ($uint<6>) 0  ) $on   $entry 					  next_J $on   responseloopback 
 // type of target is $uint<6>
_command_generator_phi_stmt_1928_c_macro_; 
// 					$phi old_responsebits := 					  ($bitcast ($uint<48>) 0  ) $on   $entry 					  new_responsebits $on   responseloopback 
 // type of target is $uint<48>
_command_generator_phi_stmt_1933_c_macro_; 
_command_generator_merge_stmt_1927_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_1944_c_macro_; 
// 				responsebit := responseRx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1947_c_macro_; 
// 				responsebits := (($bitcast ($uint<47>) 0  ) && responsebit) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1954_c_macro_; 
// 				new_responsebits := ((old_responsebits << 1 ) | responsebits) $buffering 1// bits of buffering = 48. 
_command_generator_assign_stmt_1961_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1964,6);\
bit_vector_clear(&konst_1964);\
konst_1964.val.byte_array[0] = 48;\
__declare_static_bit_vector(ULT_u6_u1_1965,1);\
bit_vector_clear(&konst_1964);\
konst_1964.val.byte_array[0] = 48;\
bit_vector_less(0, &(next_J), &(konst_1964), &(ULT_u6_u1_1965));\
if (has_undefined_bit(&ULT_u6_u1_1965)) {fprintf(stderr, "Error: variable ULT_u6_u1_1965 has undefined value (%s) at test point.\n", to_string(&ULT_u6_u1_1965));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u6_u1_1965)) { 
/* 				$place[responseloopback]
*/  goto responseloopback_1926;
} 
else {
 ;
}
_command_generator_branch_block_stmt_1926_c_export_apply_macro_;
}
// $report (gen_comm f 			 response response )
_command_generator_stmt_1970_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1973,2);\
bit_vector_clear(&konst_1973);\
konst_1973.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_1974,1);\
bit_vector_clear(&konst_1973);\
konst_1973.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_1973), &(EQ_u2_u1_1974));\
if (has_undefined_bit(&EQ_u2_u1_1974)) {fprintf(stderr, "Error: variable EQ_u2_u1_1974 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_1974));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_1974)) { 
// merge  file .Aa/sdhc.linked.aa, line 606
_command_generator_merge_stmt_1975_c_preamble_macro_; 
_command_generator_merge_stmt_1975_c_postamble_macro_; 
// 			wait := DAT0Rx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_1978_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u1_u1_1982,1);\
bit_vector_equal(0, &(wait), &(ZERO_1), &(EQ_u1_u1_1982));\
if (has_undefined_bit(&EQ_u1_u1_1982)) {fprintf(stderr, "Error: variable EQ_u1_u1_1982 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1982));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1982)) { 
/* 			$place[waitloop]
*/  goto waitloop_1780;
} 
else {
 ;
}
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1987,32);\
bit_vector_clear(&konst_1987);\
konst_1987.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_1989,8);\
bit_vector_clear(&konst_1989);\
konst_1989.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_1990,8);\
__declare_static_bit_vector(konst_1991,8);\
bit_vector_clear(&konst_1991);\
konst_1991.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_1992,1);\
bit_vector_clear(&konst_1987);\
konst_1987.val.byte_array[0] = 14;\
bit_vector_clear(&konst_1989);\
konst_1989.val.byte_array[0] = 8;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1987)])), &(konst_1989), &(AND_u8_u8_1990));\
bit_vector_clear(&konst_1991);\
konst_1991.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_1990), &(konst_1991), &(EQ_u8_u1_1992));\
if (has_undefined_bit(&EQ_u8_u1_1992)) {fprintf(stderr, "Error: variable EQ_u8_u1_1992 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_1992));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_1992)) { 
// 			$call generate_crc_7 (( $slice response 47 8 )  ) (R1_6_7CRC ) 
_command_generator_call_stmt_1996_c_macro_; 
// 			CommandCRCError := ( $mux (( $slice response 7 1 )  == R1_6_7CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2005_c_macro_; 
} 
else {
 ;
}
// 			checkit := ( $slice response 7 1 )  $buffering 1// bits of buffering = 7. 
_command_generator_assign_stmt_2010_c_macro_; 
// $report (r1crc check 			 CommandCRCError CommandCRCError 			 R1_6_7CRC R1_6_7CRC 			 checkit checkit )
_command_generator_stmt_2014_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2016,32);\
bit_vector_clear(&konst_2016);\
konst_2016.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_2018,8);\
bit_vector_clear(&konst_2018);\
konst_2018.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_2019,8);\
__declare_static_bit_vector(konst_2020,8);\
bit_vector_clear(&konst_2020);\
konst_2020.val.byte_array[0] = 16;\
__declare_static_bit_vector(EQ_u8_u1_2021,1);\
bit_vector_clear(&konst_2016);\
konst_2016.val.byte_array[0] = 14;\
bit_vector_clear(&konst_2018);\
konst_2018.val.byte_array[0] = 16;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2016)])), &(konst_2018), &(AND_u8_u8_2019));\
bit_vector_clear(&konst_2020);\
konst_2020.val.byte_array[0] = 16;\
bit_vector_equal(0, &(AND_u8_u8_2019), &(konst_2020), &(EQ_u8_u1_2021));\
if (has_undefined_bit(&EQ_u8_u1_2021)) {fprintf(stderr, "Error: variable EQ_u8_u1_2021 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2021));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2021)) { 
// 			commandIndexCheck := (( $slice sdhcRegisters[15 ] 5 0 )  == ( $slice response 45 40 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2029_c_macro_; 
// 			CommandIndexError := ( $mux commandIndexCheck _b00000000   _b00001000  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2035_c_macro_; 
} 
else {
 ;
}
// 			sdhcRegisters[19 ] := ( $slice response 39 32 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2041_c_macro_; 
// 			sdhcRegisters[18 ] := ( $slice response 31 24 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2046_c_macro_; 
// 			sdhcRegisters[17 ] := ( $slice response 23 16 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2051_c_macro_; 
// 			sdhcRegisters[16 ] := ( $slice response 15 8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2056_c_macro_; 
// 			presentState2 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2064_c_macro_; 
// 			normalInterrupt2 := sdhcRegisters[48 ] $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2068_c_macro_; 
// 			sdhcRegisters[36 ] := presentState2 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2072_c_macro_; 
// 			commandEndBitError := ( $mux (response [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2081_c_macro_; 
// 			normalInterruptStatusVar_2 := (normalInterrupt2 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2086_c_macro_; 
// 			errorInterruptStatusVar_2 := ((CommandIndexError | CommandCRCError) | commandEndBitError) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2093_c_macro_; 
/* 			$place[normalInterruptResponse2]
*/  goto normalInterruptResponse2_1780;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 635
__declare_static_bit_vector(konst_2098,2);\
bit_vector_clear(&konst_2098);\
konst_2098.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u2_u1_2099,1);\
bit_vector_clear(&konst_2098);\
konst_2098.val.byte_array[0] = 1;\
bit_vector_equal(0, &(response_type), &(konst_2098), &(EQ_u2_u1_2099));\
if (has_undefined_bit(&EQ_u2_u1_2099)) {fprintf(stderr, "Error: variable EQ_u2_u1_2099 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2099));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2099)) { 
_command_generator_branch_block_stmt_2100_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 638
_command_generator_merge_stmt_2101_c_preamble_macro_; 
// 					$phi J := 					  ($bitcast ($uint<8>) 0  ) $on   $entry 					  next_J $on   bigresponseloopback 
 // type of target is $uint<8>
_command_generator_phi_stmt_2102_c_macro_; 
// 					$phi old_bigresponsebits := 					  ($bitcast ($uint<136>) 0  ) $on   $entry 					  new_bigresponsebits $on   bigresponseloopback 
 // type of target is $uint<136>
_command_generator_phi_stmt_2107_c_macro_; 
_command_generator_merge_stmt_2101_c_postamble_macro_; 
// 				$volatile next_J := (J + 1 ) $buffering 1
_command_generator_assign_stmt_2118_c_macro_; 
// 				bigresponsebit := responseRx $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2121_c_macro_; 
// 				bigresponsebits := (($bitcast ($uint<135>) 0  ) && bigresponsebit) $buffering 1// bits of buffering = 136. 
_command_generator_assign_stmt_2128_c_macro_; 
// 				new_bigresponsebits := ((old_bigresponsebits << 1 ) | bigresponsebits) $buffering 1// bits of buffering = 136. 
_command_generator_assign_stmt_2135_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2138,8);\
bit_vector_clear(&konst_2138);\
konst_2138.val.byte_array[0] = 136;\
__declare_static_bit_vector(ULT_u8_u1_2139,1);\
bit_vector_clear(&konst_2138);\
konst_2138.val.byte_array[0] = 136;\
bit_vector_less(0, &(next_J), &(konst_2138), &(ULT_u8_u1_2139));\
if (has_undefined_bit(&ULT_u8_u1_2139)) {fprintf(stderr, "Error: variable ULT_u8_u1_2139 has undefined value (%s) at test point.\n", to_string(&ULT_u8_u1_2139));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u8_u1_2139)) { 
/* 				$place[bigresponseloopback]
*/  goto bigresponseloopback_2100;
} 
else {
 ;
}
_command_generator_branch_block_stmt_2100_c_export_apply_macro_;
}
// $report (gen_comm f 			 bigResponse bigResponse )
_command_generator_stmt_2144_c_macro_; 
// 			$volatile CID := ( $slice bigResponse 127 8 )  $buffering 1
_command_generator_assign_stmt_2148_c_macro_; 
// 			$volatile CID_CRC := ( $slice bigResponse 7 1 )  $buffering 1
_command_generator_assign_stmt_2152_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2154,32);\
bit_vector_clear(&konst_2154);\
konst_2154.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_2156,8);\
bit_vector_clear(&konst_2156);\
konst_2156.val.byte_array[0] = 8;\
__declare_static_bit_vector(AND_u8_u8_2157,8);\
__declare_static_bit_vector(konst_2158,8);\
bit_vector_clear(&konst_2158);\
konst_2158.val.byte_array[0] = 8;\
__declare_static_bit_vector(EQ_u8_u1_2159,1);\
bit_vector_clear(&konst_2154);\
konst_2154.val.byte_array[0] = 14;\
bit_vector_clear(&konst_2156);\
konst_2156.val.byte_array[0] = 8;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2154)])), &(konst_2156), &(AND_u8_u8_2157));\
bit_vector_clear(&konst_2158);\
konst_2158.val.byte_array[0] = 8;\
bit_vector_equal(0, &(AND_u8_u8_2157), &(konst_2158), &(EQ_u8_u1_2159));\
if (has_undefined_bit(&EQ_u8_u1_2159)) {fprintf(stderr, "Error: variable EQ_u8_u1_2159 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_2159));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_2159)) { 
// 			$call generate_crc_7_120 (CID ) (R2_CRC ) 
_command_generator_call_stmt_2162_c_macro_; 
// 			CommandCRCError1 := ( $mux (crc7 == R2_CRC) _b00000000   _b00000010  )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2170_c_macro_; 
} 
else {
 ;
}
// 			commandEndBitError1 := ( $mux (bigResponse [] 0 ) ZERO_8  ($bitcast ($uint<8>) 4  ) )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2180_c_macro_; 
// 			errorInterruptStatusVar_3 := (CommandCRCError1 | commandEndBitError1) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2185_c_macro_; 
// 			$call bigResponseWrite (CID ) () 
_command_generator_call_stmt_2187_c_macro_; 
// 			$volatile presentState3 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1
_command_generator_assign_stmt_2195_c_macro_; 
// 			$volatile normalInterrupt3 := sdhcRegisters[48 ] $buffering 1
_command_generator_assign_stmt_2199_c_macro_; 
// 			sdhcRegisters[36 ] := presentState3 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2203_c_macro_; 
// 			normalInterruptStatusVar_3 := (normalInterrupt3 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2208_c_macro_; 
/* 			$place[normalInterruptResponse3]
*/  goto normalInterruptResponse3_1780;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2213,2);\
bit_vector_clear(&konst_2213);\
__declare_static_bit_vector(EQ_u2_u1_2214,1);\
bit_vector_clear(&konst_2213);\
bit_vector_equal(0, &(response_type), &(konst_2213), &(EQ_u2_u1_2214));\
if (has_undefined_bit(&EQ_u2_u1_2214)) {fprintf(stderr, "Error: variable EQ_u2_u1_2214 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2214));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_2214)) { 
// 			$volatile presentState1 := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1
_command_generator_assign_stmt_2222_c_macro_; 
// 			$volatile normalInterrupt1 := sdhcRegisters[48 ] $buffering 1
_command_generator_assign_stmt_2226_c_macro_; 
// 			sdhcRegisters[36 ] := presentState1 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2230_c_macro_; 
// 			normalInterruptStatusVar_1 := (normalInterrupt1 | _h01 ) $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2235_c_macro_; 
// 			errorInterruptStatusVar_1 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2238_c_macro_; 
/* 			$place[normalInterruptResponse1]
*/  goto normalInterruptResponse1_1780;
} 
else {
 ;
}
}
}
// merge  file .Aa/sdhc.linked.aa, line 679
_command_generator_merge_stmt_2243_c_preamble_macro_; 
// 			$phi normalInterruptStatusVar1 := 			  normalInterruptStatusVar_1 $on   normalInterruptResponse1 			  normalInterruptStatusVar_2 $on   normalInterruptResponse2 			  normalInterruptStatusVar_3 $on   normalInterruptResponse3 
 // type of target is $uint<8>
_command_generator_phi_stmt_2244_c_macro_; 
// 			$phi errorInterruptStatusVar1 := 			  errorInterruptStatusVar_1 $on   normalInterruptResponse1 			  errorInterruptStatusVar_2 $on   normalInterruptResponse2 			  errorInterruptStatusVar_3 $on   normalInterruptResponse3 
 // type of target is $uint<8>
_command_generator_phi_stmt_2249_c_macro_; 
_command_generator_merge_stmt_2243_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2257,1);\
bit_vector_clear(&konst_2257);\
konst_2257.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2258,1);\
bit_vector_clear(&konst_2257);\
konst_2257.val.byte_array[0] = 1;\
bit_vector_equal(0, &(dataPresentSelect), &(konst_2257), &(EQ_u1_u1_2258));\
if (has_undefined_bit(&EQ_u1_u1_2258)) {fprintf(stderr, "Error: variable EQ_u1_u1_2258 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2258));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2258)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2261,1);\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2262,1);\
__declare_static_bit_vector(konst_2264,2);\
bit_vector_clear(&konst_2264);\
konst_2264.val.byte_array[0] = 3;\
__declare_static_bit_vector(NEQ_u2_u1_2265,1);\
__declare_static_bit_vector(AND_u1_u1_2266,1);\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
bit_vector_equal(0, &(txOrRX), &(konst_2261), &(EQ_u1_u1_2262));\
bit_vector_clear(&konst_2264);\
konst_2264.val.byte_array[0] = 3;\
bit_vector_not_equal(0, &(response_type), &(konst_2264), &NEQ_u2_u1_2265);\
bit_vector_and(&(EQ_u1_u1_2262), &(NEQ_u2_u1_2265), &(AND_u1_u1_2266));\
if (has_undefined_bit(&AND_u1_u1_2266)) {fprintf(stderr, "Error: variable AND_u1_u1_2266 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_2266));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_2266)) { 
// 			singleMultipleReadBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2273_c_macro_; 
// 			$call dataRx (singleMultipleReadBlock ) (dataErrorInterruptStatusVar1 ) 
_command_generator_call_stmt_2276_c_macro_; 
// 			dataRxEnrty1 := ONE_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2279_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_command_generator_assign_stmt_2282_c_macro_; 
// 			transferCompleteData := ( $mux singleMultipleReadBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2289_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2292,1);\
bit_vector_clear(&konst_2292);\
konst_2292.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_2293,1);\
bit_vector_clear(&konst_2292);\
konst_2292.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_2292), &(EQ_u1_u1_2293));\
if (has_undefined_bit(&EQ_u1_u1_2293)) {fprintf(stderr, "Error: variable EQ_u1_u1_2293 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_2293));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_2293)) { 
// 			readBlockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_command_generator_assign_stmt_2300_c_macro_; 
// 			newReadBlockCount := (readBlockCount - 1 ) $buffering 1// bits of buffering = 16. 
_command_generator_assign_stmt_2305_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice newReadBlockCount 15 8 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2310_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice newReadBlockCount 7 0 )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2315_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			dataTransferComplete := ( $mux (response_type == 3 ) ($bitcast ($uint<8>) 2  )  transferCompleteData )  $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2326_c_macro_; 
} 
else {
 ;
}
// 		normalInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2330_c_macro_; 
// 		errorInterruptStatusVar2 := ZERO_8 $buffering 1// bits of buffering = 8. 
_command_generator_assign_stmt_2333_c_macro_; 
_command_generator_branch_block_stmt_1780_c_export_apply_macro_;
}
_command_generator_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_command_generator_series_block_stmt_1773_c_mutex_);
}
void command_generator(uint8_t*  normalInterruptStatusVar1 , uint8_t*  normalInterruptStatusVar2 , uint8_t*  errorInterruptStatusVar1 , uint8_t*  errorInterruptStatusVar2 , uint8_t*  dataErrorInterruptStatusVar1 , uint8_t*  dataTransferComplete )
{
_command_generator_outer_arg_decl_macro__;
_command_generator_( &__normalInterruptStatusVar1,  &__normalInterruptStatusVar2,  &__errorInterruptStatusVar1,  &__errorInterruptStatusVar2,  &__dataErrorInterruptStatusVar1,  &__dataTransferComplete);
_command_generator_outer_op_xfer_macro__;
}


void _dataRx_(bit_vector* __psingleMultipleReadBlock, bit_vector*  __pdataErrorInterruptStatusVar1)
{
MUTEX_DECL(_dataRx_series_block_stmt_542_c_mutex_);
MUTEX_LOCK(_dataRx_series_block_stmt_542_c_mutex_);
_dataRx_inner_inarg_prep_macro__; 
_dataRx_branch_block_stmt_545_c_export_decl_macro_; 
{
// 		presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_549_c_macro_; 
// 		presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_553_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 228
__declare_static_bit_vector(konst_555,32);\
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_557,8);\
bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_558,1);\
bit_vector_clear(&konst_555);\
konst_555.val.byte_array[0] = 40;\
bit_vector_clear(&konst_557);\
konst_557.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_555)])), &(konst_557), &(BITSEL_u8_u1_558));\
if (has_undefined_bit(&BITSEL_u8_u1_558)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_558 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_558));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_558)) { 
// 			startBit0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_561_c_macro_; 
_dataRx_branch_block_stmt_562_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 232
_dataRx_merge_stmt_563_c_preamble_macro_; 
// 					$phi I_0 := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I_0 $on   loopback4_0 
 // type of target is $uint<10>
_dataRx_phi_stmt_564_c_macro_; 
// 					$phi dat0 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data0 $on   loopback4_0 
 // type of target is $uint<1024>
_dataRx_phi_stmt_569_c_macro_; 
_dataRx_merge_stmt_563_c_postamble_macro_; 
// 				bit7_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_578_c_macro_; 
// 				bit6_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_581_c_macro_; 
// 				bit5_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_584_c_macro_; 
// 				bit4_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_587_c_macro_; 
// 				bit3_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_590_c_macro_; 
// 				bit2_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_593_c_macro_; 
// 				bit1_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_596_c_macro_; 
// 				bit0_0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_599_c_macro_; 
// 				next_data0 := ((dat0 << 8 ) | (($bitcast ($uint<1016>) 0  ) && (((bit7_0 && bit6_0) && (bit5_0 && bit4_0)) && ((bit3_0 && bit2_0) && (bit1_0 && bit0_0))))) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_624_c_macro_; 
// 				next_I_0 := (I_0 + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_629_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_632,10);\
bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_633,1);\
bit_vector_clear(&konst_632);\
konst_632.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_0), &(konst_632), &(ULT_u10_u1_633));\
if (has_undefined_bit(&ULT_u10_u1_633)) {fprintf(stderr, "Error: variable ULT_u10_u1_633 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_633));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_633)) { 
/* 				$place[loopback4_0]
*/  goto loopback4_0_562;
} 
else {
 ;
}
_dataRx_branch_block_stmt_562_c_export_apply_macro_;
}
// merge  file .Aa/sdhc.linked.aa, line 253
_dataRx_merge_stmt_637_c_preamble_macro_; 
// 				$phi K_0 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K_0 $on   crcloopback4_0 
 // type of target is $uint<5>
_dataRx_phi_stmt_638_c_macro_; 
// 				$phi currentCRC_0 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC_0 $on   crcloopback4_0 
 // type of target is $uint<16>
_dataRx_phi_stmt_644_c_macro_; 
_dataRx_merge_stmt_637_c_postamble_macro_; 
// 			nextCRC_0 := ((currentCRC_0 << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT0Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_660_c_macro_; 
// 			next_K_0 := (K_0 + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_665_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_668,5);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_669,1);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_0), &(konst_668), &(ULT_u5_u1_669));\
if (has_undefined_bit(&ULT_u5_u1_669)) {fprintf(stderr, "Error: variable ULT_u5_u1_669 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_669));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_669)) { 
/* 			$place[crcloopback4_0]
*/  goto crcloopback4_0_545;
} 
else {
 ;
}
// 			stopBit0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_674_c_macro_; 
// 			stopBitError0 := (stopBit0 == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_679_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 266
_dataRx_merge_stmt_680_c_preamble_macro_; 
// 				$phi J_0 := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J_0 $on   loopback0 
 // type of target is $uint<13>
_dataRx_phi_stmt_681_c_macro_; 
// 				$phi CRC_16_0 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16_0 $on   loopback0 
 // type of target is $uint<16>
_dataRx_phi_stmt_687_c_macro_; 
// 				$phi tempData0 := 				  dat0 $on   $entry 				  nextTempData0 $on   loopback0 
 // type of target is $uint<1024>
_dataRx_phi_stmt_692_c_macro_; 
_dataRx_merge_stmt_680_c_postamble_macro_; 
// 			inv0 := ((tempData0 [] 1023 ) ^ (CRC_16_0 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_705_c_macro_; 
// 			nextCRC16_0 := (((( $slice CRC_16_0 14 12 )  && ((CRC_16_0 [] 11 ) ^ inv0)) && ( $slice CRC_16_0 10 5 ) ) && ((((CRC_16_0 [] 4 ) ^ inv0) && ( $slice CRC_16_0 3 0 ) ) && inv0)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_731_c_macro_; 
// 			nextTempData0 := (tempData0 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_736_c_macro_; 
// 			$volatile next_J_0 := (J_0 + 1 ) $buffering 1
_dataRx_assign_stmt_741_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line -1470600032
__declare_static_bit_vector(konst_744,13);\
bit_vector_clear(&konst_744);\
konst_744.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_745,1);\
bit_vector_clear(&konst_744);\
konst_744.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_0), &(konst_744), &(ULT_u13_u1_745));\
if (has_undefined_bit(&ULT_u13_u1_745)) {fprintf(stderr, "Error: variable ULT_u13_u1_745 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_745));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_745)) { 
/* 			$place[loopback0]
*/  goto loopback0_545;
} 
else {
 ;
}
// 			crcError0 := (nextCRC_0 != nextCRC16_0) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_752_c_macro_; 
// 			startBit1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_755_c_macro_; 
_dataRx_branch_block_stmt_756_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 285
_dataRx_merge_stmt_757_c_preamble_macro_; 
// 					$phi I_1 := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I_1 $on   loopback4_1 
 // type of target is $uint<10>
_dataRx_phi_stmt_758_c_macro_; 
// 					$phi dat1 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data1 $on   loopback4_1 
 // type of target is $uint<1024>
_dataRx_phi_stmt_763_c_macro_; 
_dataRx_merge_stmt_757_c_postamble_macro_; 
// 				bit7_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_771_c_macro_; 
// 				bit6_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_774_c_macro_; 
// 				bit5_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_777_c_macro_; 
// 				bit4_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_780_c_macro_; 
// 				bit3_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_783_c_macro_; 
// 				bit2_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_786_c_macro_; 
// 				bit1_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_789_c_macro_; 
// 				bit0_1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_792_c_macro_; 
// 				next_data1 := ((dat1 << 8 ) | (($bitcast ($uint<1016>) 0  ) && (((bit7_1 && bit6_1) && (bit5_1 && bit4_1)) && ((bit3_1 && bit2_1) && (bit1_1 && bit0_1))))) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_816_c_macro_; 
// 				next_I_1 := (I_1 + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_821_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_824,10);\
bit_vector_clear(&konst_824);\
konst_824.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_825,1);\
bit_vector_clear(&konst_824);\
konst_824.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_1), &(konst_824), &(ULT_u10_u1_825));\
if (has_undefined_bit(&ULT_u10_u1_825)) {fprintf(stderr, "Error: variable ULT_u10_u1_825 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_825));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_825)) { 
/* 				$place[loopback4_1]
*/  goto loopback4_1_756;
} 
else {
 ;
}
_dataRx_branch_block_stmt_756_c_export_apply_macro_;
}
// merge  file .Aa/sdhc.linked.aa, line 306
_dataRx_merge_stmt_829_c_preamble_macro_; 
// 				$phi K_1 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K_1 $on   crcloopback4_1 
 // type of target is $uint<5>
_dataRx_phi_stmt_830_c_macro_; 
// 				$phi currentCRC_1 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC_1 $on   crcloopback4_1 
 // type of target is $uint<16>
_dataRx_phi_stmt_835_c_macro_; 
_dataRx_merge_stmt_829_c_postamble_macro_; 
// 			nextCRC_1 := ((currentCRC_1 << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT1Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_850_c_macro_; 
// 			next_K_1 := (K_1 + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_855_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_858,5);\
bit_vector_clear(&konst_858);\
konst_858.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_859,1);\
bit_vector_clear(&konst_858);\
konst_858.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_1), &(konst_858), &(ULT_u5_u1_859));\
if (has_undefined_bit(&ULT_u5_u1_859)) {fprintf(stderr, "Error: variable ULT_u5_u1_859 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_859));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_859)) { 
/* 			$place[crcloopback4_1]
*/  goto crcloopback4_1_545;
} 
else {
 ;
}
// 			stopBit1 := DAT1Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_864_c_macro_; 
// $report (DATAreieve rcv 			 stopBit1 stopBit1 			 dat1 dat1 )
_dataRx_stmt_867_c_macro_; 
// 			stopBitError1 := (stopBit1 == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_872_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 320
_dataRx_merge_stmt_873_c_preamble_macro_; 
// 				$phi J_1 := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J_1 $on   loopback1 
 // type of target is $uint<13>
_dataRx_phi_stmt_874_c_macro_; 
// 				$phi CRC_16_1 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16_1 $on   loopback1 
 // type of target is $uint<16>
_dataRx_phi_stmt_879_c_macro_; 
// 				$phi tempData1 := 				  dat1 $on   $entry 				  nextTempData1 $on   loopback1 
 // type of target is $uint<1024>
_dataRx_phi_stmt_884_c_macro_; 
_dataRx_merge_stmt_873_c_postamble_macro_; 
// 			inv1 := ((tempData1 [] 1023 ) ^ (CRC_16_1 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_897_c_macro_; 
// 			nextCRC16_1 := (((( $slice CRC_16_1 14 12 )  && ((CRC_16_1 [] 11 ) ^ inv1)) && ( $slice CRC_16_1 10 5 ) ) && ((((CRC_16_1 [] 4 ) ^ inv1) && ( $slice CRC_16_1 3 0 ) ) && inv1)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_921_c_macro_; 
// 			nextTempData1 := (tempData1 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_926_c_macro_; 
// 			$volatile next_J_1 := (J_1 + 1 ) $buffering 1
_dataRx_assign_stmt_931_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_934,13);\
bit_vector_clear(&konst_934);\
konst_934.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_935,1);\
bit_vector_clear(&konst_934);\
konst_934.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_1), &(konst_934), &(ULT_u13_u1_935));\
if (has_undefined_bit(&ULT_u13_u1_935)) {fprintf(stderr, "Error: variable ULT_u13_u1_935 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_935));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_935)) { 
/* 			$place[loopback1]
*/  goto loopback1_545;
} 
else {
 ;
}
// 			crcError1 := (nextCRC_1 != nextCRC16_1) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_942_c_macro_; 
// 			startBit2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_945_c_macro_; 
_dataRx_branch_block_stmt_946_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 339
_dataRx_merge_stmt_947_c_preamble_macro_; 
// 					$phi I_2 := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I_2 $on   loopback4_2 
 // type of target is $uint<10>
_dataRx_phi_stmt_948_c_macro_; 
// 					$phi dat2 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data2 $on   loopback4_2 
 // type of target is $uint<1024>
_dataRx_phi_stmt_953_c_macro_; 
_dataRx_merge_stmt_947_c_postamble_macro_; 
// 				bit7_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_961_c_macro_; 
// 				bit6_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_964_c_macro_; 
// 				bit5_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_967_c_macro_; 
// 				bit4_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_970_c_macro_; 
// 				bit3_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_973_c_macro_; 
// 				bit2_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_976_c_macro_; 
// 				bit1_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_979_c_macro_; 
// 				bit0_2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_982_c_macro_; 
// 				next_data2 := ((dat2 << 8 ) | (($bitcast ($uint<1016>) 0  ) && (((bit7_2 && bit6_2) && (bit5_2 && bit4_2)) && ((bit3_2 && bit2_2) && (bit1_2 && bit0_2))))) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1006_c_macro_; 
// 				next_I_2 := (I_2 + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1011_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1014,10);\
bit_vector_clear(&konst_1014);\
konst_1014.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_1015,1);\
bit_vector_clear(&konst_1014);\
konst_1014.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_2), &(konst_1014), &(ULT_u10_u1_1015));\
if (has_undefined_bit(&ULT_u10_u1_1015)) {fprintf(stderr, "Error: variable ULT_u10_u1_1015 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1015));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1015)) { 
/* 				$place[loopback4_2]
*/  goto loopback4_2_946;
} 
else {
 ;
}
_dataRx_branch_block_stmt_946_c_export_apply_macro_;
}
// merge  file .Aa/sdhc.linked.aa, line 360
_dataRx_merge_stmt_1019_c_preamble_macro_; 
// 				$phi K_2 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K_2 $on   crcloopback4_2 
 // type of target is $uint<5>
_dataRx_phi_stmt_1020_c_macro_; 
// 				$phi currentCRC_2 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC_2 $on   crcloopback4_2 
 // type of target is $uint<16>
_dataRx_phi_stmt_1025_c_macro_; 
_dataRx_merge_stmt_1019_c_postamble_macro_; 
// 			nextCRC_2 := ((currentCRC_2 << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT2Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1040_c_macro_; 
// 			next_K_2 := (K_2 + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_1045_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1048,5);\
bit_vector_clear(&konst_1048);\
konst_1048.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1049,1);\
bit_vector_clear(&konst_1048);\
konst_1048.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_2), &(konst_1048), &(ULT_u5_u1_1049));\
if (has_undefined_bit(&ULT_u5_u1_1049)) {fprintf(stderr, "Error: variable ULT_u5_u1_1049 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1049));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_1049)) { 
/* 			$place[crcloopback4_2]
*/  goto crcloopback4_2_545;
} 
else {
 ;
}
// 			stopBit2 := DAT2Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1054_c_macro_; 
// 			stopBitError2 := (stopBit2 == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1059_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 373
_dataRx_merge_stmt_1060_c_preamble_macro_; 
// 				$phi J_2 := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J_2 $on   loopback2 
 // type of target is $uint<13>
_dataRx_phi_stmt_1061_c_macro_; 
// 				$phi CRC_16_2 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16_2 $on   loopback2 
 // type of target is $uint<16>
_dataRx_phi_stmt_1066_c_macro_; 
// 				$phi tempData2 := 				  dat2 $on   $entry 				  nextTempData2 $on   loopback2 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1071_c_macro_; 
_dataRx_merge_stmt_1060_c_postamble_macro_; 
// 			inv2 := ((tempData2 [] 1023 ) ^ (CRC_16_2 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1084_c_macro_; 
// 			nextCRC16_2 := (((( $slice CRC_16_2 14 12 )  && ((CRC_16_2 [] 11 ) ^ inv2)) && ( $slice CRC_16_2 10 5 ) ) && ((((CRC_16_2 [] 4 ) ^ inv2) && ( $slice CRC_16_2 3 0 ) ) && inv2)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1108_c_macro_; 
// 			nextTempData2 := (tempData2 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1113_c_macro_; 
// 			$volatile next_J_2 := (J_2 + 1 ) $buffering 1
_dataRx_assign_stmt_1118_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1121,13);\
bit_vector_clear(&konst_1121);\
konst_1121.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_1122,1);\
bit_vector_clear(&konst_1121);\
konst_1121.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_2), &(konst_1121), &(ULT_u13_u1_1122));\
if (has_undefined_bit(&ULT_u13_u1_1122)) {fprintf(stderr, "Error: variable ULT_u13_u1_1122 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1122));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_1122)) { 
/* 			$place[loopback2]
*/  goto loopback2_545;
} 
else {
 ;
}
// 			crcError2 := (nextCRC_2 != nextCRC16_2) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1129_c_macro_; 
// 			startBit3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1132_c_macro_; 
_dataRx_branch_block_stmt_1133_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 392
_dataRx_merge_stmt_1134_c_preamble_macro_; 
// 					$phi I_3 := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I_3 $on   loopback4_3 
 // type of target is $uint<10>
_dataRx_phi_stmt_1135_c_macro_; 
// 					$phi dat3 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data3 $on   loopback4_3 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1140_c_macro_; 
_dataRx_merge_stmt_1134_c_postamble_macro_; 
// 				bit7_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1148_c_macro_; 
// 				bit6_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1151_c_macro_; 
// 				bit5_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1154_c_macro_; 
// 				bit4_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1157_c_macro_; 
// 				bit3_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1160_c_macro_; 
// 				bit2_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1163_c_macro_; 
// 				bit1_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1166_c_macro_; 
// 				bit0_3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1169_c_macro_; 
// 				next_data3 := ((dat3 << 8 ) | (($bitcast ($uint<1016>) 0  ) && (((bit7_3 && bit6_3) && (bit5_3 && bit4_3)) && ((bit3_3 && bit2_3) && (bit1_3 && bit0_3))))) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1193_c_macro_; 
// 				next_I_3 := (I_3 + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1198_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1201,10);\
bit_vector_clear(&konst_1201);\
konst_1201.val.byte_array[0] = 128;\
__declare_static_bit_vector(ULT_u10_u1_1202,1);\
bit_vector_clear(&konst_1201);\
konst_1201.val.byte_array[0] = 128;\
bit_vector_less(0, &(next_I_3), &(konst_1201), &(ULT_u10_u1_1202));\
if (has_undefined_bit(&ULT_u10_u1_1202)) {fprintf(stderr, "Error: variable ULT_u10_u1_1202 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1202));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1202)) { 
/* 				$place[loopback4_3]
*/  goto loopback4_3_1133;
} 
else {
 ;
}
_dataRx_branch_block_stmt_1133_c_export_apply_macro_;
}
// merge  file .Aa/sdhc.linked.aa, line 413
_dataRx_merge_stmt_1206_c_preamble_macro_; 
// 				$phi K_3 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K_3 $on   crcloopback4_3 
 // type of target is $uint<5>
_dataRx_phi_stmt_1207_c_macro_; 
// 				$phi currentCRC_3 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC_3 $on   crcloopback4_3 
 // type of target is $uint<16>
_dataRx_phi_stmt_1212_c_macro_; 
_dataRx_merge_stmt_1206_c_postamble_macro_; 
// 			nextCRC_3 := ((currentCRC_3 << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT3Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1227_c_macro_; 
// 			next_K_3 := (K_3 + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_1232_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1235,5);\
bit_vector_clear(&konst_1235);\
konst_1235.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1236,1);\
bit_vector_clear(&konst_1235);\
konst_1235.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K_3), &(konst_1235), &(ULT_u5_u1_1236));\
if (has_undefined_bit(&ULT_u5_u1_1236)) {fprintf(stderr, "Error: variable ULT_u5_u1_1236 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1236));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_1236)) { 
/* 			$place[crcloopback4_3]
*/  goto crcloopback4_3_545;
} 
else {
 ;
}
// 			stopBit3 := DAT3Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1241_c_macro_; 
// 			stopBitError3 := (stopBit3 == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1246_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 426
_dataRx_merge_stmt_1247_c_preamble_macro_; 
// 				$phi J_3 := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J_3 $on   loopback3 
 // type of target is $uint<13>
_dataRx_phi_stmt_1248_c_macro_; 
// 				$phi CRC_16_3 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16_3 $on   loopback3 
 // type of target is $uint<16>
_dataRx_phi_stmt_1253_c_macro_; 
// 				$phi tempData3 := 				  dat3 $on   $entry 				  nextTempData3 $on   loopback3 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1258_c_macro_; 
_dataRx_merge_stmt_1247_c_postamble_macro_; 
// 			inv3 := ((tempData3 [] 1023 ) ^ (CRC_16_3 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1271_c_macro_; 
// 			nextCRC16_3 := (((( $slice CRC_16_3 14 12 )  && ((CRC_16_3 [] 11 ) ^ inv3)) && ( $slice CRC_16_3 10 5 ) ) && ((((CRC_16_3 [] 4 ) ^ inv3) && ( $slice CRC_16_3 3 0 ) ) && inv3)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1295_c_macro_; 
// 			nextTempData3 := (tempData3 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1300_c_macro_; 
// 			$volatile next_J_3 := (J_3 + 1 ) $buffering 1
_dataRx_assign_stmt_1305_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1308,13);\
bit_vector_clear(&konst_1308);\
konst_1308.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u13_u1_1309,1);\
bit_vector_clear(&konst_1308);\
konst_1308.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_J_3), &(konst_1308), &(ULT_u13_u1_1309));\
if (has_undefined_bit(&ULT_u13_u1_1309)) {fprintf(stderr, "Error: variable ULT_u13_u1_1309 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1309));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_1309)) { 
/* 			$place[loopback3]
*/  goto loopback3_545;
} 
else {
 ;
}
// 			crcError3 := (nextCRC_3 != nextCRC16_3) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1316_c_macro_; 
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1320_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line -1470600032
__declare_static_bit_vector(konst_1323,1);\
bit_vector_clear(&konst_1323);\
__declare_static_bit_vector(EQ_u1_u1_1324,1);\
bit_vector_clear(&konst_1323);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1323), &(EQ_u1_u1_1324));\
if (has_undefined_bit(&EQ_u1_u1_1324)) {fprintf(stderr, "Error: variable EQ_u1_u1_1324 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1324));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1324)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1330_c_macro_; 
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 446
_dataRx_merge_stmt_1332_c_preamble_macro_; 
// 				$phi B := 				  ($bitcast ($uint<10>) 0  ) $on   $entry 				  next_B $on   finaldataloop 
 // type of target is $uint<10>
_dataRx_phi_stmt_1333_c_macro_; 
// 				$phi dataForBuffer0 := 				  dat0 $on   $entry 				  nextDataForBuffer0 $on   finaldataloop 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1338_c_macro_; 
// 				$phi dataForBuffer1 := 				  dat1 $on   $entry 				  nextDataForBuffer1 $on   finaldataloop 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1342_c_macro_; 
// 				$phi dataForBuffer2 := 				  dat2 $on   $entry 				  nextDataForBuffer2 $on   finaldataloop 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1346_c_macro_; 
// 				$phi dataForBuffer3 := 				  dat3 $on   $entry 				  nextDataForBuffer3 $on   finaldataloop 
 // type of target is $uint<1024>
_dataRx_phi_stmt_1350_c_macro_; 
_dataRx_merge_stmt_1332_c_postamble_macro_; 
// 			dataBufferRx := ((((dataForBuffer0 [] 1023 ) && (dataForBuffer1 [] 1023 )) && ((dataForBuffer2 [] 1023 ) && (dataForBuffer3 [] 1023 ))) && (((dataForBuffer0 [] 1022 ) && (dataForBuffer1 [] 1022 )) && ((dataForBuffer2 [] 1022 ) && (dataForBuffer3 [] 1022 )))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1387_c_macro_; 
// 			biff := ((((dataForBuffer0 [] 1023 ) && (dataForBuffer1 [] 1023 )) && ((dataForBuffer2 [] 1023 ) && (dataForBuffer3 [] 1023 ))) && (((dataForBuffer0 [] 1022 ) && (dataForBuffer1 [] 1022 )) && ((dataForBuffer2 [] 1022 ) && (dataForBuffer3 [] 1022 )))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1420_c_macro_; 
// $report (DATA4 buf 			 biff biff )
_dataRx_stmt_1422_c_macro_; 
// 			nextDataForBuffer0 := (dataForBuffer0 << 2 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1427_c_macro_; 
// 			nextDataForBuffer1 := (dataForBuffer1 << 2 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1432_c_macro_; 
// 			nextDataForBuffer2 := (dataForBuffer2 << 2 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1437_c_macro_; 
// 			nextDataForBuffer3 := (dataForBuffer3 << 2 ) $buffering 1// bits of buffering = 1024. 
_dataRx_assign_stmt_1442_c_macro_; 
// 			next_B := (B + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1447_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1450,10);\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1451,1);\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_B), &(konst_1450), &(ULT_u10_u1_1451));\
if (has_undefined_bit(&ULT_u10_u1_1451)) {fprintf(stderr, "Error: variable ULT_u10_u1_1451 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1451));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1451)) { 
/* 			$place[finaldataloop]
*/  goto finaldataloop_545;
} 
else {
 ;
}
// 			stopBitError_Final := ((stopBitError0 | stopBitError1) | (stopBitError2 | stopBitError3)) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1462_c_macro_; 
// 			crcError_Final := ((crcError0 | crcError1) | (crcError2 | crcError3)) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1471_c_macro_; 
// 			dataErrorInterruptStatusVar1_4 := (((ZERO_1 && stopBitError_Final) && crcError_Final) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1484_c_macro_; 
} 
else {
// 			startBit := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1488_c_macro_; 
_dataRx_branch_block_stmt_1489_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 476
_dataRx_merge_stmt_1490_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataRx_phi_stmt_1491_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1496_c_macro_; 
_dataRx_merge_stmt_1490_c_postamble_macro_; 
// 				bit7 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1505_c_macro_; 
// 				bit6 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1508_c_macro_; 
// 				bit5 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1511_c_macro_; 
// 				bit4 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1514_c_macro_; 
// 				bit3 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1517_c_macro_; 
// 				bit2 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1520_c_macro_; 
// 				bit1 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1523_c_macro_; 
// 				bit0 := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1526_c_macro_; 
// 				buffer := (((bit7 && bit6) && (bit5 && bit4)) && ((bit3 && bit2) && (bit1 && bit0))) $buffering 1// bits of buffering = 8.  Orphaned statement with target buffer ?? 
_dataRx_assign_stmt_1543_c_macro_; 
// 				dataBufferRx := (((bit7 && bit6) && (bit5 && bit4)) && ((bit3 && bit2) && (bit1 && bit0))) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1560_c_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && (((bit7 && bit6) && (bit5 && bit4)) && ((bit3 && bit2) && (bit1 && bit0))))) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1585_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1590_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1593,10);\
bit_vector_clear(&konst_1593);\
konst_1593.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_1594,1);\
bit_vector_clear(&konst_1593);\
konst_1593.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_1593), &(ULT_u10_u1_1594));\
if (has_undefined_bit(&ULT_u10_u1_1594)) {fprintf(stderr, "Error: variable ULT_u10_u1_1594 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_1594));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_1594)) { 
/* 				$place[loopback1]
*/  goto loopback1_1489;
} 
else {
 ;
}
_dataRx_branch_block_stmt_1489_c_export_apply_macro_;
}
// 			rxBufferPointer := ($bitcast ($uint<10>) 512  ) $buffering 1// bits of buffering = 10. 
_dataRx_assign_stmt_1601_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 500
_dataRx_merge_stmt_1602_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_K $on   crcloopback 
 // type of target is $uint<5>
_dataRx_phi_stmt_1603_c_macro_; 
// 				$phi currentCRC := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC $on   crcloopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1608_c_macro_; 
_dataRx_merge_stmt_1602_c_postamble_macro_; 
// 			nextCRC := ((currentCRC << 1 ) | (($bitcast ($uint<15>) 0  ) && DAT0Rx)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1623_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 5. 
_dataRx_assign_stmt_1628_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1631,5);\
bit_vector_clear(&konst_1631);\
konst_1631.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_1632,1);\
bit_vector_clear(&konst_1631);\
konst_1631.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_K), &(konst_1631), &(ULT_u5_u1_1632));\
if (has_undefined_bit(&ULT_u5_u1_1632)) {fprintf(stderr, "Error: variable ULT_u5_u1_1632 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_1632));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_1632)) { 
/* 			$place[crcloopback]
*/  goto crcloopback_545;
} 
else {
 ;
}
// 			stopBit := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1637_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1640,1);\
bit_vector_clear(&konst_1640);\
__declare_static_bit_vector(EQ_u1_u1_1641,1);\
bit_vector_clear(&konst_1640);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1640), &(EQ_u1_u1_1641));\
if (has_undefined_bit(&EQ_u1_u1_1641)) {fprintf(stderr, "Error: variable EQ_u1_u1_1641 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1641));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1641)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfb ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1647_c_macro_; 
} 
else {
 ;
}
// 			stopBitError := (stopBit == 0 ) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1653_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 516
_dataRx_merge_stmt_1654_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataRx_phi_stmt_1655_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataRx_phi_stmt_1660_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataRx_phi_stmt_1665_c_macro_; 
_dataRx_merge_stmt_1654_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1678_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataRx_assign_stmt_1702_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataRx_assign_stmt_1707_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataRx_assign_stmt_1712_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_1715,13);\
bit_vector_clear(&konst_1715);\
konst_1715.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_1716,1);\
bit_vector_clear(&konst_1715);\
konst_1715.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_1715), &(ULT_u13_u1_1716));\
if (has_undefined_bit(&ULT_u13_u1_1716)) {fprintf(stderr, "Error: variable ULT_u13_u1_1716 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_1716));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_1716)) { 
/* 			$place[loopback]
*/  goto loopback_545;
} 
else {
 ;
}
// 			crcError := (nextCRC != nextCRC16) $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1723_c_macro_; 
// 			dataRxEnrty := ONE_1 $buffering 1// bits of buffering = 1. 
_dataRx_assign_stmt_1726_c_macro_; 
// 			dataErrorInterruptStatusVar1_0 := (((ZERO_1 && stopBitError) && crcError) && ((ZERO_1 && ZERO_2) && ZERO_2)) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1739_c_macro_; 
}
// 		dataErrorInterruptStatusVar1 := ( $mux (sdhcRegisters[40 ] [] 1 ) dataErrorInterruptStatusVar1_4  dataErrorInterruptStatusVar1_0 )  $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1749_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line -1470600032
__declare_static_bit_vector(konst_1752,1);\
bit_vector_clear(&konst_1752);\
__declare_static_bit_vector(EQ_u1_u1_1753,1);\
bit_vector_clear(&konst_1752);\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_1752), &(EQ_u1_u1_1753));\
if (has_undefined_bit(&EQ_u1_u1_1753)) {fprintf(stderr, "Error: variable EQ_u1_u1_1753 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_1753));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_1753)) { 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1759_c_macro_; 
// 			sdhcRegisters[36 ] := (presentState0Var & _hfd ) $buffering 1// bits of buffering = 8. 
_dataRx_assign_stmt_1765_c_macro_; 
} 
else {
 ;
}
// $report (You check 		 nextCRC16 nextCRC16 		 nextCRC nextCRC 		 rxBufferPointer rxBufferPointer )
_dataRx_stmt_1770_c_macro_; 
_dataRx_branch_block_stmt_545_c_export_apply_macro_;
}
_dataRx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataRx_series_block_stmt_542_c_mutex_);
}
void _dataTx_(bit_vector* __plastBlock, bit_vector* __pblockCountEnable, bit_vector* __pblockCount, bit_vector*  __pblockCountNext, bit_vector*  __ptransferComplete)
{
MUTEX_DECL(_dataTx_series_block_stmt_2336_c_mutex_);
MUTEX_LOCK(_dataTx_series_block_stmt_2336_c_mutex_);
_dataTx_inner_inarg_prep_macro__; 
_dataTx_branch_block_stmt_2342_c_export_decl_macro_; 
{
// if statement :  file .Aa/sdhc.linked.aa, line 712
__declare_static_bit_vector(konst_2344,32);\
bit_vector_clear(&konst_2344);\
konst_2344.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_2346,8);\
bit_vector_clear(&konst_2346);\
konst_2346.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2347,1);\
bit_vector_clear(&konst_2344);\
konst_2344.val.byte_array[0] = 40;\
bit_vector_clear(&konst_2346);\
konst_2346.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2344)])), &(konst_2346), &(BITSEL_u8_u1_2347));\
if (has_undefined_bit(&BITSEL_u8_u1_2347)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_2347 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_2347));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_2347)) { 
_dataTx_branch_block_stmt_2348_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 715
_dataTx_merge_stmt_2349_c_preamble_macro_; 
// 					$phi i := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_i $on   loopback1_4 
 // type of target is $uint<10>
_dataTx_phi_stmt_2350_c_macro_; 
// 					$phi dat0 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data0 $on   loopback1_4 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2355_c_macro_; 
// 					$phi dat1 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data1 $on   loopback1_4 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2360_c_macro_; 
// 					$phi dat2 := 					  next_data2 $on   loopback1_4 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2365_c_macro_; 
// 					$phi dat3 := 					  ($bitcast ($uint<1024>) 0  ) $on   $entry 					  next_data3 $on   loopback1_4 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2370_c_macro_; 
_dataTx_merge_stmt_2349_c_postamble_macro_; 
// 				tempBuffer := dataBufferTx $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_2378_c_macro_; 
// 				next_data0 := ((dat0 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 7 )) && (tempBuffer [] 3 ))) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2396_c_macro_; 
// 				next_data1 := ((dat1 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 6 )) && (tempBuffer [] 2 ))) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2412_c_macro_; 
// 				next_data2 := ((dat2 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 5 )) && (tempBuffer [] 1 ))) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2428_c_macro_; 
// 				next_data3 := ((dat3 << 2 ) | ((($bitcast ($uint<1022>) 0  ) && (tempBuffer [] 4 )) && (tempBuffer [] 0 ))) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2444_c_macro_; 
// $report (DATAIN next 				 i i 				 tempBuffer tempBuffer 				 next_data0 next_data0 				 next_data1 next_data1 				 next_data2 next_data2 				 next_data3 next_data3 )
_dataTx_stmt_2451_c_macro_; 
// 				next_i := (i + 1 ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2456_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 20508768
__declare_static_bit_vector(konst_2459,10);\
bit_vector_clear(&konst_2459);\
konst_2459.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_2460,1);\
bit_vector_clear(&konst_2459);\
konst_2459.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_i), &(konst_2459), &(ULT_u10_u1_2460));\
if (has_undefined_bit(&ULT_u10_u1_2460)) {fprintf(stderr, "Error: variable ULT_u10_u1_2460 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_2460));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_2460)) { 
/* 				$place[loopback1_4]
*/  goto loopback1_4_2348;
} 
else {
 ;
}
_dataTx_branch_block_stmt_2348_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_2467_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 740
_dataTx_merge_stmt_2468_c_preamble_macro_; 
// 				$phi j_0 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_j_0 $on   loopback_dat0 
 // type of target is $uint<11>
_dataTx_phi_stmt_2469_c_macro_; 
// 				$phi CRC_16_DAT0 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16_DAT0 $on   loopback_dat0 
 // type of target is $uint<16>
_dataTx_phi_stmt_2475_c_macro_; 
// 				$phi tempDataD0 := 				  nextTempDataD0 $on   loopback_dat0 				  dat0 $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2480_c_macro_; 
_dataTx_merge_stmt_2468_c_postamble_macro_; 
// 			invd0 := ((tempDataD0 [] 1023 ) ^ (CRC_16_DAT0 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2493_c_macro_; 
// 			nextCRC16_DAT0 := (((( $slice CRC_16_DAT0 14 12 )  && ((CRC_16_DAT0 [] 11 ) ^ invd0)) && ( $slice CRC_16_DAT0 10 5 ) ) && ((((CRC_16_DAT0 [] 4 ) ^ invd0) && ( $slice CRC_16_DAT0 3 0 ) ) && invd0)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2517_c_macro_; 
// 			nextTempDataD0 := (tempDataD0 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2522_c_macro_; 
// 			$volatile next_j_0 := (j_0 + 1 ) $buffering 1
_dataTx_assign_stmt_2527_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 19002000
__declare_static_bit_vector(konst_2530,11);\
bit_vector_clear(&konst_2530);\
konst_2530.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2531,1);\
bit_vector_clear(&konst_2530);\
konst_2530.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_0), &(konst_2530), &(ULT_u11_u1_2531));\
if (has_undefined_bit(&ULT_u11_u1_2531)) {fprintf(stderr, "Error: variable ULT_u11_u1_2531 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2531));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2531)) { 
/* 			$place[loopback_dat0]
*/  goto loopback_dat0_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 755
_dataTx_merge_stmt_2534_c_preamble_macro_; 
// 				$phi j_1 := 				  next_j_1 $on   loopback_dat1 				  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_dataTx_phi_stmt_2535_c_macro_; 
// 				$phi CRC_16_DAT1 := 				  nextCRC16_DAT1 $on   loopback_dat1 				  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_dataTx_phi_stmt_2540_c_macro_; 
// 				$phi tempDataD1 := 				  dat1 $on   $entry 				  nextTempDataD1 $on   loopback_dat1 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2545_c_macro_; 
_dataTx_merge_stmt_2534_c_postamble_macro_; 
// 			invd1 := ((tempDataD1 [] 1023 ) ^ (CRC_16_DAT1 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2558_c_macro_; 
// 			nextCRC16_DAT1 := (((( $slice CRC_16_DAT1 14 12 )  && ((CRC_16_DAT1 [] 11 ) ^ invd1)) && ( $slice CRC_16_DAT1 10 5 ) ) && ((((CRC_16_DAT1 [] 4 ) ^ invd1) && ( $slice CRC_16_DAT1 3 0 ) ) && invd1)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2582_c_macro_; 
// 			nextTempDataD1 := (tempDataD1 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2587_c_macro_; 
// 			$volatile next_j_1 := (j_1 + 1 ) $buffering 1
_dataTx_assign_stmt_2592_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 19637136
__declare_static_bit_vector(konst_2595,11);\
bit_vector_clear(&konst_2595);\
konst_2595.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2596,1);\
bit_vector_clear(&konst_2595);\
konst_2595.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_1), &(konst_2595), &(ULT_u11_u1_2596));\
if (has_undefined_bit(&ULT_u11_u1_2596)) {fprintf(stderr, "Error: variable ULT_u11_u1_2596 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2596));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2596)) { 
/* 			$place[loopback_dat1]
*/  goto loopback_dat1_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 770
_dataTx_merge_stmt_2599_c_preamble_macro_; 
// 				$phi j_2 := 				  next_j_2 $on   loopback_dat2 				  ($bitcast ($uint<11>) 0  ) $on   $entry 
 // type of target is $uint<11>
_dataTx_phi_stmt_2600_c_macro_; 
// 				$phi CRC_16_DAT2 := 				  nextCRC16_DAT2 $on   loopback_dat2 				  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_dataTx_phi_stmt_2605_c_macro_; 
// 				$phi tempDataD2 := 				  nextTempDataD2 $on   loopback_dat2 				  dat2 $on   $entry 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2610_c_macro_; 
_dataTx_merge_stmt_2599_c_postamble_macro_; 
// 			invd2 := ((tempDataD2 [] 1023 ) ^ (CRC_16_DAT2 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2623_c_macro_; 
// 			nextCRC16_DAT2 := (((( $slice CRC_16_DAT2 14 12 )  && ((CRC_16_DAT2 [] 11 ) ^ invd2)) && ( $slice CRC_16_DAT2 10 5 ) ) && ((((CRC_16_DAT2 [] 4 ) ^ invd2) && ( $slice CRC_16_DAT2 3 0 ) ) && invd2)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2647_c_macro_; 
// 			nextTempDataD2 := (tempDataD2 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2652_c_macro_; 
// 			$volatile next_j_2 := (j_2 + 1 ) $buffering 1
_dataTx_assign_stmt_2657_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line -1470600032
__declare_static_bit_vector(konst_2660,11);\
bit_vector_clear(&konst_2660);\
konst_2660.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2661,1);\
bit_vector_clear(&konst_2660);\
konst_2660.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_2), &(konst_2660), &(ULT_u11_u1_2661));\
if (has_undefined_bit(&ULT_u11_u1_2661)) {fprintf(stderr, "Error: variable ULT_u11_u1_2661 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2661));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2661)) { 
/* 			$place[loopback_dat2]
*/  goto loopback_dat2_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 785
_dataTx_merge_stmt_2664_c_preamble_macro_; 
// 				$phi j_3 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_j_3 $on   loopback_dat3 
 // type of target is $uint<11>
_dataTx_phi_stmt_2665_c_macro_; 
// 				$phi CRC_16_DAT3 := 				  nextCRC16_DAT3 $on   loopback_dat3 				  ($bitcast ($uint<16>) 0  ) $on   $entry 
 // type of target is $uint<16>
_dataTx_phi_stmt_2670_c_macro_; 
// 				$phi tempDataD3 := 				  dat3 $on   $entry 				  nextTempDataD3 $on   loopback_dat3 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2675_c_macro_; 
_dataTx_merge_stmt_2664_c_postamble_macro_; 
// 			invd3 := ((tempDataD3 [] 1023 ) ^ (CRC_16_DAT3 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2688_c_macro_; 
// 			nextCRC16_DAT3 := (((( $slice CRC_16_DAT3 14 12 )  && ((CRC_16_DAT3 [] 11 ) ^ invd3)) && ( $slice CRC_16_DAT3 10 5 ) ) && ((((CRC_16_DAT3 [] 4 ) ^ invd3) && ( $slice CRC_16_DAT3 3 0 ) ) && invd3)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2712_c_macro_; 
// 			nextTempDataD3 := (tempDataD3 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2717_c_macro_; 
// 			$volatile next_j_3 := (j_3 + 1 ) $buffering 1
_dataTx_assign_stmt_2722_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2725,11);\
bit_vector_clear(&konst_2725);\
konst_2725.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2726,1);\
bit_vector_clear(&konst_2725);\
konst_2725.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_j_3), &(konst_2725), &(ULT_u11_u1_2726));\
if (has_undefined_bit(&ULT_u11_u1_2726)) {fprintf(stderr, "Error: variable ULT_u11_u1_2726 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2726));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2726)) { 
/* 			$place[loopback_dat3]
*/  goto loopback_dat3_2342;
} 
else {
 ;
}
// 			DAT0Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2731_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 801
_dataTx_merge_stmt_2732_c_preamble_macro_; 
// 				$phi k_0 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_k_0 $on   dataloop4_0 
 // type of target is $uint<11>
_dataTx_phi_stmt_2733_c_macro_; 
// 				$phi dat0bit4_0 := 				  dat0 $on   $entry 				  nextbit4_0 $on   dataloop4_0 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2738_c_macro_; 
_dataTx_merge_stmt_2732_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit4_0 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2747_c_macro_; 
// 			nextbit4_0 := (dat0bit4_0 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2752_c_macro_; 
// 			next_k_0 := (k_0 + 1 ) $buffering 1// bits of buffering = 11. 
_dataTx_assign_stmt_2757_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2760,11);\
bit_vector_clear(&konst_2760);\
konst_2760.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2761,1);\
bit_vector_clear(&konst_2760);\
konst_2760.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_0), &(konst_2760), &(ULT_u11_u1_2761));\
if (has_undefined_bit(&ULT_u11_u1_2761)) {fprintf(stderr, "Error: variable ULT_u11_u1_2761 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2761));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2761)) { 
/* 			$place[dataloop4_0]
*/  goto dataloop4_0_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 813
_dataTx_merge_stmt_2764_c_preamble_macro_; 
// 				$phi l_0 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_l_0 $on   crcloop4_0 
 // type of target is $uint<5>
_dataTx_phi_stmt_2765_c_macro_; 
// 				$phi dat0crc4 := 				  nextCRC16_DAT0 $on   $entry 				  nextbitcrc4_0 $on   crcloop4_0 
 // type of target is $uint<16>
_dataTx_phi_stmt_2770_c_macro_; 
_dataTx_merge_stmt_2764_c_postamble_macro_; 
// 			DAT0Tx := (dat0crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2779_c_macro_; 
// 			nextbitcrc4_0 := (dat0crc4 << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2784_c_macro_; 
// 			next_l_0 := (l_0 + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_2789_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2792,5);\
bit_vector_clear(&konst_2792);\
konst_2792.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2793,1);\
bit_vector_clear(&konst_2792);\
konst_2792.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_0), &(konst_2792), &(ULT_u5_u1_2793));\
if (has_undefined_bit(&ULT_u5_u1_2793)) {fprintf(stderr, "Error: variable ULT_u5_u1_2793 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2793));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_2793)) { 
/* 			$place[crcloop4_0]
*/  goto crcloop4_0_2342;
} 
else {
 ;
}
// 			DAT0Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2798_c_macro_; 
// $report (OUTDATA0 data 			 lastBlock lastBlock )
_dataTx_stmt_2800_c_macro_; 
// 			DAT1Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2803_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 828
_dataTx_merge_stmt_2804_c_preamble_macro_; 
// 				$phi k_1 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_k_1 $on   dataloop4_1 
 // type of target is $uint<11>
_dataTx_phi_stmt_2805_c_macro_; 
// 				$phi dat0bit4_1 := 				  dat1 $on   $entry 				  nextbit4_1 $on   dataloop4_1 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2810_c_macro_; 
_dataTx_merge_stmt_2804_c_postamble_macro_; 
// 			DAT1Tx := (dat0bit4_1 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2819_c_macro_; 
// 			nextbit4_1 := (dat0bit4_1 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2824_c_macro_; 
// 			next_k_1 := (k_1 + 1 ) $buffering 1// bits of buffering = 11. 
_dataTx_assign_stmt_2829_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2832,11);\
bit_vector_clear(&konst_2832);\
konst_2832.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2833,1);\
bit_vector_clear(&konst_2832);\
konst_2832.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_1), &(konst_2832), &(ULT_u11_u1_2833));\
if (has_undefined_bit(&ULT_u11_u1_2833)) {fprintf(stderr, "Error: variable ULT_u11_u1_2833 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2833));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2833)) { 
/* 			$place[dataloop4_1]
*/  goto dataloop4_1_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 840
_dataTx_merge_stmt_2836_c_preamble_macro_; 
// 				$phi l_1 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_l_1 $on   crcloop4_1 
 // type of target is $uint<5>
_dataTx_phi_stmt_2837_c_macro_; 
// 				$phi dat1crc4 := 				  nextCRC16_DAT1 $on   $entry 				  nextbitcrc4_1 $on   crcloop4_1 
 // type of target is $uint<16>
_dataTx_phi_stmt_2842_c_macro_; 
_dataTx_merge_stmt_2836_c_postamble_macro_; 
// 			DAT1Tx := (dat1crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2851_c_macro_; 
// 			nextbitcrc4_1 := (dat1crc4 << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2856_c_macro_; 
// 			next_l_1 := (l_1 + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_2861_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2864,5);\
bit_vector_clear(&konst_2864);\
konst_2864.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2865,1);\
bit_vector_clear(&konst_2864);\
konst_2864.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_1), &(konst_2864), &(ULT_u5_u1_2865));\
if (has_undefined_bit(&ULT_u5_u1_2865)) {fprintf(stderr, "Error: variable ULT_u5_u1_2865 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2865));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_2865)) { 
/* 			$place[crcloop4_1]
*/  goto crcloop4_1_2342;
} 
else {
 ;
}
// 			DAT1Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2870_c_macro_; 
// 			DAT2Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2873_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 854
_dataTx_merge_stmt_2874_c_preamble_macro_; 
// 				$phi k_2 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_k_2 $on   dataloop4_2 
 // type of target is $uint<11>
_dataTx_phi_stmt_2875_c_macro_; 
// 				$phi dat0bit4_2 := 				  dat2 $on   $entry 				  nextbit4_2 $on   dataloop4_2 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2880_c_macro_; 
_dataTx_merge_stmt_2874_c_postamble_macro_; 
// 			DAT2Tx := (dat0bit4_2 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2889_c_macro_; 
// 			nextbit4_2 := (dat0bit4_2 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2894_c_macro_; 
// 			next_k_2 := (k_2 + 1 ) $buffering 1// bits of buffering = 11. 
_dataTx_assign_stmt_2899_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2902,11);\
bit_vector_clear(&konst_2902);\
konst_2902.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2903,1);\
bit_vector_clear(&konst_2902);\
konst_2902.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_2), &(konst_2902), &(ULT_u11_u1_2903));\
if (has_undefined_bit(&ULT_u11_u1_2903)) {fprintf(stderr, "Error: variable ULT_u11_u1_2903 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2903));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2903)) { 
/* 			$place[dataloop4_2]
*/  goto dataloop4_2_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 866
_dataTx_merge_stmt_2906_c_preamble_macro_; 
// 				$phi l_2 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_l_2 $on   crcloop4_2 
 // type of target is $uint<5>
_dataTx_phi_stmt_2907_c_macro_; 
// 				$phi dat2crc4 := 				  nextCRC16_DAT2 $on   $entry 				  nextbitcrc4_2 $on   crcloop4_2 
 // type of target is $uint<16>
_dataTx_phi_stmt_2912_c_macro_; 
_dataTx_merge_stmt_2906_c_postamble_macro_; 
// 			DAT2Tx := (dat2crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2921_c_macro_; 
// 			nextbitcrc4_2 := (dat2crc4 << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2926_c_macro_; 
// 			next_l_2 := (l_2 + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_2931_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2934,5);\
bit_vector_clear(&konst_2934);\
konst_2934.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_2935,1);\
bit_vector_clear(&konst_2934);\
konst_2934.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_2), &(konst_2934), &(ULT_u5_u1_2935));\
if (has_undefined_bit(&ULT_u5_u1_2935)) {fprintf(stderr, "Error: variable ULT_u5_u1_2935 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_2935));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_2935)) { 
/* 			$place[crcloop4_2]
*/  goto crcloop4_2_2342;
} 
else {
 ;
}
// 			DAT2Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2940_c_macro_; 
// $report (OUTDATA2 data 			 lastBlock lastBlock )
_dataTx_stmt_2942_c_macro_; 
// 			DAT3Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2945_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 881
_dataTx_merge_stmt_2946_c_preamble_macro_; 
// 				$phi k_3 := 				  ($bitcast ($uint<11>) 0  ) $on   $entry 				  next_k_3 $on   dataloop4_3 
 // type of target is $uint<11>
_dataTx_phi_stmt_2947_c_macro_; 
// 				$phi dat0bit4_3 := 				  dat3 $on   $entry 				  nextbit4_3 $on   dataloop4_3 
 // type of target is $uint<1024>
_dataTx_phi_stmt_2952_c_macro_; 
_dataTx_merge_stmt_2946_c_postamble_macro_; 
// 			DAT3Tx := (dat0bit4_3 [] 1023 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2961_c_macro_; 
// 			nextbit4_3 := (dat0bit4_3 << 1 ) $buffering 1// bits of buffering = 1024. 
_dataTx_assign_stmt_2966_c_macro_; 
// 			next_k_3 := (k_3 + 1 ) $buffering 1// bits of buffering = 11. 
_dataTx_assign_stmt_2971_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_2974,11);\
bit_vector_clear(&konst_2974);\
konst_2974.val.byte_array[1] = 4;\
__declare_static_bit_vector(ULT_u11_u1_2975,1);\
bit_vector_clear(&konst_2974);\
konst_2974.val.byte_array[1] = 4;\
bit_vector_less(0, &(next_k_3), &(konst_2974), &(ULT_u11_u1_2975));\
if (has_undefined_bit(&ULT_u11_u1_2975)) {fprintf(stderr, "Error: variable ULT_u11_u1_2975 has undefined value (%s) at test point.\n", to_string(&ULT_u11_u1_2975));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u11_u1_2975)) { 
/* 			$place[dataloop4_3]
*/  goto dataloop4_3_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 893
_dataTx_merge_stmt_2978_c_preamble_macro_; 
// 				$phi l_3 := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_l_3 $on   crcloop4_3 
 // type of target is $uint<5>
_dataTx_phi_stmt_2979_c_macro_; 
// 				$phi dat3crc4 := 				  nextCRC16_DAT3 $on   $entry 				  nextbitcrc4_3 $on   crcloop4_3 
 // type of target is $uint<16>
_dataTx_phi_stmt_2984_c_macro_; 
_dataTx_merge_stmt_2978_c_postamble_macro_; 
// 			DAT3Tx := (dat3crc4 [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_2993_c_macro_; 
// 			nextbitcrc4_3 := (dat3crc4 << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_2998_c_macro_; 
// 			next_l_3 := (l_3 + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_3003_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3006,5);\
bit_vector_clear(&konst_3006);\
konst_3006.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_3007,1);\
bit_vector_clear(&konst_3006);\
konst_3006.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_l_3), &(konst_3006), &(ULT_u5_u1_3007));\
if (has_undefined_bit(&ULT_u5_u1_3007)) {fprintf(stderr, "Error: variable ULT_u5_u1_3007 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_3007));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_3007)) { 
/* 			$place[crcloop4_3]
*/  goto crcloop4_3_2342;
} 
else {
 ;
}
// 			DAT3Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3012_c_macro_; 
// $report (OUTDATA3 data 			 lastBlock lastBlock )
_dataTx_stmt_3014_c_macro_; 
// $report (END transmission 			 dat0 dat0 			 dat1 dat1 			 dat2 dat2 			 dat3 dat3 )
_dataTx_stmt_3019_c_macro_; 
} 
else {
_dataTx_branch_block_stmt_3021_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 911
_dataTx_merge_stmt_3022_c_preamble_macro_; 
// 					$phi I := 					  ($bitcast ($uint<10>) 0  ) $on   $entry 					  next_I $on   loopback1 
 // type of target is $uint<10>
_dataTx_phi_stmt_3023_c_macro_; 
// 					$phi dat := 					  ($bitcast ($uint<4096>) 0  ) $on   $entry 					  next_data $on   loopback1 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3028_c_macro_; 
_dataTx_merge_stmt_3022_c_postamble_macro_; 
// 				next_data := ((dat << 8 ) | (($bitcast ($uint<4088>) 0  ) && dataBufferTx)) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3043_c_macro_; 
// 				next_I := (I + 1 ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_3048_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3051,10);\
bit_vector_clear(&konst_3051);\
konst_3051.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_3052,1);\
bit_vector_clear(&konst_3051);\
konst_3051.val.byte_array[1] = 2;\
bit_vector_less(0, &(next_I), &(konst_3051), &(ULT_u10_u1_3052));\
if (has_undefined_bit(&ULT_u10_u1_3052)) {fprintf(stderr, "Error: variable ULT_u10_u1_3052 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_3052));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_3052)) { 
/* 				$place[loopback1]
*/  goto loopback1_3021;
} 
else {
 ;
}
_dataTx_branch_block_stmt_3021_c_export_apply_macro_;
}
// 			txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_dataTx_assign_stmt_3059_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 925
_dataTx_merge_stmt_3060_c_preamble_macro_; 
// 				$phi J := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_J $on   loopback 
 // type of target is $uint<13>
_dataTx_phi_stmt_3061_c_macro_; 
// 				$phi CRC_16 := 				  ($bitcast ($uint<16>) 0  ) $on   $entry 				  nextCRC16 $on   loopback 
 // type of target is $uint<16>
_dataTx_phi_stmt_3066_c_macro_; 
// 				$phi tempData := 				  dat $on   $entry 				  nextTempData $on   loopback 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3071_c_macro_; 
_dataTx_merge_stmt_3060_c_postamble_macro_; 
// 			inv := ((tempData [] 4095 ) ^ (CRC_16 [] 15 )) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3084_c_macro_; 
// 			nextCRC16 := (((( $slice CRC_16 14 12 )  && ((CRC_16 [] 11 ) ^ inv)) && ( $slice CRC_16 10 5 ) ) && ((((CRC_16 [] 4 ) ^ inv) && ( $slice CRC_16 3 0 ) ) && inv)) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3108_c_macro_; 
// 			nextTempData := (tempData << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3113_c_macro_; 
// 			$volatile next_J := (J + 1 ) $buffering 1
_dataTx_assign_stmt_3118_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3121,13);\
bit_vector_clear(&konst_3121);\
konst_3121.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_3122,1);\
bit_vector_clear(&konst_3121);\
konst_3121.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_J), &(konst_3121), &(ULT_u13_u1_3122));\
if (has_undefined_bit(&ULT_u13_u1_3122)) {fprintf(stderr, "Error: variable ULT_u13_u1_3122 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_3122));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_3122)) { 
/* 			$place[loopback]
*/  goto loopback_2342;
} 
else {
 ;
}
// $report (OUTDATA data 			 dat dat 			 nextCRC16 nextCRC16 			 lastBlock lastBlock )
_dataTx_stmt_3128_c_macro_; 
// 			DAT0Tx := ZERO_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3131_c_macro_; 
// merge  file .Aa/sdhc.linked.aa, line 942
_dataTx_merge_stmt_3132_c_preamble_macro_; 
// 				$phi K := 				  ($bitcast ($uint<13>) 0  ) $on   $entry 				  next_K $on   dataloop 
 // type of target is $uint<13>
_dataTx_phi_stmt_3133_c_macro_; 
// 				$phi dat0bit := 				  dat $on   $entry 				  nextbit $on   dataloop 
 // type of target is $uint<4096>
_dataTx_phi_stmt_3138_c_macro_; 
_dataTx_merge_stmt_3132_c_postamble_macro_; 
// 			DAT0Tx := (dat0bit [] 4095 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3147_c_macro_; 
// 			nextbit := (dat0bit << 1 ) $buffering 1// bits of buffering = 4096. 
_dataTx_assign_stmt_3152_c_macro_; 
// 			next_K := (K + 1 ) $buffering 1// bits of buffering = 13. 
_dataTx_assign_stmt_3157_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3160,13);\
bit_vector_clear(&konst_3160);\
konst_3160.val.byte_array[1] = 16;\
__declare_static_bit_vector(ULT_u13_u1_3161,1);\
bit_vector_clear(&konst_3160);\
konst_3160.val.byte_array[1] = 16;\
bit_vector_less(0, &(next_K), &(konst_3160), &(ULT_u13_u1_3161));\
if (has_undefined_bit(&ULT_u13_u1_3161)) {fprintf(stderr, "Error: variable ULT_u13_u1_3161 has undefined value (%s) at test point.\n", to_string(&ULT_u13_u1_3161));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u13_u1_3161)) { 
/* 			$place[dataloop]
*/  goto dataloop_2342;
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 954
_dataTx_merge_stmt_3164_c_preamble_macro_; 
// 				$phi L := 				  ($bitcast ($uint<5>) 0  ) $on   $entry 				  next_L $on   crcloop 
 // type of target is $uint<5>
_dataTx_phi_stmt_3165_c_macro_; 
// 				$phi dat0crc := 				  nextCRC16 $on   $entry 				  nextbitcrc $on   crcloop 
 // type of target is $uint<16>
_dataTx_phi_stmt_3170_c_macro_; 
_dataTx_merge_stmt_3164_c_postamble_macro_; 
// 			DAT0Tx := (dat0crc [] 15 ) $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3179_c_macro_; 
// 			nextbitcrc := (dat0crc << 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3184_c_macro_; 
// 			next_L := (L + 1 ) $buffering 1// bits of buffering = 5. 
_dataTx_assign_stmt_3189_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3192,5);\
bit_vector_clear(&konst_3192);\
konst_3192.val.byte_array[0] = 16;\
__declare_static_bit_vector(ULT_u5_u1_3193,1);\
bit_vector_clear(&konst_3192);\
konst_3192.val.byte_array[0] = 16;\
bit_vector_less(0, &(next_L), &(konst_3192), &(ULT_u5_u1_3193));\
if (has_undefined_bit(&ULT_u5_u1_3193)) {fprintf(stderr, "Error: variable ULT_u5_u1_3193 has undefined value (%s) at test point.\n", to_string(&ULT_u5_u1_3193));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u5_u1_3193)) { 
/* 			$place[crcloop]
*/  goto crcloop_2342;
} 
else {
 ;
}
// 			DAT0Tx := ONE_1 $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3198_c_macro_; 
}
// 		$guard (blockCountEnable) blockCountNext := (blockCount - 1 ) $buffering 1// bits of buffering = 16. 
_dataTx_assign_stmt_3205_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3208,1);\
bit_vector_clear(&konst_3208);\
konst_3208.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3209,1);\
bit_vector_clear(&konst_3208);\
konst_3208.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_3208), &(EQ_u1_u1_3209));\
if (has_undefined_bit(&EQ_u1_u1_3209)) {fprintf(stderr, "Error: variable EQ_u1_u1_3209 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3209));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3209)) { 
// 			presentState1Var := sdhcRegisters[37 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3213_c_macro_; 
// 			presentState0Var := sdhcRegisters[36 ] $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3217_c_macro_; 
// 			sdhcRegisters[37 ] := (presentState1Var & _hfe ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3223_c_macro_; 
} 
else {
 ;
}
// merge  file .Aa/sdhc.linked.aa, line 974
_dataTx_merge_stmt_3225_c_preamble_macro_; 
_dataTx_merge_stmt_3225_c_postamble_macro_; 
// 		wait := DAT0Rx $buffering 1// bits of buffering = 1. 
_dataTx_assign_stmt_3228_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u1_u1_3232,1);\
bit_vector_equal(0, &(wait), &(ZERO_1), &(EQ_u1_u1_3232));\
if (has_undefined_bit(&EQ_u1_u1_3232)) {fprintf(stderr, "Error: variable EQ_u1_u1_3232 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3232));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3232)) { 
/* 			$place[waitloop]
*/  goto waitloop_2342;
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3237,1);\
bit_vector_clear(&konst_3237);\
konst_3237.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_3238,1);\
bit_vector_clear(&konst_3237);\
konst_3237.val.byte_array[0] = 1;\
bit_vector_equal(0, &(lastBlock), &(konst_3237), &(EQ_u1_u1_3238));\
if (has_undefined_bit(&EQ_u1_u1_3238)) {fprintf(stderr, "Error: variable EQ_u1_u1_3238 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_3238));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_3238)) { 
// 			sdhcRegisters[36 ] := (presentState0Var & _hf9 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3244_c_macro_; 
// 			transferComplete := (ZERO_8 | _h02 ) $buffering 1// bits of buffering = 8. 
_dataTx_assign_stmt_3249_c_macro_; 
} 
else {
 ;
}
// $report (OUTDATA data 		 lastBlock lastBlock 		 blockCount blockCount 		 blockCountEnable blockCountEnable )
_dataTx_stmt_3254_c_macro_; 
_dataTx_branch_block_stmt_2342_c_export_apply_macro_;
}
_dataTx_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_dataTx_series_block_stmt_2336_c_mutex_);
}
void _generate_crc_7_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_series_block_stmt_292_c_mutex_);
MUTEX_LOCK(_generate_crc_7_series_block_stmt_292_c_mutex_);
_generate_crc_7_inner_inarg_prep_macro__; 
_generate_crc_7_branch_block_stmt_297_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 141
_generate_crc_7_merge_stmt_298_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<6>) 41  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<6>
_generate_crc_7_phi_stmt_299_c_macro_; 
// 			$phi crc_out := 			  ( $slice message_signal 39 33 )  $on   $entry 			  final_crc_out $on   loopback 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_305_c_macro_; 
// 			$phi temp := 			  ( $slice message_signal 32 0 )  $on   $entry 			  next_temp $on   loopback 
 // type of target is $uint<33>
_generate_crc_7_phi_stmt_310_c_macro_; 
_generate_crc_7_merge_stmt_298_c_postamble_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 149
__declare_static_bit_vector(konst_319,7);\
bit_vector_clear(&konst_319);\
konst_319.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_320,1);\
__declare_static_bit_vector(konst_321,1);\
bit_vector_clear(&konst_321);\
konst_321.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_322,1);\
bit_vector_clear(&konst_319);\
konst_319.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_319), &(BITSEL_u7_u1_320));\
bit_vector_clear(&konst_321);\
konst_321.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_320), &(konst_321), &(EQ_u1_u1_322));\
if (has_undefined_bit(&EQ_u1_u1_322)) {fprintf(stderr, "Error: variable EQ_u1_u1_322 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_322));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_322)) { 
// 			a := (crc_out [] 5 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_327_c_macro_; 
// 			b := (crc_out [] 4 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_332_c_macro_; 
// 			c := (crc_out [] 3 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_337_c_macro_; 
// 			d := ((crc_out [] 2 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_344_c_macro_; 
// 			e := (crc_out [] 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_349_c_macro_; 
// 			f := (crc_out [] 0 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_354_c_macro_; 
// 			g := ((temp [] 32 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_assign_stmt_361_c_macro_; 
// 			crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_376_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_297;
} 
else {
// 			crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 32 )) $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_386_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_297;
}
// merge  file .Aa/sdhc.linked.aa, line 163
_generate_crc_7_merge_stmt_389_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_phi_stmt_390_c_macro_; 
_generate_crc_7_merge_stmt_389_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_assign_stmt_399_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_assign_stmt_404_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_407,6);\
bit_vector_clear(&konst_407);\
__declare_static_bit_vector(UGT_u6_u1_408,1);\
bit_vector_clear(&konst_407);\
bit_vector_greater(0, &(next_I), &(konst_407), &(UGT_u6_u1_408));\
if (has_undefined_bit(&UGT_u6_u1_408)) {fprintf(stderr, "Error: variable UGT_u6_u1_408 has undefined value (%s) at test point.\n", to_string(&UGT_u6_u1_408));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u6_u1_408)) { 
/* 			$place[loopback]
*/  goto loopback_297;
} 
else {
 ;
}
_generate_crc_7_branch_block_stmt_297_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_assign_stmt_414_c_macro_; 
_generate_crc_7_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_series_block_stmt_292_c_mutex_);
}
void _generate_crc_7_120_(bit_vector* __pmessage_signal, bit_vector*  __pgenerated_crc)
{
MUTEX_DECL(_generate_crc_7_120_series_block_stmt_416_c_mutex_);
MUTEX_LOCK(_generate_crc_7_120_series_block_stmt_416_c_mutex_);
_generate_crc_7_120_inner_inarg_prep_macro__; 
_generate_crc_7_120_branch_block_stmt_419_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 183
_generate_crc_7_120_merge_stmt_420_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<8>) 121  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<8>
_generate_crc_7_120_phi_stmt_421_c_macro_; 
// 			$phi crc_out := 			  ( $slice message_signal 119 113 )  $on   $entry 			  final_crc_out $on   loopback 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_426_c_macro_; 
// 			$phi temp := 			  ( $slice message_signal 112 0 )  $on   $entry 			  next_temp $on   loopback 
 // type of target is $uint<113>
_generate_crc_7_120_phi_stmt_431_c_macro_; 
_generate_crc_7_120_merge_stmt_420_c_postamble_macro_; 
// 		crc_out_print := (crc_out >> 6 ) $buffering 1// bits of buffering = 7.  Orphaned statement with target crc_out_print ?? 
_generate_crc_7_120_assign_stmt_442_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 192
__declare_static_bit_vector(konst_445,7);\
bit_vector_clear(&konst_445);\
konst_445.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u7_u1_446,1);\
__declare_static_bit_vector(konst_447,1);\
bit_vector_clear(&konst_447);\
konst_447.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_448,1);\
bit_vector_clear(&konst_445);\
konst_445.val.byte_array[0] = 6;\
bit_vector_bitsel( &(crc_out), &(konst_445), &(BITSEL_u7_u1_446));\
bit_vector_clear(&konst_447);\
konst_447.val.byte_array[0] = 1;\
bit_vector_equal(0, &(BITSEL_u7_u1_446), &(konst_447), &(EQ_u1_u1_448));\
if (has_undefined_bit(&EQ_u1_u1_448)) {fprintf(stderr, "Error: variable EQ_u1_u1_448 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_448));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_448)) { 
// 			a := (crc_out [] 5 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_453_c_macro_; 
// 			b := (crc_out [] 4 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_458_c_macro_; 
// 			c := (crc_out [] 3 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_463_c_macro_; 
// 			d := ((crc_out [] 2 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_470_c_macro_; 
// 			e := (crc_out [] 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_475_c_macro_; 
// 			f := (crc_out [] 0 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_480_c_macro_; 
// 			g := ((temp [] 112 ) ^ 1 ) $buffering 1// bits of buffering = 1. 
_generate_crc_7_120_assign_stmt_487_c_macro_; 
// 			crc_out_true := (((a && b) && (c && d)) && ((e && f) && g)) $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_502_c_macro_; 
/* 			$place[MSB_true]
*/  goto MSB_true_419;
} 
else {
// 			crc_out_false := (( $slice crc_out 5 0 )  && (temp [] 112 )) $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_512_c_macro_; 
/* 			$place[MSB_false]
*/  goto MSB_false_419;
}
// merge  file .Aa/sdhc.linked.aa, line 206
_generate_crc_7_120_merge_stmt_515_c_preamble_macro_; 
// 			$phi final_crc_out := 			  crc_out_true $on   MSB_true 			  crc_out_false $on   MSB_false 
 // type of target is $uint<7>
_generate_crc_7_120_phi_stmt_516_c_macro_; 
_generate_crc_7_120_merge_stmt_515_c_postamble_macro_; 
// 		$volatile next_I := (I - 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_525_c_macro_; 
// 		$volatile next_temp := (temp << 1 ) $buffering 1
_generate_crc_7_120_assign_stmt_530_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_533,8);\
bit_vector_clear(&konst_533);\
__declare_static_bit_vector(UGT_u8_u1_534,1);\
bit_vector_clear(&konst_533);\
bit_vector_greater(0, &(next_I), &(konst_533), &(UGT_u8_u1_534));\
if (has_undefined_bit(&UGT_u8_u1_534)) {fprintf(stderr, "Error: variable UGT_u8_u1_534 has undefined value (%s) at test point.\n", to_string(&UGT_u8_u1_534));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u8_u1_534)) { 
/* 			$place[loopback]
*/  goto loopback_419;
} 
else {
 ;
}
_generate_crc_7_120_branch_block_stmt_419_c_export_apply_macro_;
}
// 	generated_crc := crc_out $buffering 1// bits of buffering = 7. 
_generate_crc_7_120_assign_stmt_540_c_macro_; 
_generate_crc_7_120_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_generate_crc_7_120_series_block_stmt_416_c_mutex_);
}
void _global_storage_initializer__()
{
MUTEX_DECL(_global_storage_initializer__series_block_stmt_3257_c_mutex_);
MUTEX_LOCK(_global_storage_initializer__series_block_stmt_3257_c_mutex_);
_global_storage_initializer__inner_inarg_prep_macro__; 
/* null */ ;
_global_storage_initializer__inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_global_storage_initializer__series_block_stmt_3257_c_mutex_);
}
void global_storage_initializer_()
{
_global_storage_initializer__outer_arg_decl_macro__;
_global_storage_initializer__();
_global_storage_initializer__outer_op_xfer_macro__;
}


void _resetRegisters_(bit_vector* __presetCondition)
{
MUTEX_DECL(_resetRegisters_series_block_stmt_3260_c_mutex_);
MUTEX_LOCK(_resetRegisters_series_block_stmt_3260_c_mutex_);
_resetRegisters_inner_inarg_prep_macro__; 
// 	sdhcRegisters[64 ] := _h8A  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3265_c_macro_; 
// 	sdhcRegisters[65 ] := _h64  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3269_c_macro_; 
// 	sdhcRegisters[66 ] := _h20  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3273_c_macro_; 
// 	sdhcRegisters[67 ] := _h05  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3277_c_macro_; 
// 	sdhcRegisters[68 ] := _h31  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3281_c_macro_; 
// 	sdhcRegisters[69 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3285_c_macro_; 
// 	sdhcRegisters[70 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3289_c_macro_; 
// 	sdhcRegisters[71 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3293_c_macro_; 
// 	sdhcRegisters[72 ] := _h64  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3297_c_macro_; 
// 	sdhcRegisters[73 ] := _h96  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3301_c_macro_; 
// 	sdhcRegisters[74 ] := _hC8  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3305_c_macro_; 
// 	sdhcRegisters[75 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3309_c_macro_; 
// 	sdhcRegisters[76 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3313_c_macro_; 
// 	sdhcRegisters[77 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3317_c_macro_; 
// 	sdhcRegisters[78 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3321_c_macro_; 
// 	sdhcRegisters[79 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3325_c_macro_; 
// 	sdhcRegisters[96 ] := _h7D  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3329_c_macro_; 
// 	sdhcRegisters[97 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3333_c_macro_; 
// 	sdhcRegisters[98 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3337_c_macro_; 
// 	sdhcRegisters[99 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3341_c_macro_; 
// 	sdhcRegisters[100 ] := _h01  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3345_c_macro_; 
// 	sdhcRegisters[101 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3349_c_macro_; 
// 	sdhcRegisters[102 ] := _h04  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3353_c_macro_; 
// 	sdhcRegisters[103 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3357_c_macro_; 
// 	sdhcRegisters[104 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3361_c_macro_; 
// 	sdhcRegisters[105 ] := _h40  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3365_c_macro_; 
// 	sdhcRegisters[106 ] := _h01  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3369_c_macro_; 
// 	sdhcRegisters[107 ] := _h80  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3373_c_macro_; 
// 	sdhcRegisters[108 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3377_c_macro_; 
// 	sdhcRegisters[109 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3381_c_macro_; 
// 	sdhcRegisters[110 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3385_c_macro_; 
// 	sdhcRegisters[111 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3389_c_macro_; 
// 	sdhcRegisters[254 ] := _h02  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3393_c_macro_; 
// 	sdhcRegisters[255 ] := _h00  $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3397_c_macro_; 
_resetRegisters_branch_block_stmt_3398_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1035
_resetRegisters_merge_stmt_3399_c_preamble_macro_; 
// 			$phi I := 			  ($bitcast ($uint<9>) 0  ) $on   $entry 			  next_I $on   loopback 
 // type of target is $uint<9>
_resetRegisters_phi_stmt_3400_c_macro_; 
_resetRegisters_merge_stmt_3399_c_postamble_macro_; 
// 		current_register_value := sdhcRegisters[I] $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3410_c_macro_; 
// 		current_softwarereset_register_value := sdhcRegisters[47 ] $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3414_c_macro_; 
// 		$volatile condition := ((I >= 64 ) & (I < 72 )) $buffering 1
_resetRegisters_assign_stmt_3423_c_macro_; 
// 		$volatile condition2 := ((I >= 72 ) & (I < 80 )) $buffering 1
_resetRegisters_assign_stmt_3432_c_macro_; 
// 		$volatile condition3 := ((I >= 96 ) & (I < 112 )) $buffering 1
_resetRegisters_assign_stmt_3441_c_macro_; 
// 		$volatile condition4 := ((I >= 254 ) & (I < 256 )) $buffering 1
_resetRegisters_assign_stmt_3450_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1045
__declare_static_bit_vector(OR_u1_u1_3454,1);\
__declare_static_bit_vector(OR_u1_u1_3457,1);\
__declare_static_bit_vector(OR_u1_u1_3458,1);\
bit_vector_or(&(condition), &(condition2), &(OR_u1_u1_3454));\
bit_vector_or(&(condition3), &(condition4), &(OR_u1_u1_3457));\
bit_vector_or(&(OR_u1_u1_3454), &(OR_u1_u1_3457), &(OR_u1_u1_3458));\
if (has_undefined_bit(&OR_u1_u1_3458)) {fprintf(stderr, "Error: variable OR_u1_u1_3458 has undefined value (%s) at test point.\n", to_string(&OR_u1_u1_3458));assert(0);} \

if (bit_vector_to_uint64(0, &OR_u1_u1_3458)) { 
/* null */ ;
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1048
__declare_static_bit_vector(EQ_u2_u1_3464,1);\
bit_vector_equal(0, &(resetCondition), &(ZERO_2), &(EQ_u2_u1_3464));\
if (has_undefined_bit(&EQ_u2_u1_3464)) {fprintf(stderr, "Error: variable EQ_u2_u1_3464 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3464));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3464)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3468_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 1051
__declare_static_bit_vector(EQ_u2_u1_3473,1);\
__declare_static_bit_vector(konst_3475,9);\
bit_vector_clear(&konst_3475);\
konst_3475.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u9_u1_3476,1);\
__declare_static_bit_vector(konst_3478,9);\
bit_vector_clear(&konst_3478);\
konst_3478.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u9_u1_3479,1);\
__declare_static_bit_vector(OR_u1_u1_3480,1);\
__declare_static_bit_vector(AND_u1_u1_3481,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3473));\
bit_vector_clear(&konst_3475);\
konst_3475.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3475), &(EQ_u9_u1_3476));\
bit_vector_clear(&konst_3478);\
konst_3478.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3478), &(EQ_u9_u1_3479));\
bit_vector_or(&(EQ_u9_u1_3476), &(EQ_u9_u1_3479), &(OR_u1_u1_3480));\
bit_vector_and(&(EQ_u2_u1_3473), &(OR_u1_u1_3480), &(AND_u1_u1_3481));\
if (has_undefined_bit(&AND_u1_u1_3481)) {fprintf(stderr, "Error: variable AND_u1_u1_3481 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3481));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3481)) { 
// 			sdhcRegisters[I] := (current_register_value & _hfe ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3487_c_macro_; 
} 
else {
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3491,2);\
bit_vector_clear(&konst_3491);\
konst_3491.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3492,2);\
bit_vector_clear(&type_cast_3492);\
type_cast_3492.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3493,1);\
bit_vector_clear(&konst_3491);\
konst_3491.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3492), &(konst_3491));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3492), &(EQ_u2_u1_3493));\
if (has_undefined_bit(&EQ_u2_u1_3493)) {fprintf(stderr, "Error: variable EQ_u2_u1_3493 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3493));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3493)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3496,9);\
bit_vector_clear(&konst_3496);\
konst_3496.val.byte_array[0] = 32;\
__declare_static_bit_vector(UGE_u9_u1_3497,1);\
__declare_static_bit_vector(konst_3499,9);\
bit_vector_clear(&konst_3499);\
konst_3499.val.byte_array[0] = 36;\
__declare_static_bit_vector(ULT_u9_u1_3500,1);\
__declare_static_bit_vector(AND_u1_u1_3501,1);\
bit_vector_clear(&konst_3496);\
konst_3496.val.byte_array[0] = 32;\
bit_vector_greater_equal(0, &(I), &(konst_3496), &(UGE_u9_u1_3497));\
bit_vector_clear(&konst_3499);\
konst_3499.val.byte_array[0] = 36;\
bit_vector_less(0, &(I), &(konst_3499), &(ULT_u9_u1_3500));\
bit_vector_and(&(UGE_u9_u1_3497), &(ULT_u9_u1_3500), &(AND_u1_u1_3501));\
if (has_undefined_bit(&AND_u1_u1_3501)) {fprintf(stderr, "Error: variable AND_u1_u1_3501 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_3501));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_3501)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3505_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3509,9);\
bit_vector_clear(&konst_3509);\
konst_3509.val.byte_array[0] = 36;\
__declare_static_bit_vector(EQ_u9_u1_3510,1);\
bit_vector_clear(&konst_3509);\
konst_3509.val.byte_array[0] = 36;\
bit_vector_equal(0, &(I), &(konst_3509), &(EQ_u9_u1_3510));\
if (has_undefined_bit(&EQ_u9_u1_3510)) {fprintf(stderr, "Error: variable EQ_u9_u1_3510 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3510));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3510)) { 
// 			sdhcRegisters[I] := (current_register_value & _h09 ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3516_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3520,9);\
bit_vector_clear(&konst_3520);\
konst_3520.val.byte_array[0] = 37;\
__declare_static_bit_vector(EQ_u9_u1_3521,1);\
bit_vector_clear(&konst_3520);\
konst_3520.val.byte_array[0] = 37;\
bit_vector_equal(0, &(I), &(konst_3520), &(EQ_u9_u1_3521));\
if (has_undefined_bit(&EQ_u9_u1_3521)) {fprintf(stderr, "Error: variable EQ_u9_u1_3521 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3521));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3521)) { 
// 			sdhcRegisters[I] := ZERO_8 $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3525_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3529,9);\
bit_vector_clear(&konst_3529);\
konst_3529.val.byte_array[0] = 42;\
__declare_static_bit_vector(EQ_u9_u1_3530,1);\
bit_vector_clear(&konst_3529);\
konst_3529.val.byte_array[0] = 42;\
bit_vector_equal(0, &(I), &(konst_3529), &(EQ_u9_u1_3530));\
if (has_undefined_bit(&EQ_u9_u1_3530)) {fprintf(stderr, "Error: variable EQ_u9_u1_3530 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3530));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3530)) { 
// 			sdhcRegisters[I] := (current_register_value & _h0C ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3536_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3540,9);\
bit_vector_clear(&konst_3540);\
konst_3540.val.byte_array[0] = 48;\
__declare_static_bit_vector(EQ_u9_u1_3541,1);\
bit_vector_clear(&konst_3540);\
konst_3540.val.byte_array[0] = 48;\
bit_vector_equal(0, &(I), &(konst_3540), &(EQ_u9_u1_3541));\
if (has_undefined_bit(&EQ_u9_u1_3541)) {fprintf(stderr, "Error: variable EQ_u9_u1_3541 has undefined value (%s) at test point.\n", to_string(&EQ_u9_u1_3541));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u9_u1_3541)) { 
// 			sdhcRegisters[I] := (current_register_value & _hC1 ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3547_c_macro_; 
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
_resetRegisters_assign_stmt_3557_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3560,9);\
bit_vector_clear(&konst_3560);\
konst_3560.val.byte_array[1] = 1;\
__declare_static_bit_vector(ULT_u9_u1_3561,1);\
bit_vector_clear(&konst_3560);\
konst_3560.val.byte_array[1] = 1;\
bit_vector_less(0, &(next_I), &(konst_3560), &(ULT_u9_u1_3561));\
if (has_undefined_bit(&ULT_u9_u1_3561)) {fprintf(stderr, "Error: variable ULT_u9_u1_3561 has undefined value (%s) at test point.\n", to_string(&ULT_u9_u1_3561));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u9_u1_3561)) { 
/* 			$place[loopback]
*/  goto loopback_3398;
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(EQ_u2_u1_3567,1);\
bit_vector_equal(0, &(resetCondition), &(ONE_2), &(EQ_u2_u1_3567));\
if (has_undefined_bit(&EQ_u2_u1_3567)) {fprintf(stderr, "Error: variable EQ_u2_u1_3567 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3567));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3567)) { 
// 			sdhcRegisters[47 ] := (current_softwarereset_register_value & _hfd ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3573_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_3577,2);\
bit_vector_clear(&konst_3577);\
konst_3577.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_3578,2);\
bit_vector_clear(&type_cast_3578);\
type_cast_3578.val.byte_array[0] = 2;\
__declare_static_bit_vector(EQ_u2_u1_3579,1);\
bit_vector_clear(&konst_3577);\
konst_3577.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_3578), &(konst_3577));\
bit_vector_equal(0, &(resetCondition), &(type_cast_3578), &(EQ_u2_u1_3579));\
if (has_undefined_bit(&EQ_u2_u1_3579)) {fprintf(stderr, "Error: variable EQ_u2_u1_3579 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_3579));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u2_u1_3579)) { 
// 			sdhcRegisters[47 ] := (current_softwarereset_register_value & _hfb ) $buffering 1// bits of buffering = 8. 
_resetRegisters_assign_stmt_3585_c_macro_; 
} 
else {
 ;
}
_resetRegisters_branch_block_stmt_3398_c_export_apply_macro_;
}
_resetRegisters_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_resetRegisters_series_block_stmt_3260_c_mutex_);
}
void _sdhc_daemon_()
{
MUTEX_DECL(_sdhc_daemon_series_block_stmt_3911_c_mutex_);
MUTEX_LOCK(_sdhc_daemon_series_block_stmt_3911_c_mutex_);
_sdhc_daemon_inner_inarg_prep_macro__; 
// 	SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3914_c_macro_; 
// 	normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3917_c_macro_; 
// 	normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3920_c_macro_; 
// 	errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3923_c_macro_; 
// 	errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3926_c_macro_; 
// 	txBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3930_c_macro_; 
// 	rxBufferPointer := ($bitcast ($uint<10>) 0  ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_3934_c_macro_; 
// 	dataRxEnrty := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3937_c_macro_; 
// 	dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3940_c_macro_; 
// 	dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_3943_c_macro_; 
// 	dataErrorInterruptStatus := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_3946_c_macro_; 
// 	$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_3948_c_macro_; 
_sdhc_daemon_branch_block_stmt_3949_c_export_decl_macro_; 
{
// merge  file .Aa/sdhc.linked.aa, line 1264
_sdhc_daemon_merge_stmt_3950_c_preamble_macro_; 
_sdhc_daemon_merge_stmt_3950_c_postamble_macro_; 
// 		request := peripheral_bridge_to_sdhc_request $buffering 1// bits of buffering = 64. 
_sdhc_daemon_assign_stmt_3953_c_macro_; 
// 		$volatile rwbar := ( $slice request 63 63 )  $buffering 1
_sdhc_daemon_assign_stmt_3957_c_macro_; 
// 		$volatile bytemask := ( $slice request 62 59 )  $buffering 1
_sdhc_daemon_assign_stmt_3961_c_macro_; 
// 		$volatile unused := ( $slice request 58 56 )  $buffering 1
_sdhc_daemon_assign_stmt_3965_c_macro_; 
// 		$volatile addressunused := ( $slice request 55 40 )  $buffering 1
_sdhc_daemon_assign_stmt_3969_c_macro_; 
// 		$volatile address := ( $slice request 39 32 )  $buffering 1
_sdhc_daemon_assign_stmt_3973_c_macro_; 
// 		$volatile data3 := ( $slice request 31 24 )  $buffering 1
_sdhc_daemon_assign_stmt_3977_c_macro_; 
// 		$volatile data2 := ( $slice request 23 16 )  $buffering 1
_sdhc_daemon_assign_stmt_3981_c_macro_; 
// 		$volatile data1 := ( $slice request 15 8 )  $buffering 1
_sdhc_daemon_assign_stmt_3985_c_macro_; 
// 		$volatile data0 := ( $slice request 7 0 )  $buffering 1
_sdhc_daemon_assign_stmt_3989_c_macro_; 
// 		$volatile b3 := ( $slice bytemask 3 3 )  $buffering 1
_sdhc_daemon_assign_stmt_3993_c_macro_; 
// 		$volatile b2 := ( $slice bytemask 2 2 )  $buffering 1
_sdhc_daemon_assign_stmt_3997_c_macro_; 
// 		$volatile b1 := ( $slice bytemask 1 1 )  $buffering 1
_sdhc_daemon_assign_stmt_4001_c_macro_; 
// 		$volatile b0 := ( $slice bytemask 0 0 )  $buffering 1
_sdhc_daemon_assign_stmt_4005_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1280
__declare_static_bit_vector(konst_4008,1);\
bit_vector_clear(&konst_4008);\
__declare_static_bit_vector(EQ_u1_u1_4009,1);\
bit_vector_clear(&konst_4008);\
bit_vector_equal(0, &(rwbar), &(konst_4008), &(EQ_u1_u1_4009));\
if (has_undefined_bit(&EQ_u1_u1_4009)) {fprintf(stderr, "Error: variable EQ_u1_u1_4009 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4009));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4009)) { 
// 			$guard (b3) $call sdhc_register_write (address data3 ) () 
_sdhc_daemon_call_stmt_4013_c_macro_; 
// 			$guard (b2) $call sdhc_register_write ((address + 1 ) data2 ) () 
_sdhc_daemon_call_stmt_4019_c_macro_; 
// 			$guard (b1) $call sdhc_register_write ((address + 2 ) data1 ) () 
_sdhc_daemon_call_stmt_4025_c_macro_; 
// 			$guard (b0) $call sdhc_register_write ((address + 3 ) data0 ) () 
_sdhc_daemon_call_stmt_4031_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ZERO_32 $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_4034_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4037,8);\
bit_vector_clear(&konst_4037);\
konst_4037.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4038,8);\
__declare_static_bit_vector(konst_4039,8);\
bit_vector_clear(&konst_4039);\
konst_4039.val.byte_array[0] = 47;\
__declare_static_bit_vector(EQ_u8_u1_4040,1);\
bit_vector_clear(&konst_4037);\
konst_4037.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4037), &(ADD_u8_u8_4038));\
bit_vector_clear(&konst_4039);\
konst_4039.val.byte_array[0] = 47;\
bit_vector_equal(0, &(ADD_u8_u8_4038), &(konst_4039), &(EQ_u8_u1_4040));\
if (has_undefined_bit(&EQ_u8_u1_4040)) {fprintf(stderr, "Error: variable EQ_u8_u1_4040 has undefined value (%s) at test point.\n", to_string(&EQ_u8_u1_4040));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u8_u1_4040)) { 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4042,32);\
bit_vector_clear(&konst_4042);\
konst_4042.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4044,8);\
bit_vector_clear(&konst_4044);\
__declare_static_bit_vector(BITSEL_u8_u1_4045,1);\
bit_vector_clear(&konst_4042);\
konst_4042.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4044);\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4042)])), &(konst_4044), &(BITSEL_u8_u1_4045));\
if (has_undefined_bit(&BITSEL_u8_u1_4045)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4045 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4045));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4045)) { 
// 			$call resetRegisters (ZERO_2 ) () 
_sdhc_daemon_call_stmt_4047_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4050,32);\
bit_vector_clear(&konst_4050);\
konst_4050.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4052,8);\
bit_vector_clear(&konst_4052);\
konst_4052.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_4053,1);\
bit_vector_clear(&konst_4050);\
konst_4050.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4052);\
konst_4052.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4050)])), &(konst_4052), &(BITSEL_u8_u1_4053));\
if (has_undefined_bit(&BITSEL_u8_u1_4053)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4053 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4053));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4053)) { 
// 			$call resetRegisters (ONE_2 ) () 
_sdhc_daemon_call_stmt_4055_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4058,32);\
bit_vector_clear(&konst_4058);\
konst_4058.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_4060,8);\
bit_vector_clear(&konst_4060);\
konst_4060.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_4061,1);\
bit_vector_clear(&konst_4058);\
konst_4058.val.byte_array[0] = 47;\
bit_vector_clear(&konst_4060);\
konst_4060.val.byte_array[0] = 2;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4058)])), &(konst_4060), &(BITSEL_u8_u1_4061));\
if (has_undefined_bit(&BITSEL_u8_u1_4061)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_4061 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_4061));assert(0);} \

if (bit_vector_to_uint64(0, &BITSEL_u8_u1_4061)) { 
// 			$call resetRegisters (($bitcast ($uint<2>) 2  ) ) () 
_sdhc_daemon_call_stmt_4064_c_macro_; 
} 
else {
 ;
}
} 
else {
 ;
}
// 			$volatile commandInhibit_CMD := ((sdhcRegisters[36 ] & _h01 ) == 0 ) $buffering 1
_sdhc_daemon_assign_stmt_4074_c_macro_; 
// 			$volatile addresscheck := (((address + 3 ) == _h0f ) & b0) $buffering 1
_sdhc_daemon_assign_stmt_4083_c_macro_; 
// 			$volatile presentState := ((sdhcRegisters[36 ] >> 1 ) << 1 ) $buffering 1
_sdhc_daemon_assign_stmt_4091_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(AND_u1_u1_4095,1);\
bit_vector_and(&(addresscheck), &(commandInhibit_CMD), &(AND_u1_u1_4095));\
if (has_undefined_bit(&AND_u1_u1_4095)) {fprintf(stderr, "Error: variable AND_u1_u1_4095 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4095));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4095)) { 
// 			sdhcRegisters[36 ] := (presentState | _h01 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4101_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4104_c_macro_; 
// 			dataRxEnrty2 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4107_c_macro_; 
// 			$call command_generator () (normalInterruptStatusVar1 normalInterruptStatusVar2 errorInterruptStatusVar1 errorInterruptStatusVar2 dataErrorInterruptStatusVar1 dataTransferComplete ) 
_sdhc_daemon_call_stmt_4114_c_macro_; 
// 			normalInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4117_c_macro_; 
// 			normalInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4120_c_macro_; 
// 			errorInterruptFlag1 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4123_c_macro_; 
// 			errorInterruptFlag2 := _hFF  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4126_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4130,10);\
bit_vector_clear(&konst_4130);\
__declare_static_bit_vector(UGT_u10_u1_4131,1);\
bit_vector_clear(&konst_4130);\
bit_vector_greater(0, &(rxBufferPointer), &(konst_4130), &(UGT_u10_u1_4131));\
if (has_undefined_bit(&UGT_u10_u1_4131)) {fprintf(stderr, "Error: variable UGT_u10_u1_4131 has undefined value (%s) at test point.\n", to_string(&UGT_u10_u1_4131));assert(0);} \

if (bit_vector_to_uint64(0, &UGT_u10_u1_4131)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] | _h08 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4138_c_macro_; 
// 			bufferReadReady := (ZERO_8 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4143_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h20 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4148_c_macro_; 
} 
else {
 ;
}
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4152,10);\
bit_vector_clear(&konst_4152);\
konst_4152.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_4153,1);\
bit_vector_clear(&konst_4152);\
konst_4152.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_4152), &(ULT_u10_u1_4153));\
if (has_undefined_bit(&ULT_u10_u1_4153)) {fprintf(stderr, "Error: variable ULT_u10_u1_4153 has undefined value (%s) at test point.\n", to_string(&ULT_u10_u1_4153));assert(0);} \

if (bit_vector_to_uint64(0, &ULT_u10_u1_4153)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] | _h04 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4160_c_macro_; 
// 			bufferWriteReady := (ZERO_8 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4165_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h10 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4170_c_macro_; 
} 
else {
 ;
}
// 			$volatile bufferDataPortCheck := (address == 32 ) $buffering 1
_sdhc_daemon_assign_stmt_4176_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4179,1);\
bit_vector_clear(&konst_4179);\
konst_4179.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4180,1);\
__declare_static_bit_vector(konst_4182,10);\
bit_vector_clear(&konst_4182);\
konst_4182.val.byte_array[1] = 2;\
__declare_static_bit_vector(ULT_u10_u1_4183,1);\
__declare_static_bit_vector(AND_u1_u1_4184,1);\
bit_vector_clear(&konst_4179);\
konst_4179.val.byte_array[0] = 1;\
bit_vector_equal(0, &(bufferDataPortCheck), &(konst_4179), &(EQ_u1_u1_4180));\
bit_vector_clear(&konst_4182);\
konst_4182.val.byte_array[1] = 2;\
bit_vector_less(0, &(txBufferPointer), &(konst_4182), &(ULT_u10_u1_4183));\
bit_vector_and(&(EQ_u1_u1_4180), &(ULT_u10_u1_4183), &(AND_u1_u1_4184));\
if (has_undefined_bit(&AND_u1_u1_4184)) {fprintf(stderr, "Error: variable AND_u1_u1_4184 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4184));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4184)) { 
// 			dataBufferTx := sdhcRegisters[32 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4188_c_macro_; 
// 			dataBufferTx := sdhcRegisters[33 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4192_c_macro_; 
// 			dataBufferTx := sdhcRegisters[34 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4196_c_macro_; 
// 			dataBufferTx := sdhcRegisters[35 ] $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4200_c_macro_; 
// 			txBufferPointer := (txBufferPointer + 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_4205_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4208,10);\
bit_vector_clear(&konst_4208);\
konst_4208.val.byte_array[1] = 2;\
__declare_static_bit_vector(EQ_u10_u1_4209,1);\
bit_vector_clear(&konst_4208);\
konst_4208.val.byte_array[1] = 2;\
bit_vector_equal(0, &(txBufferPointer), &(konst_4208), &(EQ_u10_u1_4209));\
if (has_undefined_bit(&EQ_u10_u1_4209)) {fprintf(stderr, "Error: variable EQ_u10_u1_4209 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_4209));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_4209)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] & _hfb ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4216_c_macro_; 
// 			singleMultipleBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4223_c_macro_; 
// 			blockCountEnable := ((  $bitreduce |  (sdhcRegisters[12 ] & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4232_c_macro_; 
// 			blockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4239_c_macro_; 
// 			blockCountTrue := (blockCount == 1 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4244_c_macro_; 
// 			lastBlock := (( ~ singleMultipleBlock ) | (blockCountEnable & blockCountTrue)) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4252_c_macro_; 
// 			$call dataTx (lastBlock blockCountEnable blockCount ) (blockCountNext transferComplete ) 
_sdhc_daemon_call_stmt_4258_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice blockCountNext 15 8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4263_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice blockCountNext 7 0 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4268_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4273_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4278_c_macro_; 
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
_sdhc_daemon_assign_stmt_4286_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4289,1);\
bit_vector_clear(&konst_4289);\
konst_4289.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4290,1);\
__declare_static_bit_vector(konst_4292,10);\
bit_vector_clear(&konst_4292);\
__declare_static_bit_vector(NEQ_u10_u1_4293,1);\
__declare_static_bit_vector(AND_u1_u1_4294,1);\
bit_vector_clear(&konst_4289);\
konst_4289.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBufferDataPortCheck), &(konst_4289), &(EQ_u1_u1_4290));\
bit_vector_clear(&konst_4292);\
bit_vector_not_equal(0, &(rxBufferPointer), &(konst_4292), &NEQ_u10_u1_4293);\
bit_vector_and(&(EQ_u1_u1_4290), &(NEQ_u10_u1_4293), &(AND_u1_u1_4294));\
if (has_undefined_bit(&AND_u1_u1_4294)) {fprintf(stderr, "Error: variable AND_u1_u1_4294 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4294));assert(0);} \

if (bit_vector_to_uint64(0, &AND_u1_u1_4294)) { 
// 			sdhcRegisters[32 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4298_c_macro_; 
// 			sdhcRegisters[33 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4302_c_macro_; 
// 			sdhcRegisters[34 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4306_c_macro_; 
// 			sdhcRegisters[35 ] := dataBufferRx $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4310_c_macro_; 
// 			rxBufferPointer := (rxBufferPointer - 4 ) $buffering 1// bits of buffering = 10. 
_sdhc_daemon_assign_stmt_4315_c_macro_; 
// 			singleMultipleReadBlock := (  $bitreduce |  (sdhcRegisters[12 ] & _h20 ) ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4322_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4325,10);\
bit_vector_clear(&konst_4325);\
__declare_static_bit_vector(EQ_u10_u1_4326,1);\
bit_vector_clear(&konst_4325);\
bit_vector_equal(0, &(rxBufferPointer), &(konst_4325), &(EQ_u10_u1_4326));\
if (has_undefined_bit(&EQ_u10_u1_4326)) {fprintf(stderr, "Error: variable EQ_u10_u1_4326 has undefined value (%s) at test point.\n", to_string(&EQ_u10_u1_4326));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u10_u1_4326)) { 
// 			sdhcRegisters[37 ] := (sdhcRegisters[37 ] & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4333_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4336,1);\
bit_vector_clear(&konst_4336);\
konst_4336.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4337,1);\
bit_vector_clear(&konst_4336);\
konst_4336.val.byte_array[0] = 1;\
bit_vector_equal(0, &(singleMultipleReadBlock), &(konst_4336), &(EQ_u1_u1_4337));\
if (has_undefined_bit(&EQ_u1_u1_4337)) {fprintf(stderr, "Error: variable EQ_u1_u1_4337 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4337));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4337)) { 
// 			readBlockCountEnable := ((  $bitreduce |  (sdhcRegisters[12 ] & _h02 ) ) & singleMultipleBlock) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4346_c_macro_; 
// 			readBlockCount := (sdhcRegisters[7 ] && sdhcRegisters[6 ]) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4353_c_macro_; 
// 			readBlockCountTrue := (readBlockCount == 1 ) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4358_c_macro_; 
// 			readLastBlock := (readBlockCountEnable & readBlockCountTrue) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4363_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 0
__declare_static_bit_vector(konst_4366,16);\
bit_vector_clear(&konst_4366);\
__declare_static_bit_vector(NEQ_u16_u1_4367,1);\
bit_vector_clear(&konst_4366);\
bit_vector_not_equal(0, &(readBlockCount), &(konst_4366), &NEQ_u16_u1_4367);\
if (has_undefined_bit(&NEQ_u16_u1_4367)) {fprintf(stderr, "Error: variable NEQ_u16_u1_4367 has undefined value (%s) at test point.\n", to_string(&NEQ_u16_u1_4367));assert(0);} \

if (bit_vector_to_uint64(0, &NEQ_u16_u1_4367)) { 
// 			newReadBlockCount := (readBlockCount - 1 ) $buffering 1// bits of buffering = 16. 
_sdhc_daemon_assign_stmt_4372_c_macro_; 
// 			$call dataRx (readLastBlock ) (dataErrorInterruptStatusVar ) 
_sdhc_daemon_call_stmt_4375_c_macro_; 
// 			dataRxEnrty1 := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4378_c_macro_; 
// 			dataRxEnrty2 := ONE_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4381_c_macro_; 
// 			sdhcRegisters[7 ] := ( $slice newReadBlockCount 15 8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4386_c_macro_; 
// 			sdhcRegisters[6 ] := ( $slice newReadBlockCount 7 0 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4391_c_macro_; 
// 			readDataTransferComplete := ( $mux readLastBlock ($bitcast ($uint<8>) 2  )  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4398_c_macro_; 
// 			normalInterruptFlag1 := (normalInterruptFlag1 | _h02 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4403_c_macro_; 
// 			errorInterruptFlag1 := (errorInterruptFlag1 | _h60 ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4408_c_macro_; 
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
_sdhc_daemon_assign_stmt_4421_c_macro_; 
// 			readdata2 := ( $mux b2 sdhcRegisters[(address + 1 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4430_c_macro_; 
// 			readdata1 := ( $mux b1 sdhcRegisters[(address + 2 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4439_c_macro_; 
// 			readdata0 := ( $mux b0 sdhcRegisters[(address + 3 )]  ZERO_8 )  $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4448_c_macro_; 
// 			sdhc_to_peripheral_bridge_response := ((readdata3 && readdata2) && (readdata1 && readdata0)) $buffering 1// bits of buffering = 32. 
_sdhc_daemon_assign_stmt_4457_c_macro_; 
}
// 		dataErrorInterruptStatus := ((( $mux dataRxEnrty1 dataErrorInterruptStatusVar1  _b0  )  | ( $mux dataRxEnrty2 dataErrorInterruptStatusVar  _b0  ) ) | ( $mux (( ~ dataRxEnrty1 ) & ( ~ dataRxEnrty2 )) ZERO_8  _b0  ) ) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4478_c_macro_; 
// 		sdhcRegisters[50 ] := (((sdhcRegisters[50 ] | (dataErrorInterruptStatus | errorInterruptStatusVar1)) & errorInterruptFlag1) & sdhcRegisters[54 ]) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4492_c_macro_; 
// 		sdhcRegisters[51 ] := (((sdhcRegisters[51 ] | errorInterruptStatusVar2) & errorInterruptFlag2) & sdhcRegisters[55 ]) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4504_c_macro_; 
// 		errorInterruptBit := (((  $bitreduce |  sdhcRegisters[50 ] ) | (  $bitreduce |  sdhcRegisters[51 ] )) && ($bitcast ($uint<7>) 0  )) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4516_c_macro_; 
// 		$volatile checkInterruptEnable := ((  $bitreduce |  sdhcRegisters[52 ] ) | (  $bitreduce |  sdhcRegisters[53 ] )) $buffering 1
_sdhc_daemon_assign_stmt_4525_c_macro_; 
// if statement :  file .Aa/sdhc.linked.aa, line 1382
__declare_static_bit_vector(konst_4528,1);\
bit_vector_clear(&konst_4528);\
konst_4528.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u1_u1_4529,1);\
bit_vector_clear(&konst_4528);\
konst_4528.val.byte_array[0] = 1;\
bit_vector_equal(0, &(checkInterruptEnable), &(konst_4528), &(EQ_u1_u1_4529));\
if (has_undefined_bit(&EQ_u1_u1_4529)) {fprintf(stderr, "Error: variable EQ_u1_u1_4529 has undefined value (%s) at test point.\n", to_string(&EQ_u1_u1_4529));assert(0);} \

if (bit_vector_to_uint64(0, &EQ_u1_u1_4529)) { 
// 			interrupt := (((((readDataTransferComplete | dataTransferComplete) | transferComplete) | ((bufferReadReady | bufferWriteReady) | normalInterruptStatusVar1)) & sdhcRegisters[52 ]) & normalInterruptFlag1) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4547_c_macro_; 
// 			sdhcRegisters[48 ] := interrupt $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4551_c_macro_; 
// 			sdhcRegisters[49 ] := errorInterruptBit $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4555_c_macro_; 
// 			interruptLine := (sdhcRegisters[56 ] & interrupt) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4561_c_macro_; 
// 			errorInterruptLine := ((sdhcRegisters[50 ] & sdhcRegisters[58 ]) | (sdhcRegisters[51 ] & sdhcRegisters[59 ])) $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4574_c_macro_; 
// 			SDHC_to_IRC_INT := ((  $bitreduce |  interruptLine ) | (  $bitreduce |  errorInterruptLine )) $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4581_c_macro_; 
} 
else {
// 			sdhcRegisters[48 ] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_daemon_assign_stmt_4586_c_macro_; 
// 			SDHC_to_IRC_INT := ZERO_1 $buffering 1// bits of buffering = 1. 
_sdhc_daemon_assign_stmt_4589_c_macro_; 
}
// $report (int check 		 dataErrorInterruptStatus dataErrorInterruptStatus 		 errorInterruptStatusVar1 errorInterruptStatusVar1 		 errorInterruptFlag1 errorInterruptFlag1 )
_sdhc_daemon_stmt_4594_c_macro_; 
/* 		$place[loopback]
*/  goto loopback_3949;
_sdhc_daemon_branch_block_stmt_3949_c_export_apply_macro_;
}
_sdhc_daemon_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_daemon_series_block_stmt_3911_c_mutex_);
}
void sdhc_daemon()
{
_sdhc_daemon_outer_arg_decl_macro__;
_sdhc_daemon_();
_sdhc_daemon_outer_op_xfer_macro__;
}


void _sdhc_register_write_(bit_vector* __paddress, bit_vector* __pdata)
{
MUTEX_DECL(_sdhc_register_write_series_block_stmt_3589_c_mutex_);
MUTEX_LOCK(_sdhc_register_write_series_block_stmt_3589_c_mutex_);
_sdhc_register_write_inner_inarg_prep_macro__; 
_sdhc_register_write_branch_block_stmt_3592_c_export_decl_macro_; 
{
// switch statement :  file .Aa/sdhc.linked.aa, line 1093
if (has_undefined_bit(&address)) {fprintf(stderr, "Error: variable address has undefined value (%s) at test point.\n", to_string(&address));assert(0);} \

__declare_static_bit_vector(konst_3595,8);\
bit_vector_clear(&konst_3595);\
konst_3595.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3595);\
konst_3595.val.byte_array[0] = 5;\
__declare_static_bit_vector(konst_3603,8);\
bit_vector_clear(&konst_3603);\
konst_3603.val.byte_array[0] = 12;\
bit_vector_clear(&konst_3603);\
konst_3603.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_3611,8);\
bit_vector_clear(&konst_3611);\
konst_3611.val.byte_array[0] = 13;\
bit_vector_clear(&konst_3611);\
konst_3611.val.byte_array[0] = 13;\
__declare_static_bit_vector(konst_3617,8);\
bit_vector_clear(&konst_3617);\
konst_3617.val.byte_array[0] = 14;\
bit_vector_clear(&konst_3617);\
konst_3617.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_3625,8);\
bit_vector_clear(&konst_3625);\
konst_3625.val.byte_array[0] = 15;\
bit_vector_clear(&konst_3625);\
konst_3625.val.byte_array[0] = 15;\
__declare_static_bit_vector(konst_3633,8);\
bit_vector_clear(&konst_3633);\
konst_3633.val.byte_array[0] = 16;\
bit_vector_clear(&konst_3633);\
konst_3633.val.byte_array[0] = 16;\
__declare_static_bit_vector(konst_3636,8);\
bit_vector_clear(&konst_3636);\
konst_3636.val.byte_array[0] = 17;\
bit_vector_clear(&konst_3636);\
konst_3636.val.byte_array[0] = 17;\
__declare_static_bit_vector(konst_3639,8);\
bit_vector_clear(&konst_3639);\
konst_3639.val.byte_array[0] = 18;\
bit_vector_clear(&konst_3639);\
konst_3639.val.byte_array[0] = 18;\
__declare_static_bit_vector(konst_3642,8);\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 19;\
bit_vector_clear(&konst_3642);\
konst_3642.val.byte_array[0] = 19;\
__declare_static_bit_vector(konst_3645,8);\
bit_vector_clear(&konst_3645);\
konst_3645.val.byte_array[0] = 20;\
bit_vector_clear(&konst_3645);\
konst_3645.val.byte_array[0] = 20;\
__declare_static_bit_vector(konst_3648,8);\
bit_vector_clear(&konst_3648);\
konst_3648.val.byte_array[0] = 21;\
bit_vector_clear(&konst_3648);\
konst_3648.val.byte_array[0] = 21;\
__declare_static_bit_vector(konst_3651,8);\
bit_vector_clear(&konst_3651);\
konst_3651.val.byte_array[0] = 22;\
bit_vector_clear(&konst_3651);\
konst_3651.val.byte_array[0] = 22;\
__declare_static_bit_vector(konst_3654,8);\
bit_vector_clear(&konst_3654);\
konst_3654.val.byte_array[0] = 23;\
bit_vector_clear(&konst_3654);\
konst_3654.val.byte_array[0] = 23;\
__declare_static_bit_vector(konst_3657,8);\
bit_vector_clear(&konst_3657);\
konst_3657.val.byte_array[0] = 24;\
bit_vector_clear(&konst_3657);\
konst_3657.val.byte_array[0] = 24;\
__declare_static_bit_vector(konst_3660,8);\
bit_vector_clear(&konst_3660);\
konst_3660.val.byte_array[0] = 25;\
bit_vector_clear(&konst_3660);\
konst_3660.val.byte_array[0] = 25;\
__declare_static_bit_vector(konst_3663,8);\
bit_vector_clear(&konst_3663);\
konst_3663.val.byte_array[0] = 26;\
bit_vector_clear(&konst_3663);\
konst_3663.val.byte_array[0] = 26;\
__declare_static_bit_vector(konst_3666,8);\
bit_vector_clear(&konst_3666);\
konst_3666.val.byte_array[0] = 27;\
bit_vector_clear(&konst_3666);\
konst_3666.val.byte_array[0] = 27;\
__declare_static_bit_vector(konst_3669,8);\
bit_vector_clear(&konst_3669);\
konst_3669.val.byte_array[0] = 28;\
bit_vector_clear(&konst_3669);\
konst_3669.val.byte_array[0] = 28;\
__declare_static_bit_vector(konst_3672,8);\
bit_vector_clear(&konst_3672);\
konst_3672.val.byte_array[0] = 29;\
bit_vector_clear(&konst_3672);\
konst_3672.val.byte_array[0] = 29;\
__declare_static_bit_vector(konst_3675,8);\
bit_vector_clear(&konst_3675);\
konst_3675.val.byte_array[0] = 30;\
bit_vector_clear(&konst_3675);\
konst_3675.val.byte_array[0] = 30;\
__declare_static_bit_vector(konst_3678,8);\
bit_vector_clear(&konst_3678);\
konst_3678.val.byte_array[0] = 31;\
bit_vector_clear(&konst_3678);\
konst_3678.val.byte_array[0] = 31;\
__declare_static_bit_vector(konst_3681,8);\
bit_vector_clear(&konst_3681);\
konst_3681.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3681);\
konst_3681.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_3684,8);\
bit_vector_clear(&konst_3684);\
konst_3684.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3684);\
konst_3684.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_3687,8);\
bit_vector_clear(&konst_3687);\
konst_3687.val.byte_array[0] = 38;\
bit_vector_clear(&konst_3687);\
konst_3687.val.byte_array[0] = 38;\
__declare_static_bit_vector(konst_3690,8);\
bit_vector_clear(&konst_3690);\
konst_3690.val.byte_array[0] = 39;\
bit_vector_clear(&konst_3690);\
konst_3690.val.byte_array[0] = 39;\
__declare_static_bit_vector(konst_3693,8);\
bit_vector_clear(&konst_3693);\
konst_3693.val.byte_array[0] = 41;\
bit_vector_clear(&konst_3693);\
konst_3693.val.byte_array[0] = 41;\
__declare_static_bit_vector(konst_3701,8);\
bit_vector_clear(&konst_3701);\
konst_3701.val.byte_array[0] = 46;\
bit_vector_clear(&konst_3701);\
konst_3701.val.byte_array[0] = 46;\
__declare_static_bit_vector(konst_3709,8);\
bit_vector_clear(&konst_3709);\
konst_3709.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3709);\
konst_3709.val.byte_array[0] = 47;\
__declare_static_bit_vector(konst_3717,8);\
bit_vector_clear(&konst_3717);\
konst_3717.val.byte_array[0] = 48;\
bit_vector_clear(&konst_3717);\
konst_3717.val.byte_array[0] = 48;\
__declare_static_bit_vector(konst_3722,8);\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 49;\
__declare_static_bit_vector(konst_3725,8);\
bit_vector_clear(&konst_3725);\
konst_3725.val.byte_array[0] = 50;\
bit_vector_clear(&konst_3725);\
konst_3725.val.byte_array[0] = 50;\
__declare_static_bit_vector(konst_3730,8);\
bit_vector_clear(&konst_3730);\
konst_3730.val.byte_array[0] = 51;\
bit_vector_clear(&konst_3730);\
konst_3730.val.byte_array[0] = 51;\
__declare_static_bit_vector(konst_3735,8);\
bit_vector_clear(&konst_3735);\
konst_3735.val.byte_array[0] = 53;\
bit_vector_clear(&konst_3735);\
konst_3735.val.byte_array[0] = 53;\
__declare_static_bit_vector(konst_3743,8);\
bit_vector_clear(&konst_3743);\
konst_3743.val.byte_array[0] = 55;\
bit_vector_clear(&konst_3743);\
konst_3743.val.byte_array[0] = 55;\
__declare_static_bit_vector(konst_3751,8);\
bit_vector_clear(&konst_3751);\
konst_3751.val.byte_array[0] = 57;\
bit_vector_clear(&konst_3751);\
konst_3751.val.byte_array[0] = 57;\
__declare_static_bit_vector(konst_3759,8);\
bit_vector_clear(&konst_3759);\
konst_3759.val.byte_array[0] = 59;\
bit_vector_clear(&konst_3759);\
konst_3759.val.byte_array[0] = 59;\
__declare_static_bit_vector(konst_3767,8);\
bit_vector_clear(&konst_3767);\
konst_3767.val.byte_array[0] = 60;\
bit_vector_clear(&konst_3767);\
konst_3767.val.byte_array[0] = 60;\
__declare_static_bit_vector(konst_3770,8);\
bit_vector_clear(&konst_3770);\
konst_3770.val.byte_array[0] = 61;\
bit_vector_clear(&konst_3770);\
konst_3770.val.byte_array[0] = 61;\
__declare_static_bit_vector(konst_3776,8);\
bit_vector_clear(&konst_3776);\
konst_3776.val.byte_array[0] = 63;\
bit_vector_clear(&konst_3776);\
konst_3776.val.byte_array[0] = 63;\
__declare_static_bit_vector(konst_3784,8);\
bit_vector_clear(&konst_3784);\
konst_3784.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3784);\
konst_3784.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3787,8);\
bit_vector_clear(&konst_3787);\
konst_3787.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3787);\
konst_3787.val.byte_array[0] = 65;\
__declare_static_bit_vector(konst_3790,8);\
bit_vector_clear(&konst_3790);\
konst_3790.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3790);\
konst_3790.val.byte_array[0] = 66;\
__declare_static_bit_vector(konst_3793,8);\
bit_vector_clear(&konst_3793);\
konst_3793.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3793);\
konst_3793.val.byte_array[0] = 67;\
__declare_static_bit_vector(konst_3796,8);\
bit_vector_clear(&konst_3796);\
konst_3796.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3796);\
konst_3796.val.byte_array[0] = 68;\
__declare_static_bit_vector(konst_3799,8);\
bit_vector_clear(&konst_3799);\
konst_3799.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3799);\
konst_3799.val.byte_array[0] = 69;\
__declare_static_bit_vector(konst_3802,8);\
bit_vector_clear(&konst_3802);\
konst_3802.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3802);\
konst_3802.val.byte_array[0] = 70;\
__declare_static_bit_vector(konst_3805,8);\
bit_vector_clear(&konst_3805);\
konst_3805.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3805);\
konst_3805.val.byte_array[0] = 71;\
__declare_static_bit_vector(konst_3811,8);\
bit_vector_clear(&konst_3811);\
konst_3811.val.byte_array[0] = 72;\
bit_vector_clear(&konst_3811);\
konst_3811.val.byte_array[0] = 72;\
__declare_static_bit_vector(konst_3814,8);\
bit_vector_clear(&konst_3814);\
konst_3814.val.byte_array[0] = 73;\
bit_vector_clear(&konst_3814);\
konst_3814.val.byte_array[0] = 73;\
__declare_static_bit_vector(konst_3817,8);\
bit_vector_clear(&konst_3817);\
konst_3817.val.byte_array[0] = 74;\
bit_vector_clear(&konst_3817);\
konst_3817.val.byte_array[0] = 74;\
__declare_static_bit_vector(konst_3820,8);\
bit_vector_clear(&konst_3820);\
konst_3820.val.byte_array[0] = 75;\
bit_vector_clear(&konst_3820);\
konst_3820.val.byte_array[0] = 75;\
__declare_static_bit_vector(konst_3826,8);\
bit_vector_clear(&konst_3826);\
konst_3826.val.byte_array[0] = 76;\
bit_vector_clear(&konst_3826);\
konst_3826.val.byte_array[0] = 76;\
__declare_static_bit_vector(konst_3832,8);\
bit_vector_clear(&konst_3832);\
konst_3832.val.byte_array[0] = 77;\
bit_vector_clear(&konst_3832);\
konst_3832.val.byte_array[0] = 77;\
__declare_static_bit_vector(konst_3838,8);\
bit_vector_clear(&konst_3838);\
konst_3838.val.byte_array[0] = 78;\
bit_vector_clear(&konst_3838);\
konst_3838.val.byte_array[0] = 78;\
__declare_static_bit_vector(konst_3844,8);\
bit_vector_clear(&konst_3844);\
konst_3844.val.byte_array[0] = 79;\
bit_vector_clear(&konst_3844);\
konst_3844.val.byte_array[0] = 79;\
__declare_static_bit_vector(konst_3850,8);\
bit_vector_clear(&konst_3850);\
konst_3850.val.byte_array[0] = 96;\
bit_vector_clear(&konst_3850);\
konst_3850.val.byte_array[0] = 96;\
__declare_static_bit_vector(konst_3853,8);\
bit_vector_clear(&konst_3853);\
konst_3853.val.byte_array[0] = 97;\
bit_vector_clear(&konst_3853);\
konst_3853.val.byte_array[0] = 97;\
__declare_static_bit_vector(konst_3856,8);\
bit_vector_clear(&konst_3856);\
konst_3856.val.byte_array[0] = 98;\
bit_vector_clear(&konst_3856);\
konst_3856.val.byte_array[0] = 98;\
__declare_static_bit_vector(konst_3859,8);\
bit_vector_clear(&konst_3859);\
konst_3859.val.byte_array[0] = 99;\
bit_vector_clear(&konst_3859);\
konst_3859.val.byte_array[0] = 99;\
__declare_static_bit_vector(konst_3862,8);\
bit_vector_clear(&konst_3862);\
konst_3862.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3862);\
konst_3862.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3865,8);\
bit_vector_clear(&konst_3865);\
konst_3865.val.byte_array[0] = 101;\
bit_vector_clear(&konst_3865);\
konst_3865.val.byte_array[0] = 101;\
__declare_static_bit_vector(konst_3868,8);\
bit_vector_clear(&konst_3868);\
konst_3868.val.byte_array[0] = 102;\
bit_vector_clear(&konst_3868);\
konst_3868.val.byte_array[0] = 102;\
__declare_static_bit_vector(konst_3871,8);\
bit_vector_clear(&konst_3871);\
konst_3871.val.byte_array[0] = 103;\
bit_vector_clear(&konst_3871);\
konst_3871.val.byte_array[0] = 103;\
__declare_static_bit_vector(konst_3874,8);\
bit_vector_clear(&konst_3874);\
konst_3874.val.byte_array[0] = 104;\
bit_vector_clear(&konst_3874);\
konst_3874.val.byte_array[0] = 104;\
__declare_static_bit_vector(konst_3877,8);\
bit_vector_clear(&konst_3877);\
konst_3877.val.byte_array[0] = 105;\
bit_vector_clear(&konst_3877);\
konst_3877.val.byte_array[0] = 105;\
__declare_static_bit_vector(konst_3880,8);\
bit_vector_clear(&konst_3880);\
konst_3880.val.byte_array[0] = 106;\
bit_vector_clear(&konst_3880);\
konst_3880.val.byte_array[0] = 106;\
__declare_static_bit_vector(konst_3883,8);\
bit_vector_clear(&konst_3883);\
konst_3883.val.byte_array[0] = 107;\
bit_vector_clear(&konst_3883);\
konst_3883.val.byte_array[0] = 107;\
__declare_static_bit_vector(konst_3886,8);\
bit_vector_clear(&konst_3886);\
konst_3886.val.byte_array[0] = 108;\
bit_vector_clear(&konst_3886);\
konst_3886.val.byte_array[0] = 108;\
__declare_static_bit_vector(konst_3889,8);\
bit_vector_clear(&konst_3889);\
konst_3889.val.byte_array[0] = 109;\
bit_vector_clear(&konst_3889);\
konst_3889.val.byte_array[0] = 109;\
__declare_static_bit_vector(konst_3892,8);\
bit_vector_clear(&konst_3892);\
konst_3892.val.byte_array[0] = 110;\
bit_vector_clear(&konst_3892);\
konst_3892.val.byte_array[0] = 110;\
__declare_static_bit_vector(konst_3895,8);\
bit_vector_clear(&konst_3895);\
konst_3895.val.byte_array[0] = 111;\
bit_vector_clear(&konst_3895);\
konst_3895.val.byte_array[0] = 111;\
__declare_static_bit_vector(konst_3898,8);\
bit_vector_clear(&konst_3898);\
konst_3898.val.byte_array[0] = 254;\
bit_vector_clear(&konst_3898);\
konst_3898.val.byte_array[0] = 254;\
__declare_static_bit_vector(konst_3901,8);\
bit_vector_clear(&konst_3901);\
konst_3901.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3901);\
konst_3901.val.byte_array[0] = 255;\
switch (bit_vector_to_uint64(0, &address)) { 
 case 5 : {
// 			sdhcRegisters[address] := (data & _h7f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3601_c_macro_; 
break;}
 case 12 : {
// 			sdhcRegisters[address] := (data & _h3f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3609_c_macro_; 
break;}
 case 13 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3615_c_macro_; 
break;}
 case 14 : {
// 			sdhcRegisters[address] := (data & _hfb ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3623_c_macro_; 
break;}
 case 15 : {
// 			sdhcRegisters[address] := (data & _h3f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3631_c_macro_; 
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
_sdhc_register_write_assign_stmt_3699_c_macro_; 
break;}
 case 46 : {
// 			sdhcRegisters[address] := (data & _hf ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3707_c_macro_; 
break;}
 case 47 : {
// 			sdhcRegisters[address] := (data & _h7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3715_c_macro_; 
break;}
 case 48 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3720_c_macro_; 
break;}
 case 49 : {
/* null */ ;
break;}
 case 50 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3728_c_macro_; 
break;}
 case 51 : {
// 			$call RW1C (data address ) () 
_sdhc_register_write_call_stmt_3733_c_macro_; 
break;}
 case 53 : {
// 			sdhcRegisters[address] := (data & _h1f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3741_c_macro_; 
break;}
 case 55 : {
// 			sdhcRegisters[address] := (data & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3749_c_macro_; 
break;}
 case 57 : {
// 			sdhcRegisters[address] := (data & _h1f ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3757_c_macro_; 
break;}
 case 59 : {
// 			sdhcRegisters[address] := (data & _hf7 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3765_c_macro_; 
break;}
 case 60 : {
/* null */ ;
break;}
 case 61 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3774_c_macro_; 
break;}
 case 63 : {
// 			sdhcRegisters[address] := (data & _hC0 ) $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3782_c_macro_; 
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
_sdhc_register_write_assign_stmt_3809_c_macro_; 
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
_sdhc_register_write_assign_stmt_3824_c_macro_; 
break;}
 case 76 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3830_c_macro_; 
break;}
 case 77 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3836_c_macro_; 
break;}
 case 78 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3842_c_macro_; 
break;}
 case 79 : {
// 			sdhcRegisters[address] := ZERO_8 $buffering 1// bits of buffering = 8. 
_sdhc_register_write_assign_stmt_3848_c_macro_; 
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
_sdhc_register_write_assign_stmt_3907_c_macro_; 
break;}
}
_sdhc_register_write_branch_block_stmt_3592_c_export_apply_macro_;
}
_sdhc_register_write_inner_outarg_prep_macro__; 
MUTEX_UNLOCK(_sdhc_register_write_series_block_stmt_3589_c_mutex_);
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
