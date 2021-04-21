#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
// object initialization 

#define _RW1C_inner_inarg_prep_macro__ __declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\
__declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(current_data,8);\

#define _RW1C_assign_stmt_71_c_macro_ bit_vector_cast_to_bit_vector(0, &(current_data), &((sdhcRegisters[bit_vector_to_uint64(0, &address)])));\
;

#define _RW1C_branch_block_stmt_72_c_export_decl_macro_ __declare_static_bit_vector(d7,1);\
__declare_static_bit_vector(d6,1);\
__declare_static_bit_vector(d5,1);\
__declare_static_bit_vector(d4,1);\
__declare_static_bit_vector(d3,1);\
__declare_static_bit_vector(d2,1);\
__declare_static_bit_vector(d1,1);\
__declare_static_bit_vector(d0,1);\
__declare_static_bit_vector(current_d7,1);\
__declare_static_bit_vector(current_d6,1);\
__declare_static_bit_vector(current_d5,1);\
__declare_static_bit_vector(current_d4,1);\
__declare_static_bit_vector(current_d3,1);\
__declare_static_bit_vector(current_d2,1);\
__declare_static_bit_vector(current_d1,1);\
__declare_static_bit_vector(current_d0,1);\
__declare_static_bit_vector(b0,1);\
__declare_static_bit_vector(b1,1);\
__declare_static_bit_vector(b2,1);\
__declare_static_bit_vector(b3,1);\
__declare_static_bit_vector(b4,1);\
__declare_static_bit_vector(b5,1);\
__declare_static_bit_vector(b6,1);\
__declare_static_bit_vector(b7,1);\


#define _RW1C_assign_stmt_76_c_macro_ __declare_static_bit_vector(slice_75,1);\
bit_vector_slice(&(data), &(slice_75), 7);\
bit_vector_cast_to_bit_vector(0, &(d7), &(slice_75));\
;

#define _RW1C_assign_stmt_80_c_macro_ __declare_static_bit_vector(slice_79,1);\
bit_vector_slice(&(data), &(slice_79), 6);\
bit_vector_cast_to_bit_vector(0, &(d6), &(slice_79));\
;

#define _RW1C_assign_stmt_84_c_macro_ __declare_static_bit_vector(slice_83,1);\
bit_vector_slice(&(data), &(slice_83), 5);\
bit_vector_cast_to_bit_vector(0, &(d5), &(slice_83));\
;

#define _RW1C_assign_stmt_88_c_macro_ __declare_static_bit_vector(slice_87,1);\
bit_vector_slice(&(data), &(slice_87), 4);\
bit_vector_cast_to_bit_vector(0, &(d4), &(slice_87));\
;

#define _RW1C_assign_stmt_92_c_macro_ __declare_static_bit_vector(slice_91,1);\
bit_vector_slice(&(data), &(slice_91), 3);\
bit_vector_cast_to_bit_vector(0, &(d3), &(slice_91));\
;

#define _RW1C_assign_stmt_96_c_macro_ __declare_static_bit_vector(slice_95,1);\
bit_vector_slice(&(data), &(slice_95), 2);\
bit_vector_cast_to_bit_vector(0, &(d2), &(slice_95));\
;

#define _RW1C_assign_stmt_100_c_macro_ __declare_static_bit_vector(slice_99,1);\
bit_vector_slice(&(data), &(slice_99), 1);\
bit_vector_cast_to_bit_vector(0, &(d1), &(slice_99));\
;

#define _RW1C_assign_stmt_104_c_macro_ __declare_static_bit_vector(slice_103,1);\
bit_vector_slice(&(data), &(slice_103), 0);\
bit_vector_cast_to_bit_vector(0, &(d0), &(slice_103));\
;

#define _RW1C_assign_stmt_108_c_macro_ __declare_static_bit_vector(slice_107,1);\
bit_vector_slice(&(current_data), &(slice_107), 7);\
bit_vector_cast_to_bit_vector(0, &(current_d7), &(slice_107));\
;

#define _RW1C_assign_stmt_112_c_macro_ __declare_static_bit_vector(slice_111,1);\
bit_vector_slice(&(current_data), &(slice_111), 6);\
bit_vector_cast_to_bit_vector(0, &(current_d6), &(slice_111));\
;

#define _RW1C_assign_stmt_116_c_macro_ __declare_static_bit_vector(slice_115,1);\
bit_vector_slice(&(current_data), &(slice_115), 5);\
bit_vector_cast_to_bit_vector(0, &(current_d5), &(slice_115));\
;

#define _RW1C_assign_stmt_120_c_macro_ __declare_static_bit_vector(slice_119,1);\
bit_vector_slice(&(current_data), &(slice_119), 4);\
bit_vector_cast_to_bit_vector(0, &(current_d4), &(slice_119));\
;

#define _RW1C_assign_stmt_124_c_macro_ __declare_static_bit_vector(slice_123,1);\
bit_vector_slice(&(current_data), &(slice_123), 3);\
bit_vector_cast_to_bit_vector(0, &(current_d3), &(slice_123));\
;

#define _RW1C_assign_stmt_128_c_macro_ __declare_static_bit_vector(slice_127,1);\
bit_vector_slice(&(current_data), &(slice_127), 2);\
bit_vector_cast_to_bit_vector(0, &(current_d2), &(slice_127));\
;

#define _RW1C_assign_stmt_132_c_macro_ __declare_static_bit_vector(slice_131,1);\
bit_vector_slice(&(current_data), &(slice_131), 1);\
bit_vector_cast_to_bit_vector(0, &(current_d1), &(slice_131));\
;

#define _RW1C_assign_stmt_136_c_macro_ __declare_static_bit_vector(slice_135,1);\
bit_vector_slice(&(current_data), &(slice_135), 0);\
bit_vector_cast_to_bit_vector(0, &(current_d0), &(slice_135));\
;

#define _RW1C_assign_stmt_142_c_macro_ __declare_static_bit_vector(MUX_141,1);\
if (has_undefined_bit(&d0)) {fprintf(stderr, "Error: variable d0 has undefined value (%s) at test point.\n", to_string(&d0));assert(0);} \
if(bit_vector_to_uint64(0, &d0)){bit_vector_cast_to_bit_vector(0, &(MUX_141), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_141), &(current_d0));\
}bit_vector_cast_to_bit_vector(0, &(b0), &(MUX_141));\
;

#define _RW1C_assign_stmt_148_c_macro_ __declare_static_bit_vector(MUX_147,1);\
if (has_undefined_bit(&d1)) {fprintf(stderr, "Error: variable d1 has undefined value (%s) at test point.\n", to_string(&d1));assert(0);} \
if(bit_vector_to_uint64(0, &d1)){bit_vector_cast_to_bit_vector(0, &(MUX_147), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_147), &(current_d1));\
}bit_vector_cast_to_bit_vector(0, &(b1), &(MUX_147));\
;

#define _RW1C_assign_stmt_154_c_macro_ __declare_static_bit_vector(MUX_153,1);\
if (has_undefined_bit(&d2)) {fprintf(stderr, "Error: variable d2 has undefined value (%s) at test point.\n", to_string(&d2));assert(0);} \
if(bit_vector_to_uint64(0, &d2)){bit_vector_cast_to_bit_vector(0, &(MUX_153), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_153), &(current_d2));\
}bit_vector_cast_to_bit_vector(0, &(b2), &(MUX_153));\
;

#define _RW1C_assign_stmt_160_c_macro_ __declare_static_bit_vector(MUX_159,1);\
if (has_undefined_bit(&d3)) {fprintf(stderr, "Error: variable d3 has undefined value (%s) at test point.\n", to_string(&d3));assert(0);} \
if(bit_vector_to_uint64(0, &d3)){bit_vector_cast_to_bit_vector(0, &(MUX_159), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_159), &(current_d3));\
}bit_vector_cast_to_bit_vector(0, &(b3), &(MUX_159));\
;

#define _RW1C_assign_stmt_166_c_macro_ __declare_static_bit_vector(MUX_165,1);\
if (has_undefined_bit(&d4)) {fprintf(stderr, "Error: variable d4 has undefined value (%s) at test point.\n", to_string(&d4));assert(0);} \
if(bit_vector_to_uint64(0, &d4)){bit_vector_cast_to_bit_vector(0, &(MUX_165), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_165), &(current_d4));\
}bit_vector_cast_to_bit_vector(0, &(b4), &(MUX_165));\
;

#define _RW1C_assign_stmt_172_c_macro_ __declare_static_bit_vector(MUX_171,1);\
if (has_undefined_bit(&d5)) {fprintf(stderr, "Error: variable d5 has undefined value (%s) at test point.\n", to_string(&d5));assert(0);} \
if(bit_vector_to_uint64(0, &d5)){bit_vector_cast_to_bit_vector(0, &(MUX_171), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_171), &(current_d5));\
}bit_vector_cast_to_bit_vector(0, &(b5), &(MUX_171));\
;

#define _RW1C_assign_stmt_178_c_macro_ __declare_static_bit_vector(MUX_177,1);\
if (has_undefined_bit(&d6)) {fprintf(stderr, "Error: variable d6 has undefined value (%s) at test point.\n", to_string(&d6));assert(0);} \
if(bit_vector_to_uint64(0, &d6)){bit_vector_cast_to_bit_vector(0, &(MUX_177), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_177), &(current_d6));\
}bit_vector_cast_to_bit_vector(0, &(b6), &(MUX_177));\
;

#define _RW1C_assign_stmt_184_c_macro_ __declare_static_bit_vector(MUX_183,1);\
if (has_undefined_bit(&d7)) {fprintf(stderr, "Error: variable d7 has undefined value (%s) at test point.\n", to_string(&d7));assert(0);} \
if(bit_vector_to_uint64(0, &d7)){bit_vector_cast_to_bit_vector(0, &(MUX_183), &(ZERO_1));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_183), &(current_d7));\
}bit_vector_cast_to_bit_vector(0, &(b7), &(MUX_183));\
;

#define _RW1C_assign_stmt_202_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_189,2);\
__declare_static_bit_vector(CONCAT_u1_u2_192,2);\
__declare_static_bit_vector(CONCAT_u2_u4_193,4);\
__declare_static_bit_vector(CONCAT_u1_u2_196,2);\
__declare_static_bit_vector(CONCAT_u1_u2_199,2);\
__declare_static_bit_vector(CONCAT_u2_u4_200,4);\
__declare_static_bit_vector(CONCAT_u4_u8_201,8);\
bit_vector_concatenate( &(b7), &(b6), &(CONCAT_u1_u2_189));\
bit_vector_concatenate( &(b5), &(b4), &(CONCAT_u1_u2_192));\
bit_vector_concatenate( &(CONCAT_u1_u2_189), &(CONCAT_u1_u2_192), &(CONCAT_u2_u4_193));\
bit_vector_concatenate( &(b3), &(b2), &(CONCAT_u1_u2_196));\
bit_vector_concatenate( &(b1), &(b0), &(CONCAT_u1_u2_199));\
bit_vector_concatenate( &(CONCAT_u1_u2_196), &(CONCAT_u1_u2_199), &(CONCAT_u2_u4_200));\
bit_vector_concatenate( &(CONCAT_u2_u4_193), &(CONCAT_u2_u4_200), &(CONCAT_u4_u8_201));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(CONCAT_u4_u8_201));\
;

#define _RW1C_assign_stmt_212_c_macro_ __declare_static_bit_vector(NOT_u8_u8_209,8);\
__declare_static_bit_vector(AND_u8_u8_211,8);\
bit_vector_not( &(data), &(NOT_u8_u8_209));\
bit_vector_and(&(NOT_u8_u8_209), &(normalInterruptFlag1), &(AND_u8_u8_211));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(AND_u8_u8_211));\
;

#define _RW1C_assign_stmt_223_c_macro_ __declare_static_bit_vector(NOT_u8_u8_220,8);\
__declare_static_bit_vector(AND_u8_u8_222,8);\
bit_vector_not( &(data), &(NOT_u8_u8_220));\
bit_vector_and(&(NOT_u8_u8_220), &(normalInterruptFlag2), &(AND_u8_u8_222));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(AND_u8_u8_222));\
;

#define _RW1C_assign_stmt_234_c_macro_ __declare_static_bit_vector(NOT_u8_u8_231,8);\
__declare_static_bit_vector(AND_u8_u8_233,8);\
bit_vector_not( &(data), &(NOT_u8_u8_231));\
bit_vector_and(&(NOT_u8_u8_231), &(errorInterruptFlag1), &(AND_u8_u8_233));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(AND_u8_u8_233));\
;

#define _RW1C_assign_stmt_245_c_macro_ __declare_static_bit_vector(NOT_u8_u8_242,8);\
__declare_static_bit_vector(AND_u8_u8_244,8);\
bit_vector_not( &(data), &(NOT_u8_u8_242));\
bit_vector_and(&(NOT_u8_u8_242), &(errorInterruptFlag2), &(AND_u8_u8_244));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(AND_u8_u8_244));\
;
;

#define _RW1C_branch_block_stmt_72_c_export_apply_macro_ ;

#define _RW1C_inner_outarg_prep_macro__ ;

#define _RW1C_outer_arg_decl_macro__ __declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
__declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
;

#define _RW1C_outer_op_xfer_macro__ ;

#define _bigResponseWrite_inner_inarg_prep_macro__ __declare_static_bit_vector(CID,120);\
bit_vector_cast_to_bit_vector(0, &(CID), &((*__pCID)));\

#define _bigResponseWrite_branch_block_stmt_252_c_export_decl_macro_ __declare_static_bit_vector(k,8);\
__declare_static_bit_vector(temp,120);\
__declare_static_bit_vector(address,8);\
__declare_static_bit_vector(next_temp,120);\
__declare_static_bit_vector(next_k,8);\


#define _bigResponseWrite_merge_stmt_253_c_preamble_macro_ uint8_t merge_stmt_253_entry_flag;\
merge_stmt_253_entry_flag = 1;\
uint8_t loopback_252_flag = 0;\
goto merge_stmt_253_run;\
loopback_252: loopback_252_flag = 1;\
goto merge_stmt_253_run;\
merge_stmt_253_run: ;\

#define _bigResponseWrite_phi_stmt_254_c_macro_ __declare_static_bit_vector(konst_256,8);\
bit_vector_clear(&konst_256);\
__declare_static_bit_vector(type_cast_257,8);\
bit_vector_clear(&type_cast_257);\
if(loopback_252_flag) {\
bit_vector_cast_to_bit_vector(0, &(k), &(next_k));\
}\
else {\
__declare_static_bit_vector(konst_256,8);\
bit_vector_clear(&konst_256);\
__declare_static_bit_vector(type_cast_257,8);\
bit_vector_clear(&type_cast_257);\
bit_vector_clear(&konst_256);\
bit_vector_bitcast_to_bit_vector( &(type_cast_257), &(konst_256));\
bit_vector_cast_to_bit_vector(0, &(k), &(type_cast_257));\
}\
;

#define _bigResponseWrite_phi_stmt_259_c_macro_ if(loopback_252_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(temp), &(CID));\
}\
;
;

#define _bigResponseWrite_merge_stmt_253_c_postamble_macro_ loopback_252_flag = 0;\
merge_stmt_253_entry_flag = 0;

#define _bigResponseWrite_assign_stmt_268_c_macro_ __declare_static_bit_vector(konst_265,8);\
bit_vector_clear(&konst_265);\
konst_265.val.byte_array[0] = 16;\
__declare_static_bit_vector(ADD_u8_u8_267,8);\
bit_vector_clear(&konst_265);\
konst_265.val.byte_array[0] = 16;\
bit_vector_plus( &(konst_265), &(k), &(ADD_u8_u8_267));\
bit_vector_cast_to_bit_vector(0, &(address), &(ADD_u8_u8_267));\
;

#define _bigResponseWrite_assign_stmt_273_c_macro_ __declare_static_bit_vector(slice_272,8);\
bit_vector_slice(&(temp), &(slice_272), 0);\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(slice_272));\
;

#define _bigResponseWrite_assign_stmt_278_c_macro_ __declare_static_bit_vector(konst_276,120);\
bit_vector_clear(&konst_276);\
konst_276.val.byte_array[0] = 8;\
__declare_static_bit_vector(LSHR_u120_u120_277,120);\
bit_vector_clear(&konst_276);\
konst_276.val.byte_array[0] = 8;\
bit_vector_shift_right(0, &(temp), &(konst_276), &(LSHR_u120_u120_277));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(LSHR_u120_u120_277));\
;

#define _bigResponseWrite_assign_stmt_283_c_macro_ __declare_static_bit_vector(konst_281,8);\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_282,8);\
bit_vector_clear(&konst_281);\
konst_281.val.byte_array[0] = 1;\
bit_vector_plus( &(k), &(konst_281), &(ADD_u8_u8_282));\
bit_vector_cast_to_bit_vector(0, &(next_k), &(ADD_u8_u8_282));\
;
;

#define _bigResponseWrite_branch_block_stmt_252_c_export_apply_macro_ ;

#define _bigResponseWrite_inner_outarg_prep_macro__ ;

#define _command_generator_inner_inarg_prep_macro__ __declare_static_bit_vector(normalInterruptStatusVar1,8);\
__declare_static_bit_vector(normalInterruptStatusVar2,8);\
__declare_static_bit_vector(errorInterruptStatusVar1,8);\
__declare_static_bit_vector(errorInterruptStatusVar2,8);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\
__declare_static_bit_vector(dataTransferComplete,8);\

#define _command_generator_branch_block_stmt_1780_c_export_decl_macro_ __declare_static_bit_vector(argumentVal3,8);\
__declare_static_bit_vector(argumentVal2,8);\
__declare_static_bit_vector(argumentVal1,8);\
__declare_static_bit_vector(argumentVal0,8);\
__declare_static_bit_vector(command40bits,40);\
__declare_static_bit_vector(current_crc,8);\
bit_vector_clear(&current_crc);\
__declare_static_bit_vector(crc7,7);\
__declare_static_bit_vector(commandbits,48);\
__declare_static_bit_vector(response_type,2);\
__declare_static_bit_vector(dataPresentSelect,1);\
__declare_static_bit_vector(txOrRX,1);\
__declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(wait,1);\
__declare_static_bit_vector(R1_6_7CRC,7);\
__declare_static_bit_vector(CommandCRCError,8);\
__declare_static_bit_vector(checkit,7);\
__declare_static_bit_vector(commandIndexCheck,1);\
__declare_static_bit_vector(CommandIndexError,8);\
__declare_static_bit_vector(presentState2,8);\
__declare_static_bit_vector(normalInterrupt2,8);\
__declare_static_bit_vector(commandEndBitError,8);\
__declare_static_bit_vector(normalInterruptStatusVar_2,8);\
__declare_static_bit_vector(errorInterruptStatusVar_2,8);\
__declare_static_bit_vector(CID,120);\
__declare_static_bit_vector(CID_CRC,7);\
__declare_static_bit_vector(R2_CRC,7);\
__declare_static_bit_vector(CommandCRCError1,8);\
__declare_static_bit_vector(commandEndBitError1,8);\
__declare_static_bit_vector(errorInterruptStatusVar_3,8);\
__declare_static_bit_vector(presentState3,8);\
__declare_static_bit_vector(normalInterrupt3,8);\
__declare_static_bit_vector(normalInterruptStatusVar_3,8);\
__declare_static_bit_vector(presentState1,8);\
__declare_static_bit_vector(normalInterrupt1,8);\
__declare_static_bit_vector(normalInterruptStatusVar_1,8);\
__declare_static_bit_vector(errorInterruptStatusVar_1,8);\
bit_vector_clear(&errorInterruptStatusVar_1);\
__declare_static_bit_vector(singleMultipleReadBlock,1);\
__declare_static_bit_vector(transferCompleteData,8);\
__declare_static_bit_vector(readBlockCount,16);\
__declare_static_bit_vector(newReadBlockCount,16);\


#define _command_generator_assign_stmt_1784_c_macro_ __declare_static_bit_vector(konst_1782,32);\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 11;\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 11;\
bit_vector_cast_to_bit_vector(0, &(argumentVal3), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1782)])));\
;

#define _command_generator_assign_stmt_1788_c_macro_ __declare_static_bit_vector(konst_1786,32);\
bit_vector_clear(&konst_1786);\
konst_1786.val.byte_array[0] = 10;\
bit_vector_clear(&konst_1786);\
konst_1786.val.byte_array[0] = 10;\
bit_vector_cast_to_bit_vector(0, &(argumentVal2), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1786)])));\
;

#define _command_generator_assign_stmt_1792_c_macro_ __declare_static_bit_vector(konst_1790,32);\
bit_vector_clear(&konst_1790);\
konst_1790.val.byte_array[0] = 9;\
bit_vector_clear(&konst_1790);\
konst_1790.val.byte_array[0] = 9;\
bit_vector_cast_to_bit_vector(0, &(argumentVal1), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1790)])));\
;

#define _command_generator_assign_stmt_1796_c_macro_ __declare_static_bit_vector(konst_1794,32);\
bit_vector_clear(&konst_1794);\
konst_1794.val.byte_array[0] = 8;\
bit_vector_clear(&konst_1794);\
konst_1794.val.byte_array[0] = 8;\
bit_vector_cast_to_bit_vector(0, &(argumentVal0), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1794)])));\
;

#define _command_generator_assign_stmt_1813_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1800,2);\
bit_vector_clear(&CONCAT_u1_u2_1800);\
CONCAT_u1_u2_1800.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_1801,32);\
bit_vector_clear(&konst_1801);\
konst_1801.val.byte_array[0] = 15;\
__declare_static_bit_vector(slice_1803,6);\
__declare_static_bit_vector(CONCAT_u6_u14_1805,14);\
__declare_static_bit_vector(CONCAT_u2_u16_1806,16);\
__declare_static_bit_vector(CONCAT_u8_u16_1809,16);\
__declare_static_bit_vector(CONCAT_u16_u24_1811,24);\
__declare_static_bit_vector(CONCAT_u16_u40_1812,40);\
bit_vector_concatenate( &(ZERO_1), &(ONE_1), &(CONCAT_u1_u2_1800));\
bit_vector_clear(&konst_1801);\
konst_1801.val.byte_array[0] = 15;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1801)])), &(slice_1803), 0);\
bit_vector_concatenate( &(slice_1803), &(argumentVal3), &(CONCAT_u6_u14_1805));\
bit_vector_concatenate( &(CONCAT_u1_u2_1800), &(CONCAT_u6_u14_1805), &(CONCAT_u2_u16_1806));\
bit_vector_concatenate( &(argumentVal2), &(argumentVal1), &(CONCAT_u8_u16_1809));\
bit_vector_concatenate( &(CONCAT_u8_u16_1809), &(argumentVal0), &(CONCAT_u16_u24_1811));\
bit_vector_concatenate( &(CONCAT_u2_u16_1806), &(CONCAT_u16_u24_1811), &(CONCAT_u16_u40_1812));\
bit_vector_cast_to_bit_vector(0, &(command40bits), &(CONCAT_u16_u40_1812));\
;

#define _command_generator_assign_stmt_1816_c_macro_ bit_vector_cast_to_bit_vector(0, &(current_crc), &(ZERO_8));\
;

#define _command_generator_call_stmt_1819_c_macro_ _generate_crc_7_( &(command40bits), &(crc7));\
;

#define _command_generator_assign_stmt_1826_c_macro_ __declare_static_bit_vector(CONCAT_u40_u47_1823,47);\
__declare_static_bit_vector(CONCAT_u47_u48_1825,48);\
bit_vector_concatenate( &(command40bits), &(crc7), &(CONCAT_u40_u47_1823));\
bit_vector_concatenate( &(CONCAT_u40_u47_1823), &(ONE_1), &(CONCAT_u47_u48_1825));\
bit_vector_cast_to_bit_vector(0, &(commandbits), &(CONCAT_u47_u48_1825));\
;

#define _command_generator_branch_block_stmt_1827_c_export_decl_macro_ __declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_commandbits,48);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bit,1);\
__declare_static_bit_vector(new_commandbits,48);\


#define _command_generator_merge_stmt_1828_c_preamble_macro_ uint8_t merge_stmt_1828_entry_flag;\
merge_stmt_1828_entry_flag = 1;\
uint8_t commandloopback_1827_flag = 0;\
goto merge_stmt_1828_run;\
commandloopback_1827: commandloopback_1827_flag = 1;\
goto merge_stmt_1828_run;\
merge_stmt_1828_run: ;\

#define _command_generator_phi_stmt_1829_c_macro_ if(commandloopback_1827_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(J), &(ZERO_8));\
}\
;

#define _command_generator_phi_stmt_1833_c_macro_ if(commandloopback_1827_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(new_commandbits));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(commandbits));\
}\
;
;

#define _command_generator_merge_stmt_1828_c_postamble_macro_ commandloopback_1827_flag = 0;\
merge_stmt_1828_entry_flag = 0;

#define _command_generator_assign_stmt_1842_c_macro_ __declare_static_bit_vector(konst_1840,8);\
bit_vector_clear(&konst_1840);\
konst_1840.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_1841,8);\
bit_vector_clear(&konst_1840);\
konst_1840.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1840), &(ADD_u8_u8_1841));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_1841));\
;

#define _command_generator_assign_stmt_1846_c_macro_ __declare_static_bit_vector(slice_1845,1);\
bit_vector_slice(&(old_commandbits), &(slice_1845), 47);\
bit_vector_cast_to_bit_vector(0, &(bit), &(slice_1845));\
;

#define _command_generator_assign_stmt_1849_c_macro_ write_bit_vector_to_pipe("commandTx",&(bit));\
;

#define _command_generator_assign_stmt_1854_c_macro_ __declare_static_bit_vector(konst_1852,48);\
bit_vector_clear(&konst_1852);\
konst_1852.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_1853,48);\
bit_vector_clear(&konst_1852);\
konst_1852.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_commandbits), &(konst_1852), &(SHL_u48_u48_1853));\
bit_vector_cast_to_bit_vector(0, &(new_commandbits), &(SHL_u48_u48_1853));\
;
;

#define _command_generator_branch_block_stmt_1827_c_export_apply_macro_ ;

#define _command_generator_assign_stmt_1866_c_macro_ __declare_static_bit_vector(konst_1863,32);\
bit_vector_clear(&konst_1863);\
konst_1863.val.byte_array[0] = 14;\
__declare_static_bit_vector(slice_1865,2);\
bit_vector_clear(&konst_1863);\
konst_1863.val.byte_array[0] = 14;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1863)])), &(slice_1865), 0);\
bit_vector_cast_to_bit_vector(0, &(response_type), &(slice_1865));\
;

#define _command_generator_assign_stmt_1872_c_macro_ __declare_static_bit_vector(konst_1868,32);\
bit_vector_clear(&konst_1868);\
konst_1868.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_1870,8);\
bit_vector_clear(&konst_1870);\
konst_1870.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_1871,1);\
bit_vector_clear(&konst_1868);\
konst_1868.val.byte_array[0] = 14;\
bit_vector_clear(&konst_1870);\
konst_1870.val.byte_array[0] = 5;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1868)])), &(konst_1870), &(BITSEL_u8_u1_1871));\
bit_vector_cast_to_bit_vector(0, &(dataPresentSelect), &(BITSEL_u8_u1_1871));\
;

#define _command_generator_assign_stmt_1883_c_macro_ __declare_static_bit_vector(konst_1878,32);\
bit_vector_clear(&konst_1878);\
konst_1878.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_1880,8);\
bit_vector_clear(&konst_1880);\
konst_1880.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_1881,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_1882,1);\
bit_vector_clear(&konst_1878);\
konst_1878.val.byte_array[0] = 12;\
bit_vector_clear(&konst_1880);\
konst_1880.val.byte_array[0] = 16;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1878)])), &(konst_1880), &(AND_u8_u8_1881));\
bit_vector_reduce_or( &(AND_u8_u8_1881), &(BITREDUCEOR_u8_u1_1882));\
bit_vector_cast_to_bit_vector(0, &(txOrRX), &(BITREDUCEOR_u8_u1_1882));\
;

#define _command_generator_assign_stmt_1887_c_macro_ __declare_static_bit_vector(konst_1885,32);\
bit_vector_clear(&konst_1885);\
konst_1885.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1885);\
konst_1885.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1885)])));\
;

#define _command_generator_assign_stmt_1891_c_macro_ __declare_static_bit_vector(konst_1889,32);\
bit_vector_clear(&konst_1889);\
konst_1889.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1889);\
konst_1889.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1889)])));\
;

#define _command_generator_assign_stmt_1906_c_macro_ __declare_static_bit_vector(konst_1900,8);\
bit_vector_clear(&konst_1900);\
konst_1900.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_1901,8);\
__declare_static_bit_vector(konst_1903,8);\
bit_vector_clear(&konst_1903);\
konst_1903.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_1904,8);\
__declare_static_bit_vector(MUX_1905,8);\
if (has_undefined_bit(&txOrRX)) {fprintf(stderr, "Error: variable txOrRX has undefined value (%s) at test point.\n", to_string(&txOrRX));assert(0);} \
if(bit_vector_to_uint64(0, &txOrRX)){bit_vector_clear(&konst_1900);\
konst_1900.val.byte_array[0] = 2;\
bit_vector_or(&(presentState1Var), &(konst_1900), &(OR_u8_u8_1901));\
bit_vector_cast_to_bit_vector(0, &(MUX_1905), &(OR_u8_u8_1901));\
}else {bit_vector_clear(&konst_1903);\
konst_1903.val.byte_array[0] = 1;\
bit_vector_or(&(presentState1Var), &(konst_1903), &(OR_u8_u8_1904));\
bit_vector_cast_to_bit_vector(0, &(MUX_1905), &(OR_u8_u8_1904));\
}__declare_static_bit_vector(konst_1896,32);\
bit_vector_clear(&konst_1896);\
konst_1896.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1896);\
konst_1896.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1896)])), &(MUX_1905));\
;

#define _command_generator_assign_stmt_1913_c_macro_ __declare_static_bit_vector(konst_1911,8);\
bit_vector_clear(&konst_1911);\
konst_1911.val.byte_array[0] = 6;\
__declare_static_bit_vector(OR_u8_u8_1912,8);\
bit_vector_clear(&konst_1911);\
konst_1911.val.byte_array[0] = 6;\
bit_vector_or(&(presentState0Var), &(konst_1911), &(OR_u8_u8_1912));\
__declare_static_bit_vector(konst_1908,32);\
bit_vector_clear(&konst_1908);\
konst_1908.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1908);\
konst_1908.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1908)])), &(OR_u8_u8_1912));\
;

#define _command_generator_stmt_1917_c_macro_ uint32_t _command_generator_stmt_1917_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]rsp>\t%s\n",_command_generator_stmt_1917_c_macro___print_counter,"resp");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1917_c_macro___print_counter,"response_type");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response_type)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1917_c_macro___print_counter,"dataPresentSelect");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataPresentSelect)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_branch_block_stmt_1926_c_export_decl_macro_ __declare_static_bit_vector(response__new_responsebits,48);\
__declare_static_bit_vector(J,6);\
__declare_static_bit_vector(old_responsebits,48);\
__declare_static_bit_vector(next_J,6);\
__declare_static_bit_vector(responsebit,1);\
__declare_static_bit_vector(responsebits,48);\
__declare_static_bit_vector(new_responsebits,48);\


#define _command_generator_merge_stmt_1927_c_preamble_macro_ uint8_t merge_stmt_1927_entry_flag;\
merge_stmt_1927_entry_flag = 1;\
uint8_t responseloopback_1926_flag = 0;\
goto merge_stmt_1927_run;\
responseloopback_1926: responseloopback_1926_flag = 1;\
goto merge_stmt_1927_run;\
merge_stmt_1927_run: ;\

#define _command_generator_phi_stmt_1928_c_macro_ __declare_static_bit_vector(konst_1930,6);\
bit_vector_clear(&konst_1930);\
__declare_static_bit_vector(type_cast_1931,6);\
bit_vector_clear(&type_cast_1931);\
if(responseloopback_1926_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1930,6);\
bit_vector_clear(&konst_1930);\
__declare_static_bit_vector(type_cast_1931,6);\
bit_vector_clear(&type_cast_1931);\
bit_vector_clear(&konst_1930);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1931), &(konst_1930));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1931));\
}\
;

#define _command_generator_phi_stmt_1933_c_macro_ __declare_static_bit_vector(konst_1936,48);\
bit_vector_clear(&konst_1936);\
__declare_static_bit_vector(type_cast_1937,48);\
bit_vector_clear(&type_cast_1937);\
if(responseloopback_1926_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(new_responsebits));\
}\
else {\
__declare_static_bit_vector(konst_1936,48);\
bit_vector_clear(&konst_1936);\
__declare_static_bit_vector(type_cast_1937,48);\
bit_vector_clear(&type_cast_1937);\
bit_vector_clear(&konst_1936);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1937), &(konst_1936));\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(type_cast_1937));\
}\
;
;

#define _command_generator_merge_stmt_1927_c_postamble_macro_ responseloopback_1926_flag = 0;\
merge_stmt_1927_entry_flag = 0;

#define _command_generator_assign_stmt_1944_c_macro_ __declare_static_bit_vector(konst_1942,6);\
bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_1943,6);\
bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1942), &(ADD_u6_u6_1943));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u6_u6_1943));\
;

#define _command_generator_assign_stmt_1947_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_1946,1);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_1946));\
bit_vector_cast_to_bit_vector(0, &(responsebit), &(RPIPE_responseRx_1946));\
;

#define _command_generator_assign_stmt_1954_c_macro_ __declare_static_bit_vector(konst_1950,47);\
bit_vector_clear(&konst_1950);\
__declare_static_bit_vector(type_cast_1951,47);\
bit_vector_clear(&type_cast_1951);\
__declare_static_bit_vector(CONCAT_u47_u48_1953,48);\
bit_vector_clear(&konst_1950);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1951), &(konst_1950));\
bit_vector_concatenate( &(type_cast_1951), &(responsebit), &(CONCAT_u47_u48_1953));\
bit_vector_cast_to_bit_vector(0, &(responsebits), &(CONCAT_u47_u48_1953));\
;

#define _command_generator_assign_stmt_1961_c_macro_ __declare_static_bit_vector(konst_1957,48);\
bit_vector_clear(&konst_1957);\
konst_1957.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_1958,48);\
__declare_static_bit_vector(OR_u48_u48_1960,48);\
bit_vector_clear(&konst_1957);\
konst_1957.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_responsebits), &(konst_1957), &(SHL_u48_u48_1958));\
bit_vector_or(&(SHL_u48_u48_1958), &(responsebits), &(OR_u48_u48_1960));\
bit_vector_cast_to_bit_vector(0, &(new_responsebits), &(OR_u48_u48_1960));\
;
;

#define _command_generator_branch_block_stmt_1926_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(response__new_responsebits), &(new_responsebits));\
;

#define _command_generator_stmt_1970_c_macro_ uint32_t _command_generator_stmt_1970_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_1970_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_1970_c_macro___print_counter,"response");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response__new_responsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_merge_stmt_1975_c_preamble_macro_ uint8_t merge_stmt_1975_entry_flag;\
merge_stmt_1975_entry_flag = 1;\
uint8_t waitloop_1780_flag = 0;\
goto merge_stmt_1975_run;\
waitloop_1780: waitloop_1780_flag = 1;\
goto merge_stmt_1975_run;\
merge_stmt_1975_run: ;\
;

#define _command_generator_merge_stmt_1975_c_postamble_macro_ waitloop_1780_flag = 0;\
merge_stmt_1975_entry_flag = 0;

#define _command_generator_assign_stmt_1978_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1977,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1977));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_1977));\
;

#define _command_generator_call_stmt_1996_c_macro_ __declare_static_bit_vector(slice_1994,40);\
bit_vector_slice(&(response__new_responsebits), &(slice_1994), 8);\
_generate_crc_7_( &(slice_1994), &(R1_6_7CRC));\
;

#define _command_generator_assign_stmt_2005_c_macro_ __declare_static_bit_vector(slice_1999,7);\
__declare_static_bit_vector(EQ_u7_u1_2001,1);\
__declare_static_bit_vector(konst_2002,8);\
bit_vector_clear(&konst_2002);\
__declare_static_bit_vector(konst_2003,8);\
bit_vector_clear(&konst_2003);\
konst_2003.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2004,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_1999), 1);\
bit_vector_equal(0, &(slice_1999), &(R1_6_7CRC), &(EQ_u7_u1_2001));\
if (has_undefined_bit(&EQ_u7_u1_2001)) {fprintf(stderr, "Error: variable EQ_u7_u1_2001 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_2001));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_2001)){bit_vector_clear(&konst_2002);\
bit_vector_cast_to_bit_vector(0, &(MUX_2004), &(konst_2002));\
}else {bit_vector_clear(&konst_2003);\
konst_2003.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_2004), &(konst_2003));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError), &(MUX_2004));\
;

#define _command_generator_assign_stmt_2010_c_macro_ __declare_static_bit_vector(slice_2009,7);\
bit_vector_slice(&(response__new_responsebits), &(slice_2009), 1);\
bit_vector_cast_to_bit_vector(0, &(checkit), &(slice_2009));\
;

#define _command_generator_stmt_2014_c_macro_ uint32_t _command_generator_stmt_2014_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]r1crc>\t%s\n",_command_generator_stmt_2014_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2014_c_macro___print_counter,"CommandCRCError");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(CommandCRCError)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2014_c_macro___print_counter,"R1_6_7CRC");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(R1_6_7CRC)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2014_c_macro___print_counter,"checkit");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(checkit)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_2029_c_macro_ __declare_static_bit_vector(konst_2023,32);\
bit_vector_clear(&konst_2023);\
konst_2023.val.byte_array[0] = 15;\
__declare_static_bit_vector(slice_2025,6);\
__declare_static_bit_vector(slice_2027,6);\
__declare_static_bit_vector(EQ_u6_u1_2028,1);\
bit_vector_clear(&konst_2023);\
konst_2023.val.byte_array[0] = 15;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2023)])), &(slice_2025), 0);\
bit_vector_slice(&(response__new_responsebits), &(slice_2027), 40);\
bit_vector_equal(0, &(slice_2025), &(slice_2027), &(EQ_u6_u1_2028));\
bit_vector_cast_to_bit_vector(0, &(commandIndexCheck), &(EQ_u6_u1_2028));\
;

#define _command_generator_assign_stmt_2035_c_macro_ __declare_static_bit_vector(konst_2032,8);\
bit_vector_clear(&konst_2032);\
__declare_static_bit_vector(konst_2033,8);\
bit_vector_clear(&konst_2033);\
konst_2033.val.byte_array[0] = 8;\
__declare_static_bit_vector(MUX_2034,8);\
if (has_undefined_bit(&commandIndexCheck)) {fprintf(stderr, "Error: variable commandIndexCheck has undefined value (%s) at test point.\n", to_string(&commandIndexCheck));assert(0);} \
if(bit_vector_to_uint64(0, &commandIndexCheck)){bit_vector_clear(&konst_2032);\
bit_vector_cast_to_bit_vector(0, &(MUX_2034), &(konst_2032));\
}else {bit_vector_clear(&konst_2033);\
konst_2033.val.byte_array[0] = 8;\
bit_vector_cast_to_bit_vector(0, &(MUX_2034), &(konst_2033));\
}bit_vector_cast_to_bit_vector(0, &(CommandIndexError), &(MUX_2034));\
;

#define _command_generator_assign_stmt_2041_c_macro_ __declare_static_bit_vector(slice_2040,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2040), 32);\
__declare_static_bit_vector(konst_2037,32);\
bit_vector_clear(&konst_2037);\
konst_2037.val.byte_array[0] = 19;\
bit_vector_clear(&konst_2037);\
konst_2037.val.byte_array[0] = 19;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2037)])), &(slice_2040));\
;

#define _command_generator_assign_stmt_2046_c_macro_ __declare_static_bit_vector(slice_2045,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2045), 24);\
__declare_static_bit_vector(konst_2042,32);\
bit_vector_clear(&konst_2042);\
konst_2042.val.byte_array[0] = 18;\
bit_vector_clear(&konst_2042);\
konst_2042.val.byte_array[0] = 18;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2042)])), &(slice_2045));\
;

#define _command_generator_assign_stmt_2051_c_macro_ __declare_static_bit_vector(slice_2050,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2050), 16);\
__declare_static_bit_vector(konst_2047,32);\
bit_vector_clear(&konst_2047);\
konst_2047.val.byte_array[0] = 17;\
bit_vector_clear(&konst_2047);\
konst_2047.val.byte_array[0] = 17;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2047)])), &(slice_2050));\
;

#define _command_generator_assign_stmt_2056_c_macro_ __declare_static_bit_vector(slice_2055,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2055), 8);\
__declare_static_bit_vector(konst_2052,32);\
bit_vector_clear(&konst_2052);\
konst_2052.val.byte_array[0] = 16;\
bit_vector_clear(&konst_2052);\
konst_2052.val.byte_array[0] = 16;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2052)])), &(slice_2055));\
;

#define _command_generator_assign_stmt_2064_c_macro_ __declare_static_bit_vector(konst_2058,32);\
bit_vector_clear(&konst_2058);\
konst_2058.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2060,8);\
bit_vector_clear(&konst_2060);\
konst_2060.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2061,8);\
__declare_static_bit_vector(konst_2062,8);\
bit_vector_clear(&konst_2062);\
konst_2062.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2063,8);\
bit_vector_clear(&konst_2058);\
konst_2058.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2060);\
konst_2060.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2058)])), &(konst_2060), &(LSHR_u8_u8_2061));\
bit_vector_clear(&konst_2062);\
konst_2062.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2061), &(konst_2062), &(SHL_u8_u8_2063));\
bit_vector_cast_to_bit_vector(0, &(presentState2), &(SHL_u8_u8_2063));\
;

#define _command_generator_assign_stmt_2068_c_macro_ __declare_static_bit_vector(konst_2066,32);\
bit_vector_clear(&konst_2066);\
konst_2066.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2066);\
konst_2066.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt2), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2066)])));\
;

#define _command_generator_assign_stmt_2072_c_macro_ __declare_static_bit_vector(konst_2069,32);\
bit_vector_clear(&konst_2069);\
konst_2069.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2069);\
konst_2069.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2069)])), &(presentState2));\
;

#define _command_generator_assign_stmt_2081_c_macro_ __declare_static_bit_vector(konst_2075,48);\
bit_vector_clear(&konst_2075);\
__declare_static_bit_vector(BITSEL_u48_u1_2076,1);\
__declare_static_bit_vector(konst_2078,8);\
bit_vector_clear(&konst_2078);\
konst_2078.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_2079,8);\
bit_vector_clear(&type_cast_2079);\
type_cast_2079.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_2080,8);\
bit_vector_clear(&konst_2075);\
bit_vector_bitsel( &(response__new_responsebits), &(konst_2075), &(BITSEL_u48_u1_2076));\
if (has_undefined_bit(&BITSEL_u48_u1_2076)) {fprintf(stderr, "Error: variable BITSEL_u48_u1_2076 has undefined value (%s) at test point.\n", to_string(&BITSEL_u48_u1_2076));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u48_u1_2076)){bit_vector_cast_to_bit_vector(0, &(MUX_2080), &(ZERO_8));\
}else {bit_vector_clear(&konst_2078);\
konst_2078.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2079), &(konst_2078));\
bit_vector_cast_to_bit_vector(0, &(MUX_2080), &(type_cast_2079));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError), &(MUX_2080));\
;

#define _command_generator_assign_stmt_2086_c_macro_ __declare_static_bit_vector(konst_2084,8);\
bit_vector_clear(&konst_2084);\
konst_2084.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2085,8);\
bit_vector_clear(&konst_2084);\
konst_2084.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt2), &(konst_2084), &(OR_u8_u8_2085));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_2), &(OR_u8_u8_2085));\
;

#define _command_generator_assign_stmt_2093_c_macro_ __declare_static_bit_vector(OR_u8_u8_2090,8);\
__declare_static_bit_vector(OR_u8_u8_2092,8);\
bit_vector_or(&(CommandIndexError), &(CommandCRCError), &(OR_u8_u8_2090));\
bit_vector_or(&(OR_u8_u8_2090), &(commandEndBitError), &(OR_u8_u8_2092));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_2), &(OR_u8_u8_2092));\
;

#define _command_generator_branch_block_stmt_2100_c_export_decl_macro_ __declare_static_bit_vector(bigResponse__new_bigresponsebits,136);\
__declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_bigresponsebits,136);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bigresponsebit,1);\
__declare_static_bit_vector(bigresponsebits,136);\
__declare_static_bit_vector(new_bigresponsebits,136);\


#define _command_generator_merge_stmt_2101_c_preamble_macro_ uint8_t merge_stmt_2101_entry_flag;\
merge_stmt_2101_entry_flag = 1;\
uint8_t bigresponseloopback_2100_flag = 0;\
goto merge_stmt_2101_run;\
bigresponseloopback_2100: bigresponseloopback_2100_flag = 1;\
goto merge_stmt_2101_run;\
merge_stmt_2101_run: ;\

#define _command_generator_phi_stmt_2102_c_macro_ __declare_static_bit_vector(konst_2104,8);\
bit_vector_clear(&konst_2104);\
__declare_static_bit_vector(type_cast_2105,8);\
bit_vector_clear(&type_cast_2105);\
if(bigresponseloopback_2100_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_2104,8);\
bit_vector_clear(&konst_2104);\
__declare_static_bit_vector(type_cast_2105,8);\
bit_vector_clear(&type_cast_2105);\
bit_vector_clear(&konst_2104);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2105), &(konst_2104));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_2105));\
}\
;

#define _command_generator_phi_stmt_2107_c_macro_ __declare_static_bit_vector(konst_2110,136);\
bit_vector_clear(&konst_2110);\
__declare_static_bit_vector(type_cast_2111,136);\
bit_vector_clear(&type_cast_2111);\
if(bigresponseloopback_2100_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(new_bigresponsebits));\
}\
else {\
__declare_static_bit_vector(konst_2110,136);\
bit_vector_clear(&konst_2110);\
__declare_static_bit_vector(type_cast_2111,136);\
bit_vector_clear(&type_cast_2111);\
bit_vector_clear(&konst_2110);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2111), &(konst_2110));\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(type_cast_2111));\
}\
;
;

#define _command_generator_merge_stmt_2101_c_postamble_macro_ bigresponseloopback_2100_flag = 0;\
merge_stmt_2101_entry_flag = 0;

#define _command_generator_assign_stmt_2118_c_macro_ __declare_static_bit_vector(konst_2116,8);\
bit_vector_clear(&konst_2116);\
konst_2116.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_2117,8);\
bit_vector_clear(&konst_2116);\
konst_2116.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_2116), &(ADD_u8_u8_2117));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_2117));\
;

#define _command_generator_assign_stmt_2121_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_2120,1);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_2120));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebit), &(RPIPE_responseRx_2120));\
;

#define _command_generator_assign_stmt_2128_c_macro_ __declare_static_bit_vector(konst_2124,135);\
bit_vector_clear(&konst_2124);\
__declare_static_bit_vector(type_cast_2125,135);\
bit_vector_clear(&type_cast_2125);\
__declare_static_bit_vector(CONCAT_u135_u136_2127,136);\
bit_vector_clear(&konst_2124);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2125), &(konst_2124));\
bit_vector_concatenate( &(type_cast_2125), &(bigresponsebit), &(CONCAT_u135_u136_2127));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebits), &(CONCAT_u135_u136_2127));\
;

#define _command_generator_assign_stmt_2135_c_macro_ __declare_static_bit_vector(konst_2131,136);\
bit_vector_clear(&konst_2131);\
konst_2131.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u136_u136_2132,136);\
__declare_static_bit_vector(OR_u136_u136_2134,136);\
bit_vector_clear(&konst_2131);\
konst_2131.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_bigresponsebits), &(konst_2131), &(SHL_u136_u136_2132));\
bit_vector_or(&(SHL_u136_u136_2132), &(bigresponsebits), &(OR_u136_u136_2134));\
bit_vector_cast_to_bit_vector(0, &(new_bigresponsebits), &(OR_u136_u136_2134));\
;
;

#define _command_generator_branch_block_stmt_2100_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(bigResponse__new_bigresponsebits), &(new_bigresponsebits));\
;

#define _command_generator_stmt_2144_c_macro_ uint32_t _command_generator_stmt_2144_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_2144_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_2144_c_macro___print_counter,"bigResponse");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(bigResponse__new_bigresponsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_2148_c_macro_ __declare_static_bit_vector(slice_2147,120);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_2147), 8);\
bit_vector_cast_to_bit_vector(0, &(CID), &(slice_2147));\
;

#define _command_generator_assign_stmt_2152_c_macro_ __declare_static_bit_vector(slice_2151,7);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_2151), 1);\
bit_vector_cast_to_bit_vector(0, &(CID_CRC), &(slice_2151));\
;

#define _command_generator_call_stmt_2162_c_macro_ _generate_crc_7_120_( &(CID), &(R2_CRC));\
;

#define _command_generator_assign_stmt_2170_c_macro_ __declare_static_bit_vector(EQ_u7_u1_2166,1);\
__declare_static_bit_vector(konst_2167,8);\
bit_vector_clear(&konst_2167);\
__declare_static_bit_vector(konst_2168,8);\
bit_vector_clear(&konst_2168);\
konst_2168.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2169,8);\
bit_vector_equal(0, &(crc7), &(R2_CRC), &(EQ_u7_u1_2166));\
if (has_undefined_bit(&EQ_u7_u1_2166)) {fprintf(stderr, "Error: variable EQ_u7_u1_2166 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_2166));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_2166)){bit_vector_clear(&konst_2167);\
bit_vector_cast_to_bit_vector(0, &(MUX_2169), &(konst_2167));\
}else {bit_vector_clear(&konst_2168);\
konst_2168.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_2169), &(konst_2168));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError1), &(MUX_2169));\
;

#define _command_generator_assign_stmt_2180_c_macro_ __declare_static_bit_vector(konst_2174,136);\
bit_vector_clear(&konst_2174);\
__declare_static_bit_vector(BITSEL_u136_u1_2175,1);\
__declare_static_bit_vector(konst_2177,8);\
bit_vector_clear(&konst_2177);\
konst_2177.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_2178,8);\
bit_vector_clear(&type_cast_2178);\
type_cast_2178.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_2179,8);\
bit_vector_clear(&konst_2174);\
bit_vector_bitsel( &(bigResponse__new_bigresponsebits), &(konst_2174), &(BITSEL_u136_u1_2175));\
if (has_undefined_bit(&BITSEL_u136_u1_2175)) {fprintf(stderr, "Error: variable BITSEL_u136_u1_2175 has undefined value (%s) at test point.\n", to_string(&BITSEL_u136_u1_2175));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u136_u1_2175)){bit_vector_cast_to_bit_vector(0, &(MUX_2179), &(ZERO_8));\
}else {bit_vector_clear(&konst_2177);\
konst_2177.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2178), &(konst_2177));\
bit_vector_cast_to_bit_vector(0, &(MUX_2179), &(type_cast_2178));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError1), &(MUX_2179));\
;

#define _command_generator_assign_stmt_2185_c_macro_ __declare_static_bit_vector(OR_u8_u8_2184,8);\
bit_vector_or(&(CommandCRCError1), &(commandEndBitError1), &(OR_u8_u8_2184));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_3), &(OR_u8_u8_2184));\
;

#define _command_generator_call_stmt_2187_c_macro_ _bigResponseWrite_( &(CID));\
;

#define _command_generator_assign_stmt_2195_c_macro_ __declare_static_bit_vector(konst_2189,32);\
bit_vector_clear(&konst_2189);\
konst_2189.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2191,8);\
bit_vector_clear(&konst_2191);\
konst_2191.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2192,8);\
__declare_static_bit_vector(konst_2193,8);\
bit_vector_clear(&konst_2193);\
konst_2193.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2194,8);\
bit_vector_clear(&konst_2189);\
konst_2189.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2191);\
konst_2191.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2189)])), &(konst_2191), &(LSHR_u8_u8_2192));\
bit_vector_clear(&konst_2193);\
konst_2193.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2192), &(konst_2193), &(SHL_u8_u8_2194));\
bit_vector_cast_to_bit_vector(0, &(presentState3), &(SHL_u8_u8_2194));\
;

#define _command_generator_assign_stmt_2199_c_macro_ __declare_static_bit_vector(konst_2197,32);\
bit_vector_clear(&konst_2197);\
konst_2197.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2197);\
konst_2197.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt3), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2197)])));\
;

#define _command_generator_assign_stmt_2203_c_macro_ __declare_static_bit_vector(konst_2200,32);\
bit_vector_clear(&konst_2200);\
konst_2200.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2200);\
konst_2200.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2200)])), &(presentState3));\
;

#define _command_generator_assign_stmt_2208_c_macro_ __declare_static_bit_vector(konst_2206,8);\
bit_vector_clear(&konst_2206);\
konst_2206.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2207,8);\
bit_vector_clear(&konst_2206);\
konst_2206.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt3), &(konst_2206), &(OR_u8_u8_2207));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_3), &(OR_u8_u8_2207));\
;

#define _command_generator_assign_stmt_2222_c_macro_ __declare_static_bit_vector(konst_2216,32);\
bit_vector_clear(&konst_2216);\
konst_2216.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2218,8);\
bit_vector_clear(&konst_2218);\
konst_2218.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2219,8);\
__declare_static_bit_vector(konst_2220,8);\
bit_vector_clear(&konst_2220);\
konst_2220.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2221,8);\
bit_vector_clear(&konst_2216);\
konst_2216.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2218);\
konst_2218.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2216)])), &(konst_2218), &(LSHR_u8_u8_2219));\
bit_vector_clear(&konst_2220);\
konst_2220.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2219), &(konst_2220), &(SHL_u8_u8_2221));\
bit_vector_cast_to_bit_vector(0, &(presentState1), &(SHL_u8_u8_2221));\
;

#define _command_generator_assign_stmt_2226_c_macro_ __declare_static_bit_vector(konst_2224,32);\
bit_vector_clear(&konst_2224);\
konst_2224.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2224);\
konst_2224.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt1), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2224)])));\
;

#define _command_generator_assign_stmt_2230_c_macro_ __declare_static_bit_vector(konst_2227,32);\
bit_vector_clear(&konst_2227);\
konst_2227.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2227);\
konst_2227.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2227)])), &(presentState1));\
;

#define _command_generator_assign_stmt_2235_c_macro_ __declare_static_bit_vector(konst_2233,8);\
bit_vector_clear(&konst_2233);\
konst_2233.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2234,8);\
bit_vector_clear(&konst_2233);\
konst_2233.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt1), &(konst_2233), &(OR_u8_u8_2234));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_1), &(OR_u8_u8_2234));\
;

#define _command_generator_assign_stmt_2238_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_1), &(ZERO_8));\
;

#define _command_generator_merge_stmt_2243_c_preamble_macro_ uint8_t merge_stmt_2243_entry_flag;\
merge_stmt_2243_entry_flag = 1;\
uint8_t normalInterruptResponse1_1780_flag = 0;\
uint8_t normalInterruptResponse2_1780_flag = 0;\
uint8_t normalInterruptResponse3_1780_flag = 0;\
goto merge_stmt_2243_run;\
normalInterruptResponse1_1780: normalInterruptResponse1_1780_flag = 1;\
normalInterruptResponse2_1780_flag = 0;\
normalInterruptResponse3_1780_flag = 0;\
goto merge_stmt_2243_run;\
normalInterruptResponse2_1780: normalInterruptResponse2_1780_flag = 1;\
normalInterruptResponse1_1780_flag = 0;\
normalInterruptResponse3_1780_flag = 0;\
goto merge_stmt_2243_run;\
normalInterruptResponse3_1780: normalInterruptResponse3_1780_flag = 1;\
normalInterruptResponse1_1780_flag = 0;\
normalInterruptResponse2_1780_flag = 0;\
goto merge_stmt_2243_run;\
merge_stmt_2243_run: ;\

#define _command_generator_phi_stmt_2244_c_macro_ if(normalInterruptResponse1_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_3));\
}\
;

#define _command_generator_phi_stmt_2249_c_macro_ if(normalInterruptResponse1_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1780_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_3));\
}\
;
;

#define _command_generator_merge_stmt_2243_c_postamble_macro_ normalInterruptResponse1_1780_flag = 0;\
normalInterruptResponse2_1780_flag = 0;\
normalInterruptResponse3_1780_flag = 0;\
merge_stmt_2243_entry_flag = 0;

#define _command_generator_assign_stmt_2273_c_macro_ __declare_static_bit_vector(konst_2268,32);\
bit_vector_clear(&konst_2268);\
konst_2268.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_2270,8);\
bit_vector_clear(&konst_2270);\
konst_2270.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_2271,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_2272,1);\
bit_vector_clear(&konst_2268);\
konst_2268.val.byte_array[0] = 12;\
bit_vector_clear(&konst_2270);\
konst_2270.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2268)])), &(konst_2270), &(AND_u8_u8_2271));\
bit_vector_reduce_or( &(AND_u8_u8_2271), &(BITREDUCEOR_u8_u1_2272));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_2272));\
;

#define _command_generator_call_stmt_2276_c_macro_ _dataRx_( &(singleMultipleReadBlock), &(dataErrorInterruptStatusVar1));\
;

#define _command_generator_assign_stmt_2279_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ONE_1));\
;

#define _command_generator_assign_stmt_2282_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _command_generator_assign_stmt_2289_c_macro_ __declare_static_bit_vector(konst_2285,8);\
bit_vector_clear(&konst_2285);\
konst_2285.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2286,8);\
bit_vector_clear(&type_cast_2286);\
type_cast_2286.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2288,8);\
if (has_undefined_bit(&singleMultipleReadBlock)) {fprintf(stderr, "Error: variable singleMultipleReadBlock has undefined value (%s) at test point.\n", to_string(&singleMultipleReadBlock));assert(0);} \
if(bit_vector_to_uint64(0, &singleMultipleReadBlock)){bit_vector_clear(&konst_2285);\
konst_2285.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2286), &(konst_2285));\
bit_vector_cast_to_bit_vector(0, &(MUX_2288), &(type_cast_2286));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2288), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(transferCompleteData), &(MUX_2288));\
;

#define _command_generator_assign_stmt_2300_c_macro_ __declare_static_bit_vector(konst_2295,32);\
bit_vector_clear(&konst_2295);\
konst_2295.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_2297,32);\
bit_vector_clear(&konst_2297);\
konst_2297.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_2299,16);\
bit_vector_clear(&konst_2295);\
konst_2295.val.byte_array[0] = 7;\
bit_vector_clear(&konst_2297);\
konst_2297.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2295)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2297)])), &(CONCAT_u8_u16_2299));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_2299));\
;

#define _command_generator_assign_stmt_2305_c_macro_ __declare_static_bit_vector(konst_2303,16);\
bit_vector_clear(&konst_2303);\
konst_2303.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_2304,16);\
bit_vector_clear(&konst_2303);\
konst_2303.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_2303), &(SUB_u16_u16_2304));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_2304));\
;

#define _command_generator_assign_stmt_2310_c_macro_ __declare_static_bit_vector(slice_2309,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_2309), 8);\
__declare_static_bit_vector(konst_2306,32);\
bit_vector_clear(&konst_2306);\
konst_2306.val.byte_array[0] = 7;\
bit_vector_clear(&konst_2306);\
konst_2306.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2306)])), &(slice_2309));\
;

#define _command_generator_assign_stmt_2315_c_macro_ __declare_static_bit_vector(slice_2314,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_2314), 0);\
__declare_static_bit_vector(konst_2311,32);\
bit_vector_clear(&konst_2311);\
konst_2311.val.byte_array[0] = 6;\
bit_vector_clear(&konst_2311);\
konst_2311.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2311)])), &(slice_2314));\
;

#define _command_generator_assign_stmt_2326_c_macro_ __declare_static_bit_vector(konst_2320,2);\
bit_vector_clear(&konst_2320);\
konst_2320.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_2321,1);\
__declare_static_bit_vector(konst_2322,8);\
bit_vector_clear(&konst_2322);\
konst_2322.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2323,8);\
bit_vector_clear(&type_cast_2323);\
type_cast_2323.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2325,8);\
bit_vector_clear(&konst_2320);\
konst_2320.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_2320), &(EQ_u2_u1_2321));\
if (has_undefined_bit(&EQ_u2_u1_2321)) {fprintf(stderr, "Error: variable EQ_u2_u1_2321 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2321));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u2_u1_2321)){bit_vector_clear(&konst_2322);\
konst_2322.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2323), &(konst_2322));\
bit_vector_cast_to_bit_vector(0, &(MUX_2325), &(type_cast_2323));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2325), &(transferCompleteData));\
}bit_vector_cast_to_bit_vector(0, &(dataTransferComplete), &(MUX_2325));\
;

#define _command_generator_assign_stmt_2330_c_macro_ bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar2), &(ZERO_8));\
;

#define _command_generator_assign_stmt_2333_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar2), &(ZERO_8));\
;
;

#define _command_generator_branch_block_stmt_1780_c_export_apply_macro_ ;

#define _command_generator_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pnormalInterruptStatusVar1)), &(normalInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__pnormalInterruptStatusVar2)), &(normalInterruptStatusVar2));\
bit_vector_cast_to_bit_vector(0, &((*__perrorInterruptStatusVar1)), &(errorInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__perrorInterruptStatusVar2)), &(errorInterruptStatusVar2));\
bit_vector_cast_to_bit_vector(0, &((*__pdataErrorInterruptStatusVar1)), &(dataErrorInterruptStatusVar1));\
bit_vector_cast_to_bit_vector(0, &((*__pdataTransferComplete)), &(dataTransferComplete));\
;

#define _command_generator_outer_arg_decl_macro__ __declare_static_bit_vector(__normalInterruptStatusVar1, 8);\
__declare_static_bit_vector(__normalInterruptStatusVar2, 8);\
__declare_static_bit_vector(__errorInterruptStatusVar1, 8);\
__declare_static_bit_vector(__errorInterruptStatusVar2, 8);\
__declare_static_bit_vector(__dataErrorInterruptStatusVar1, 8);\
__declare_static_bit_vector(__dataTransferComplete, 8);\
;

#define _command_generator_outer_op_xfer_macro__  *normalInterruptStatusVar1 =  bit_vector_to_uint64(0, &__normalInterruptStatusVar1);\
 *normalInterruptStatusVar2 =  bit_vector_to_uint64(0, &__normalInterruptStatusVar2);\
 *errorInterruptStatusVar1 =  bit_vector_to_uint64(0, &__errorInterruptStatusVar1);\
 *errorInterruptStatusVar2 =  bit_vector_to_uint64(0, &__errorInterruptStatusVar2);\
 *dataErrorInterruptStatusVar1 =  bit_vector_to_uint64(0, &__dataErrorInterruptStatusVar1);\
 *dataTransferComplete =  bit_vector_to_uint64(0, &__dataTransferComplete);\
;

#define _dataRx_inner_inarg_prep_macro__ __declare_static_bit_vector(singleMultipleReadBlock,1);\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &((*__psingleMultipleReadBlock)));\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\

#define _dataRx_branch_block_stmt_545_c_export_decl_macro_ __declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(startBit0,1);\
__declare_static_bit_vector(K_0,5);\
__declare_static_bit_vector(currentCRC_0,16);\
__declare_static_bit_vector(nextCRC_0,16);\
__declare_static_bit_vector(next_K_0,5);\
__declare_static_bit_vector(stopBit0,1);\
__declare_static_bit_vector(stopBitError0,1);\
__declare_static_bit_vector(J_0,13);\
__declare_static_bit_vector(CRC_16_0,16);\
__declare_static_bit_vector(tempData0,1024);\
__declare_static_bit_vector(inv0,1);\
__declare_static_bit_vector(nextCRC16_0,16);\
__declare_static_bit_vector(nextTempData0,1024);\
__declare_static_bit_vector(next_J_0,13);\
__declare_static_bit_vector(crcError0,1);\
__declare_static_bit_vector(startBit1,1);\
__declare_static_bit_vector(K_1,5);\
__declare_static_bit_vector(currentCRC_1,16);\
__declare_static_bit_vector(nextCRC_1,16);\
__declare_static_bit_vector(next_K_1,5);\
__declare_static_bit_vector(stopBit1,1);\
__declare_static_bit_vector(stopBitError1,1);\
__declare_static_bit_vector(J_1,13);\
__declare_static_bit_vector(CRC_16_1,16);\
__declare_static_bit_vector(tempData1,1024);\
__declare_static_bit_vector(inv1,1);\
__declare_static_bit_vector(nextCRC16_1,16);\
__declare_static_bit_vector(nextTempData1,1024);\
__declare_static_bit_vector(next_J_1,13);\
__declare_static_bit_vector(crcError1,1);\
__declare_static_bit_vector(startBit2,1);\
__declare_static_bit_vector(K_2,5);\
__declare_static_bit_vector(currentCRC_2,16);\
__declare_static_bit_vector(nextCRC_2,16);\
__declare_static_bit_vector(next_K_2,5);\
__declare_static_bit_vector(stopBit2,1);\
__declare_static_bit_vector(stopBitError2,1);\
__declare_static_bit_vector(J_2,13);\
__declare_static_bit_vector(CRC_16_2,16);\
__declare_static_bit_vector(tempData2,1024);\
__declare_static_bit_vector(inv2,1);\
__declare_static_bit_vector(nextCRC16_2,16);\
__declare_static_bit_vector(nextTempData2,1024);\
__declare_static_bit_vector(next_J_2,13);\
__declare_static_bit_vector(crcError2,1);\
__declare_static_bit_vector(startBit3,1);\
__declare_static_bit_vector(K_3,5);\
__declare_static_bit_vector(currentCRC_3,16);\
__declare_static_bit_vector(nextCRC_3,16);\
__declare_static_bit_vector(next_K_3,5);\
__declare_static_bit_vector(stopBit3,1);\
__declare_static_bit_vector(stopBitError3,1);\
__declare_static_bit_vector(J_3,13);\
__declare_static_bit_vector(CRC_16_3,16);\
__declare_static_bit_vector(tempData3,1024);\
__declare_static_bit_vector(inv3,1);\
__declare_static_bit_vector(nextCRC16_3,16);\
__declare_static_bit_vector(nextTempData3,1024);\
__declare_static_bit_vector(next_J_3,13);\
__declare_static_bit_vector(crcError3,1);\
__declare_static_bit_vector(B,10);\
__declare_static_bit_vector(dataForBuffer0,1024);\
__declare_static_bit_vector(dataForBuffer1,1024);\
__declare_static_bit_vector(dataForBuffer2,1024);\
__declare_static_bit_vector(dataForBuffer3,1024);\
__declare_static_bit_vector(biff,8);\
__declare_static_bit_vector(nextDataForBuffer0,1024);\
__declare_static_bit_vector(nextDataForBuffer1,1024);\
__declare_static_bit_vector(nextDataForBuffer2,1024);\
__declare_static_bit_vector(nextDataForBuffer3,1024);\
__declare_static_bit_vector(next_B,10);\
__declare_static_bit_vector(stopBitError_Final,1);\
__declare_static_bit_vector(crcError_Final,1);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1_4,8);\
__declare_static_bit_vector(startBit,1);\
__declare_static_bit_vector(K,5);\
__declare_static_bit_vector(currentCRC,16);\
__declare_static_bit_vector(nextCRC,16);\
__declare_static_bit_vector(next_K,5);\
__declare_static_bit_vector(stopBit,1);\
__declare_static_bit_vector(stopBitError,1);\
__declare_static_bit_vector(J,13);\
__declare_static_bit_vector(CRC_16,16);\
__declare_static_bit_vector(tempData,4096);\
__declare_static_bit_vector(inv,1);\
__declare_static_bit_vector(nextCRC16,16);\
__declare_static_bit_vector(nextTempData,4096);\
__declare_static_bit_vector(next_J,13);\
__declare_static_bit_vector(crcError,1);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1_0,8);\


#define _dataRx_assign_stmt_549_c_macro_ __declare_static_bit_vector(konst_547,32);\
bit_vector_clear(&konst_547);\
konst_547.val.byte_array[0] = 37;\
bit_vector_clear(&konst_547);\
konst_547.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_547)])));\
;

#define _dataRx_assign_stmt_553_c_macro_ __declare_static_bit_vector(konst_551,32);\
bit_vector_clear(&konst_551);\
konst_551.val.byte_array[0] = 36;\
bit_vector_clear(&konst_551);\
konst_551.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_551)])));\
;

#define _dataRx_assign_stmt_561_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_560,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_560));\
bit_vector_cast_to_bit_vector(0, &(startBit0), &(RPIPE_DAT0Rx_560));\
;

#define _dataRx_branch_block_stmt_562_c_export_decl_macro_ __declare_static_bit_vector(dat0__next_data0,1024);\
__declare_static_bit_vector(I_0,10);\
__declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(bit7_0,1);\
__declare_static_bit_vector(bit6_0,1);\
__declare_static_bit_vector(bit5_0,1);\
__declare_static_bit_vector(bit4_0,1);\
__declare_static_bit_vector(bit3_0,1);\
__declare_static_bit_vector(bit2_0,1);\
__declare_static_bit_vector(bit1_0,1);\
__declare_static_bit_vector(bit0_0,1);\
__declare_static_bit_vector(next_data0,1024);\
__declare_static_bit_vector(next_I_0,10);\


#define _dataRx_merge_stmt_563_c_preamble_macro_ uint8_t merge_stmt_563_entry_flag;\
merge_stmt_563_entry_flag = 1;\
uint8_t loopback4_0_562_flag = 0;\
goto merge_stmt_563_run;\
loopback4_0_562: loopback4_0_562_flag = 1;\
goto merge_stmt_563_run;\
merge_stmt_563_run: ;\

#define _dataRx_phi_stmt_564_c_macro_ __declare_static_bit_vector(konst_566,10);\
bit_vector_clear(&konst_566);\
__declare_static_bit_vector(type_cast_567,10);\
bit_vector_clear(&type_cast_567);\
if(loopback4_0_562_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_0), &(next_I_0));\
}\
else {\
__declare_static_bit_vector(konst_566,10);\
bit_vector_clear(&konst_566);\
__declare_static_bit_vector(type_cast_567,10);\
bit_vector_clear(&type_cast_567);\
bit_vector_clear(&konst_566);\
bit_vector_bitcast_to_bit_vector( &(type_cast_567), &(konst_566));\
bit_vector_cast_to_bit_vector(0, &(I_0), &(type_cast_567));\
}\
;

#define _dataRx_phi_stmt_569_c_macro_ __declare_static_bit_vector(konst_572,1024);\
bit_vector_clear(&konst_572);\
__declare_static_bit_vector(type_cast_573,1024);\
bit_vector_clear(&type_cast_573);\
if(loopback4_0_562_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0), &(next_data0));\
}\
else {\
__declare_static_bit_vector(konst_572,1024);\
bit_vector_clear(&konst_572);\
__declare_static_bit_vector(type_cast_573,1024);\
bit_vector_clear(&type_cast_573);\
bit_vector_clear(&konst_572);\
bit_vector_bitcast_to_bit_vector( &(type_cast_573), &(konst_572));\
bit_vector_cast_to_bit_vector(0, &(dat0), &(type_cast_573));\
}\
;
;

#define _dataRx_merge_stmt_563_c_postamble_macro_ loopback4_0_562_flag = 0;\
merge_stmt_563_entry_flag = 0;

#define _dataRx_assign_stmt_578_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_577,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_577));\
bit_vector_cast_to_bit_vector(0, &(bit7_0), &(RPIPE_DAT0Rx_577));\
;

#define _dataRx_assign_stmt_581_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_580,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_580));\
bit_vector_cast_to_bit_vector(0, &(bit6_0), &(RPIPE_DAT0Rx_580));\
;

#define _dataRx_assign_stmt_584_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_583,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_583));\
bit_vector_cast_to_bit_vector(0, &(bit5_0), &(RPIPE_DAT0Rx_583));\
;

#define _dataRx_assign_stmt_587_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_586,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_586));\
bit_vector_cast_to_bit_vector(0, &(bit4_0), &(RPIPE_DAT0Rx_586));\
;

#define _dataRx_assign_stmt_590_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_589,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_589));\
bit_vector_cast_to_bit_vector(0, &(bit3_0), &(RPIPE_DAT0Rx_589));\
;

#define _dataRx_assign_stmt_593_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_592,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_592));\
bit_vector_cast_to_bit_vector(0, &(bit2_0), &(RPIPE_DAT0Rx_592));\
;

#define _dataRx_assign_stmt_596_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_595,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_595));\
bit_vector_cast_to_bit_vector(0, &(bit1_0), &(RPIPE_DAT0Rx_595));\
;

#define _dataRx_assign_stmt_599_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_598,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_598));\
bit_vector_cast_to_bit_vector(0, &(bit0_0), &(RPIPE_DAT0Rx_598));\
;

#define _dataRx_assign_stmt_624_c_macro_ __declare_static_bit_vector(konst_602,1024);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_603,1024);\
__declare_static_bit_vector(konst_605,1016);\
bit_vector_clear(&konst_605);\
__declare_static_bit_vector(type_cast_606,1016);\
bit_vector_clear(&type_cast_606);\
__declare_static_bit_vector(CONCAT_u1_u2_609,2);\
__declare_static_bit_vector(CONCAT_u1_u2_612,2);\
__declare_static_bit_vector(CONCAT_u2_u4_613,4);\
__declare_static_bit_vector(CONCAT_u1_u2_616,2);\
__declare_static_bit_vector(CONCAT_u1_u2_619,2);\
__declare_static_bit_vector(CONCAT_u2_u4_620,4);\
__declare_static_bit_vector(CONCAT_u4_u8_621,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_622,1024);\
__declare_static_bit_vector(OR_u1024_u1024_623,1024);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat0), &(konst_602), &(SHL_u1024_u1024_603));\
bit_vector_clear(&konst_605);\
bit_vector_bitcast_to_bit_vector( &(type_cast_606), &(konst_605));\
bit_vector_concatenate( &(bit7_0), &(bit6_0), &(CONCAT_u1_u2_609));\
bit_vector_concatenate( &(bit5_0), &(bit4_0), &(CONCAT_u1_u2_612));\
bit_vector_concatenate( &(CONCAT_u1_u2_609), &(CONCAT_u1_u2_612), &(CONCAT_u2_u4_613));\
bit_vector_concatenate( &(bit3_0), &(bit2_0), &(CONCAT_u1_u2_616));\
bit_vector_concatenate( &(bit1_0), &(bit0_0), &(CONCAT_u1_u2_619));\
bit_vector_concatenate( &(CONCAT_u1_u2_616), &(CONCAT_u1_u2_619), &(CONCAT_u2_u4_620));\
bit_vector_concatenate( &(CONCAT_u2_u4_613), &(CONCAT_u2_u4_620), &(CONCAT_u4_u8_621));\
bit_vector_concatenate( &(type_cast_606), &(CONCAT_u4_u8_621), &(CONCAT_u1016_u1024_622));\
bit_vector_or(&(SHL_u1024_u1024_603), &(CONCAT_u1016_u1024_622), &(OR_u1024_u1024_623));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1024_u1024_623));\
;

#define _dataRx_assign_stmt_629_c_macro_ __declare_static_bit_vector(konst_627,10);\
bit_vector_clear(&konst_627);\
konst_627.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_628,10);\
bit_vector_clear(&konst_627);\
konst_627.val.byte_array[0] = 1;\
bit_vector_plus( &(I_0), &(konst_627), &(ADD_u10_u10_628));\
bit_vector_cast_to_bit_vector(0, &(next_I_0), &(ADD_u10_u10_628));\
;
;

#define _dataRx_branch_block_stmt_562_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__next_data0), &(next_data0));\
;

#define _dataRx_merge_stmt_637_c_preamble_macro_ uint8_t merge_stmt_637_entry_flag;\
merge_stmt_637_entry_flag = 1;\
uint8_t crcloopback4_0_545_flag = 0;\
goto merge_stmt_637_run;\
crcloopback4_0_545: crcloopback4_0_545_flag = 1;\
goto merge_stmt_637_run;\
merge_stmt_637_run: ;\

#define _dataRx_phi_stmt_638_c_macro_ __declare_static_bit_vector(konst_641,5);\
bit_vector_clear(&konst_641);\
__declare_static_bit_vector(type_cast_642,5);\
bit_vector_clear(&type_cast_642);\
if(crcloopback4_0_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_0), &(next_K_0));\
}\
else {\
__declare_static_bit_vector(konst_641,5);\
bit_vector_clear(&konst_641);\
__declare_static_bit_vector(type_cast_642,5);\
bit_vector_clear(&type_cast_642);\
bit_vector_clear(&konst_641);\
bit_vector_bitcast_to_bit_vector( &(type_cast_642), &(konst_641));\
bit_vector_cast_to_bit_vector(0, &(K_0), &(type_cast_642));\
}\
;

#define _dataRx_phi_stmt_644_c_macro_ __declare_static_bit_vector(konst_646,16);\
bit_vector_clear(&konst_646);\
__declare_static_bit_vector(type_cast_647,16);\
bit_vector_clear(&type_cast_647);\
if(crcloopback4_0_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_0), &(nextCRC_0));\
}\
else {\
__declare_static_bit_vector(konst_646,16);\
bit_vector_clear(&konst_646);\
__declare_static_bit_vector(type_cast_647,16);\
bit_vector_clear(&type_cast_647);\
bit_vector_clear(&konst_646);\
bit_vector_bitcast_to_bit_vector( &(type_cast_647), &(konst_646));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_0), &(type_cast_647));\
}\
;
;

#define _dataRx_merge_stmt_637_c_postamble_macro_ crcloopback4_0_545_flag = 0;\
merge_stmt_637_entry_flag = 0;

#define _dataRx_assign_stmt_660_c_macro_ __declare_static_bit_vector(konst_652,16);\
bit_vector_clear(&konst_652);\
konst_652.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_653,16);\
__declare_static_bit_vector(konst_655,15);\
bit_vector_clear(&konst_655);\
__declare_static_bit_vector(type_cast_656,15);\
bit_vector_clear(&type_cast_656);\
__declare_static_bit_vector(RPIPE_DAT0Rx_657,1);\
__declare_static_bit_vector(CONCAT_u15_u16_658,16);\
__declare_static_bit_vector(OR_u16_u16_659,16);\
bit_vector_clear(&konst_652);\
konst_652.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_0), &(konst_652), &(SHL_u16_u16_653));\
bit_vector_clear(&konst_655);\
bit_vector_bitcast_to_bit_vector( &(type_cast_656), &(konst_655));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_657));\
bit_vector_concatenate( &(type_cast_656), &(RPIPE_DAT0Rx_657), &(CONCAT_u15_u16_658));\
bit_vector_or(&(SHL_u16_u16_653), &(CONCAT_u15_u16_658), &(OR_u16_u16_659));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_0), &(OR_u16_u16_659));\
;

#define _dataRx_assign_stmt_665_c_macro_ __declare_static_bit_vector(konst_663,5);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_664,5);\
bit_vector_clear(&konst_663);\
konst_663.val.byte_array[0] = 1;\
bit_vector_plus( &(K_0), &(konst_663), &(ADD_u5_u5_664));\
bit_vector_cast_to_bit_vector(0, &(next_K_0), &(ADD_u5_u5_664));\
;

#define _dataRx_assign_stmt_674_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_673,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_673));\
bit_vector_cast_to_bit_vector(0, &(stopBit0), &(RPIPE_DAT0Rx_673));\
;

#define _dataRx_assign_stmt_679_c_macro_ __declare_static_bit_vector(konst_677,1);\
bit_vector_clear(&konst_677);\
__declare_static_bit_vector(EQ_u1_u1_678,1);\
bit_vector_clear(&konst_677);\
bit_vector_equal(0, &(stopBit0), &(konst_677), &(EQ_u1_u1_678));\
bit_vector_cast_to_bit_vector(0, &(stopBitError0), &(EQ_u1_u1_678));\
;

#define _dataRx_merge_stmt_680_c_preamble_macro_ uint8_t merge_stmt_680_entry_flag;\
merge_stmt_680_entry_flag = 1;\
uint8_t loopback0_545_flag = 0;\
goto merge_stmt_680_run;\
loopback0_545: loopback0_545_flag = 1;\
goto merge_stmt_680_run;\
merge_stmt_680_run: ;\

#define _dataRx_phi_stmt_681_c_macro_ __declare_static_bit_vector(konst_684,13);\
bit_vector_clear(&konst_684);\
__declare_static_bit_vector(type_cast_685,13);\
bit_vector_clear(&type_cast_685);\
if(loopback0_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_0), &(next_J_0));\
}\
else {\
__declare_static_bit_vector(konst_684,13);\
bit_vector_clear(&konst_684);\
__declare_static_bit_vector(type_cast_685,13);\
bit_vector_clear(&type_cast_685);\
bit_vector_clear(&konst_684);\
bit_vector_bitcast_to_bit_vector( &(type_cast_685), &(konst_684));\
bit_vector_cast_to_bit_vector(0, &(J_0), &(type_cast_685));\
}\
;

#define _dataRx_phi_stmt_687_c_macro_ __declare_static_bit_vector(konst_689,16);\
bit_vector_clear(&konst_689);\
__declare_static_bit_vector(type_cast_690,16);\
bit_vector_clear(&type_cast_690);\
if(loopback0_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(nextCRC16_0));\
}\
else {\
__declare_static_bit_vector(konst_689,16);\
bit_vector_clear(&konst_689);\
__declare_static_bit_vector(type_cast_690,16);\
bit_vector_clear(&type_cast_690);\
bit_vector_clear(&konst_689);\
bit_vector_bitcast_to_bit_vector( &(type_cast_690), &(konst_689));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(type_cast_690));\
}\
;

#define _dataRx_phi_stmt_692_c_macro_ if(loopback0_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(nextTempData0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(dat0__next_data0));\
}\
;
;

#define _dataRx_merge_stmt_680_c_postamble_macro_ loopback0_545_flag = 0;\
merge_stmt_680_entry_flag = 0;

#define _dataRx_assign_stmt_705_c_macro_ __declare_static_bit_vector(konst_699,1024);\
bit_vector_clear(&konst_699);\
konst_699.val.byte_array[0] = 255;\
konst_699.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_700,1);\
__declare_static_bit_vector(konst_702,16);\
bit_vector_clear(&konst_702);\
konst_702.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_703,1);\
__declare_static_bit_vector(XOR_u1_u1_704,1);\
bit_vector_clear(&konst_699);\
konst_699.val.byte_array[0] = 255;\
konst_699.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData0), &(konst_699), &(BITSEL_u1024_u1_700));\
bit_vector_clear(&konst_702);\
konst_702.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_0), &(konst_702), &(BITSEL_u16_u1_703));\
bit_vector_xor(&(BITSEL_u1024_u1_700), &(BITSEL_u16_u1_703), &(XOR_u1_u1_704));\
bit_vector_cast_to_bit_vector(0, &(inv0), &(XOR_u1_u1_704));\
;

#define _dataRx_assign_stmt_731_c_macro_ __declare_static_bit_vector(slice_709,3);\
__declare_static_bit_vector(konst_711,16);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_712,1);\
__declare_static_bit_vector(XOR_u1_u1_714,1);\
__declare_static_bit_vector(CONCAT_u3_u4_715,4);\
__declare_static_bit_vector(slice_717,6);\
__declare_static_bit_vector(CONCAT_u4_u10_718,10);\
__declare_static_bit_vector(konst_720,16);\
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_721,1);\
__declare_static_bit_vector(XOR_u1_u1_723,1);\
__declare_static_bit_vector(slice_726,4);\
__declare_static_bit_vector(CONCAT_u1_u5_727,5);\
__declare_static_bit_vector(CONCAT_u5_u6_729,6);\
__declare_static_bit_vector(CONCAT_u10_u16_730,16);\
bit_vector_slice(&(CRC_16_0), &(slice_709), 12);\
bit_vector_clear(&konst_711);\
konst_711.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_0), &(konst_711), &(BITSEL_u16_u1_712));\
bit_vector_xor(&(BITSEL_u16_u1_712), &(inv0), &(XOR_u1_u1_714));\
bit_vector_concatenate( &(slice_709), &(XOR_u1_u1_714), &(CONCAT_u3_u4_715));\
bit_vector_slice(&(CRC_16_0), &(slice_717), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_715), &(slice_717), &(CONCAT_u4_u10_718));\
bit_vector_clear(&konst_720);\
konst_720.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_0), &(konst_720), &(BITSEL_u16_u1_721));\
bit_vector_xor(&(BITSEL_u16_u1_721), &(inv0), &(XOR_u1_u1_723));\
bit_vector_slice(&(CRC_16_0), &(slice_726), 0);\
bit_vector_concatenate( &(XOR_u1_u1_723), &(slice_726), &(CONCAT_u1_u5_727));\
bit_vector_concatenate( &(CONCAT_u1_u5_727), &(inv0), &(CONCAT_u5_u6_729));\
bit_vector_concatenate( &(CONCAT_u4_u10_718), &(CONCAT_u5_u6_729), &(CONCAT_u10_u16_730));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_0), &(CONCAT_u10_u16_730));\
;

#define _dataRx_assign_stmt_736_c_macro_ __declare_static_bit_vector(konst_734,1024);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_735,1024);\
bit_vector_clear(&konst_734);\
konst_734.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData0), &(konst_734), &(SHL_u1024_u1024_735));\
bit_vector_cast_to_bit_vector(0, &(nextTempData0), &(SHL_u1024_u1024_735));\
;

#define _dataRx_assign_stmt_741_c_macro_ __declare_static_bit_vector(konst_739,13);\
bit_vector_clear(&konst_739);\
konst_739.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_740,13);\
bit_vector_clear(&konst_739);\
konst_739.val.byte_array[0] = 1;\
bit_vector_plus( &(J_0), &(konst_739), &(ADD_u13_u13_740));\
bit_vector_cast_to_bit_vector(0, &(next_J_0), &(ADD_u13_u13_740));\
;

#define _dataRx_assign_stmt_752_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_751,1);\
bit_vector_not_equal(0, &(nextCRC_0), &(nextCRC16_0), &NEQ_u16_u1_751);\
bit_vector_cast_to_bit_vector(0, &(crcError0), &(NEQ_u16_u1_751));\
;

#define _dataRx_assign_stmt_755_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_754,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_754));\
bit_vector_cast_to_bit_vector(0, &(startBit1), &(RPIPE_DAT1Rx_754));\
;

#define _dataRx_branch_block_stmt_756_c_export_decl_macro_ __declare_static_bit_vector(dat1__next_data1,1024);\
__declare_static_bit_vector(I_1,10);\
__declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(bit7_1,1);\
__declare_static_bit_vector(bit6_1,1);\
__declare_static_bit_vector(bit5_1,1);\
__declare_static_bit_vector(bit4_1,1);\
__declare_static_bit_vector(bit3_1,1);\
__declare_static_bit_vector(bit2_1,1);\
__declare_static_bit_vector(bit1_1,1);\
__declare_static_bit_vector(bit0_1,1);\
__declare_static_bit_vector(next_data1,1024);\
__declare_static_bit_vector(next_I_1,10);\


#define _dataRx_merge_stmt_757_c_preamble_macro_ uint8_t merge_stmt_757_entry_flag;\
merge_stmt_757_entry_flag = 1;\
uint8_t loopback4_1_756_flag = 0;\
goto merge_stmt_757_run;\
loopback4_1_756: loopback4_1_756_flag = 1;\
goto merge_stmt_757_run;\
merge_stmt_757_run: ;\

#define _dataRx_phi_stmt_758_c_macro_ __declare_static_bit_vector(konst_760,10);\
bit_vector_clear(&konst_760);\
__declare_static_bit_vector(type_cast_761,10);\
bit_vector_clear(&type_cast_761);\
if(loopback4_1_756_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_1), &(next_I_1));\
}\
else {\
__declare_static_bit_vector(konst_760,10);\
bit_vector_clear(&konst_760);\
__declare_static_bit_vector(type_cast_761,10);\
bit_vector_clear(&type_cast_761);\
bit_vector_clear(&konst_760);\
bit_vector_bitcast_to_bit_vector( &(type_cast_761), &(konst_760));\
bit_vector_cast_to_bit_vector(0, &(I_1), &(type_cast_761));\
}\
;

#define _dataRx_phi_stmt_763_c_macro_ __declare_static_bit_vector(konst_765,1024);\
bit_vector_clear(&konst_765);\
__declare_static_bit_vector(type_cast_766,1024);\
bit_vector_clear(&type_cast_766);\
if(loopback4_1_756_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_765,1024);\
bit_vector_clear(&konst_765);\
__declare_static_bit_vector(type_cast_766,1024);\
bit_vector_clear(&type_cast_766);\
bit_vector_clear(&konst_765);\
bit_vector_bitcast_to_bit_vector( &(type_cast_766), &(konst_765));\
bit_vector_cast_to_bit_vector(0, &(dat1), &(type_cast_766));\
}\
;
;

#define _dataRx_merge_stmt_757_c_postamble_macro_ loopback4_1_756_flag = 0;\
merge_stmt_757_entry_flag = 0;

#define _dataRx_assign_stmt_771_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_770,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_770));\
bit_vector_cast_to_bit_vector(0, &(bit7_1), &(RPIPE_DAT1Rx_770));\
;

#define _dataRx_assign_stmt_774_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_773,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_773));\
bit_vector_cast_to_bit_vector(0, &(bit6_1), &(RPIPE_DAT1Rx_773));\
;

#define _dataRx_assign_stmt_777_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_776,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_776));\
bit_vector_cast_to_bit_vector(0, &(bit5_1), &(RPIPE_DAT1Rx_776));\
;

#define _dataRx_assign_stmt_780_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_779,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_779));\
bit_vector_cast_to_bit_vector(0, &(bit4_1), &(RPIPE_DAT1Rx_779));\
;

#define _dataRx_assign_stmt_783_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_782,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_782));\
bit_vector_cast_to_bit_vector(0, &(bit3_1), &(RPIPE_DAT1Rx_782));\
;

#define _dataRx_assign_stmt_786_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_785,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_785));\
bit_vector_cast_to_bit_vector(0, &(bit2_1), &(RPIPE_DAT1Rx_785));\
;

#define _dataRx_assign_stmt_789_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_788,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_788));\
bit_vector_cast_to_bit_vector(0, &(bit1_1), &(RPIPE_DAT1Rx_788));\
;

#define _dataRx_assign_stmt_792_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_791,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_791));\
bit_vector_cast_to_bit_vector(0, &(bit0_1), &(RPIPE_DAT1Rx_791));\
;

#define _dataRx_assign_stmt_816_c_macro_ __declare_static_bit_vector(konst_795,1024);\
bit_vector_clear(&konst_795);\
konst_795.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_796,1024);\
__declare_static_bit_vector(konst_797,1016);\
bit_vector_clear(&konst_797);\
__declare_static_bit_vector(type_cast_798,1016);\
bit_vector_clear(&type_cast_798);\
__declare_static_bit_vector(CONCAT_u1_u2_801,2);\
__declare_static_bit_vector(CONCAT_u1_u2_804,2);\
__declare_static_bit_vector(CONCAT_u2_u4_805,4);\
__declare_static_bit_vector(CONCAT_u1_u2_808,2);\
__declare_static_bit_vector(CONCAT_u1_u2_811,2);\
__declare_static_bit_vector(CONCAT_u2_u4_812,4);\
__declare_static_bit_vector(CONCAT_u4_u8_813,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_814,1024);\
__declare_static_bit_vector(OR_u1024_u1024_815,1024);\
bit_vector_clear(&konst_795);\
konst_795.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat1), &(konst_795), &(SHL_u1024_u1024_796));\
bit_vector_clear(&konst_797);\
bit_vector_bitcast_to_bit_vector( &(type_cast_798), &(konst_797));\
bit_vector_concatenate( &(bit7_1), &(bit6_1), &(CONCAT_u1_u2_801));\
bit_vector_concatenate( &(bit5_1), &(bit4_1), &(CONCAT_u1_u2_804));\
bit_vector_concatenate( &(CONCAT_u1_u2_801), &(CONCAT_u1_u2_804), &(CONCAT_u2_u4_805));\
bit_vector_concatenate( &(bit3_1), &(bit2_1), &(CONCAT_u1_u2_808));\
bit_vector_concatenate( &(bit1_1), &(bit0_1), &(CONCAT_u1_u2_811));\
bit_vector_concatenate( &(CONCAT_u1_u2_808), &(CONCAT_u1_u2_811), &(CONCAT_u2_u4_812));\
bit_vector_concatenate( &(CONCAT_u2_u4_805), &(CONCAT_u2_u4_812), &(CONCAT_u4_u8_813));\
bit_vector_concatenate( &(type_cast_798), &(CONCAT_u4_u8_813), &(CONCAT_u1016_u1024_814));\
bit_vector_or(&(SHL_u1024_u1024_796), &(CONCAT_u1016_u1024_814), &(OR_u1024_u1024_815));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1024_u1024_815));\
;

#define _dataRx_assign_stmt_821_c_macro_ __declare_static_bit_vector(konst_819,10);\
bit_vector_clear(&konst_819);\
konst_819.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_820,10);\
bit_vector_clear(&konst_819);\
konst_819.val.byte_array[0] = 1;\
bit_vector_plus( &(I_1), &(konst_819), &(ADD_u10_u10_820));\
bit_vector_cast_to_bit_vector(0, &(next_I_1), &(ADD_u10_u10_820));\
;
;

#define _dataRx_branch_block_stmt_756_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat1__next_data1), &(next_data1));\
;

#define _dataRx_merge_stmt_829_c_preamble_macro_ uint8_t merge_stmt_829_entry_flag;\
merge_stmt_829_entry_flag = 1;\
uint8_t crcloopback4_1_545_flag = 0;\
goto merge_stmt_829_run;\
crcloopback4_1_545: crcloopback4_1_545_flag = 1;\
goto merge_stmt_829_run;\
merge_stmt_829_run: ;\

#define _dataRx_phi_stmt_830_c_macro_ __declare_static_bit_vector(konst_832,5);\
bit_vector_clear(&konst_832);\
__declare_static_bit_vector(type_cast_833,5);\
bit_vector_clear(&type_cast_833);\
if(crcloopback4_1_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_1), &(next_K_1));\
}\
else {\
__declare_static_bit_vector(konst_832,5);\
bit_vector_clear(&konst_832);\
__declare_static_bit_vector(type_cast_833,5);\
bit_vector_clear(&type_cast_833);\
bit_vector_clear(&konst_832);\
bit_vector_bitcast_to_bit_vector( &(type_cast_833), &(konst_832));\
bit_vector_cast_to_bit_vector(0, &(K_1), &(type_cast_833));\
}\
;

#define _dataRx_phi_stmt_835_c_macro_ __declare_static_bit_vector(konst_837,16);\
bit_vector_clear(&konst_837);\
__declare_static_bit_vector(type_cast_838,16);\
bit_vector_clear(&type_cast_838);\
if(crcloopback4_1_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_1), &(nextCRC_1));\
}\
else {\
__declare_static_bit_vector(konst_837,16);\
bit_vector_clear(&konst_837);\
__declare_static_bit_vector(type_cast_838,16);\
bit_vector_clear(&type_cast_838);\
bit_vector_clear(&konst_837);\
bit_vector_bitcast_to_bit_vector( &(type_cast_838), &(konst_837));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_1), &(type_cast_838));\
}\
;
;

#define _dataRx_merge_stmt_829_c_postamble_macro_ crcloopback4_1_545_flag = 0;\
merge_stmt_829_entry_flag = 0;

#define _dataRx_assign_stmt_850_c_macro_ __declare_static_bit_vector(konst_843,16);\
bit_vector_clear(&konst_843);\
konst_843.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_844,16);\
__declare_static_bit_vector(konst_845,15);\
bit_vector_clear(&konst_845);\
__declare_static_bit_vector(type_cast_846,15);\
bit_vector_clear(&type_cast_846);\
__declare_static_bit_vector(RPIPE_DAT1Rx_847,1);\
__declare_static_bit_vector(CONCAT_u15_u16_848,16);\
__declare_static_bit_vector(OR_u16_u16_849,16);\
bit_vector_clear(&konst_843);\
konst_843.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_1), &(konst_843), &(SHL_u16_u16_844));\
bit_vector_clear(&konst_845);\
bit_vector_bitcast_to_bit_vector( &(type_cast_846), &(konst_845));\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_847));\
bit_vector_concatenate( &(type_cast_846), &(RPIPE_DAT1Rx_847), &(CONCAT_u15_u16_848));\
bit_vector_or(&(SHL_u16_u16_844), &(CONCAT_u15_u16_848), &(OR_u16_u16_849));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_1), &(OR_u16_u16_849));\
;

#define _dataRx_assign_stmt_855_c_macro_ __declare_static_bit_vector(konst_853,5);\
bit_vector_clear(&konst_853);\
konst_853.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_854,5);\
bit_vector_clear(&konst_853);\
konst_853.val.byte_array[0] = 1;\
bit_vector_plus( &(K_1), &(konst_853), &(ADD_u5_u5_854));\
bit_vector_cast_to_bit_vector(0, &(next_K_1), &(ADD_u5_u5_854));\
;

#define _dataRx_assign_stmt_864_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_863,1);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_863));\
bit_vector_cast_to_bit_vector(0, &(stopBit1), &(RPIPE_DAT1Rx_863));\
;

#define _dataRx_stmt_867_c_macro_ uint32_t _dataRx_stmt_867_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]DATAreieve>\t%s\n",_dataRx_stmt_867_c_macro___print_counter,"rcv");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAreieve>\t\t%s\t\t",_dataRx_stmt_867_c_macro___print_counter,"stopBit1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(stopBit1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAreieve>\t\t%s\t\t",_dataRx_stmt_867_c_macro___print_counter,"dat1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat1__next_data1)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataRx_assign_stmt_872_c_macro_ __declare_static_bit_vector(konst_870,1);\
bit_vector_clear(&konst_870);\
__declare_static_bit_vector(EQ_u1_u1_871,1);\
bit_vector_clear(&konst_870);\
bit_vector_equal(0, &(stopBit1), &(konst_870), &(EQ_u1_u1_871));\
bit_vector_cast_to_bit_vector(0, &(stopBitError1), &(EQ_u1_u1_871));\
;

#define _dataRx_merge_stmt_873_c_preamble_macro_ uint8_t merge_stmt_873_entry_flag;\
merge_stmt_873_entry_flag = 1;\
uint8_t loopback1_545_flag = 0;\
goto merge_stmt_873_run;\
loopback1_545: loopback1_545_flag = 1;\
goto merge_stmt_873_run;\
merge_stmt_873_run: ;\

#define _dataRx_phi_stmt_874_c_macro_ __declare_static_bit_vector(konst_876,13);\
bit_vector_clear(&konst_876);\
__declare_static_bit_vector(type_cast_877,13);\
bit_vector_clear(&type_cast_877);\
if(loopback1_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_1), &(next_J_1));\
}\
else {\
__declare_static_bit_vector(konst_876,13);\
bit_vector_clear(&konst_876);\
__declare_static_bit_vector(type_cast_877,13);\
bit_vector_clear(&type_cast_877);\
bit_vector_clear(&konst_876);\
bit_vector_bitcast_to_bit_vector( &(type_cast_877), &(konst_876));\
bit_vector_cast_to_bit_vector(0, &(J_1), &(type_cast_877));\
}\
;

#define _dataRx_phi_stmt_879_c_macro_ __declare_static_bit_vector(konst_881,16);\
bit_vector_clear(&konst_881);\
__declare_static_bit_vector(type_cast_882,16);\
bit_vector_clear(&type_cast_882);\
if(loopback1_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(nextCRC16_1));\
}\
else {\
__declare_static_bit_vector(konst_881,16);\
bit_vector_clear(&konst_881);\
__declare_static_bit_vector(type_cast_882,16);\
bit_vector_clear(&type_cast_882);\
bit_vector_clear(&konst_881);\
bit_vector_bitcast_to_bit_vector( &(type_cast_882), &(konst_881));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(type_cast_882));\
}\
;

#define _dataRx_phi_stmt_884_c_macro_ if(loopback1_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(nextTempData1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(dat1__next_data1));\
}\
;
;

#define _dataRx_merge_stmt_873_c_postamble_macro_ loopback1_545_flag = 0;\
merge_stmt_873_entry_flag = 0;

#define _dataRx_assign_stmt_897_c_macro_ __declare_static_bit_vector(konst_891,1024);\
bit_vector_clear(&konst_891);\
konst_891.val.byte_array[0] = 255;\
konst_891.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_892,1);\
__declare_static_bit_vector(konst_894,16);\
bit_vector_clear(&konst_894);\
konst_894.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_895,1);\
__declare_static_bit_vector(XOR_u1_u1_896,1);\
bit_vector_clear(&konst_891);\
konst_891.val.byte_array[0] = 255;\
konst_891.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData1), &(konst_891), &(BITSEL_u1024_u1_892));\
bit_vector_clear(&konst_894);\
konst_894.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_1), &(konst_894), &(BITSEL_u16_u1_895));\
bit_vector_xor(&(BITSEL_u1024_u1_892), &(BITSEL_u16_u1_895), &(XOR_u1_u1_896));\
bit_vector_cast_to_bit_vector(0, &(inv1), &(XOR_u1_u1_896));\
;

#define _dataRx_assign_stmt_921_c_macro_ __declare_static_bit_vector(slice_900,3);\
__declare_static_bit_vector(konst_902,16);\
bit_vector_clear(&konst_902);\
konst_902.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_903,1);\
__declare_static_bit_vector(XOR_u1_u1_905,1);\
__declare_static_bit_vector(CONCAT_u3_u4_906,4);\
__declare_static_bit_vector(slice_908,6);\
__declare_static_bit_vector(CONCAT_u4_u10_909,10);\
__declare_static_bit_vector(konst_911,16);\
bit_vector_clear(&konst_911);\
konst_911.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_912,1);\
__declare_static_bit_vector(XOR_u1_u1_914,1);\
__declare_static_bit_vector(slice_916,4);\
__declare_static_bit_vector(CONCAT_u1_u5_917,5);\
__declare_static_bit_vector(CONCAT_u5_u6_919,6);\
__declare_static_bit_vector(CONCAT_u10_u16_920,16);\
bit_vector_slice(&(CRC_16_1), &(slice_900), 12);\
bit_vector_clear(&konst_902);\
konst_902.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_1), &(konst_902), &(BITSEL_u16_u1_903));\
bit_vector_xor(&(BITSEL_u16_u1_903), &(inv1), &(XOR_u1_u1_905));\
bit_vector_concatenate( &(slice_900), &(XOR_u1_u1_905), &(CONCAT_u3_u4_906));\
bit_vector_slice(&(CRC_16_1), &(slice_908), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_906), &(slice_908), &(CONCAT_u4_u10_909));\
bit_vector_clear(&konst_911);\
konst_911.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_1), &(konst_911), &(BITSEL_u16_u1_912));\
bit_vector_xor(&(BITSEL_u16_u1_912), &(inv1), &(XOR_u1_u1_914));\
bit_vector_slice(&(CRC_16_1), &(slice_916), 0);\
bit_vector_concatenate( &(XOR_u1_u1_914), &(slice_916), &(CONCAT_u1_u5_917));\
bit_vector_concatenate( &(CONCAT_u1_u5_917), &(inv1), &(CONCAT_u5_u6_919));\
bit_vector_concatenate( &(CONCAT_u4_u10_909), &(CONCAT_u5_u6_919), &(CONCAT_u10_u16_920));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_1), &(CONCAT_u10_u16_920));\
;

#define _dataRx_assign_stmt_926_c_macro_ __declare_static_bit_vector(konst_924,1024);\
bit_vector_clear(&konst_924);\
konst_924.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_925,1024);\
bit_vector_clear(&konst_924);\
konst_924.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData1), &(konst_924), &(SHL_u1024_u1024_925));\
bit_vector_cast_to_bit_vector(0, &(nextTempData1), &(SHL_u1024_u1024_925));\
;

#define _dataRx_assign_stmt_931_c_macro_ __declare_static_bit_vector(konst_929,13);\
bit_vector_clear(&konst_929);\
konst_929.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_930,13);\
bit_vector_clear(&konst_929);\
konst_929.val.byte_array[0] = 1;\
bit_vector_plus( &(J_1), &(konst_929), &(ADD_u13_u13_930));\
bit_vector_cast_to_bit_vector(0, &(next_J_1), &(ADD_u13_u13_930));\
;

#define _dataRx_assign_stmt_942_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_941,1);\
bit_vector_not_equal(0, &(nextCRC_1), &(nextCRC16_1), &NEQ_u16_u1_941);\
bit_vector_cast_to_bit_vector(0, &(crcError1), &(NEQ_u16_u1_941));\
;

#define _dataRx_assign_stmt_945_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_944,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_944));\
bit_vector_cast_to_bit_vector(0, &(startBit2), &(RPIPE_DAT2Rx_944));\
;

#define _dataRx_branch_block_stmt_946_c_export_decl_macro_ __declare_static_bit_vector(dat2__next_data2,1024);\
__declare_static_bit_vector(I_2,10);\
__declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(bit7_2,1);\
__declare_static_bit_vector(bit6_2,1);\
__declare_static_bit_vector(bit5_2,1);\
__declare_static_bit_vector(bit4_2,1);\
__declare_static_bit_vector(bit3_2,1);\
__declare_static_bit_vector(bit2_2,1);\
__declare_static_bit_vector(bit1_2,1);\
__declare_static_bit_vector(bit0_2,1);\
__declare_static_bit_vector(next_data2,1024);\
__declare_static_bit_vector(next_I_2,10);\


#define _dataRx_merge_stmt_947_c_preamble_macro_ uint8_t merge_stmt_947_entry_flag;\
merge_stmt_947_entry_flag = 1;\
uint8_t loopback4_2_946_flag = 0;\
goto merge_stmt_947_run;\
loopback4_2_946: loopback4_2_946_flag = 1;\
goto merge_stmt_947_run;\
merge_stmt_947_run: ;\

#define _dataRx_phi_stmt_948_c_macro_ __declare_static_bit_vector(konst_950,10);\
bit_vector_clear(&konst_950);\
__declare_static_bit_vector(type_cast_951,10);\
bit_vector_clear(&type_cast_951);\
if(loopback4_2_946_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_2), &(next_I_2));\
}\
else {\
__declare_static_bit_vector(konst_950,10);\
bit_vector_clear(&konst_950);\
__declare_static_bit_vector(type_cast_951,10);\
bit_vector_clear(&type_cast_951);\
bit_vector_clear(&konst_950);\
bit_vector_bitcast_to_bit_vector( &(type_cast_951), &(konst_950));\
bit_vector_cast_to_bit_vector(0, &(I_2), &(type_cast_951));\
}\
;

#define _dataRx_phi_stmt_953_c_macro_ __declare_static_bit_vector(konst_955,1024);\
bit_vector_clear(&konst_955);\
__declare_static_bit_vector(type_cast_956,1024);\
bit_vector_clear(&type_cast_956);\
if(loopback4_2_946_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_955,1024);\
bit_vector_clear(&konst_955);\
__declare_static_bit_vector(type_cast_956,1024);\
bit_vector_clear(&type_cast_956);\
bit_vector_clear(&konst_955);\
bit_vector_bitcast_to_bit_vector( &(type_cast_956), &(konst_955));\
bit_vector_cast_to_bit_vector(0, &(dat2), &(type_cast_956));\
}\
;
;

#define _dataRx_merge_stmt_947_c_postamble_macro_ loopback4_2_946_flag = 0;\
merge_stmt_947_entry_flag = 0;

#define _dataRx_assign_stmt_961_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_960,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_960));\
bit_vector_cast_to_bit_vector(0, &(bit7_2), &(RPIPE_DAT2Rx_960));\
;

#define _dataRx_assign_stmt_964_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_963,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_963));\
bit_vector_cast_to_bit_vector(0, &(bit6_2), &(RPIPE_DAT2Rx_963));\
;

#define _dataRx_assign_stmt_967_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_966,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_966));\
bit_vector_cast_to_bit_vector(0, &(bit5_2), &(RPIPE_DAT2Rx_966));\
;

#define _dataRx_assign_stmt_970_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_969,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_969));\
bit_vector_cast_to_bit_vector(0, &(bit4_2), &(RPIPE_DAT2Rx_969));\
;

#define _dataRx_assign_stmt_973_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_972,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_972));\
bit_vector_cast_to_bit_vector(0, &(bit3_2), &(RPIPE_DAT2Rx_972));\
;

#define _dataRx_assign_stmt_976_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_975,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_975));\
bit_vector_cast_to_bit_vector(0, &(bit2_2), &(RPIPE_DAT2Rx_975));\
;

#define _dataRx_assign_stmt_979_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_978,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_978));\
bit_vector_cast_to_bit_vector(0, &(bit1_2), &(RPIPE_DAT2Rx_978));\
;

#define _dataRx_assign_stmt_982_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_981,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_981));\
bit_vector_cast_to_bit_vector(0, &(bit0_2), &(RPIPE_DAT2Rx_981));\
;

#define _dataRx_assign_stmt_1006_c_macro_ __declare_static_bit_vector(konst_985,1024);\
bit_vector_clear(&konst_985);\
konst_985.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_986,1024);\
__declare_static_bit_vector(konst_987,1016);\
bit_vector_clear(&konst_987);\
__declare_static_bit_vector(type_cast_988,1016);\
bit_vector_clear(&type_cast_988);\
__declare_static_bit_vector(CONCAT_u1_u2_991,2);\
__declare_static_bit_vector(CONCAT_u1_u2_994,2);\
__declare_static_bit_vector(CONCAT_u2_u4_995,4);\
__declare_static_bit_vector(CONCAT_u1_u2_998,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1001,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1002,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1003,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_1004,1024);\
__declare_static_bit_vector(OR_u1024_u1024_1005,1024);\
bit_vector_clear(&konst_985);\
konst_985.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat2), &(konst_985), &(SHL_u1024_u1024_986));\
bit_vector_clear(&konst_987);\
bit_vector_bitcast_to_bit_vector( &(type_cast_988), &(konst_987));\
bit_vector_concatenate( &(bit7_2), &(bit6_2), &(CONCAT_u1_u2_991));\
bit_vector_concatenate( &(bit5_2), &(bit4_2), &(CONCAT_u1_u2_994));\
bit_vector_concatenate( &(CONCAT_u1_u2_991), &(CONCAT_u1_u2_994), &(CONCAT_u2_u4_995));\
bit_vector_concatenate( &(bit3_2), &(bit2_2), &(CONCAT_u1_u2_998));\
bit_vector_concatenate( &(bit1_2), &(bit0_2), &(CONCAT_u1_u2_1001));\
bit_vector_concatenate( &(CONCAT_u1_u2_998), &(CONCAT_u1_u2_1001), &(CONCAT_u2_u4_1002));\
bit_vector_concatenate( &(CONCAT_u2_u4_995), &(CONCAT_u2_u4_1002), &(CONCAT_u4_u8_1003));\
bit_vector_concatenate( &(type_cast_988), &(CONCAT_u4_u8_1003), &(CONCAT_u1016_u1024_1004));\
bit_vector_or(&(SHL_u1024_u1024_986), &(CONCAT_u1016_u1024_1004), &(OR_u1024_u1024_1005));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1024_u1024_1005));\
;

#define _dataRx_assign_stmt_1011_c_macro_ __declare_static_bit_vector(konst_1009,10);\
bit_vector_clear(&konst_1009);\
konst_1009.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1010,10);\
bit_vector_clear(&konst_1009);\
konst_1009.val.byte_array[0] = 1;\
bit_vector_plus( &(I_2), &(konst_1009), &(ADD_u10_u10_1010));\
bit_vector_cast_to_bit_vector(0, &(next_I_2), &(ADD_u10_u10_1010));\
;
;

#define _dataRx_branch_block_stmt_946_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat2__next_data2), &(next_data2));\
;

#define _dataRx_merge_stmt_1019_c_preamble_macro_ uint8_t merge_stmt_1019_entry_flag;\
merge_stmt_1019_entry_flag = 1;\
uint8_t crcloopback4_2_545_flag = 0;\
goto merge_stmt_1019_run;\
crcloopback4_2_545: crcloopback4_2_545_flag = 1;\
goto merge_stmt_1019_run;\
merge_stmt_1019_run: ;\

#define _dataRx_phi_stmt_1020_c_macro_ __declare_static_bit_vector(konst_1022,5);\
bit_vector_clear(&konst_1022);\
__declare_static_bit_vector(type_cast_1023,5);\
bit_vector_clear(&type_cast_1023);\
if(crcloopback4_2_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_2), &(next_K_2));\
}\
else {\
__declare_static_bit_vector(konst_1022,5);\
bit_vector_clear(&konst_1022);\
__declare_static_bit_vector(type_cast_1023,5);\
bit_vector_clear(&type_cast_1023);\
bit_vector_clear(&konst_1022);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1023), &(konst_1022));\
bit_vector_cast_to_bit_vector(0, &(K_2), &(type_cast_1023));\
}\
;

#define _dataRx_phi_stmt_1025_c_macro_ __declare_static_bit_vector(konst_1027,16);\
bit_vector_clear(&konst_1027);\
__declare_static_bit_vector(type_cast_1028,16);\
bit_vector_clear(&type_cast_1028);\
if(crcloopback4_2_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_2), &(nextCRC_2));\
}\
else {\
__declare_static_bit_vector(konst_1027,16);\
bit_vector_clear(&konst_1027);\
__declare_static_bit_vector(type_cast_1028,16);\
bit_vector_clear(&type_cast_1028);\
bit_vector_clear(&konst_1027);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1028), &(konst_1027));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_2), &(type_cast_1028));\
}\
;
;

#define _dataRx_merge_stmt_1019_c_postamble_macro_ crcloopback4_2_545_flag = 0;\
merge_stmt_1019_entry_flag = 0;

#define _dataRx_assign_stmt_1040_c_macro_ __declare_static_bit_vector(konst_1033,16);\
bit_vector_clear(&konst_1033);\
konst_1033.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1034,16);\
__declare_static_bit_vector(konst_1035,15);\
bit_vector_clear(&konst_1035);\
__declare_static_bit_vector(type_cast_1036,15);\
bit_vector_clear(&type_cast_1036);\
__declare_static_bit_vector(RPIPE_DAT2Rx_1037,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1038,16);\
__declare_static_bit_vector(OR_u16_u16_1039,16);\
bit_vector_clear(&konst_1033);\
konst_1033.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_2), &(konst_1033), &(SHL_u16_u16_1034));\
bit_vector_clear(&konst_1035);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1036), &(konst_1035));\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1037));\
bit_vector_concatenate( &(type_cast_1036), &(RPIPE_DAT2Rx_1037), &(CONCAT_u15_u16_1038));\
bit_vector_or(&(SHL_u16_u16_1034), &(CONCAT_u15_u16_1038), &(OR_u16_u16_1039));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_2), &(OR_u16_u16_1039));\
;

#define _dataRx_assign_stmt_1045_c_macro_ __declare_static_bit_vector(konst_1043,5);\
bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1044,5);\
bit_vector_clear(&konst_1043);\
konst_1043.val.byte_array[0] = 1;\
bit_vector_plus( &(K_2), &(konst_1043), &(ADD_u5_u5_1044));\
bit_vector_cast_to_bit_vector(0, &(next_K_2), &(ADD_u5_u5_1044));\
;

#define _dataRx_assign_stmt_1054_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1053,1);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1053));\
bit_vector_cast_to_bit_vector(0, &(stopBit2), &(RPIPE_DAT2Rx_1053));\
;

#define _dataRx_assign_stmt_1059_c_macro_ __declare_static_bit_vector(konst_1057,1);\
bit_vector_clear(&konst_1057);\
__declare_static_bit_vector(EQ_u1_u1_1058,1);\
bit_vector_clear(&konst_1057);\
bit_vector_equal(0, &(stopBit2), &(konst_1057), &(EQ_u1_u1_1058));\
bit_vector_cast_to_bit_vector(0, &(stopBitError2), &(EQ_u1_u1_1058));\
;

#define _dataRx_merge_stmt_1060_c_preamble_macro_ uint8_t merge_stmt_1060_entry_flag;\
merge_stmt_1060_entry_flag = 1;\
uint8_t loopback2_545_flag = 0;\
goto merge_stmt_1060_run;\
loopback2_545: loopback2_545_flag = 1;\
goto merge_stmt_1060_run;\
merge_stmt_1060_run: ;\

#define _dataRx_phi_stmt_1061_c_macro_ __declare_static_bit_vector(konst_1063,13);\
bit_vector_clear(&konst_1063);\
__declare_static_bit_vector(type_cast_1064,13);\
bit_vector_clear(&type_cast_1064);\
if(loopback2_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_2), &(next_J_2));\
}\
else {\
__declare_static_bit_vector(konst_1063,13);\
bit_vector_clear(&konst_1063);\
__declare_static_bit_vector(type_cast_1064,13);\
bit_vector_clear(&type_cast_1064);\
bit_vector_clear(&konst_1063);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1064), &(konst_1063));\
bit_vector_cast_to_bit_vector(0, &(J_2), &(type_cast_1064));\
}\
;

#define _dataRx_phi_stmt_1066_c_macro_ __declare_static_bit_vector(konst_1068,16);\
bit_vector_clear(&konst_1068);\
__declare_static_bit_vector(type_cast_1069,16);\
bit_vector_clear(&type_cast_1069);\
if(loopback2_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(nextCRC16_2));\
}\
else {\
__declare_static_bit_vector(konst_1068,16);\
bit_vector_clear(&konst_1068);\
__declare_static_bit_vector(type_cast_1069,16);\
bit_vector_clear(&type_cast_1069);\
bit_vector_clear(&konst_1068);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1069), &(konst_1068));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(type_cast_1069));\
}\
;

#define _dataRx_phi_stmt_1071_c_macro_ if(loopback2_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(nextTempData2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(dat2__next_data2));\
}\
;
;

#define _dataRx_merge_stmt_1060_c_postamble_macro_ loopback2_545_flag = 0;\
merge_stmt_1060_entry_flag = 0;

#define _dataRx_assign_stmt_1084_c_macro_ __declare_static_bit_vector(konst_1078,1024);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 255;\
konst_1078.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1079,1);\
__declare_static_bit_vector(konst_1081,16);\
bit_vector_clear(&konst_1081);\
konst_1081.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1082,1);\
__declare_static_bit_vector(XOR_u1_u1_1083,1);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 255;\
konst_1078.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData2), &(konst_1078), &(BITSEL_u1024_u1_1079));\
bit_vector_clear(&konst_1081);\
konst_1081.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1081), &(BITSEL_u16_u1_1082));\
bit_vector_xor(&(BITSEL_u1024_u1_1079), &(BITSEL_u16_u1_1082), &(XOR_u1_u1_1083));\
bit_vector_cast_to_bit_vector(0, &(inv2), &(XOR_u1_u1_1083));\
;

#define _dataRx_assign_stmt_1108_c_macro_ __declare_static_bit_vector(slice_1087,3);\
__declare_static_bit_vector(konst_1089,16);\
bit_vector_clear(&konst_1089);\
konst_1089.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1090,1);\
__declare_static_bit_vector(XOR_u1_u1_1092,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1093,4);\
__declare_static_bit_vector(slice_1095,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1096,10);\
__declare_static_bit_vector(konst_1098,16);\
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1099,1);\
__declare_static_bit_vector(XOR_u1_u1_1101,1);\
__declare_static_bit_vector(slice_1103,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1104,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1106,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1107,16);\
bit_vector_slice(&(CRC_16_2), &(slice_1087), 12);\
bit_vector_clear(&konst_1089);\
konst_1089.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1089), &(BITSEL_u16_u1_1090));\
bit_vector_xor(&(BITSEL_u16_u1_1090), &(inv2), &(XOR_u1_u1_1092));\
bit_vector_concatenate( &(slice_1087), &(XOR_u1_u1_1092), &(CONCAT_u3_u4_1093));\
bit_vector_slice(&(CRC_16_2), &(slice_1095), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1093), &(slice_1095), &(CONCAT_u4_u10_1096));\
bit_vector_clear(&konst_1098);\
konst_1098.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1098), &(BITSEL_u16_u1_1099));\
bit_vector_xor(&(BITSEL_u16_u1_1099), &(inv2), &(XOR_u1_u1_1101));\
bit_vector_slice(&(CRC_16_2), &(slice_1103), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1101), &(slice_1103), &(CONCAT_u1_u5_1104));\
bit_vector_concatenate( &(CONCAT_u1_u5_1104), &(inv2), &(CONCAT_u5_u6_1106));\
bit_vector_concatenate( &(CONCAT_u4_u10_1096), &(CONCAT_u5_u6_1106), &(CONCAT_u10_u16_1107));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_2), &(CONCAT_u10_u16_1107));\
;

#define _dataRx_assign_stmt_1113_c_macro_ __declare_static_bit_vector(konst_1111,1024);\
bit_vector_clear(&konst_1111);\
konst_1111.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_1112,1024);\
bit_vector_clear(&konst_1111);\
konst_1111.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData2), &(konst_1111), &(SHL_u1024_u1024_1112));\
bit_vector_cast_to_bit_vector(0, &(nextTempData2), &(SHL_u1024_u1024_1112));\
;

#define _dataRx_assign_stmt_1118_c_macro_ __declare_static_bit_vector(konst_1116,13);\
bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1117,13);\
bit_vector_clear(&konst_1116);\
konst_1116.val.byte_array[0] = 1;\
bit_vector_plus( &(J_2), &(konst_1116), &(ADD_u13_u13_1117));\
bit_vector_cast_to_bit_vector(0, &(next_J_2), &(ADD_u13_u13_1117));\
;

#define _dataRx_assign_stmt_1129_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1128,1);\
bit_vector_not_equal(0, &(nextCRC_2), &(nextCRC16_2), &NEQ_u16_u1_1128);\
bit_vector_cast_to_bit_vector(0, &(crcError2), &(NEQ_u16_u1_1128));\
;

#define _dataRx_assign_stmt_1132_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1131,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1131));\
bit_vector_cast_to_bit_vector(0, &(startBit3), &(RPIPE_DAT3Rx_1131));\
;

#define _dataRx_branch_block_stmt_1133_c_export_decl_macro_ __declare_static_bit_vector(dat3__next_data3,1024);\
__declare_static_bit_vector(I_3,10);\
__declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(bit7_3,1);\
__declare_static_bit_vector(bit6_3,1);\
__declare_static_bit_vector(bit5_3,1);\
__declare_static_bit_vector(bit4_3,1);\
__declare_static_bit_vector(bit3_3,1);\
__declare_static_bit_vector(bit2_3,1);\
__declare_static_bit_vector(bit1_3,1);\
__declare_static_bit_vector(bit0_3,1);\
__declare_static_bit_vector(next_data3,1024);\
__declare_static_bit_vector(next_I_3,10);\


#define _dataRx_merge_stmt_1134_c_preamble_macro_ uint8_t merge_stmt_1134_entry_flag;\
merge_stmt_1134_entry_flag = 1;\
uint8_t loopback4_3_1133_flag = 0;\
goto merge_stmt_1134_run;\
loopback4_3_1133: loopback4_3_1133_flag = 1;\
goto merge_stmt_1134_run;\
merge_stmt_1134_run: ;\

#define _dataRx_phi_stmt_1135_c_macro_ __declare_static_bit_vector(konst_1137,10);\
bit_vector_clear(&konst_1137);\
__declare_static_bit_vector(type_cast_1138,10);\
bit_vector_clear(&type_cast_1138);\
if(loopback4_3_1133_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_3), &(next_I_3));\
}\
else {\
__declare_static_bit_vector(konst_1137,10);\
bit_vector_clear(&konst_1137);\
__declare_static_bit_vector(type_cast_1138,10);\
bit_vector_clear(&type_cast_1138);\
bit_vector_clear(&konst_1137);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1138), &(konst_1137));\
bit_vector_cast_to_bit_vector(0, &(I_3), &(type_cast_1138));\
}\
;

#define _dataRx_phi_stmt_1140_c_macro_ __declare_static_bit_vector(konst_1142,1024);\
bit_vector_clear(&konst_1142);\
__declare_static_bit_vector(type_cast_1143,1024);\
bit_vector_clear(&type_cast_1143);\
if(loopback4_3_1133_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_1142,1024);\
bit_vector_clear(&konst_1142);\
__declare_static_bit_vector(type_cast_1143,1024);\
bit_vector_clear(&type_cast_1143);\
bit_vector_clear(&konst_1142);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1143), &(konst_1142));\
bit_vector_cast_to_bit_vector(0, &(dat3), &(type_cast_1143));\
}\
;
;

#define _dataRx_merge_stmt_1134_c_postamble_macro_ loopback4_3_1133_flag = 0;\
merge_stmt_1134_entry_flag = 0;

#define _dataRx_assign_stmt_1148_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1147,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1147));\
bit_vector_cast_to_bit_vector(0, &(bit7_3), &(RPIPE_DAT3Rx_1147));\
;

#define _dataRx_assign_stmt_1151_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1150,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1150));\
bit_vector_cast_to_bit_vector(0, &(bit6_3), &(RPIPE_DAT3Rx_1150));\
;

#define _dataRx_assign_stmt_1154_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1153,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1153));\
bit_vector_cast_to_bit_vector(0, &(bit5_3), &(RPIPE_DAT3Rx_1153));\
;

#define _dataRx_assign_stmt_1157_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1156,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1156));\
bit_vector_cast_to_bit_vector(0, &(bit4_3), &(RPIPE_DAT3Rx_1156));\
;

#define _dataRx_assign_stmt_1160_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1159,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1159));\
bit_vector_cast_to_bit_vector(0, &(bit3_3), &(RPIPE_DAT3Rx_1159));\
;

#define _dataRx_assign_stmt_1163_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1162,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1162));\
bit_vector_cast_to_bit_vector(0, &(bit2_3), &(RPIPE_DAT3Rx_1162));\
;

#define _dataRx_assign_stmt_1166_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1165,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1165));\
bit_vector_cast_to_bit_vector(0, &(bit1_3), &(RPIPE_DAT3Rx_1165));\
;

#define _dataRx_assign_stmt_1169_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1168,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1168));\
bit_vector_cast_to_bit_vector(0, &(bit0_3), &(RPIPE_DAT3Rx_1168));\
;

#define _dataRx_assign_stmt_1193_c_macro_ __declare_static_bit_vector(konst_1172,1024);\
bit_vector_clear(&konst_1172);\
konst_1172.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_1173,1024);\
__declare_static_bit_vector(konst_1174,1016);\
bit_vector_clear(&konst_1174);\
__declare_static_bit_vector(type_cast_1175,1016);\
bit_vector_clear(&type_cast_1175);\
__declare_static_bit_vector(CONCAT_u1_u2_1178,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1181,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1182,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1185,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1188,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1189,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1190,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_1191,1024);\
__declare_static_bit_vector(OR_u1024_u1024_1192,1024);\
bit_vector_clear(&konst_1172);\
konst_1172.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat3), &(konst_1172), &(SHL_u1024_u1024_1173));\
bit_vector_clear(&konst_1174);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1175), &(konst_1174));\
bit_vector_concatenate( &(bit7_3), &(bit6_3), &(CONCAT_u1_u2_1178));\
bit_vector_concatenate( &(bit5_3), &(bit4_3), &(CONCAT_u1_u2_1181));\
bit_vector_concatenate( &(CONCAT_u1_u2_1178), &(CONCAT_u1_u2_1181), &(CONCAT_u2_u4_1182));\
bit_vector_concatenate( &(bit3_3), &(bit2_3), &(CONCAT_u1_u2_1185));\
bit_vector_concatenate( &(bit1_3), &(bit0_3), &(CONCAT_u1_u2_1188));\
bit_vector_concatenate( &(CONCAT_u1_u2_1185), &(CONCAT_u1_u2_1188), &(CONCAT_u2_u4_1189));\
bit_vector_concatenate( &(CONCAT_u2_u4_1182), &(CONCAT_u2_u4_1189), &(CONCAT_u4_u8_1190));\
bit_vector_concatenate( &(type_cast_1175), &(CONCAT_u4_u8_1190), &(CONCAT_u1016_u1024_1191));\
bit_vector_or(&(SHL_u1024_u1024_1173), &(CONCAT_u1016_u1024_1191), &(OR_u1024_u1024_1192));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1024_u1024_1192));\
;

#define _dataRx_assign_stmt_1198_c_macro_ __declare_static_bit_vector(konst_1196,10);\
bit_vector_clear(&konst_1196);\
konst_1196.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1197,10);\
bit_vector_clear(&konst_1196);\
konst_1196.val.byte_array[0] = 1;\
bit_vector_plus( &(I_3), &(konst_1196), &(ADD_u10_u10_1197));\
bit_vector_cast_to_bit_vector(0, &(next_I_3), &(ADD_u10_u10_1197));\
;
;

#define _dataRx_branch_block_stmt_1133_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat3__next_data3), &(next_data3));\
;

#define _dataRx_merge_stmt_1206_c_preamble_macro_ uint8_t merge_stmt_1206_entry_flag;\
merge_stmt_1206_entry_flag = 1;\
uint8_t crcloopback4_3_545_flag = 0;\
goto merge_stmt_1206_run;\
crcloopback4_3_545: crcloopback4_3_545_flag = 1;\
goto merge_stmt_1206_run;\
merge_stmt_1206_run: ;\

#define _dataRx_phi_stmt_1207_c_macro_ __declare_static_bit_vector(konst_1209,5);\
bit_vector_clear(&konst_1209);\
__declare_static_bit_vector(type_cast_1210,5);\
bit_vector_clear(&type_cast_1210);\
if(crcloopback4_3_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_3), &(next_K_3));\
}\
else {\
__declare_static_bit_vector(konst_1209,5);\
bit_vector_clear(&konst_1209);\
__declare_static_bit_vector(type_cast_1210,5);\
bit_vector_clear(&type_cast_1210);\
bit_vector_clear(&konst_1209);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1210), &(konst_1209));\
bit_vector_cast_to_bit_vector(0, &(K_3), &(type_cast_1210));\
}\
;

#define _dataRx_phi_stmt_1212_c_macro_ __declare_static_bit_vector(konst_1214,16);\
bit_vector_clear(&konst_1214);\
__declare_static_bit_vector(type_cast_1215,16);\
bit_vector_clear(&type_cast_1215);\
if(crcloopback4_3_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_3), &(nextCRC_3));\
}\
else {\
__declare_static_bit_vector(konst_1214,16);\
bit_vector_clear(&konst_1214);\
__declare_static_bit_vector(type_cast_1215,16);\
bit_vector_clear(&type_cast_1215);\
bit_vector_clear(&konst_1214);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1215), &(konst_1214));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_3), &(type_cast_1215));\
}\
;
;

#define _dataRx_merge_stmt_1206_c_postamble_macro_ crcloopback4_3_545_flag = 0;\
merge_stmt_1206_entry_flag = 0;

#define _dataRx_assign_stmt_1227_c_macro_ __declare_static_bit_vector(konst_1220,16);\
bit_vector_clear(&konst_1220);\
konst_1220.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1221,16);\
__declare_static_bit_vector(konst_1222,15);\
bit_vector_clear(&konst_1222);\
__declare_static_bit_vector(type_cast_1223,15);\
bit_vector_clear(&type_cast_1223);\
__declare_static_bit_vector(RPIPE_DAT3Rx_1224,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1225,16);\
__declare_static_bit_vector(OR_u16_u16_1226,16);\
bit_vector_clear(&konst_1220);\
konst_1220.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_3), &(konst_1220), &(SHL_u16_u16_1221));\
bit_vector_clear(&konst_1222);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1223), &(konst_1222));\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1224));\
bit_vector_concatenate( &(type_cast_1223), &(RPIPE_DAT3Rx_1224), &(CONCAT_u15_u16_1225));\
bit_vector_or(&(SHL_u16_u16_1221), &(CONCAT_u15_u16_1225), &(OR_u16_u16_1226));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_3), &(OR_u16_u16_1226));\
;

#define _dataRx_assign_stmt_1232_c_macro_ __declare_static_bit_vector(konst_1230,5);\
bit_vector_clear(&konst_1230);\
konst_1230.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1231,5);\
bit_vector_clear(&konst_1230);\
konst_1230.val.byte_array[0] = 1;\
bit_vector_plus( &(K_3), &(konst_1230), &(ADD_u5_u5_1231));\
bit_vector_cast_to_bit_vector(0, &(next_K_3), &(ADD_u5_u5_1231));\
;

#define _dataRx_assign_stmt_1241_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1240,1);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1240));\
bit_vector_cast_to_bit_vector(0, &(stopBit3), &(RPIPE_DAT3Rx_1240));\
;

#define _dataRx_assign_stmt_1246_c_macro_ __declare_static_bit_vector(konst_1244,1);\
bit_vector_clear(&konst_1244);\
__declare_static_bit_vector(EQ_u1_u1_1245,1);\
bit_vector_clear(&konst_1244);\
bit_vector_equal(0, &(stopBit3), &(konst_1244), &(EQ_u1_u1_1245));\
bit_vector_cast_to_bit_vector(0, &(stopBitError3), &(EQ_u1_u1_1245));\
;

#define _dataRx_merge_stmt_1247_c_preamble_macro_ uint8_t merge_stmt_1247_entry_flag;\
merge_stmt_1247_entry_flag = 1;\
uint8_t loopback3_545_flag = 0;\
goto merge_stmt_1247_run;\
loopback3_545: loopback3_545_flag = 1;\
goto merge_stmt_1247_run;\
merge_stmt_1247_run: ;\

#define _dataRx_phi_stmt_1248_c_macro_ __declare_static_bit_vector(konst_1250,13);\
bit_vector_clear(&konst_1250);\
__declare_static_bit_vector(type_cast_1251,13);\
bit_vector_clear(&type_cast_1251);\
if(loopback3_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_3), &(next_J_3));\
}\
else {\
__declare_static_bit_vector(konst_1250,13);\
bit_vector_clear(&konst_1250);\
__declare_static_bit_vector(type_cast_1251,13);\
bit_vector_clear(&type_cast_1251);\
bit_vector_clear(&konst_1250);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1251), &(konst_1250));\
bit_vector_cast_to_bit_vector(0, &(J_3), &(type_cast_1251));\
}\
;

#define _dataRx_phi_stmt_1253_c_macro_ __declare_static_bit_vector(konst_1255,16);\
bit_vector_clear(&konst_1255);\
__declare_static_bit_vector(type_cast_1256,16);\
bit_vector_clear(&type_cast_1256);\
if(loopback3_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(nextCRC16_3));\
}\
else {\
__declare_static_bit_vector(konst_1255,16);\
bit_vector_clear(&konst_1255);\
__declare_static_bit_vector(type_cast_1256,16);\
bit_vector_clear(&type_cast_1256);\
bit_vector_clear(&konst_1255);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1256), &(konst_1255));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(type_cast_1256));\
}\
;

#define _dataRx_phi_stmt_1258_c_macro_ if(loopback3_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(nextTempData3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(dat3__next_data3));\
}\
;
;

#define _dataRx_merge_stmt_1247_c_postamble_macro_ loopback3_545_flag = 0;\
merge_stmt_1247_entry_flag = 0;

#define _dataRx_assign_stmt_1271_c_macro_ __declare_static_bit_vector(konst_1265,1024);\
bit_vector_clear(&konst_1265);\
konst_1265.val.byte_array[0] = 255;\
konst_1265.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1266,1);\
__declare_static_bit_vector(konst_1268,16);\
bit_vector_clear(&konst_1268);\
konst_1268.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1269,1);\
__declare_static_bit_vector(XOR_u1_u1_1270,1);\
bit_vector_clear(&konst_1265);\
konst_1265.val.byte_array[0] = 255;\
konst_1265.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData3), &(konst_1265), &(BITSEL_u1024_u1_1266));\
bit_vector_clear(&konst_1268);\
konst_1268.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1268), &(BITSEL_u16_u1_1269));\
bit_vector_xor(&(BITSEL_u1024_u1_1266), &(BITSEL_u16_u1_1269), &(XOR_u1_u1_1270));\
bit_vector_cast_to_bit_vector(0, &(inv3), &(XOR_u1_u1_1270));\
;

#define _dataRx_assign_stmt_1295_c_macro_ __declare_static_bit_vector(slice_1274,3);\
__declare_static_bit_vector(konst_1276,16);\
bit_vector_clear(&konst_1276);\
konst_1276.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1277,1);\
__declare_static_bit_vector(XOR_u1_u1_1279,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1280,4);\
__declare_static_bit_vector(slice_1282,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1283,10);\
__declare_static_bit_vector(konst_1285,16);\
bit_vector_clear(&konst_1285);\
konst_1285.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1286,1);\
__declare_static_bit_vector(XOR_u1_u1_1288,1);\
__declare_static_bit_vector(slice_1290,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1291,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1293,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1294,16);\
bit_vector_slice(&(CRC_16_3), &(slice_1274), 12);\
bit_vector_clear(&konst_1276);\
konst_1276.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1276), &(BITSEL_u16_u1_1277));\
bit_vector_xor(&(BITSEL_u16_u1_1277), &(inv3), &(XOR_u1_u1_1279));\
bit_vector_concatenate( &(slice_1274), &(XOR_u1_u1_1279), &(CONCAT_u3_u4_1280));\
bit_vector_slice(&(CRC_16_3), &(slice_1282), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1280), &(slice_1282), &(CONCAT_u4_u10_1283));\
bit_vector_clear(&konst_1285);\
konst_1285.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1285), &(BITSEL_u16_u1_1286));\
bit_vector_xor(&(BITSEL_u16_u1_1286), &(inv3), &(XOR_u1_u1_1288));\
bit_vector_slice(&(CRC_16_3), &(slice_1290), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1288), &(slice_1290), &(CONCAT_u1_u5_1291));\
bit_vector_concatenate( &(CONCAT_u1_u5_1291), &(inv3), &(CONCAT_u5_u6_1293));\
bit_vector_concatenate( &(CONCAT_u4_u10_1283), &(CONCAT_u5_u6_1293), &(CONCAT_u10_u16_1294));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_3), &(CONCAT_u10_u16_1294));\
;

#define _dataRx_assign_stmt_1300_c_macro_ __declare_static_bit_vector(konst_1298,1024);\
bit_vector_clear(&konst_1298);\
konst_1298.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_1299,1024);\
bit_vector_clear(&konst_1298);\
konst_1298.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData3), &(konst_1298), &(SHL_u1024_u1024_1299));\
bit_vector_cast_to_bit_vector(0, &(nextTempData3), &(SHL_u1024_u1024_1299));\
;

#define _dataRx_assign_stmt_1305_c_macro_ __declare_static_bit_vector(konst_1303,13);\
bit_vector_clear(&konst_1303);\
konst_1303.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1304,13);\
bit_vector_clear(&konst_1303);\
konst_1303.val.byte_array[0] = 1;\
bit_vector_plus( &(J_3), &(konst_1303), &(ADD_u13_u13_1304));\
bit_vector_cast_to_bit_vector(0, &(next_J_3), &(ADD_u13_u13_1304));\
;

#define _dataRx_assign_stmt_1316_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1315,1);\
bit_vector_not_equal(0, &(nextCRC_3), &(nextCRC16_3), &NEQ_u16_u1_1315);\
bit_vector_cast_to_bit_vector(0, &(crcError3), &(NEQ_u16_u1_1315));\
;

#define _dataRx_assign_stmt_1320_c_macro_ __declare_static_bit_vector(konst_1318,10);\
bit_vector_clear(&konst_1318);\
konst_1318.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1319,10);\
bit_vector_clear(&type_cast_1319);\
type_cast_1319.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1318);\
konst_1318.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1319), &(konst_1318));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1319));\
;

#define _dataRx_assign_stmt_1330_c_macro_ __declare_static_bit_vector(konst_1328,8);\
bit_vector_clear(&konst_1328);\
konst_1328.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1329,8);\
bit_vector_clear(&konst_1328);\
konst_1328.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1328), &(AND_u8_u8_1329));\
__declare_static_bit_vector(konst_1325,32);\
bit_vector_clear(&konst_1325);\
konst_1325.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1325);\
konst_1325.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1325)])), &(AND_u8_u8_1329));\
;

#define _dataRx_merge_stmt_1332_c_preamble_macro_ uint8_t merge_stmt_1332_entry_flag;\
merge_stmt_1332_entry_flag = 1;\
uint8_t finaldataloop_545_flag = 0;\
goto merge_stmt_1332_run;\
finaldataloop_545: finaldataloop_545_flag = 1;\
goto merge_stmt_1332_run;\
merge_stmt_1332_run: ;\

#define _dataRx_phi_stmt_1333_c_macro_ __declare_static_bit_vector(konst_1335,10);\
bit_vector_clear(&konst_1335);\
__declare_static_bit_vector(type_cast_1336,10);\
bit_vector_clear(&type_cast_1336);\
if(finaldataloop_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(B), &(next_B));\
}\
else {\
__declare_static_bit_vector(konst_1335,10);\
bit_vector_clear(&konst_1335);\
__declare_static_bit_vector(type_cast_1336,10);\
bit_vector_clear(&type_cast_1336);\
bit_vector_clear(&konst_1335);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1336), &(konst_1335));\
bit_vector_cast_to_bit_vector(0, &(B), &(type_cast_1336));\
}\
;

#define _dataRx_phi_stmt_1338_c_macro_ if(finaldataloop_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(nextDataForBuffer0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(dat0__next_data0));\
}\
;

#define _dataRx_phi_stmt_1342_c_macro_ if(finaldataloop_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(nextDataForBuffer1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(dat1__next_data1));\
}\
;

#define _dataRx_phi_stmt_1346_c_macro_ if(finaldataloop_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(nextDataForBuffer2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(dat2__next_data2));\
}\
;

#define _dataRx_phi_stmt_1350_c_macro_ if(finaldataloop_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(nextDataForBuffer3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(dat3__next_data3));\
}\
;
;

#define _dataRx_merge_stmt_1332_c_postamble_macro_ finaldataloop_545_flag = 0;\
merge_stmt_1332_entry_flag = 0;

#define _dataRx_assign_stmt_1387_c_macro_ __declare_static_bit_vector(konst_1357,1024);\
bit_vector_clear(&konst_1357);\
konst_1357.val.byte_array[0] = 255;\
konst_1357.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1358,1);\
__declare_static_bit_vector(konst_1360,1024);\
bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 255;\
konst_1360.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1361,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1362,2);\
__declare_static_bit_vector(konst_1364,1024);\
bit_vector_clear(&konst_1364);\
konst_1364.val.byte_array[0] = 255;\
konst_1364.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1365,1);\
__declare_static_bit_vector(konst_1367,1024);\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 255;\
konst_1367.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1368,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1369,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1370,4);\
__declare_static_bit_vector(konst_1372,1024);\
bit_vector_clear(&konst_1372);\
konst_1372.val.byte_array[0] = 254;\
konst_1372.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1373,1);\
__declare_static_bit_vector(konst_1375,1024);\
bit_vector_clear(&konst_1375);\
konst_1375.val.byte_array[0] = 254;\
konst_1375.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1376,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1377,2);\
__declare_static_bit_vector(konst_1379,1024);\
bit_vector_clear(&konst_1379);\
konst_1379.val.byte_array[0] = 254;\
konst_1379.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1380,1);\
__declare_static_bit_vector(konst_1382,1024);\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 254;\
konst_1382.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1383,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1384,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1385,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1386,8);\
bit_vector_clear(&konst_1357);\
konst_1357.val.byte_array[0] = 255;\
konst_1357.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1357), &(BITSEL_u1024_u1_1358));\
bit_vector_clear(&konst_1360);\
konst_1360.val.byte_array[0] = 255;\
konst_1360.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1360), &(BITSEL_u1024_u1_1361));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1358), &(BITSEL_u1024_u1_1361), &(CONCAT_u1_u2_1362));\
bit_vector_clear(&konst_1364);\
konst_1364.val.byte_array[0] = 255;\
konst_1364.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1364), &(BITSEL_u1024_u1_1365));\
bit_vector_clear(&konst_1367);\
konst_1367.val.byte_array[0] = 255;\
konst_1367.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1367), &(BITSEL_u1024_u1_1368));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1365), &(BITSEL_u1024_u1_1368), &(CONCAT_u1_u2_1369));\
bit_vector_concatenate( &(CONCAT_u1_u2_1362), &(CONCAT_u1_u2_1369), &(CONCAT_u2_u4_1370));\
bit_vector_clear(&konst_1372);\
konst_1372.val.byte_array[0] = 254;\
konst_1372.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1372), &(BITSEL_u1024_u1_1373));\
bit_vector_clear(&konst_1375);\
konst_1375.val.byte_array[0] = 254;\
konst_1375.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1375), &(BITSEL_u1024_u1_1376));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1373), &(BITSEL_u1024_u1_1376), &(CONCAT_u1_u2_1377));\
bit_vector_clear(&konst_1379);\
konst_1379.val.byte_array[0] = 254;\
konst_1379.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1379), &(BITSEL_u1024_u1_1380));\
bit_vector_clear(&konst_1382);\
konst_1382.val.byte_array[0] = 254;\
konst_1382.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1382), &(BITSEL_u1024_u1_1383));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1380), &(BITSEL_u1024_u1_1383), &(CONCAT_u1_u2_1384));\
bit_vector_concatenate( &(CONCAT_u1_u2_1377), &(CONCAT_u1_u2_1384), &(CONCAT_u2_u4_1385));\
bit_vector_concatenate( &(CONCAT_u2_u4_1370), &(CONCAT_u2_u4_1385), &(CONCAT_u4_u8_1386));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1386));\
;

#define _dataRx_assign_stmt_1420_c_macro_ __declare_static_bit_vector(konst_1390,1024);\
bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 255;\
konst_1390.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1391,1);\
__declare_static_bit_vector(konst_1393,1024);\
bit_vector_clear(&konst_1393);\
konst_1393.val.byte_array[0] = 255;\
konst_1393.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1394,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1395,2);\
__declare_static_bit_vector(konst_1397,1024);\
bit_vector_clear(&konst_1397);\
konst_1397.val.byte_array[0] = 255;\
konst_1397.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1398,1);\
__declare_static_bit_vector(konst_1400,1024);\
bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 255;\
konst_1400.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1401,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1402,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1403,4);\
__declare_static_bit_vector(konst_1405,1024);\
bit_vector_clear(&konst_1405);\
konst_1405.val.byte_array[0] = 254;\
konst_1405.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1406,1);\
__declare_static_bit_vector(konst_1408,1024);\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 254;\
konst_1408.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1409,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1410,2);\
__declare_static_bit_vector(konst_1412,1024);\
bit_vector_clear(&konst_1412);\
konst_1412.val.byte_array[0] = 254;\
konst_1412.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1413,1);\
__declare_static_bit_vector(konst_1415,1024);\
bit_vector_clear(&konst_1415);\
konst_1415.val.byte_array[0] = 254;\
konst_1415.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1416,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1417,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1418,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1419,8);\
bit_vector_clear(&konst_1390);\
konst_1390.val.byte_array[0] = 255;\
konst_1390.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1390), &(BITSEL_u1024_u1_1391));\
bit_vector_clear(&konst_1393);\
konst_1393.val.byte_array[0] = 255;\
konst_1393.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1393), &(BITSEL_u1024_u1_1394));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1391), &(BITSEL_u1024_u1_1394), &(CONCAT_u1_u2_1395));\
bit_vector_clear(&konst_1397);\
konst_1397.val.byte_array[0] = 255;\
konst_1397.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1397), &(BITSEL_u1024_u1_1398));\
bit_vector_clear(&konst_1400);\
konst_1400.val.byte_array[0] = 255;\
konst_1400.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1400), &(BITSEL_u1024_u1_1401));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1398), &(BITSEL_u1024_u1_1401), &(CONCAT_u1_u2_1402));\
bit_vector_concatenate( &(CONCAT_u1_u2_1395), &(CONCAT_u1_u2_1402), &(CONCAT_u2_u4_1403));\
bit_vector_clear(&konst_1405);\
konst_1405.val.byte_array[0] = 254;\
konst_1405.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1405), &(BITSEL_u1024_u1_1406));\
bit_vector_clear(&konst_1408);\
konst_1408.val.byte_array[0] = 254;\
konst_1408.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1408), &(BITSEL_u1024_u1_1409));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1406), &(BITSEL_u1024_u1_1409), &(CONCAT_u1_u2_1410));\
bit_vector_clear(&konst_1412);\
konst_1412.val.byte_array[0] = 254;\
konst_1412.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1412), &(BITSEL_u1024_u1_1413));\
bit_vector_clear(&konst_1415);\
konst_1415.val.byte_array[0] = 254;\
konst_1415.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1415), &(BITSEL_u1024_u1_1416));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1413), &(BITSEL_u1024_u1_1416), &(CONCAT_u1_u2_1417));\
bit_vector_concatenate( &(CONCAT_u1_u2_1410), &(CONCAT_u1_u2_1417), &(CONCAT_u2_u4_1418));\
bit_vector_concatenate( &(CONCAT_u2_u4_1403), &(CONCAT_u2_u4_1418), &(CONCAT_u4_u8_1419));\
bit_vector_cast_to_bit_vector(0, &(biff), &(CONCAT_u4_u8_1419));\
;

#define _dataRx_stmt_1422_c_macro_ uint32_t _dataRx_stmt_1422_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]DATA4>\t%s\n",_dataRx_stmt_1422_c_macro___print_counter,"buf");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATA4>\t\t%s\t\t",_dataRx_stmt_1422_c_macro___print_counter,"biff");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(biff)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataRx_assign_stmt_1427_c_macro_ __declare_static_bit_vector(konst_1425,1024);\
bit_vector_clear(&konst_1425);\
konst_1425.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1426,1024);\
bit_vector_clear(&konst_1425);\
konst_1425.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer0), &(konst_1425), &(SHL_u1024_u1024_1426));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer0), &(SHL_u1024_u1024_1426));\
;

#define _dataRx_assign_stmt_1432_c_macro_ __declare_static_bit_vector(konst_1430,1024);\
bit_vector_clear(&konst_1430);\
konst_1430.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1431,1024);\
bit_vector_clear(&konst_1430);\
konst_1430.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer1), &(konst_1430), &(SHL_u1024_u1024_1431));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer1), &(SHL_u1024_u1024_1431));\
;

#define _dataRx_assign_stmt_1437_c_macro_ __declare_static_bit_vector(konst_1435,1024);\
bit_vector_clear(&konst_1435);\
konst_1435.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1436,1024);\
bit_vector_clear(&konst_1435);\
konst_1435.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer2), &(konst_1435), &(SHL_u1024_u1024_1436));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer2), &(SHL_u1024_u1024_1436));\
;

#define _dataRx_assign_stmt_1442_c_macro_ __declare_static_bit_vector(konst_1440,1024);\
bit_vector_clear(&konst_1440);\
konst_1440.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1441,1024);\
bit_vector_clear(&konst_1440);\
konst_1440.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer3), &(konst_1440), &(SHL_u1024_u1024_1441));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer3), &(SHL_u1024_u1024_1441));\
;

#define _dataRx_assign_stmt_1447_c_macro_ __declare_static_bit_vector(konst_1445,10);\
bit_vector_clear(&konst_1445);\
konst_1445.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1446,10);\
bit_vector_clear(&konst_1445);\
konst_1445.val.byte_array[0] = 1;\
bit_vector_plus( &(B), &(konst_1445), &(ADD_u10_u10_1446));\
bit_vector_cast_to_bit_vector(0, &(next_B), &(ADD_u10_u10_1446));\
;

#define _dataRx_assign_stmt_1462_c_macro_ __declare_static_bit_vector(OR_u1_u1_1457,1);\
__declare_static_bit_vector(OR_u1_u1_1460,1);\
__declare_static_bit_vector(OR_u1_u1_1461,1);\
bit_vector_or(&(stopBitError0), &(stopBitError1), &(OR_u1_u1_1457));\
bit_vector_or(&(stopBitError2), &(stopBitError3), &(OR_u1_u1_1460));\
bit_vector_or(&(OR_u1_u1_1457), &(OR_u1_u1_1460), &(OR_u1_u1_1461));\
bit_vector_cast_to_bit_vector(0, &(stopBitError_Final), &(OR_u1_u1_1461));\
;

#define _dataRx_assign_stmt_1471_c_macro_ __declare_static_bit_vector(OR_u1_u1_1466,1);\
__declare_static_bit_vector(OR_u1_u1_1469,1);\
__declare_static_bit_vector(OR_u1_u1_1470,1);\
bit_vector_or(&(crcError0), &(crcError1), &(OR_u1_u1_1466));\
bit_vector_or(&(crcError2), &(crcError3), &(OR_u1_u1_1469));\
bit_vector_or(&(OR_u1_u1_1466), &(OR_u1_u1_1469), &(OR_u1_u1_1470));\
bit_vector_cast_to_bit_vector(0, &(crcError_Final), &(OR_u1_u1_1470));\
;

#define _dataRx_assign_stmt_1484_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1475,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1477,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1480,3);\
bit_vector_clear(&CONCAT_u1_u3_1480);\
__declare_static_bit_vector(CONCAT_u3_u5_1482,5);\
bit_vector_clear(&CONCAT_u3_u5_1482);\
__declare_static_bit_vector(CONCAT_u3_u8_1483,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError_Final), &(CONCAT_u1_u2_1475));\
bit_vector_concatenate( &(CONCAT_u1_u2_1475), &(crcError_Final), &(CONCAT_u2_u3_1477));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1480));\
bit_vector_concatenate( &(CONCAT_u1_u3_1480), &(ZERO_2), &(CONCAT_u3_u5_1482));\
bit_vector_concatenate( &(CONCAT_u2_u3_1477), &(CONCAT_u3_u5_1482), &(CONCAT_u3_u8_1483));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_4), &(CONCAT_u3_u8_1483));\
;

#define _dataRx_assign_stmt_1488_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1487,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1487));\
bit_vector_cast_to_bit_vector(0, &(startBit), &(RPIPE_DAT0Rx_1487));\
;

#define _dataRx_branch_block_stmt_1489_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(bit7,1);\
__declare_static_bit_vector(bit6,1);\
__declare_static_bit_vector(bit5,1);\
__declare_static_bit_vector(bit4,1);\
__declare_static_bit_vector(bit3,1);\
__declare_static_bit_vector(bit2,1);\
__declare_static_bit_vector(bit1,1);\
__declare_static_bit_vector(bit0,1);\
__declare_static_bit_vector(buffer,8);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataRx_merge_stmt_1490_c_preamble_macro_ uint8_t merge_stmt_1490_entry_flag;\
merge_stmt_1490_entry_flag = 1;\
uint8_t loopback1_1489_flag = 0;\
goto merge_stmt_1490_run;\
loopback1_1489: loopback1_1489_flag = 1;\
goto merge_stmt_1490_run;\
merge_stmt_1490_run: ;\

#define _dataRx_phi_stmt_1491_c_macro_ __declare_static_bit_vector(konst_1493,10);\
bit_vector_clear(&konst_1493);\
__declare_static_bit_vector(type_cast_1494,10);\
bit_vector_clear(&type_cast_1494);\
if(loopback1_1489_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_1493,10);\
bit_vector_clear(&konst_1493);\
__declare_static_bit_vector(type_cast_1494,10);\
bit_vector_clear(&type_cast_1494);\
bit_vector_clear(&konst_1493);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1494), &(konst_1493));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_1494));\
}\
;

#define _dataRx_phi_stmt_1496_c_macro_ __declare_static_bit_vector(konst_1499,4096);\
bit_vector_clear(&konst_1499);\
__declare_static_bit_vector(type_cast_1500,4096);\
bit_vector_clear(&type_cast_1500);\
if(loopback1_1489_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_1499,4096);\
bit_vector_clear(&konst_1499);\
__declare_static_bit_vector(type_cast_1500,4096);\
bit_vector_clear(&type_cast_1500);\
bit_vector_clear(&konst_1499);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1500), &(konst_1499));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_1500));\
}\
;
;

#define _dataRx_merge_stmt_1490_c_postamble_macro_ loopback1_1489_flag = 0;\
merge_stmt_1490_entry_flag = 0;

#define _dataRx_assign_stmt_1505_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1504,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1504));\
bit_vector_cast_to_bit_vector(0, &(bit7), &(RPIPE_DAT0Rx_1504));\
;

#define _dataRx_assign_stmt_1508_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1507,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1507));\
bit_vector_cast_to_bit_vector(0, &(bit6), &(RPIPE_DAT0Rx_1507));\
;

#define _dataRx_assign_stmt_1511_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1510,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1510));\
bit_vector_cast_to_bit_vector(0, &(bit5), &(RPIPE_DAT0Rx_1510));\
;

#define _dataRx_assign_stmt_1514_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1513,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1513));\
bit_vector_cast_to_bit_vector(0, &(bit4), &(RPIPE_DAT0Rx_1513));\
;

#define _dataRx_assign_stmt_1517_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1516,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1516));\
bit_vector_cast_to_bit_vector(0, &(bit3), &(RPIPE_DAT0Rx_1516));\
;

#define _dataRx_assign_stmt_1520_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1519,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1519));\
bit_vector_cast_to_bit_vector(0, &(bit2), &(RPIPE_DAT0Rx_1519));\
;

#define _dataRx_assign_stmt_1523_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1522,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1522));\
bit_vector_cast_to_bit_vector(0, &(bit1), &(RPIPE_DAT0Rx_1522));\
;

#define _dataRx_assign_stmt_1526_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1525,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1525));\
bit_vector_cast_to_bit_vector(0, &(bit0), &(RPIPE_DAT0Rx_1525));\
;

#define _dataRx_assign_stmt_1543_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1530,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1533,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1534,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1537,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1540,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1541,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1542,8);\
bit_vector_concatenate( &(bit7), &(bit6), &(CONCAT_u1_u2_1530));\
bit_vector_concatenate( &(bit5), &(bit4), &(CONCAT_u1_u2_1533));\
bit_vector_concatenate( &(CONCAT_u1_u2_1530), &(CONCAT_u1_u2_1533), &(CONCAT_u2_u4_1534));\
bit_vector_concatenate( &(bit3), &(bit2), &(CONCAT_u1_u2_1537));\
bit_vector_concatenate( &(bit1), &(bit0), &(CONCAT_u1_u2_1540));\
bit_vector_concatenate( &(CONCAT_u1_u2_1537), &(CONCAT_u1_u2_1540), &(CONCAT_u2_u4_1541));\
bit_vector_concatenate( &(CONCAT_u2_u4_1534), &(CONCAT_u2_u4_1541), &(CONCAT_u4_u8_1542));\
bit_vector_cast_to_bit_vector(0, &(buffer), &(CONCAT_u4_u8_1542));\
;

#define _dataRx_assign_stmt_1560_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1547,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1550,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1551,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1554,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1557,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1558,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1559,8);\
bit_vector_concatenate( &(bit7), &(bit6), &(CONCAT_u1_u2_1547));\
bit_vector_concatenate( &(bit5), &(bit4), &(CONCAT_u1_u2_1550));\
bit_vector_concatenate( &(CONCAT_u1_u2_1547), &(CONCAT_u1_u2_1550), &(CONCAT_u2_u4_1551));\
bit_vector_concatenate( &(bit3), &(bit2), &(CONCAT_u1_u2_1554));\
bit_vector_concatenate( &(bit1), &(bit0), &(CONCAT_u1_u2_1557));\
bit_vector_concatenate( &(CONCAT_u1_u2_1554), &(CONCAT_u1_u2_1557), &(CONCAT_u2_u4_1558));\
bit_vector_concatenate( &(CONCAT_u2_u4_1551), &(CONCAT_u2_u4_1558), &(CONCAT_u4_u8_1559));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1559));\
;

#define _dataRx_assign_stmt_1585_c_macro_ __declare_static_bit_vector(konst_1563,4096);\
bit_vector_clear(&konst_1563);\
konst_1563.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_1564,4096);\
__declare_static_bit_vector(konst_1566,4088);\
bit_vector_clear(&konst_1566);\
__declare_static_bit_vector(type_cast_1567,4088);\
bit_vector_clear(&type_cast_1567);\
__declare_static_bit_vector(CONCAT_u1_u2_1570,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1573,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1574,4);\
__declare_static_bit_vector(CONCAT_u1_u2_1577,2);\
__declare_static_bit_vector(CONCAT_u1_u2_1580,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1581,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1582,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_1583,4096);\
__declare_static_bit_vector(OR_u4096_u4096_1584,4096);\
bit_vector_clear(&konst_1563);\
konst_1563.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_1563), &(SHL_u4096_u4096_1564));\
bit_vector_clear(&konst_1566);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1567), &(konst_1566));\
bit_vector_concatenate( &(bit7), &(bit6), &(CONCAT_u1_u2_1570));\
bit_vector_concatenate( &(bit5), &(bit4), &(CONCAT_u1_u2_1573));\
bit_vector_concatenate( &(CONCAT_u1_u2_1570), &(CONCAT_u1_u2_1573), &(CONCAT_u2_u4_1574));\
bit_vector_concatenate( &(bit3), &(bit2), &(CONCAT_u1_u2_1577));\
bit_vector_concatenate( &(bit1), &(bit0), &(CONCAT_u1_u2_1580));\
bit_vector_concatenate( &(CONCAT_u1_u2_1577), &(CONCAT_u1_u2_1580), &(CONCAT_u2_u4_1581));\
bit_vector_concatenate( &(CONCAT_u2_u4_1574), &(CONCAT_u2_u4_1581), &(CONCAT_u4_u8_1582));\
bit_vector_concatenate( &(type_cast_1567), &(CONCAT_u4_u8_1582), &(CONCAT_u4088_u4096_1583));\
bit_vector_or(&(SHL_u4096_u4096_1564), &(CONCAT_u4088_u4096_1583), &(OR_u4096_u4096_1584));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_1584));\
;

#define _dataRx_assign_stmt_1590_c_macro_ __declare_static_bit_vector(konst_1588,10);\
bit_vector_clear(&konst_1588);\
konst_1588.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1589,10);\
bit_vector_clear(&konst_1588);\
konst_1588.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_1588), &(ADD_u10_u10_1589));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_1589));\
;
;

#define _dataRx_branch_block_stmt_1489_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataRx_assign_stmt_1601_c_macro_ __declare_static_bit_vector(konst_1599,10);\
bit_vector_clear(&konst_1599);\
konst_1599.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1600,10);\
bit_vector_clear(&type_cast_1600);\
type_cast_1600.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1599);\
konst_1599.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1600), &(konst_1599));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1600));\
;

#define _dataRx_merge_stmt_1602_c_preamble_macro_ uint8_t merge_stmt_1602_entry_flag;\
merge_stmt_1602_entry_flag = 1;\
uint8_t crcloopback_545_flag = 0;\
goto merge_stmt_1602_run;\
crcloopback_545: crcloopback_545_flag = 1;\
goto merge_stmt_1602_run;\
merge_stmt_1602_run: ;\

#define _dataRx_phi_stmt_1603_c_macro_ __declare_static_bit_vector(konst_1605,5);\
bit_vector_clear(&konst_1605);\
__declare_static_bit_vector(type_cast_1606,5);\
bit_vector_clear(&type_cast_1606);\
if(crcloopback_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_1605,5);\
bit_vector_clear(&konst_1605);\
__declare_static_bit_vector(type_cast_1606,5);\
bit_vector_clear(&type_cast_1606);\
bit_vector_clear(&konst_1605);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1606), &(konst_1605));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_1606));\
}\
;

#define _dataRx_phi_stmt_1608_c_macro_ __declare_static_bit_vector(konst_1610,16);\
bit_vector_clear(&konst_1610);\
__declare_static_bit_vector(type_cast_1611,16);\
bit_vector_clear(&type_cast_1611);\
if(crcloopback_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(nextCRC));\
}\
else {\
__declare_static_bit_vector(konst_1610,16);\
bit_vector_clear(&konst_1610);\
__declare_static_bit_vector(type_cast_1611,16);\
bit_vector_clear(&type_cast_1611);\
bit_vector_clear(&konst_1610);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1611), &(konst_1610));\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(type_cast_1611));\
}\
;
;

#define _dataRx_merge_stmt_1602_c_postamble_macro_ crcloopback_545_flag = 0;\
merge_stmt_1602_entry_flag = 0;

#define _dataRx_assign_stmt_1623_c_macro_ __declare_static_bit_vector(konst_1616,16);\
bit_vector_clear(&konst_1616);\
konst_1616.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1617,16);\
__declare_static_bit_vector(konst_1618,15);\
bit_vector_clear(&konst_1618);\
__declare_static_bit_vector(type_cast_1619,15);\
bit_vector_clear(&type_cast_1619);\
__declare_static_bit_vector(RPIPE_DAT0Rx_1620,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1621,16);\
__declare_static_bit_vector(OR_u16_u16_1622,16);\
bit_vector_clear(&konst_1616);\
konst_1616.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC), &(konst_1616), &(SHL_u16_u16_1617));\
bit_vector_clear(&konst_1618);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1619), &(konst_1618));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1620));\
bit_vector_concatenate( &(type_cast_1619), &(RPIPE_DAT0Rx_1620), &(CONCAT_u15_u16_1621));\
bit_vector_or(&(SHL_u16_u16_1617), &(CONCAT_u15_u16_1621), &(OR_u16_u16_1622));\
bit_vector_cast_to_bit_vector(0, &(nextCRC), &(OR_u16_u16_1622));\
;

#define _dataRx_assign_stmt_1628_c_macro_ __declare_static_bit_vector(konst_1626,5);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1627,5);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_1626), &(ADD_u5_u5_1627));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u5_u5_1627));\
;

#define _dataRx_assign_stmt_1637_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1636,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1636));\
bit_vector_cast_to_bit_vector(0, &(stopBit), &(RPIPE_DAT0Rx_1636));\
;

#define _dataRx_assign_stmt_1647_c_macro_ __declare_static_bit_vector(konst_1645,8);\
bit_vector_clear(&konst_1645);\
konst_1645.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1646,8);\
bit_vector_clear(&konst_1645);\
konst_1645.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1645), &(AND_u8_u8_1646));\
__declare_static_bit_vector(konst_1642,32);\
bit_vector_clear(&konst_1642);\
konst_1642.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1642);\
konst_1642.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1642)])), &(AND_u8_u8_1646));\
;

#define _dataRx_assign_stmt_1653_c_macro_ __declare_static_bit_vector(konst_1651,1);\
bit_vector_clear(&konst_1651);\
__declare_static_bit_vector(EQ_u1_u1_1652,1);\
bit_vector_clear(&konst_1651);\
bit_vector_equal(0, &(stopBit), &(konst_1651), &(EQ_u1_u1_1652));\
bit_vector_cast_to_bit_vector(0, &(stopBitError), &(EQ_u1_u1_1652));\
;

#define _dataRx_merge_stmt_1654_c_preamble_macro_ uint8_t merge_stmt_1654_entry_flag;\
merge_stmt_1654_entry_flag = 1;\
uint8_t loopback_545_flag = 0;\
goto merge_stmt_1654_run;\
loopback_545: loopback_545_flag = 1;\
goto merge_stmt_1654_run;\
merge_stmt_1654_run: ;\

#define _dataRx_phi_stmt_1655_c_macro_ __declare_static_bit_vector(konst_1657,13);\
bit_vector_clear(&konst_1657);\
__declare_static_bit_vector(type_cast_1658,13);\
bit_vector_clear(&type_cast_1658);\
if(loopback_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1657,13);\
bit_vector_clear(&konst_1657);\
__declare_static_bit_vector(type_cast_1658,13);\
bit_vector_clear(&type_cast_1658);\
bit_vector_clear(&konst_1657);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1658), &(konst_1657));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1658));\
}\
;

#define _dataRx_phi_stmt_1660_c_macro_ __declare_static_bit_vector(konst_1662,16);\
bit_vector_clear(&konst_1662);\
__declare_static_bit_vector(type_cast_1663,16);\
bit_vector_clear(&type_cast_1663);\
if(loopback_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_1662,16);\
bit_vector_clear(&konst_1662);\
__declare_static_bit_vector(type_cast_1663,16);\
bit_vector_clear(&type_cast_1663);\
bit_vector_clear(&konst_1662);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1663), &(konst_1662));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_1663));\
}\
;

#define _dataRx_phi_stmt_1665_c_macro_ if(loopback_545_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataRx_merge_stmt_1654_c_postamble_macro_ loopback_545_flag = 0;\
merge_stmt_1654_entry_flag = 0;

#define _dataRx_assign_stmt_1678_c_macro_ __declare_static_bit_vector(konst_1672,4096);\
bit_vector_clear(&konst_1672);\
konst_1672.val.byte_array[0] = 255;\
konst_1672.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_1673,1);\
__declare_static_bit_vector(konst_1675,16);\
bit_vector_clear(&konst_1675);\
konst_1675.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1676,1);\
__declare_static_bit_vector(XOR_u1_u1_1677,1);\
bit_vector_clear(&konst_1672);\
konst_1672.val.byte_array[0] = 255;\
konst_1672.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_1672), &(BITSEL_u4096_u1_1673));\
bit_vector_clear(&konst_1675);\
konst_1675.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_1675), &(BITSEL_u16_u1_1676));\
bit_vector_xor(&(BITSEL_u4096_u1_1673), &(BITSEL_u16_u1_1676), &(XOR_u1_u1_1677));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_1677));\
;

#define _dataRx_assign_stmt_1702_c_macro_ __declare_static_bit_vector(slice_1681,3);\
__declare_static_bit_vector(konst_1683,16);\
bit_vector_clear(&konst_1683);\
konst_1683.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1684,1);\
__declare_static_bit_vector(XOR_u1_u1_1686,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1687,4);\
__declare_static_bit_vector(slice_1689,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1690,10);\
__declare_static_bit_vector(konst_1692,16);\
bit_vector_clear(&konst_1692);\
konst_1692.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1693,1);\
__declare_static_bit_vector(XOR_u1_u1_1695,1);\
__declare_static_bit_vector(slice_1697,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1698,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1700,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1701,16);\
bit_vector_slice(&(CRC_16), &(slice_1681), 12);\
bit_vector_clear(&konst_1683);\
konst_1683.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_1683), &(BITSEL_u16_u1_1684));\
bit_vector_xor(&(BITSEL_u16_u1_1684), &(inv), &(XOR_u1_u1_1686));\
bit_vector_concatenate( &(slice_1681), &(XOR_u1_u1_1686), &(CONCAT_u3_u4_1687));\
bit_vector_slice(&(CRC_16), &(slice_1689), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1687), &(slice_1689), &(CONCAT_u4_u10_1690));\
bit_vector_clear(&konst_1692);\
konst_1692.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_1692), &(BITSEL_u16_u1_1693));\
bit_vector_xor(&(BITSEL_u16_u1_1693), &(inv), &(XOR_u1_u1_1695));\
bit_vector_slice(&(CRC_16), &(slice_1697), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1695), &(slice_1697), &(CONCAT_u1_u5_1698));\
bit_vector_concatenate( &(CONCAT_u1_u5_1698), &(inv), &(CONCAT_u5_u6_1700));\
bit_vector_concatenate( &(CONCAT_u4_u10_1690), &(CONCAT_u5_u6_1700), &(CONCAT_u10_u16_1701));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_1701));\
;

#define _dataRx_assign_stmt_1707_c_macro_ __declare_static_bit_vector(konst_1705,4096);\
bit_vector_clear(&konst_1705);\
konst_1705.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_1706,4096);\
bit_vector_clear(&konst_1705);\
konst_1705.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_1705), &(SHL_u4096_u4096_1706));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_1706));\
;

#define _dataRx_assign_stmt_1712_c_macro_ __declare_static_bit_vector(konst_1710,13);\
bit_vector_clear(&konst_1710);\
konst_1710.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1711,13);\
bit_vector_clear(&konst_1710);\
konst_1710.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1710), &(ADD_u13_u13_1711));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_1711));\
;

#define _dataRx_assign_stmt_1723_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1722,1);\
bit_vector_not_equal(0, &(nextCRC), &(nextCRC16), &NEQ_u16_u1_1722);\
bit_vector_cast_to_bit_vector(0, &(crcError), &(NEQ_u16_u1_1722));\
;

#define _dataRx_assign_stmt_1726_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty), &(ONE_1));\
;

#define _dataRx_assign_stmt_1739_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1730,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1732,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1735,3);\
bit_vector_clear(&CONCAT_u1_u3_1735);\
__declare_static_bit_vector(CONCAT_u3_u5_1737,5);\
bit_vector_clear(&CONCAT_u3_u5_1737);\
__declare_static_bit_vector(CONCAT_u3_u8_1738,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError), &(CONCAT_u1_u2_1730));\
bit_vector_concatenate( &(CONCAT_u1_u2_1730), &(crcError), &(CONCAT_u2_u3_1732));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1735));\
bit_vector_concatenate( &(CONCAT_u1_u3_1735), &(ZERO_2), &(CONCAT_u3_u5_1737));\
bit_vector_concatenate( &(CONCAT_u2_u3_1732), &(CONCAT_u3_u5_1737), &(CONCAT_u3_u8_1738));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_0), &(CONCAT_u3_u8_1738));\
;

#define _dataRx_assign_stmt_1749_c_macro_ __declare_static_bit_vector(konst_1742,32);\
bit_vector_clear(&konst_1742);\
konst_1742.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_1744,8);\
bit_vector_clear(&konst_1744);\
konst_1744.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_1745,1);\
__declare_static_bit_vector(MUX_1748,8);\
bit_vector_clear(&konst_1742);\
konst_1742.val.byte_array[0] = 40;\
bit_vector_clear(&konst_1744);\
konst_1744.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1742)])), &(konst_1744), &(BITSEL_u8_u1_1745));\
if (has_undefined_bit(&BITSEL_u8_u1_1745)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_1745 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_1745));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u8_u1_1745)){bit_vector_cast_to_bit_vector(0, &(MUX_1748), &(dataErrorInterruptStatusVar1_4));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1748), &(dataErrorInterruptStatusVar1_0));\
}bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1), &(MUX_1748));\
;

#define _dataRx_assign_stmt_1759_c_macro_ __declare_static_bit_vector(konst_1757,8);\
bit_vector_clear(&konst_1757);\
konst_1757.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1758,8);\
bit_vector_clear(&konst_1757);\
konst_1757.val.byte_array[0] = 253;\
bit_vector_and(&(presentState1Var), &(konst_1757), &(AND_u8_u8_1758));\
__declare_static_bit_vector(konst_1754,32);\
bit_vector_clear(&konst_1754);\
konst_1754.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1754);\
konst_1754.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1754)])), &(AND_u8_u8_1758));\
;

#define _dataRx_assign_stmt_1765_c_macro_ __declare_static_bit_vector(konst_1763,8);\
bit_vector_clear(&konst_1763);\
konst_1763.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1764,8);\
bit_vector_clear(&konst_1763);\
konst_1763.val.byte_array[0] = 253;\
bit_vector_and(&(presentState0Var), &(konst_1763), &(AND_u8_u8_1764));\
__declare_static_bit_vector(konst_1760,32);\
bit_vector_clear(&konst_1760);\
konst_1760.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1760);\
konst_1760.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1760)])), &(AND_u8_u8_1764));\
;

#define _dataRx_stmt_1770_c_macro_ uint32_t _dataRx_stmt_1770_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]You>\t%s\n",_dataRx_stmt_1770_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1770_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1770_c_macro___print_counter,"nextCRC");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1770_c_macro___print_counter,"rxBufferPointer");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(rxBufferPointer)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataRx_branch_block_stmt_545_c_export_apply_macro_ ;

#define _dataRx_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pdataErrorInterruptStatusVar1)), &(dataErrorInterruptStatusVar1));\
;

#define _dataTx_inner_inarg_prep_macro__ __declare_static_bit_vector(lastBlock,1);\
bit_vector_cast_to_bit_vector(0, &(lastBlock), &((*__plastBlock)));\
__declare_static_bit_vector(blockCountEnable,1);\
bit_vector_cast_to_bit_vector(0, &(blockCountEnable), &((*__pblockCountEnable)));\
__declare_static_bit_vector(blockCount,16);\
bit_vector_cast_to_bit_vector(0, &(blockCount), &((*__pblockCount)));\
__declare_static_bit_vector(blockCountNext,16);\
__declare_static_bit_vector(transferComplete,8);\

#define _dataTx_branch_block_stmt_2342_c_export_decl_macro_ __declare_static_bit_vector(j_0,11);\
__declare_static_bit_vector(CRC_16_DAT0,16);\
__declare_static_bit_vector(tempDataD0,1024);\
__declare_static_bit_vector(invd0,1);\
__declare_static_bit_vector(nextCRC16_DAT0,16);\
__declare_static_bit_vector(nextTempDataD0,1024);\
__declare_static_bit_vector(next_j_0,11);\
__declare_static_bit_vector(j_1,11);\
__declare_static_bit_vector(CRC_16_DAT1,16);\
__declare_static_bit_vector(tempDataD1,1024);\
__declare_static_bit_vector(invd1,1);\
__declare_static_bit_vector(nextCRC16_DAT1,16);\
__declare_static_bit_vector(nextTempDataD1,1024);\
__declare_static_bit_vector(next_j_1,11);\
__declare_static_bit_vector(j_2,11);\
__declare_static_bit_vector(CRC_16_DAT2,16);\
__declare_static_bit_vector(tempDataD2,1024);\
__declare_static_bit_vector(invd2,1);\
__declare_static_bit_vector(nextCRC16_DAT2,16);\
__declare_static_bit_vector(nextTempDataD2,1024);\
__declare_static_bit_vector(next_j_2,11);\
__declare_static_bit_vector(j_3,11);\
__declare_static_bit_vector(CRC_16_DAT3,16);\
__declare_static_bit_vector(tempDataD3,1024);\
__declare_static_bit_vector(invd3,1);\
__declare_static_bit_vector(nextCRC16_DAT3,16);\
__declare_static_bit_vector(nextTempDataD3,1024);\
__declare_static_bit_vector(next_j_3,11);\
__declare_static_bit_vector(k_0,11);\
__declare_static_bit_vector(dat0bit4_0,1024);\
__declare_static_bit_vector(nextbit4_0,1024);\
__declare_static_bit_vector(next_k_0,11);\
__declare_static_bit_vector(l_0,5);\
__declare_static_bit_vector(dat0crc4,16);\
__declare_static_bit_vector(nextbitcrc4_0,16);\
__declare_static_bit_vector(next_l_0,5);\
__declare_static_bit_vector(k_1,11);\
__declare_static_bit_vector(dat0bit4_1,1024);\
__declare_static_bit_vector(nextbit4_1,1024);\
__declare_static_bit_vector(next_k_1,11);\
__declare_static_bit_vector(l_1,5);\
__declare_static_bit_vector(dat1crc4,16);\
__declare_static_bit_vector(nextbitcrc4_1,16);\
__declare_static_bit_vector(next_l_1,5);\
__declare_static_bit_vector(k_2,11);\
__declare_static_bit_vector(dat0bit4_2,1024);\
__declare_static_bit_vector(nextbit4_2,1024);\
__declare_static_bit_vector(next_k_2,11);\
__declare_static_bit_vector(l_2,5);\
__declare_static_bit_vector(dat2crc4,16);\
__declare_static_bit_vector(nextbitcrc4_2,16);\
__declare_static_bit_vector(next_l_2,5);\
__declare_static_bit_vector(k_3,11);\
__declare_static_bit_vector(dat0bit4_3,1024);\
__declare_static_bit_vector(nextbit4_3,1024);\
__declare_static_bit_vector(next_k_3,11);\
__declare_static_bit_vector(l_3,5);\
__declare_static_bit_vector(dat3crc4,16);\
__declare_static_bit_vector(nextbitcrc4_3,16);\
__declare_static_bit_vector(next_l_3,5);\
__declare_static_bit_vector(J,13);\
__declare_static_bit_vector(CRC_16,16);\
__declare_static_bit_vector(tempData,4096);\
__declare_static_bit_vector(inv,1);\
__declare_static_bit_vector(nextCRC16,16);\
__declare_static_bit_vector(nextTempData,4096);\
__declare_static_bit_vector(next_J,13);\
__declare_static_bit_vector(K,13);\
__declare_static_bit_vector(dat0bit,4096);\
__declare_static_bit_vector(nextbit,4096);\
__declare_static_bit_vector(next_K,13);\
__declare_static_bit_vector(L,5);\
__declare_static_bit_vector(dat0crc,16);\
__declare_static_bit_vector(nextbitcrc,16);\
__declare_static_bit_vector(next_L,5);\
__declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(wait,1);\


#define _dataTx_branch_block_stmt_2348_c_export_decl_macro_ __declare_static_bit_vector(dat0__next_data0,1024);\
__declare_static_bit_vector(dat1__next_data1,1024);\
__declare_static_bit_vector(dat2__next_data2,1024);\
__declare_static_bit_vector(dat3__next_data3,1024);\
__declare_static_bit_vector(i,10);\
__declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(tempBuffer,8);\
__declare_static_bit_vector(next_data0,1024);\
__declare_static_bit_vector(next_data1,1024);\
__declare_static_bit_vector(next_data2,1024);\
__declare_static_bit_vector(next_data3,1024);\
__declare_static_bit_vector(next_i,10);\


#define _dataTx_merge_stmt_2349_c_preamble_macro_ uint8_t merge_stmt_2349_entry_flag;\
merge_stmt_2349_entry_flag = 1;\
uint8_t loopback1_4_2348_flag = 0;\
goto merge_stmt_2349_run;\
loopback1_4_2348: loopback1_4_2348_flag = 1;\
goto merge_stmt_2349_run;\
merge_stmt_2349_run: ;\

#define _dataTx_phi_stmt_2350_c_macro_ __declare_static_bit_vector(konst_2352,10);\
bit_vector_clear(&konst_2352);\
__declare_static_bit_vector(type_cast_2353,10);\
bit_vector_clear(&type_cast_2353);\
if(loopback1_4_2348_flag) {\
bit_vector_cast_to_bit_vector(0, &(i), &(next_i));\
}\
else {\
__declare_static_bit_vector(konst_2352,10);\
bit_vector_clear(&konst_2352);\
__declare_static_bit_vector(type_cast_2353,10);\
bit_vector_clear(&type_cast_2353);\
bit_vector_clear(&konst_2352);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2353), &(konst_2352));\
bit_vector_cast_to_bit_vector(0, &(i), &(type_cast_2353));\
}\
;

#define _dataTx_phi_stmt_2355_c_macro_ __declare_static_bit_vector(konst_2358,1024);\
bit_vector_clear(&konst_2358);\
__declare_static_bit_vector(type_cast_2359,1024);\
bit_vector_clear(&type_cast_2359);\
if(loopback1_4_2348_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0), &(next_data0));\
}\
else {\
__declare_static_bit_vector(konst_2358,1024);\
bit_vector_clear(&konst_2358);\
__declare_static_bit_vector(type_cast_2359,1024);\
bit_vector_clear(&type_cast_2359);\
bit_vector_clear(&konst_2358);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2359), &(konst_2358));\
bit_vector_cast_to_bit_vector(0, &(dat0), &(type_cast_2359));\
}\
;

#define _dataTx_phi_stmt_2360_c_macro_ __declare_static_bit_vector(konst_2362,1024);\
bit_vector_clear(&konst_2362);\
__declare_static_bit_vector(type_cast_2363,1024);\
bit_vector_clear(&type_cast_2363);\
if(loopback1_4_2348_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_2362,1024);\
bit_vector_clear(&konst_2362);\
__declare_static_bit_vector(type_cast_2363,1024);\
bit_vector_clear(&type_cast_2363);\
bit_vector_clear(&konst_2362);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2363), &(konst_2362));\
bit_vector_cast_to_bit_vector(0, &(dat1), &(type_cast_2363));\
}\
;

#define _dataTx_phi_stmt_2365_c_macro_ __declare_static_bit_vector(konst_2367,1024);\
bit_vector_clear(&konst_2367);\
__declare_static_bit_vector(type_cast_2368,1024);\
bit_vector_clear(&type_cast_2368);\
if(loopback1_4_2348_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_2367,1024);\
bit_vector_clear(&konst_2367);\
__declare_static_bit_vector(type_cast_2368,1024);\
bit_vector_clear(&type_cast_2368);\
bit_vector_clear(&konst_2367);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2368), &(konst_2367));\
bit_vector_cast_to_bit_vector(0, &(dat2), &(type_cast_2368));\
}\
;

#define _dataTx_phi_stmt_2370_c_macro_ __declare_static_bit_vector(konst_2373,1024);\
bit_vector_clear(&konst_2373);\
__declare_static_bit_vector(type_cast_2374,1024);\
bit_vector_clear(&type_cast_2374);\
if(loopback1_4_2348_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_2373,1024);\
bit_vector_clear(&konst_2373);\
__declare_static_bit_vector(type_cast_2374,1024);\
bit_vector_clear(&type_cast_2374);\
bit_vector_clear(&konst_2373);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2374), &(konst_2373));\
bit_vector_cast_to_bit_vector(0, &(dat3), &(type_cast_2374));\
}\
;
;

#define _dataTx_merge_stmt_2349_c_postamble_macro_ loopback1_4_2348_flag = 0;\
merge_stmt_2349_entry_flag = 0;

#define _dataTx_assign_stmt_2378_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferTx_2377,8);\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_2377));\
bit_vector_cast_to_bit_vector(0, &(tempBuffer), &(RPIPE_dataBufferTx_2377));\
;

#define _dataTx_assign_stmt_2396_c_macro_ __declare_static_bit_vector(konst_2381,1024);\
bit_vector_clear(&konst_2381);\
konst_2381.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2382,1024);\
__declare_static_bit_vector(konst_2384,1022);\
bit_vector_clear(&konst_2384);\
__declare_static_bit_vector(type_cast_2385,1022);\
bit_vector_clear(&type_cast_2385);\
__declare_static_bit_vector(konst_2387,8);\
bit_vector_clear(&konst_2387);\
konst_2387.val.byte_array[0] = 7;\
__declare_static_bit_vector(BITSEL_u8_u1_2388,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2389,1023);\
__declare_static_bit_vector(konst_2392,8);\
bit_vector_clear(&konst_2392);\
konst_2392.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u8_u1_2393,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2394,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2395,1024);\
bit_vector_clear(&konst_2381);\
konst_2381.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat0), &(konst_2381), &(SHL_u1024_u1024_2382));\
bit_vector_clear(&konst_2384);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2385), &(konst_2384));\
bit_vector_clear(&konst_2387);\
konst_2387.val.byte_array[0] = 7;\
bit_vector_bitsel( &(tempBuffer), &(konst_2387), &(BITSEL_u8_u1_2388));\
bit_vector_concatenate( &(type_cast_2385), &(BITSEL_u8_u1_2388), &(CONCAT_u1022_u1023_2389));\
bit_vector_clear(&konst_2392);\
konst_2392.val.byte_array[0] = 3;\
bit_vector_bitsel( &(tempBuffer), &(konst_2392), &(BITSEL_u8_u1_2393));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2389), &(BITSEL_u8_u1_2393), &(CONCAT_u1023_u1024_2394));\
bit_vector_or(&(SHL_u1024_u1024_2382), &(CONCAT_u1023_u1024_2394), &(OR_u1024_u1024_2395));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1024_u1024_2395));\
;

#define _dataTx_assign_stmt_2412_c_macro_ __declare_static_bit_vector(konst_2399,1024);\
bit_vector_clear(&konst_2399);\
konst_2399.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2400,1024);\
__declare_static_bit_vector(konst_2401,1022);\
bit_vector_clear(&konst_2401);\
__declare_static_bit_vector(type_cast_2402,1022);\
bit_vector_clear(&type_cast_2402);\
__declare_static_bit_vector(konst_2404,8);\
bit_vector_clear(&konst_2404);\
konst_2404.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u8_u1_2405,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2406,1023);\
__declare_static_bit_vector(konst_2408,8);\
bit_vector_clear(&konst_2408);\
konst_2408.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_2409,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2410,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2411,1024);\
bit_vector_clear(&konst_2399);\
konst_2399.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat1), &(konst_2399), &(SHL_u1024_u1024_2400));\
bit_vector_clear(&konst_2401);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2402), &(konst_2401));\
bit_vector_clear(&konst_2404);\
konst_2404.val.byte_array[0] = 6;\
bit_vector_bitsel( &(tempBuffer), &(konst_2404), &(BITSEL_u8_u1_2405));\
bit_vector_concatenate( &(type_cast_2402), &(BITSEL_u8_u1_2405), &(CONCAT_u1022_u1023_2406));\
bit_vector_clear(&konst_2408);\
konst_2408.val.byte_array[0] = 2;\
bit_vector_bitsel( &(tempBuffer), &(konst_2408), &(BITSEL_u8_u1_2409));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2406), &(BITSEL_u8_u1_2409), &(CONCAT_u1023_u1024_2410));\
bit_vector_or(&(SHL_u1024_u1024_2400), &(CONCAT_u1023_u1024_2410), &(OR_u1024_u1024_2411));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1024_u1024_2411));\
;

#define _dataTx_assign_stmt_2428_c_macro_ __declare_static_bit_vector(konst_2415,1024);\
bit_vector_clear(&konst_2415);\
konst_2415.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2416,1024);\
__declare_static_bit_vector(konst_2417,1022);\
bit_vector_clear(&konst_2417);\
__declare_static_bit_vector(type_cast_2418,1022);\
bit_vector_clear(&type_cast_2418);\
__declare_static_bit_vector(konst_2420,8);\
bit_vector_clear(&konst_2420);\
konst_2420.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_2421,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2422,1023);\
__declare_static_bit_vector(konst_2424,8);\
bit_vector_clear(&konst_2424);\
konst_2424.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2425,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2426,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2427,1024);\
bit_vector_clear(&konst_2415);\
konst_2415.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat2), &(konst_2415), &(SHL_u1024_u1024_2416));\
bit_vector_clear(&konst_2417);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2418), &(konst_2417));\
bit_vector_clear(&konst_2420);\
konst_2420.val.byte_array[0] = 5;\
bit_vector_bitsel( &(tempBuffer), &(konst_2420), &(BITSEL_u8_u1_2421));\
bit_vector_concatenate( &(type_cast_2418), &(BITSEL_u8_u1_2421), &(CONCAT_u1022_u1023_2422));\
bit_vector_clear(&konst_2424);\
konst_2424.val.byte_array[0] = 1;\
bit_vector_bitsel( &(tempBuffer), &(konst_2424), &(BITSEL_u8_u1_2425));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2422), &(BITSEL_u8_u1_2425), &(CONCAT_u1023_u1024_2426));\
bit_vector_or(&(SHL_u1024_u1024_2416), &(CONCAT_u1023_u1024_2426), &(OR_u1024_u1024_2427));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1024_u1024_2427));\
;

#define _dataTx_assign_stmt_2444_c_macro_ __declare_static_bit_vector(konst_2431,1024);\
bit_vector_clear(&konst_2431);\
konst_2431.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2432,1024);\
__declare_static_bit_vector(konst_2433,1022);\
bit_vector_clear(&konst_2433);\
__declare_static_bit_vector(type_cast_2434,1022);\
bit_vector_clear(&type_cast_2434);\
__declare_static_bit_vector(konst_2436,8);\
bit_vector_clear(&konst_2436);\
konst_2436.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u8_u1_2437,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2438,1023);\
__declare_static_bit_vector(konst_2440,8);\
bit_vector_clear(&konst_2440);\
__declare_static_bit_vector(BITSEL_u8_u1_2441,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2442,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2443,1024);\
bit_vector_clear(&konst_2431);\
konst_2431.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat3), &(konst_2431), &(SHL_u1024_u1024_2432));\
bit_vector_clear(&konst_2433);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2434), &(konst_2433));\
bit_vector_clear(&konst_2436);\
konst_2436.val.byte_array[0] = 4;\
bit_vector_bitsel( &(tempBuffer), &(konst_2436), &(BITSEL_u8_u1_2437));\
bit_vector_concatenate( &(type_cast_2434), &(BITSEL_u8_u1_2437), &(CONCAT_u1022_u1023_2438));\
bit_vector_clear(&konst_2440);\
bit_vector_bitsel( &(tempBuffer), &(konst_2440), &(BITSEL_u8_u1_2441));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2438), &(BITSEL_u8_u1_2441), &(CONCAT_u1023_u1024_2442));\
bit_vector_or(&(SHL_u1024_u1024_2432), &(CONCAT_u1023_u1024_2442), &(OR_u1024_u1024_2443));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1024_u1024_2443));\
;

#define _dataTx_stmt_2451_c_macro_ uint32_t _dataTx_stmt_2451_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]DATAIN>\t%s\n",_dataTx_stmt_2451_c_macro___print_counter,"next");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"i");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(i)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"tempBuffer");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(tempBuffer)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"next_data0");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_data0)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"next_data1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_data1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"next_data2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_data2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAIN>\t\t%s\t\t",_dataTx_stmt_2451_c_macro___print_counter,"next_data3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(next_data3)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_2456_c_macro_ __declare_static_bit_vector(konst_2454,10);\
bit_vector_clear(&konst_2454);\
konst_2454.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_2455,10);\
bit_vector_clear(&konst_2454);\
konst_2454.val.byte_array[0] = 1;\
bit_vector_plus( &(i), &(konst_2454), &(ADD_u10_u10_2455));\
bit_vector_cast_to_bit_vector(0, &(next_i), &(ADD_u10_u10_2455));\
;
;

#define _dataTx_branch_block_stmt_2348_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__next_data0), &(next_data0));\
bit_vector_cast_to_bit_vector(0, &(dat1__next_data1), &(next_data1));\
bit_vector_cast_to_bit_vector(0, &(dat2__next_data2), &(next_data2));\
bit_vector_cast_to_bit_vector(0, &(dat3__next_data3), &(next_data3));\
;

#define _dataTx_assign_stmt_2467_c_macro_ __declare_static_bit_vector(konst_2465,10);\
bit_vector_clear(&konst_2465);\
__declare_static_bit_vector(type_cast_2466,10);\
bit_vector_clear(&type_cast_2466);\
bit_vector_clear(&konst_2465);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2466), &(konst_2465));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_2466));\
;

#define _dataTx_merge_stmt_2468_c_preamble_macro_ uint8_t merge_stmt_2468_entry_flag;\
merge_stmt_2468_entry_flag = 1;\
uint8_t loopback_dat0_2342_flag = 0;\
goto merge_stmt_2468_run;\
loopback_dat0_2342: loopback_dat0_2342_flag = 1;\
goto merge_stmt_2468_run;\
merge_stmt_2468_run: ;\

#define _dataTx_phi_stmt_2469_c_macro_ __declare_static_bit_vector(konst_2472,11);\
bit_vector_clear(&konst_2472);\
__declare_static_bit_vector(type_cast_2473,11);\
bit_vector_clear(&type_cast_2473);\
if(loopback_dat0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_0), &(next_j_0));\
}\
else {\
__declare_static_bit_vector(konst_2472,11);\
bit_vector_clear(&konst_2472);\
__declare_static_bit_vector(type_cast_2473,11);\
bit_vector_clear(&type_cast_2473);\
bit_vector_clear(&konst_2472);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2473), &(konst_2472));\
bit_vector_cast_to_bit_vector(0, &(j_0), &(type_cast_2473));\
}\
;

#define _dataTx_phi_stmt_2475_c_macro_ __declare_static_bit_vector(konst_2477,16);\
bit_vector_clear(&konst_2477);\
__declare_static_bit_vector(type_cast_2478,16);\
bit_vector_clear(&type_cast_2478);\
if(loopback_dat0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(nextCRC16_DAT0));\
}\
else {\
__declare_static_bit_vector(konst_2477,16);\
bit_vector_clear(&konst_2477);\
__declare_static_bit_vector(type_cast_2478,16);\
bit_vector_clear(&type_cast_2478);\
bit_vector_clear(&konst_2477);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2478), &(konst_2477));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(type_cast_2478));\
}\
;

#define _dataTx_phi_stmt_2480_c_macro_ if(loopback_dat0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(nextTempDataD0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(dat0__next_data0));\
}\
;
;

#define _dataTx_merge_stmt_2468_c_postamble_macro_ loopback_dat0_2342_flag = 0;\
merge_stmt_2468_entry_flag = 0;

#define _dataTx_assign_stmt_2493_c_macro_ __declare_static_bit_vector(konst_2487,1024);\
bit_vector_clear(&konst_2487);\
konst_2487.val.byte_array[0] = 255;\
konst_2487.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2488,1);\
__declare_static_bit_vector(konst_2490,16);\
bit_vector_clear(&konst_2490);\
konst_2490.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2491,1);\
__declare_static_bit_vector(XOR_u1_u1_2492,1);\
bit_vector_clear(&konst_2487);\
konst_2487.val.byte_array[0] = 255;\
konst_2487.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD0), &(konst_2487), &(BITSEL_u1024_u1_2488));\
bit_vector_clear(&konst_2490);\
konst_2490.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2490), &(BITSEL_u16_u1_2491));\
bit_vector_xor(&(BITSEL_u1024_u1_2488), &(BITSEL_u16_u1_2491), &(XOR_u1_u1_2492));\
bit_vector_cast_to_bit_vector(0, &(invd0), &(XOR_u1_u1_2492));\
;

#define _dataTx_assign_stmt_2517_c_macro_ __declare_static_bit_vector(slice_2496,3);\
__declare_static_bit_vector(konst_2498,16);\
bit_vector_clear(&konst_2498);\
konst_2498.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2499,1);\
__declare_static_bit_vector(XOR_u1_u1_2501,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2502,4);\
__declare_static_bit_vector(slice_2504,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2505,10);\
__declare_static_bit_vector(konst_2507,16);\
bit_vector_clear(&konst_2507);\
konst_2507.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2508,1);\
__declare_static_bit_vector(XOR_u1_u1_2510,1);\
__declare_static_bit_vector(slice_2512,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2513,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2515,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2516,16);\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2496), 12);\
bit_vector_clear(&konst_2498);\
konst_2498.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2498), &(BITSEL_u16_u1_2499));\
bit_vector_xor(&(BITSEL_u16_u1_2499), &(invd0), &(XOR_u1_u1_2501));\
bit_vector_concatenate( &(slice_2496), &(XOR_u1_u1_2501), &(CONCAT_u3_u4_2502));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2504), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2502), &(slice_2504), &(CONCAT_u4_u10_2505));\
bit_vector_clear(&konst_2507);\
konst_2507.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2507), &(BITSEL_u16_u1_2508));\
bit_vector_xor(&(BITSEL_u16_u1_2508), &(invd0), &(XOR_u1_u1_2510));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2512), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2510), &(slice_2512), &(CONCAT_u1_u5_2513));\
bit_vector_concatenate( &(CONCAT_u1_u5_2513), &(invd0), &(CONCAT_u5_u6_2515));\
bit_vector_concatenate( &(CONCAT_u4_u10_2505), &(CONCAT_u5_u6_2515), &(CONCAT_u10_u16_2516));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT0), &(CONCAT_u10_u16_2516));\
;

#define _dataTx_assign_stmt_2522_c_macro_ __declare_static_bit_vector(konst_2520,1024);\
bit_vector_clear(&konst_2520);\
konst_2520.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2521,1024);\
bit_vector_clear(&konst_2520);\
konst_2520.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD0), &(konst_2520), &(SHL_u1024_u1024_2521));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD0), &(SHL_u1024_u1024_2521));\
;

#define _dataTx_assign_stmt_2527_c_macro_ __declare_static_bit_vector(konst_2525,11);\
bit_vector_clear(&konst_2525);\
konst_2525.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2526,11);\
bit_vector_clear(&konst_2525);\
konst_2525.val.byte_array[0] = 1;\
bit_vector_plus( &(j_0), &(konst_2525), &(ADD_u11_u11_2526));\
bit_vector_cast_to_bit_vector(0, &(next_j_0), &(ADD_u11_u11_2526));\
;

#define _dataTx_merge_stmt_2534_c_preamble_macro_ uint8_t merge_stmt_2534_entry_flag;\
merge_stmt_2534_entry_flag = 1;\
uint8_t loopback_dat1_2342_flag = 0;\
goto merge_stmt_2534_run;\
loopback_dat1_2342: loopback_dat1_2342_flag = 1;\
goto merge_stmt_2534_run;\
merge_stmt_2534_run: ;\

#define _dataTx_phi_stmt_2535_c_macro_ __declare_static_bit_vector(konst_2537,11);\
bit_vector_clear(&konst_2537);\
__declare_static_bit_vector(type_cast_2538,11);\
bit_vector_clear(&type_cast_2538);\
if(loopback_dat1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_1), &(next_j_1));\
}\
else {\
__declare_static_bit_vector(konst_2537,11);\
bit_vector_clear(&konst_2537);\
__declare_static_bit_vector(type_cast_2538,11);\
bit_vector_clear(&type_cast_2538);\
bit_vector_clear(&konst_2537);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2538), &(konst_2537));\
bit_vector_cast_to_bit_vector(0, &(j_1), &(type_cast_2538));\
}\
;

#define _dataTx_phi_stmt_2540_c_macro_ __declare_static_bit_vector(konst_2542,16);\
bit_vector_clear(&konst_2542);\
__declare_static_bit_vector(type_cast_2543,16);\
bit_vector_clear(&type_cast_2543);\
if(loopback_dat1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(nextCRC16_DAT1));\
}\
else {\
__declare_static_bit_vector(konst_2542,16);\
bit_vector_clear(&konst_2542);\
__declare_static_bit_vector(type_cast_2543,16);\
bit_vector_clear(&type_cast_2543);\
bit_vector_clear(&konst_2542);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2543), &(konst_2542));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(type_cast_2543));\
}\
;

#define _dataTx_phi_stmt_2545_c_macro_ if(loopback_dat1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(nextTempDataD1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(dat1__next_data1));\
}\
;
;

#define _dataTx_merge_stmt_2534_c_postamble_macro_ loopback_dat1_2342_flag = 0;\
merge_stmt_2534_entry_flag = 0;

#define _dataTx_assign_stmt_2558_c_macro_ __declare_static_bit_vector(konst_2552,1024);\
bit_vector_clear(&konst_2552);\
konst_2552.val.byte_array[0] = 255;\
konst_2552.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2553,1);\
__declare_static_bit_vector(konst_2555,16);\
bit_vector_clear(&konst_2555);\
konst_2555.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2556,1);\
__declare_static_bit_vector(XOR_u1_u1_2557,1);\
bit_vector_clear(&konst_2552);\
konst_2552.val.byte_array[0] = 255;\
konst_2552.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD1), &(konst_2552), &(BITSEL_u1024_u1_2553));\
bit_vector_clear(&konst_2555);\
konst_2555.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2555), &(BITSEL_u16_u1_2556));\
bit_vector_xor(&(BITSEL_u1024_u1_2553), &(BITSEL_u16_u1_2556), &(XOR_u1_u1_2557));\
bit_vector_cast_to_bit_vector(0, &(invd1), &(XOR_u1_u1_2557));\
;

#define _dataTx_assign_stmt_2582_c_macro_ __declare_static_bit_vector(slice_2561,3);\
__declare_static_bit_vector(konst_2563,16);\
bit_vector_clear(&konst_2563);\
konst_2563.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2564,1);\
__declare_static_bit_vector(XOR_u1_u1_2566,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2567,4);\
__declare_static_bit_vector(slice_2569,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2570,10);\
__declare_static_bit_vector(konst_2572,16);\
bit_vector_clear(&konst_2572);\
konst_2572.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2573,1);\
__declare_static_bit_vector(XOR_u1_u1_2575,1);\
__declare_static_bit_vector(slice_2577,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2578,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2580,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2581,16);\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2561), 12);\
bit_vector_clear(&konst_2563);\
konst_2563.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2563), &(BITSEL_u16_u1_2564));\
bit_vector_xor(&(BITSEL_u16_u1_2564), &(invd1), &(XOR_u1_u1_2566));\
bit_vector_concatenate( &(slice_2561), &(XOR_u1_u1_2566), &(CONCAT_u3_u4_2567));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2569), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2567), &(slice_2569), &(CONCAT_u4_u10_2570));\
bit_vector_clear(&konst_2572);\
konst_2572.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2572), &(BITSEL_u16_u1_2573));\
bit_vector_xor(&(BITSEL_u16_u1_2573), &(invd1), &(XOR_u1_u1_2575));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2577), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2575), &(slice_2577), &(CONCAT_u1_u5_2578));\
bit_vector_concatenate( &(CONCAT_u1_u5_2578), &(invd1), &(CONCAT_u5_u6_2580));\
bit_vector_concatenate( &(CONCAT_u4_u10_2570), &(CONCAT_u5_u6_2580), &(CONCAT_u10_u16_2581));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT1), &(CONCAT_u10_u16_2581));\
;

#define _dataTx_assign_stmt_2587_c_macro_ __declare_static_bit_vector(konst_2585,1024);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2586,1024);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD1), &(konst_2585), &(SHL_u1024_u1024_2586));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD1), &(SHL_u1024_u1024_2586));\
;

#define _dataTx_assign_stmt_2592_c_macro_ __declare_static_bit_vector(konst_2590,11);\
bit_vector_clear(&konst_2590);\
konst_2590.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2591,11);\
bit_vector_clear(&konst_2590);\
konst_2590.val.byte_array[0] = 1;\
bit_vector_plus( &(j_1), &(konst_2590), &(ADD_u11_u11_2591));\
bit_vector_cast_to_bit_vector(0, &(next_j_1), &(ADD_u11_u11_2591));\
;

#define _dataTx_merge_stmt_2599_c_preamble_macro_ uint8_t merge_stmt_2599_entry_flag;\
merge_stmt_2599_entry_flag = 1;\
uint8_t loopback_dat2_2342_flag = 0;\
goto merge_stmt_2599_run;\
loopback_dat2_2342: loopback_dat2_2342_flag = 1;\
goto merge_stmt_2599_run;\
merge_stmt_2599_run: ;\

#define _dataTx_phi_stmt_2600_c_macro_ __declare_static_bit_vector(konst_2602,11);\
bit_vector_clear(&konst_2602);\
__declare_static_bit_vector(type_cast_2603,11);\
bit_vector_clear(&type_cast_2603);\
if(loopback_dat2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_2), &(next_j_2));\
}\
else {\
__declare_static_bit_vector(konst_2602,11);\
bit_vector_clear(&konst_2602);\
__declare_static_bit_vector(type_cast_2603,11);\
bit_vector_clear(&type_cast_2603);\
bit_vector_clear(&konst_2602);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2603), &(konst_2602));\
bit_vector_cast_to_bit_vector(0, &(j_2), &(type_cast_2603));\
}\
;

#define _dataTx_phi_stmt_2605_c_macro_ __declare_static_bit_vector(konst_2607,16);\
bit_vector_clear(&konst_2607);\
__declare_static_bit_vector(type_cast_2608,16);\
bit_vector_clear(&type_cast_2608);\
if(loopback_dat2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(nextCRC16_DAT2));\
}\
else {\
__declare_static_bit_vector(konst_2607,16);\
bit_vector_clear(&konst_2607);\
__declare_static_bit_vector(type_cast_2608,16);\
bit_vector_clear(&type_cast_2608);\
bit_vector_clear(&konst_2607);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2608), &(konst_2607));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(type_cast_2608));\
}\
;

#define _dataTx_phi_stmt_2610_c_macro_ if(loopback_dat2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(nextTempDataD2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(dat2__next_data2));\
}\
;
;

#define _dataTx_merge_stmt_2599_c_postamble_macro_ loopback_dat2_2342_flag = 0;\
merge_stmt_2599_entry_flag = 0;

#define _dataTx_assign_stmt_2623_c_macro_ __declare_static_bit_vector(konst_2617,1024);\
bit_vector_clear(&konst_2617);\
konst_2617.val.byte_array[0] = 255;\
konst_2617.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2618,1);\
__declare_static_bit_vector(konst_2620,16);\
bit_vector_clear(&konst_2620);\
konst_2620.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2621,1);\
__declare_static_bit_vector(XOR_u1_u1_2622,1);\
bit_vector_clear(&konst_2617);\
konst_2617.val.byte_array[0] = 255;\
konst_2617.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD2), &(konst_2617), &(BITSEL_u1024_u1_2618));\
bit_vector_clear(&konst_2620);\
konst_2620.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2620), &(BITSEL_u16_u1_2621));\
bit_vector_xor(&(BITSEL_u1024_u1_2618), &(BITSEL_u16_u1_2621), &(XOR_u1_u1_2622));\
bit_vector_cast_to_bit_vector(0, &(invd2), &(XOR_u1_u1_2622));\
;

#define _dataTx_assign_stmt_2647_c_macro_ __declare_static_bit_vector(slice_2626,3);\
__declare_static_bit_vector(konst_2628,16);\
bit_vector_clear(&konst_2628);\
konst_2628.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2629,1);\
__declare_static_bit_vector(XOR_u1_u1_2631,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2632,4);\
__declare_static_bit_vector(slice_2634,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2635,10);\
__declare_static_bit_vector(konst_2637,16);\
bit_vector_clear(&konst_2637);\
konst_2637.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2638,1);\
__declare_static_bit_vector(XOR_u1_u1_2640,1);\
__declare_static_bit_vector(slice_2642,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2643,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2645,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2646,16);\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2626), 12);\
bit_vector_clear(&konst_2628);\
konst_2628.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2628), &(BITSEL_u16_u1_2629));\
bit_vector_xor(&(BITSEL_u16_u1_2629), &(invd2), &(XOR_u1_u1_2631));\
bit_vector_concatenate( &(slice_2626), &(XOR_u1_u1_2631), &(CONCAT_u3_u4_2632));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2634), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2632), &(slice_2634), &(CONCAT_u4_u10_2635));\
bit_vector_clear(&konst_2637);\
konst_2637.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2637), &(BITSEL_u16_u1_2638));\
bit_vector_xor(&(BITSEL_u16_u1_2638), &(invd2), &(XOR_u1_u1_2640));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2642), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2640), &(slice_2642), &(CONCAT_u1_u5_2643));\
bit_vector_concatenate( &(CONCAT_u1_u5_2643), &(invd2), &(CONCAT_u5_u6_2645));\
bit_vector_concatenate( &(CONCAT_u4_u10_2635), &(CONCAT_u5_u6_2645), &(CONCAT_u10_u16_2646));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT2), &(CONCAT_u10_u16_2646));\
;

#define _dataTx_assign_stmt_2652_c_macro_ __declare_static_bit_vector(konst_2650,1024);\
bit_vector_clear(&konst_2650);\
konst_2650.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2651,1024);\
bit_vector_clear(&konst_2650);\
konst_2650.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD2), &(konst_2650), &(SHL_u1024_u1024_2651));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD2), &(SHL_u1024_u1024_2651));\
;

#define _dataTx_assign_stmt_2657_c_macro_ __declare_static_bit_vector(konst_2655,11);\
bit_vector_clear(&konst_2655);\
konst_2655.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2656,11);\
bit_vector_clear(&konst_2655);\
konst_2655.val.byte_array[0] = 1;\
bit_vector_plus( &(j_2), &(konst_2655), &(ADD_u11_u11_2656));\
bit_vector_cast_to_bit_vector(0, &(next_j_2), &(ADD_u11_u11_2656));\
;

#define _dataTx_merge_stmt_2664_c_preamble_macro_ uint8_t merge_stmt_2664_entry_flag;\
merge_stmt_2664_entry_flag = 1;\
uint8_t loopback_dat3_2342_flag = 0;\
goto merge_stmt_2664_run;\
loopback_dat3_2342: loopback_dat3_2342_flag = 1;\
goto merge_stmt_2664_run;\
merge_stmt_2664_run: ;\

#define _dataTx_phi_stmt_2665_c_macro_ __declare_static_bit_vector(konst_2667,11);\
bit_vector_clear(&konst_2667);\
__declare_static_bit_vector(type_cast_2668,11);\
bit_vector_clear(&type_cast_2668);\
if(loopback_dat3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_3), &(next_j_3));\
}\
else {\
__declare_static_bit_vector(konst_2667,11);\
bit_vector_clear(&konst_2667);\
__declare_static_bit_vector(type_cast_2668,11);\
bit_vector_clear(&type_cast_2668);\
bit_vector_clear(&konst_2667);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2668), &(konst_2667));\
bit_vector_cast_to_bit_vector(0, &(j_3), &(type_cast_2668));\
}\
;

#define _dataTx_phi_stmt_2670_c_macro_ __declare_static_bit_vector(konst_2673,16);\
bit_vector_clear(&konst_2673);\
__declare_static_bit_vector(type_cast_2674,16);\
bit_vector_clear(&type_cast_2674);\
if(loopback_dat3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(nextCRC16_DAT3));\
}\
else {\
__declare_static_bit_vector(konst_2673,16);\
bit_vector_clear(&konst_2673);\
__declare_static_bit_vector(type_cast_2674,16);\
bit_vector_clear(&type_cast_2674);\
bit_vector_clear(&konst_2673);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2674), &(konst_2673));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(type_cast_2674));\
}\
;

#define _dataTx_phi_stmt_2675_c_macro_ if(loopback_dat3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(nextTempDataD3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(dat3__next_data3));\
}\
;
;

#define _dataTx_merge_stmt_2664_c_postamble_macro_ loopback_dat3_2342_flag = 0;\
merge_stmt_2664_entry_flag = 0;

#define _dataTx_assign_stmt_2688_c_macro_ __declare_static_bit_vector(konst_2682,1024);\
bit_vector_clear(&konst_2682);\
konst_2682.val.byte_array[0] = 255;\
konst_2682.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2683,1);\
__declare_static_bit_vector(konst_2685,16);\
bit_vector_clear(&konst_2685);\
konst_2685.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2686,1);\
__declare_static_bit_vector(XOR_u1_u1_2687,1);\
bit_vector_clear(&konst_2682);\
konst_2682.val.byte_array[0] = 255;\
konst_2682.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD3), &(konst_2682), &(BITSEL_u1024_u1_2683));\
bit_vector_clear(&konst_2685);\
konst_2685.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2685), &(BITSEL_u16_u1_2686));\
bit_vector_xor(&(BITSEL_u1024_u1_2683), &(BITSEL_u16_u1_2686), &(XOR_u1_u1_2687));\
bit_vector_cast_to_bit_vector(0, &(invd3), &(XOR_u1_u1_2687));\
;

#define _dataTx_assign_stmt_2712_c_macro_ __declare_static_bit_vector(slice_2691,3);\
__declare_static_bit_vector(konst_2693,16);\
bit_vector_clear(&konst_2693);\
konst_2693.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2694,1);\
__declare_static_bit_vector(XOR_u1_u1_2696,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2697,4);\
__declare_static_bit_vector(slice_2699,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2700,10);\
__declare_static_bit_vector(konst_2702,16);\
bit_vector_clear(&konst_2702);\
konst_2702.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2703,1);\
__declare_static_bit_vector(XOR_u1_u1_2705,1);\
__declare_static_bit_vector(slice_2707,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2708,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2710,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2711,16);\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2691), 12);\
bit_vector_clear(&konst_2693);\
konst_2693.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2693), &(BITSEL_u16_u1_2694));\
bit_vector_xor(&(BITSEL_u16_u1_2694), &(invd3), &(XOR_u1_u1_2696));\
bit_vector_concatenate( &(slice_2691), &(XOR_u1_u1_2696), &(CONCAT_u3_u4_2697));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2699), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2697), &(slice_2699), &(CONCAT_u4_u10_2700));\
bit_vector_clear(&konst_2702);\
konst_2702.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2702), &(BITSEL_u16_u1_2703));\
bit_vector_xor(&(BITSEL_u16_u1_2703), &(invd3), &(XOR_u1_u1_2705));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2707), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2705), &(slice_2707), &(CONCAT_u1_u5_2708));\
bit_vector_concatenate( &(CONCAT_u1_u5_2708), &(invd3), &(CONCAT_u5_u6_2710));\
bit_vector_concatenate( &(CONCAT_u4_u10_2700), &(CONCAT_u5_u6_2710), &(CONCAT_u10_u16_2711));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT3), &(CONCAT_u10_u16_2711));\
;

#define _dataTx_assign_stmt_2717_c_macro_ __declare_static_bit_vector(konst_2715,1024);\
bit_vector_clear(&konst_2715);\
konst_2715.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2716,1024);\
bit_vector_clear(&konst_2715);\
konst_2715.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD3), &(konst_2715), &(SHL_u1024_u1024_2716));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD3), &(SHL_u1024_u1024_2716));\
;

#define _dataTx_assign_stmt_2722_c_macro_ __declare_static_bit_vector(konst_2720,11);\
bit_vector_clear(&konst_2720);\
konst_2720.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2721,11);\
bit_vector_clear(&konst_2720);\
konst_2720.val.byte_array[0] = 1;\
bit_vector_plus( &(j_3), &(konst_2720), &(ADD_u11_u11_2721));\
bit_vector_cast_to_bit_vector(0, &(next_j_3), &(ADD_u11_u11_2721));\
;

#define _dataTx_assign_stmt_2731_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2732_c_preamble_macro_ uint8_t merge_stmt_2732_entry_flag;\
merge_stmt_2732_entry_flag = 1;\
uint8_t dataloop4_0_2342_flag = 0;\
goto merge_stmt_2732_run;\
dataloop4_0_2342: dataloop4_0_2342_flag = 1;\
goto merge_stmt_2732_run;\
merge_stmt_2732_run: ;\

#define _dataTx_phi_stmt_2733_c_macro_ __declare_static_bit_vector(konst_2735,11);\
bit_vector_clear(&konst_2735);\
__declare_static_bit_vector(type_cast_2736,11);\
bit_vector_clear(&type_cast_2736);\
if(dataloop4_0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_0), &(next_k_0));\
}\
else {\
__declare_static_bit_vector(konst_2735,11);\
bit_vector_clear(&konst_2735);\
__declare_static_bit_vector(type_cast_2736,11);\
bit_vector_clear(&type_cast_2736);\
bit_vector_clear(&konst_2735);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2736), &(konst_2735));\
bit_vector_cast_to_bit_vector(0, &(k_0), &(type_cast_2736));\
}\
;

#define _dataTx_phi_stmt_2738_c_macro_ if(dataloop4_0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(nextbit4_0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(dat0__next_data0));\
}\
;
;

#define _dataTx_merge_stmt_2732_c_postamble_macro_ dataloop4_0_2342_flag = 0;\
merge_stmt_2732_entry_flag = 0;

#define _dataTx_assign_stmt_2747_c_macro_ __declare_static_bit_vector(konst_2745,1024);\
bit_vector_clear(&konst_2745);\
konst_2745.val.byte_array[0] = 255;\
konst_2745.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2746,1);\
bit_vector_clear(&konst_2745);\
konst_2745.val.byte_array[0] = 255;\
konst_2745.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_0), &(konst_2745), &(BITSEL_u1024_u1_2746));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u1024_u1_2746));\
;

#define _dataTx_assign_stmt_2752_c_macro_ __declare_static_bit_vector(konst_2750,1024);\
bit_vector_clear(&konst_2750);\
konst_2750.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2751,1024);\
bit_vector_clear(&konst_2750);\
konst_2750.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_0), &(konst_2750), &(SHL_u1024_u1024_2751));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_0), &(SHL_u1024_u1024_2751));\
;

#define _dataTx_assign_stmt_2757_c_macro_ __declare_static_bit_vector(konst_2755,11);\
bit_vector_clear(&konst_2755);\
konst_2755.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2756,11);\
bit_vector_clear(&konst_2755);\
konst_2755.val.byte_array[0] = 1;\
bit_vector_plus( &(k_0), &(konst_2755), &(ADD_u11_u11_2756));\
bit_vector_cast_to_bit_vector(0, &(next_k_0), &(ADD_u11_u11_2756));\
;

#define _dataTx_merge_stmt_2764_c_preamble_macro_ uint8_t merge_stmt_2764_entry_flag;\
merge_stmt_2764_entry_flag = 1;\
uint8_t crcloop4_0_2342_flag = 0;\
goto merge_stmt_2764_run;\
crcloop4_0_2342: crcloop4_0_2342_flag = 1;\
goto merge_stmt_2764_run;\
merge_stmt_2764_run: ;\

#define _dataTx_phi_stmt_2765_c_macro_ __declare_static_bit_vector(konst_2767,5);\
bit_vector_clear(&konst_2767);\
__declare_static_bit_vector(type_cast_2768,5);\
bit_vector_clear(&type_cast_2768);\
if(crcloop4_0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_0), &(next_l_0));\
}\
else {\
__declare_static_bit_vector(konst_2767,5);\
bit_vector_clear(&konst_2767);\
__declare_static_bit_vector(type_cast_2768,5);\
bit_vector_clear(&type_cast_2768);\
bit_vector_clear(&konst_2767);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2768), &(konst_2767));\
bit_vector_cast_to_bit_vector(0, &(l_0), &(type_cast_2768));\
}\
;

#define _dataTx_phi_stmt_2770_c_macro_ if(crcloop4_0_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0crc4), &(nextbitcrc4_0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0crc4), &(nextCRC16_DAT0));\
}\
;
;

#define _dataTx_merge_stmt_2764_c_postamble_macro_ crcloop4_0_2342_flag = 0;\
merge_stmt_2764_entry_flag = 0;

#define _dataTx_assign_stmt_2779_c_macro_ __declare_static_bit_vector(konst_2777,16);\
bit_vector_clear(&konst_2777);\
konst_2777.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2778,1);\
bit_vector_clear(&konst_2777);\
konst_2777.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat0crc4), &(konst_2777), &(BITSEL_u16_u1_2778));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u16_u1_2778));\
;

#define _dataTx_assign_stmt_2784_c_macro_ __declare_static_bit_vector(konst_2782,16);\
bit_vector_clear(&konst_2782);\
konst_2782.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2783,16);\
bit_vector_clear(&konst_2782);\
konst_2782.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0crc4), &(konst_2782), &(SHL_u16_u16_2783));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_0), &(SHL_u16_u16_2783));\
;

#define _dataTx_assign_stmt_2789_c_macro_ __declare_static_bit_vector(konst_2787,5);\
bit_vector_clear(&konst_2787);\
konst_2787.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2788,5);\
bit_vector_clear(&konst_2787);\
konst_2787.val.byte_array[0] = 1;\
bit_vector_plus( &(l_0), &(konst_2787), &(ADD_u5_u5_2788));\
bit_vector_cast_to_bit_vector(0, &(next_l_0), &(ADD_u5_u5_2788));\
;

#define _dataTx_assign_stmt_2798_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ONE_1));\
;

#define _dataTx_stmt_2800_c_macro_ uint32_t _dataTx_stmt_2800_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA0>\t%s\n",_dataTx_stmt_2800_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA0>\t\t%s\t\t",_dataTx_stmt_2800_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_2803_c_macro_ write_bit_vector_to_pipe("DAT1Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2804_c_preamble_macro_ uint8_t merge_stmt_2804_entry_flag;\
merge_stmt_2804_entry_flag = 1;\
uint8_t dataloop4_1_2342_flag = 0;\
goto merge_stmt_2804_run;\
dataloop4_1_2342: dataloop4_1_2342_flag = 1;\
goto merge_stmt_2804_run;\
merge_stmt_2804_run: ;\

#define _dataTx_phi_stmt_2805_c_macro_ __declare_static_bit_vector(konst_2807,11);\
bit_vector_clear(&konst_2807);\
__declare_static_bit_vector(type_cast_2808,11);\
bit_vector_clear(&type_cast_2808);\
if(dataloop4_1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_1), &(next_k_1));\
}\
else {\
__declare_static_bit_vector(konst_2807,11);\
bit_vector_clear(&konst_2807);\
__declare_static_bit_vector(type_cast_2808,11);\
bit_vector_clear(&type_cast_2808);\
bit_vector_clear(&konst_2807);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2808), &(konst_2807));\
bit_vector_cast_to_bit_vector(0, &(k_1), &(type_cast_2808));\
}\
;

#define _dataTx_phi_stmt_2810_c_macro_ if(dataloop4_1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(nextbit4_1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(dat1__next_data1));\
}\
;
;

#define _dataTx_merge_stmt_2804_c_postamble_macro_ dataloop4_1_2342_flag = 0;\
merge_stmt_2804_entry_flag = 0;

#define _dataTx_assign_stmt_2819_c_macro_ __declare_static_bit_vector(konst_2817,1024);\
bit_vector_clear(&konst_2817);\
konst_2817.val.byte_array[0] = 255;\
konst_2817.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2818,1);\
bit_vector_clear(&konst_2817);\
konst_2817.val.byte_array[0] = 255;\
konst_2817.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_1), &(konst_2817), &(BITSEL_u1024_u1_2818));\
write_bit_vector_to_pipe("DAT1Tx",&(BITSEL_u1024_u1_2818));\
;

#define _dataTx_assign_stmt_2824_c_macro_ __declare_static_bit_vector(konst_2822,1024);\
bit_vector_clear(&konst_2822);\
konst_2822.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2823,1024);\
bit_vector_clear(&konst_2822);\
konst_2822.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_1), &(konst_2822), &(SHL_u1024_u1024_2823));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_1), &(SHL_u1024_u1024_2823));\
;

#define _dataTx_assign_stmt_2829_c_macro_ __declare_static_bit_vector(konst_2827,11);\
bit_vector_clear(&konst_2827);\
konst_2827.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2828,11);\
bit_vector_clear(&konst_2827);\
konst_2827.val.byte_array[0] = 1;\
bit_vector_plus( &(k_1), &(konst_2827), &(ADD_u11_u11_2828));\
bit_vector_cast_to_bit_vector(0, &(next_k_1), &(ADD_u11_u11_2828));\
;

#define _dataTx_merge_stmt_2836_c_preamble_macro_ uint8_t merge_stmt_2836_entry_flag;\
merge_stmt_2836_entry_flag = 1;\
uint8_t crcloop4_1_2342_flag = 0;\
goto merge_stmt_2836_run;\
crcloop4_1_2342: crcloop4_1_2342_flag = 1;\
goto merge_stmt_2836_run;\
merge_stmt_2836_run: ;\

#define _dataTx_phi_stmt_2837_c_macro_ __declare_static_bit_vector(konst_2839,5);\
bit_vector_clear(&konst_2839);\
__declare_static_bit_vector(type_cast_2840,5);\
bit_vector_clear(&type_cast_2840);\
if(crcloop4_1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_1), &(next_l_1));\
}\
else {\
__declare_static_bit_vector(konst_2839,5);\
bit_vector_clear(&konst_2839);\
__declare_static_bit_vector(type_cast_2840,5);\
bit_vector_clear(&type_cast_2840);\
bit_vector_clear(&konst_2839);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2840), &(konst_2839));\
bit_vector_cast_to_bit_vector(0, &(l_1), &(type_cast_2840));\
}\
;

#define _dataTx_phi_stmt_2842_c_macro_ if(crcloop4_1_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1crc4), &(nextbitcrc4_1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat1crc4), &(nextCRC16_DAT1));\
}\
;
;

#define _dataTx_merge_stmt_2836_c_postamble_macro_ crcloop4_1_2342_flag = 0;\
merge_stmt_2836_entry_flag = 0;

#define _dataTx_assign_stmt_2851_c_macro_ __declare_static_bit_vector(konst_2849,16);\
bit_vector_clear(&konst_2849);\
konst_2849.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2850,1);\
bit_vector_clear(&konst_2849);\
konst_2849.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat1crc4), &(konst_2849), &(BITSEL_u16_u1_2850));\
write_bit_vector_to_pipe("DAT1Tx",&(BITSEL_u16_u1_2850));\
;

#define _dataTx_assign_stmt_2856_c_macro_ __declare_static_bit_vector(konst_2854,16);\
bit_vector_clear(&konst_2854);\
konst_2854.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2855,16);\
bit_vector_clear(&konst_2854);\
konst_2854.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat1crc4), &(konst_2854), &(SHL_u16_u16_2855));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_1), &(SHL_u16_u16_2855));\
;

#define _dataTx_assign_stmt_2861_c_macro_ __declare_static_bit_vector(konst_2859,5);\
bit_vector_clear(&konst_2859);\
konst_2859.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2860,5);\
bit_vector_clear(&konst_2859);\
konst_2859.val.byte_array[0] = 1;\
bit_vector_plus( &(l_1), &(konst_2859), &(ADD_u5_u5_2860));\
bit_vector_cast_to_bit_vector(0, &(next_l_1), &(ADD_u5_u5_2860));\
;

#define _dataTx_assign_stmt_2870_c_macro_ write_bit_vector_to_pipe("DAT1Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_2873_c_macro_ write_bit_vector_to_pipe("DAT2Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2874_c_preamble_macro_ uint8_t merge_stmt_2874_entry_flag;\
merge_stmt_2874_entry_flag = 1;\
uint8_t dataloop4_2_2342_flag = 0;\
goto merge_stmt_2874_run;\
dataloop4_2_2342: dataloop4_2_2342_flag = 1;\
goto merge_stmt_2874_run;\
merge_stmt_2874_run: ;\

#define _dataTx_phi_stmt_2875_c_macro_ __declare_static_bit_vector(konst_2877,11);\
bit_vector_clear(&konst_2877);\
__declare_static_bit_vector(type_cast_2878,11);\
bit_vector_clear(&type_cast_2878);\
if(dataloop4_2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_2), &(next_k_2));\
}\
else {\
__declare_static_bit_vector(konst_2877,11);\
bit_vector_clear(&konst_2877);\
__declare_static_bit_vector(type_cast_2878,11);\
bit_vector_clear(&type_cast_2878);\
bit_vector_clear(&konst_2877);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2878), &(konst_2877));\
bit_vector_cast_to_bit_vector(0, &(k_2), &(type_cast_2878));\
}\
;

#define _dataTx_phi_stmt_2880_c_macro_ if(dataloop4_2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(nextbit4_2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(dat2__next_data2));\
}\
;
;

#define _dataTx_merge_stmt_2874_c_postamble_macro_ dataloop4_2_2342_flag = 0;\
merge_stmt_2874_entry_flag = 0;

#define _dataTx_assign_stmt_2889_c_macro_ __declare_static_bit_vector(konst_2887,1024);\
bit_vector_clear(&konst_2887);\
konst_2887.val.byte_array[0] = 255;\
konst_2887.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2888,1);\
bit_vector_clear(&konst_2887);\
konst_2887.val.byte_array[0] = 255;\
konst_2887.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_2), &(konst_2887), &(BITSEL_u1024_u1_2888));\
write_bit_vector_to_pipe("DAT2Tx",&(BITSEL_u1024_u1_2888));\
;

#define _dataTx_assign_stmt_2894_c_macro_ __declare_static_bit_vector(konst_2892,1024);\
bit_vector_clear(&konst_2892);\
konst_2892.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2893,1024);\
bit_vector_clear(&konst_2892);\
konst_2892.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_2), &(konst_2892), &(SHL_u1024_u1024_2893));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_2), &(SHL_u1024_u1024_2893));\
;

#define _dataTx_assign_stmt_2899_c_macro_ __declare_static_bit_vector(konst_2897,11);\
bit_vector_clear(&konst_2897);\
konst_2897.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2898,11);\
bit_vector_clear(&konst_2897);\
konst_2897.val.byte_array[0] = 1;\
bit_vector_plus( &(k_2), &(konst_2897), &(ADD_u11_u11_2898));\
bit_vector_cast_to_bit_vector(0, &(next_k_2), &(ADD_u11_u11_2898));\
;

#define _dataTx_merge_stmt_2906_c_preamble_macro_ uint8_t merge_stmt_2906_entry_flag;\
merge_stmt_2906_entry_flag = 1;\
uint8_t crcloop4_2_2342_flag = 0;\
goto merge_stmt_2906_run;\
crcloop4_2_2342: crcloop4_2_2342_flag = 1;\
goto merge_stmt_2906_run;\
merge_stmt_2906_run: ;\

#define _dataTx_phi_stmt_2907_c_macro_ __declare_static_bit_vector(konst_2909,5);\
bit_vector_clear(&konst_2909);\
__declare_static_bit_vector(type_cast_2910,5);\
bit_vector_clear(&type_cast_2910);\
if(crcloop4_2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_2), &(next_l_2));\
}\
else {\
__declare_static_bit_vector(konst_2909,5);\
bit_vector_clear(&konst_2909);\
__declare_static_bit_vector(type_cast_2910,5);\
bit_vector_clear(&type_cast_2910);\
bit_vector_clear(&konst_2909);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2910), &(konst_2909));\
bit_vector_cast_to_bit_vector(0, &(l_2), &(type_cast_2910));\
}\
;

#define _dataTx_phi_stmt_2912_c_macro_ if(crcloop4_2_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2crc4), &(nextbitcrc4_2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat2crc4), &(nextCRC16_DAT2));\
}\
;
;

#define _dataTx_merge_stmt_2906_c_postamble_macro_ crcloop4_2_2342_flag = 0;\
merge_stmt_2906_entry_flag = 0;

#define _dataTx_assign_stmt_2921_c_macro_ __declare_static_bit_vector(konst_2919,16);\
bit_vector_clear(&konst_2919);\
konst_2919.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2920,1);\
bit_vector_clear(&konst_2919);\
konst_2919.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat2crc4), &(konst_2919), &(BITSEL_u16_u1_2920));\
write_bit_vector_to_pipe("DAT2Tx",&(BITSEL_u16_u1_2920));\
;

#define _dataTx_assign_stmt_2926_c_macro_ __declare_static_bit_vector(konst_2924,16);\
bit_vector_clear(&konst_2924);\
konst_2924.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2925,16);\
bit_vector_clear(&konst_2924);\
konst_2924.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat2crc4), &(konst_2924), &(SHL_u16_u16_2925));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_2), &(SHL_u16_u16_2925));\
;

#define _dataTx_assign_stmt_2931_c_macro_ __declare_static_bit_vector(konst_2929,5);\
bit_vector_clear(&konst_2929);\
konst_2929.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2930,5);\
bit_vector_clear(&konst_2929);\
konst_2929.val.byte_array[0] = 1;\
bit_vector_plus( &(l_2), &(konst_2929), &(ADD_u5_u5_2930));\
bit_vector_cast_to_bit_vector(0, &(next_l_2), &(ADD_u5_u5_2930));\
;

#define _dataTx_assign_stmt_2940_c_macro_ write_bit_vector_to_pipe("DAT2Tx",&(ONE_1));\
;

#define _dataTx_stmt_2942_c_macro_ uint32_t _dataTx_stmt_2942_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA2>\t%s\n",_dataTx_stmt_2942_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA2>\t\t%s\t\t",_dataTx_stmt_2942_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_2945_c_macro_ write_bit_vector_to_pipe("DAT3Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2946_c_preamble_macro_ uint8_t merge_stmt_2946_entry_flag;\
merge_stmt_2946_entry_flag = 1;\
uint8_t dataloop4_3_2342_flag = 0;\
goto merge_stmt_2946_run;\
dataloop4_3_2342: dataloop4_3_2342_flag = 1;\
goto merge_stmt_2946_run;\
merge_stmt_2946_run: ;\

#define _dataTx_phi_stmt_2947_c_macro_ __declare_static_bit_vector(konst_2949,11);\
bit_vector_clear(&konst_2949);\
__declare_static_bit_vector(type_cast_2950,11);\
bit_vector_clear(&type_cast_2950);\
if(dataloop4_3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_3), &(next_k_3));\
}\
else {\
__declare_static_bit_vector(konst_2949,11);\
bit_vector_clear(&konst_2949);\
__declare_static_bit_vector(type_cast_2950,11);\
bit_vector_clear(&type_cast_2950);\
bit_vector_clear(&konst_2949);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2950), &(konst_2949));\
bit_vector_cast_to_bit_vector(0, &(k_3), &(type_cast_2950));\
}\
;

#define _dataTx_phi_stmt_2952_c_macro_ if(dataloop4_3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(nextbit4_3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(dat3__next_data3));\
}\
;
;

#define _dataTx_merge_stmt_2946_c_postamble_macro_ dataloop4_3_2342_flag = 0;\
merge_stmt_2946_entry_flag = 0;

#define _dataTx_assign_stmt_2961_c_macro_ __declare_static_bit_vector(konst_2959,1024);\
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 255;\
konst_2959.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2960,1);\
bit_vector_clear(&konst_2959);\
konst_2959.val.byte_array[0] = 255;\
konst_2959.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_3), &(konst_2959), &(BITSEL_u1024_u1_2960));\
write_bit_vector_to_pipe("DAT3Tx",&(BITSEL_u1024_u1_2960));\
;

#define _dataTx_assign_stmt_2966_c_macro_ __declare_static_bit_vector(konst_2964,1024);\
bit_vector_clear(&konst_2964);\
konst_2964.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2965,1024);\
bit_vector_clear(&konst_2964);\
konst_2964.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_3), &(konst_2964), &(SHL_u1024_u1024_2965));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_3), &(SHL_u1024_u1024_2965));\
;

#define _dataTx_assign_stmt_2971_c_macro_ __declare_static_bit_vector(konst_2969,11);\
bit_vector_clear(&konst_2969);\
konst_2969.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2970,11);\
bit_vector_clear(&konst_2969);\
konst_2969.val.byte_array[0] = 1;\
bit_vector_plus( &(k_3), &(konst_2969), &(ADD_u11_u11_2970));\
bit_vector_cast_to_bit_vector(0, &(next_k_3), &(ADD_u11_u11_2970));\
;

#define _dataTx_merge_stmt_2978_c_preamble_macro_ uint8_t merge_stmt_2978_entry_flag;\
merge_stmt_2978_entry_flag = 1;\
uint8_t crcloop4_3_2342_flag = 0;\
goto merge_stmt_2978_run;\
crcloop4_3_2342: crcloop4_3_2342_flag = 1;\
goto merge_stmt_2978_run;\
merge_stmt_2978_run: ;\

#define _dataTx_phi_stmt_2979_c_macro_ __declare_static_bit_vector(konst_2981,5);\
bit_vector_clear(&konst_2981);\
__declare_static_bit_vector(type_cast_2982,5);\
bit_vector_clear(&type_cast_2982);\
if(crcloop4_3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_3), &(next_l_3));\
}\
else {\
__declare_static_bit_vector(konst_2981,5);\
bit_vector_clear(&konst_2981);\
__declare_static_bit_vector(type_cast_2982,5);\
bit_vector_clear(&type_cast_2982);\
bit_vector_clear(&konst_2981);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2982), &(konst_2981));\
bit_vector_cast_to_bit_vector(0, &(l_3), &(type_cast_2982));\
}\
;

#define _dataTx_phi_stmt_2984_c_macro_ if(crcloop4_3_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3crc4), &(nextbitcrc4_3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat3crc4), &(nextCRC16_DAT3));\
}\
;
;

#define _dataTx_merge_stmt_2978_c_postamble_macro_ crcloop4_3_2342_flag = 0;\
merge_stmt_2978_entry_flag = 0;

#define _dataTx_assign_stmt_2993_c_macro_ __declare_static_bit_vector(konst_2991,16);\
bit_vector_clear(&konst_2991);\
konst_2991.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2992,1);\
bit_vector_clear(&konst_2991);\
konst_2991.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat3crc4), &(konst_2991), &(BITSEL_u16_u1_2992));\
write_bit_vector_to_pipe("DAT3Tx",&(BITSEL_u16_u1_2992));\
;

#define _dataTx_assign_stmt_2998_c_macro_ __declare_static_bit_vector(konst_2996,16);\
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2997,16);\
bit_vector_clear(&konst_2996);\
konst_2996.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat3crc4), &(konst_2996), &(SHL_u16_u16_2997));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_3), &(SHL_u16_u16_2997));\
;

#define _dataTx_assign_stmt_3003_c_macro_ __declare_static_bit_vector(konst_3001,5);\
bit_vector_clear(&konst_3001);\
konst_3001.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_3002,5);\
bit_vector_clear(&konst_3001);\
konst_3001.val.byte_array[0] = 1;\
bit_vector_plus( &(l_3), &(konst_3001), &(ADD_u5_u5_3002));\
bit_vector_cast_to_bit_vector(0, &(next_l_3), &(ADD_u5_u5_3002));\
;

#define _dataTx_assign_stmt_3012_c_macro_ write_bit_vector_to_pipe("DAT3Tx",&(ONE_1));\
;

#define _dataTx_stmt_3014_c_macro_ uint32_t _dataTx_stmt_3014_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA3>\t%s\n",_dataTx_stmt_3014_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA3>\t\t%s\t\t",_dataTx_stmt_3014_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_stmt_3019_c_macro_ uint32_t _dataTx_stmt_3019_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]END>\t%s\n",_dataTx_stmt_3019_c_macro___print_counter,"transmission");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3019_c_macro___print_counter,"dat0");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat0__next_data0)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3019_c_macro___print_counter,"dat1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat1__next_data1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3019_c_macro___print_counter,"dat2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat2__next_data2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3019_c_macro___print_counter,"dat3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat3__next_data3)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_branch_block_stmt_3021_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataTx_merge_stmt_3022_c_preamble_macro_ uint8_t merge_stmt_3022_entry_flag;\
merge_stmt_3022_entry_flag = 1;\
uint8_t loopback1_3021_flag = 0;\
goto merge_stmt_3022_run;\
loopback1_3021: loopback1_3021_flag = 1;\
goto merge_stmt_3022_run;\
merge_stmt_3022_run: ;\

#define _dataTx_phi_stmt_3023_c_macro_ __declare_static_bit_vector(konst_3025,10);\
bit_vector_clear(&konst_3025);\
__declare_static_bit_vector(type_cast_3026,10);\
bit_vector_clear(&type_cast_3026);\
if(loopback1_3021_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_3025,10);\
bit_vector_clear(&konst_3025);\
__declare_static_bit_vector(type_cast_3026,10);\
bit_vector_clear(&type_cast_3026);\
bit_vector_clear(&konst_3025);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3026), &(konst_3025));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_3026));\
}\
;

#define _dataTx_phi_stmt_3028_c_macro_ __declare_static_bit_vector(konst_3030,4096);\
bit_vector_clear(&konst_3030);\
__declare_static_bit_vector(type_cast_3031,4096);\
bit_vector_clear(&type_cast_3031);\
if(loopback1_3021_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_3030,4096);\
bit_vector_clear(&konst_3030);\
__declare_static_bit_vector(type_cast_3031,4096);\
bit_vector_clear(&type_cast_3031);\
bit_vector_clear(&konst_3030);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3031), &(konst_3030));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_3031));\
}\
;
;

#define _dataTx_merge_stmt_3022_c_postamble_macro_ loopback1_3021_flag = 0;\
merge_stmt_3022_entry_flag = 0;

#define _dataTx_assign_stmt_3043_c_macro_ __declare_static_bit_vector(konst_3036,4096);\
bit_vector_clear(&konst_3036);\
konst_3036.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_3037,4096);\
__declare_static_bit_vector(konst_3038,4088);\
bit_vector_clear(&konst_3038);\
__declare_static_bit_vector(type_cast_3039,4088);\
bit_vector_clear(&type_cast_3039);\
__declare_static_bit_vector(RPIPE_dataBufferTx_3040,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_3041,4096);\
__declare_static_bit_vector(OR_u4096_u4096_3042,4096);\
bit_vector_clear(&konst_3036);\
konst_3036.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_3036), &(SHL_u4096_u4096_3037));\
bit_vector_clear(&konst_3038);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3039), &(konst_3038));\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_3040));\
bit_vector_concatenate( &(type_cast_3039), &(RPIPE_dataBufferTx_3040), &(CONCAT_u4088_u4096_3041));\
bit_vector_or(&(SHL_u4096_u4096_3037), &(CONCAT_u4088_u4096_3041), &(OR_u4096_u4096_3042));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_3042));\
;

#define _dataTx_assign_stmt_3048_c_macro_ __declare_static_bit_vector(konst_3046,10);\
bit_vector_clear(&konst_3046);\
konst_3046.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_3047,10);\
bit_vector_clear(&konst_3046);\
konst_3046.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_3046), &(ADD_u10_u10_3047));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_3047));\
;
;

#define _dataTx_branch_block_stmt_3021_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataTx_assign_stmt_3059_c_macro_ __declare_static_bit_vector(konst_3057,10);\
bit_vector_clear(&konst_3057);\
__declare_static_bit_vector(type_cast_3058,10);\
bit_vector_clear(&type_cast_3058);\
bit_vector_clear(&konst_3057);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3058), &(konst_3057));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_3058));\
;

#define _dataTx_merge_stmt_3060_c_preamble_macro_ uint8_t merge_stmt_3060_entry_flag;\
merge_stmt_3060_entry_flag = 1;\
uint8_t loopback_2342_flag = 0;\
goto merge_stmt_3060_run;\
loopback_2342: loopback_2342_flag = 1;\
goto merge_stmt_3060_run;\
merge_stmt_3060_run: ;\

#define _dataTx_phi_stmt_3061_c_macro_ __declare_static_bit_vector(konst_3063,13);\
bit_vector_clear(&konst_3063);\
__declare_static_bit_vector(type_cast_3064,13);\
bit_vector_clear(&type_cast_3064);\
if(loopback_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_3063,13);\
bit_vector_clear(&konst_3063);\
__declare_static_bit_vector(type_cast_3064,13);\
bit_vector_clear(&type_cast_3064);\
bit_vector_clear(&konst_3063);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3064), &(konst_3063));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_3064));\
}\
;

#define _dataTx_phi_stmt_3066_c_macro_ __declare_static_bit_vector(konst_3068,16);\
bit_vector_clear(&konst_3068);\
__declare_static_bit_vector(type_cast_3069,16);\
bit_vector_clear(&type_cast_3069);\
if(loopback_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_3068,16);\
bit_vector_clear(&konst_3068);\
__declare_static_bit_vector(type_cast_3069,16);\
bit_vector_clear(&type_cast_3069);\
bit_vector_clear(&konst_3068);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3069), &(konst_3068));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_3069));\
}\
;

#define _dataTx_phi_stmt_3071_c_macro_ if(loopback_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_3060_c_postamble_macro_ loopback_2342_flag = 0;\
merge_stmt_3060_entry_flag = 0;

#define _dataTx_assign_stmt_3084_c_macro_ __declare_static_bit_vector(konst_3078,4096);\
bit_vector_clear(&konst_3078);\
konst_3078.val.byte_array[0] = 255;\
konst_3078.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_3079,1);\
__declare_static_bit_vector(konst_3081,16);\
bit_vector_clear(&konst_3081);\
konst_3081.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_3082,1);\
__declare_static_bit_vector(XOR_u1_u1_3083,1);\
bit_vector_clear(&konst_3078);\
konst_3078.val.byte_array[0] = 255;\
konst_3078.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_3078), &(BITSEL_u4096_u1_3079));\
bit_vector_clear(&konst_3081);\
konst_3081.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_3081), &(BITSEL_u16_u1_3082));\
bit_vector_xor(&(BITSEL_u4096_u1_3079), &(BITSEL_u16_u1_3082), &(XOR_u1_u1_3083));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_3083));\
;

#define _dataTx_assign_stmt_3108_c_macro_ __declare_static_bit_vector(slice_3087,3);\
__declare_static_bit_vector(konst_3089,16);\
bit_vector_clear(&konst_3089);\
konst_3089.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_3090,1);\
__declare_static_bit_vector(XOR_u1_u1_3092,1);\
__declare_static_bit_vector(CONCAT_u3_u4_3093,4);\
__declare_static_bit_vector(slice_3095,6);\
__declare_static_bit_vector(CONCAT_u4_u10_3096,10);\
__declare_static_bit_vector(konst_3098,16);\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_3099,1);\
__declare_static_bit_vector(XOR_u1_u1_3101,1);\
__declare_static_bit_vector(slice_3103,4);\
__declare_static_bit_vector(CONCAT_u1_u5_3104,5);\
__declare_static_bit_vector(CONCAT_u5_u6_3106,6);\
__declare_static_bit_vector(CONCAT_u10_u16_3107,16);\
bit_vector_slice(&(CRC_16), &(slice_3087), 12);\
bit_vector_clear(&konst_3089);\
konst_3089.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_3089), &(BITSEL_u16_u1_3090));\
bit_vector_xor(&(BITSEL_u16_u1_3090), &(inv), &(XOR_u1_u1_3092));\
bit_vector_concatenate( &(slice_3087), &(XOR_u1_u1_3092), &(CONCAT_u3_u4_3093));\
bit_vector_slice(&(CRC_16), &(slice_3095), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_3093), &(slice_3095), &(CONCAT_u4_u10_3096));\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_3098), &(BITSEL_u16_u1_3099));\
bit_vector_xor(&(BITSEL_u16_u1_3099), &(inv), &(XOR_u1_u1_3101));\
bit_vector_slice(&(CRC_16), &(slice_3103), 0);\
bit_vector_concatenate( &(XOR_u1_u1_3101), &(slice_3103), &(CONCAT_u1_u5_3104));\
bit_vector_concatenate( &(CONCAT_u1_u5_3104), &(inv), &(CONCAT_u5_u6_3106));\
bit_vector_concatenate( &(CONCAT_u4_u10_3096), &(CONCAT_u5_u6_3106), &(CONCAT_u10_u16_3107));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_3107));\
;

#define _dataTx_assign_stmt_3113_c_macro_ __declare_static_bit_vector(konst_3111,4096);\
bit_vector_clear(&konst_3111);\
konst_3111.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_3112,4096);\
bit_vector_clear(&konst_3111);\
konst_3111.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_3111), &(SHL_u4096_u4096_3112));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_3112));\
;

#define _dataTx_assign_stmt_3118_c_macro_ __declare_static_bit_vector(konst_3116,13);\
bit_vector_clear(&konst_3116);\
konst_3116.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_3117,13);\
bit_vector_clear(&konst_3116);\
konst_3116.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_3116), &(ADD_u13_u13_3117));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_3117));\
;

#define _dataTx_stmt_3128_c_macro_ uint32_t _dataTx_stmt_3128_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_3128_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3128_c_macro___print_counter,"dat");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat__next_data)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3128_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3128_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_3131_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_3132_c_preamble_macro_ uint8_t merge_stmt_3132_entry_flag;\
merge_stmt_3132_entry_flag = 1;\
uint8_t dataloop_2342_flag = 0;\
goto merge_stmt_3132_run;\
dataloop_2342: dataloop_2342_flag = 1;\
goto merge_stmt_3132_run;\
merge_stmt_3132_run: ;\

#define _dataTx_phi_stmt_3133_c_macro_ __declare_static_bit_vector(konst_3135,13);\
bit_vector_clear(&konst_3135);\
__declare_static_bit_vector(type_cast_3136,13);\
bit_vector_clear(&type_cast_3136);\
if(dataloop_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_3135,13);\
bit_vector_clear(&konst_3135);\
__declare_static_bit_vector(type_cast_3136,13);\
bit_vector_clear(&type_cast_3136);\
bit_vector_clear(&konst_3135);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3136), &(konst_3135));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_3136));\
}\
;

#define _dataTx_phi_stmt_3138_c_macro_ if(dataloop_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(nextbit));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_3132_c_postamble_macro_ dataloop_2342_flag = 0;\
merge_stmt_3132_entry_flag = 0;

#define _dataTx_assign_stmt_3147_c_macro_ __declare_static_bit_vector(konst_3145,4096);\
bit_vector_clear(&konst_3145);\
konst_3145.val.byte_array[0] = 255;\
konst_3145.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_3146,1);\
bit_vector_clear(&konst_3145);\
konst_3145.val.byte_array[0] = 255;\
konst_3145.val.byte_array[1] = 15;\
bit_vector_bitsel( &(dat0bit), &(konst_3145), &(BITSEL_u4096_u1_3146));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u4096_u1_3146));\
;

#define _dataTx_assign_stmt_3152_c_macro_ __declare_static_bit_vector(konst_3150,4096);\
bit_vector_clear(&konst_3150);\
konst_3150.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_3151,4096);\
bit_vector_clear(&konst_3150);\
konst_3150.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit), &(konst_3150), &(SHL_u4096_u4096_3151));\
bit_vector_cast_to_bit_vector(0, &(nextbit), &(SHL_u4096_u4096_3151));\
;

#define _dataTx_assign_stmt_3157_c_macro_ __declare_static_bit_vector(konst_3155,13);\
bit_vector_clear(&konst_3155);\
konst_3155.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_3156,13);\
bit_vector_clear(&konst_3155);\
konst_3155.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_3155), &(ADD_u13_u13_3156));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u13_u13_3156));\
;

#define _dataTx_merge_stmt_3164_c_preamble_macro_ uint8_t merge_stmt_3164_entry_flag;\
merge_stmt_3164_entry_flag = 1;\
uint8_t crcloop_2342_flag = 0;\
goto merge_stmt_3164_run;\
crcloop_2342: crcloop_2342_flag = 1;\
goto merge_stmt_3164_run;\
merge_stmt_3164_run: ;\

#define _dataTx_phi_stmt_3165_c_macro_ __declare_static_bit_vector(konst_3167,5);\
bit_vector_clear(&konst_3167);\
__declare_static_bit_vector(type_cast_3168,5);\
bit_vector_clear(&type_cast_3168);\
if(crcloop_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(L), &(next_L));\
}\
else {\
__declare_static_bit_vector(konst_3167,5);\
bit_vector_clear(&konst_3167);\
__declare_static_bit_vector(type_cast_3168,5);\
bit_vector_clear(&type_cast_3168);\
bit_vector_clear(&konst_3167);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3168), &(konst_3167));\
bit_vector_cast_to_bit_vector(0, &(L), &(type_cast_3168));\
}\
;

#define _dataTx_phi_stmt_3170_c_macro_ if(crcloop_2342_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextbitcrc));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextCRC16));\
}\
;
;

#define _dataTx_merge_stmt_3164_c_postamble_macro_ crcloop_2342_flag = 0;\
merge_stmt_3164_entry_flag = 0;

#define _dataTx_assign_stmt_3179_c_macro_ __declare_static_bit_vector(konst_3177,16);\
bit_vector_clear(&konst_3177);\
konst_3177.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_3178,1);\
bit_vector_clear(&konst_3177);\
konst_3177.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat0crc), &(konst_3177), &(BITSEL_u16_u1_3178));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u16_u1_3178));\
;

#define _dataTx_assign_stmt_3184_c_macro_ __declare_static_bit_vector(konst_3182,16);\
bit_vector_clear(&konst_3182);\
konst_3182.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_3183,16);\
bit_vector_clear(&konst_3182);\
konst_3182.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0crc), &(konst_3182), &(SHL_u16_u16_3183));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc), &(SHL_u16_u16_3183));\
;

#define _dataTx_assign_stmt_3189_c_macro_ __declare_static_bit_vector(konst_3187,5);\
bit_vector_clear(&konst_3187);\
konst_3187.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_3188,5);\
bit_vector_clear(&konst_3187);\
konst_3187.val.byte_array[0] = 1;\
bit_vector_plus( &(L), &(konst_3187), &(ADD_u5_u5_3188));\
bit_vector_cast_to_bit_vector(0, &(next_L), &(ADD_u5_u5_3188));\
;

#define _dataTx_assign_stmt_3198_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_3205_c_macro_ if (has_undefined_bit(&blockCountEnable)) {fprintf(stderr, "Error: variable blockCountEnable has undefined value (%s) at test point.\n", to_string(&blockCountEnable));assert(0);} \
__declare_static_bit_vector(konst_3203,16);\
bit_vector_clear(&konst_3203);\
konst_3203.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_3204,16);\
if (bit_vector_to_uint64(0, &blockCountEnable)) {\
bit_vector_clear(&konst_3203);\
konst_3203.val.byte_array[0] = 1;\
bit_vector_minus( &(blockCount), &(konst_3203), &(SUB_u16_u16_3204));\
bit_vector_cast_to_bit_vector(0, &(blockCountNext), &(SUB_u16_u16_3204));\
}
;

#define _dataTx_assign_stmt_3213_c_macro_ __declare_static_bit_vector(konst_3211,32);\
bit_vector_clear(&konst_3211);\
konst_3211.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3211);\
konst_3211.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3211)])));\
;

#define _dataTx_assign_stmt_3217_c_macro_ __declare_static_bit_vector(konst_3215,32);\
bit_vector_clear(&konst_3215);\
konst_3215.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3215);\
konst_3215.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3215)])));\
;

#define _dataTx_assign_stmt_3223_c_macro_ __declare_static_bit_vector(konst_3221,8);\
bit_vector_clear(&konst_3221);\
konst_3221.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_3222,8);\
bit_vector_clear(&konst_3221);\
konst_3221.val.byte_array[0] = 254;\
bit_vector_and(&(presentState1Var), &(konst_3221), &(AND_u8_u8_3222));\
__declare_static_bit_vector(konst_3218,32);\
bit_vector_clear(&konst_3218);\
konst_3218.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3218);\
konst_3218.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3218)])), &(AND_u8_u8_3222));\
;

#define _dataTx_merge_stmt_3225_c_preamble_macro_ uint8_t merge_stmt_3225_entry_flag;\
merge_stmt_3225_entry_flag = 1;\
uint8_t waitloop_2342_flag = 0;\
goto merge_stmt_3225_run;\
waitloop_2342: waitloop_2342_flag = 1;\
goto merge_stmt_3225_run;\
merge_stmt_3225_run: ;\
;

#define _dataTx_merge_stmt_3225_c_postamble_macro_ waitloop_2342_flag = 0;\
merge_stmt_3225_entry_flag = 0;

#define _dataTx_assign_stmt_3228_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_3227,1);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_3227));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_3227));\
;

#define _dataTx_assign_stmt_3244_c_macro_ __declare_static_bit_vector(konst_3242,8);\
bit_vector_clear(&konst_3242);\
konst_3242.val.byte_array[0] = 249;\
__declare_static_bit_vector(AND_u8_u8_3243,8);\
bit_vector_clear(&konst_3242);\
konst_3242.val.byte_array[0] = 249;\
bit_vector_and(&(presentState0Var), &(konst_3242), &(AND_u8_u8_3243));\
__declare_static_bit_vector(konst_3239,32);\
bit_vector_clear(&konst_3239);\
konst_3239.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3239);\
konst_3239.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3239)])), &(AND_u8_u8_3243));\
;

#define _dataTx_assign_stmt_3249_c_macro_ __declare_static_bit_vector(konst_3247,8);\
bit_vector_clear(&konst_3247);\
konst_3247.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_3248,8);\
bit_vector_clear(&OR_u8_u8_3248);\
OR_u8_u8_3248.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3247);\
konst_3247.val.byte_array[0] = 2;\
bit_vector_or(&(ZERO_8), &(konst_3247), &(OR_u8_u8_3248));\
bit_vector_cast_to_bit_vector(0, &(transferComplete), &(OR_u8_u8_3248));\
;

#define _dataTx_stmt_3254_c_macro_ uint32_t _dataTx_stmt_3254_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_3254_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3254_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3254_c_macro___print_counter,"blockCount");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCount)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3254_c_macro___print_counter,"blockCountEnable");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCountEnable)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataTx_branch_block_stmt_2342_c_export_apply_macro_ ;

#define _dataTx_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pblockCountNext)), &(blockCountNext));\
bit_vector_cast_to_bit_vector(0, &((*__ptransferComplete)), &(transferComplete));\
;

#define _generate_crc_7_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,40);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_branch_block_stmt_297_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
__declare_static_bit_vector(I,6);\
__declare_static_bit_vector(crc_out,7);\
__declare_static_bit_vector(temp,33);\
__declare_static_bit_vector(a,1);\
__declare_static_bit_vector(b,1);\
__declare_static_bit_vector(c,1);\
__declare_static_bit_vector(d,1);\
__declare_static_bit_vector(e,1);\
__declare_static_bit_vector(f,1);\
__declare_static_bit_vector(g,1);\
__declare_static_bit_vector(crc_out_true,7);\
__declare_static_bit_vector(crc_out_false,7);\
__declare_static_bit_vector(final_crc_out,7);\
__declare_static_bit_vector(next_I,6);\
__declare_static_bit_vector(next_temp,33);\


#define _generate_crc_7_merge_stmt_298_c_preamble_macro_ uint8_t merge_stmt_298_entry_flag;\
merge_stmt_298_entry_flag = 1;\
uint8_t loopback_297_flag = 0;\
goto merge_stmt_298_run;\
loopback_297: loopback_297_flag = 1;\
goto merge_stmt_298_run;\
merge_stmt_298_run: ;\

#define _generate_crc_7_phi_stmt_299_c_macro_ __declare_static_bit_vector(konst_302,6);\
bit_vector_clear(&konst_302);\
konst_302.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_303,6);\
bit_vector_clear(&type_cast_303);\
type_cast_303.val.byte_array[0] = 41;\
if(loopback_297_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_302,6);\
bit_vector_clear(&konst_302);\
konst_302.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_303,6);\
bit_vector_clear(&type_cast_303);\
type_cast_303.val.byte_array[0] = 41;\
bit_vector_clear(&konst_302);\
konst_302.val.byte_array[0] = 41;\
bit_vector_bitcast_to_bit_vector( &(type_cast_303), &(konst_302));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_303));\
}\
;

#define _generate_crc_7_phi_stmt_305_c_macro_ __declare_static_bit_vector(slice_308,7);\
if(loopback_297_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_308,7);\
bit_vector_slice(&(message_signal), &(slice_308), 33);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_308));\
}\
;

#define _generate_crc_7_phi_stmt_310_c_macro_ __declare_static_bit_vector(slice_314,33);\
if(loopback_297_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_314,33);\
bit_vector_slice(&(message_signal), &(slice_314), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_314));\
}\
;
;

#define _generate_crc_7_merge_stmt_298_c_postamble_macro_ loopback_297_flag = 0;\
merge_stmt_298_entry_flag = 0;

#define _generate_crc_7_assign_stmt_327_c_macro_ __declare_static_bit_vector(konst_325,7);\
bit_vector_clear(&konst_325);\
konst_325.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_326,1);\
bit_vector_clear(&konst_325);\
konst_325.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_325), &(BITSEL_u7_u1_326));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_326));\
;

#define _generate_crc_7_assign_stmt_332_c_macro_ __declare_static_bit_vector(konst_330,7);\
bit_vector_clear(&konst_330);\
konst_330.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_331,1);\
bit_vector_clear(&konst_330);\
konst_330.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_330), &(BITSEL_u7_u1_331));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_331));\
;

#define _generate_crc_7_assign_stmt_337_c_macro_ __declare_static_bit_vector(konst_335,7);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_336,1);\
bit_vector_clear(&konst_335);\
konst_335.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_335), &(BITSEL_u7_u1_336));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_336));\
;

#define _generate_crc_7_assign_stmt_344_c_macro_ __declare_static_bit_vector(konst_340,7);\
bit_vector_clear(&konst_340);\
konst_340.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_341,1);\
__declare_static_bit_vector(konst_342,1);\
bit_vector_clear(&konst_342);\
konst_342.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_343,1);\
bit_vector_clear(&konst_340);\
konst_340.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_340), &(BITSEL_u7_u1_341));\
bit_vector_clear(&konst_342);\
konst_342.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_341), &(konst_342), &(XOR_u1_u1_343));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_343));\
;

#define _generate_crc_7_assign_stmt_349_c_macro_ __declare_static_bit_vector(konst_347,7);\
bit_vector_clear(&konst_347);\
konst_347.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_348,1);\
bit_vector_clear(&konst_347);\
konst_347.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_347), &(BITSEL_u7_u1_348));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_348));\
;

#define _generate_crc_7_assign_stmt_354_c_macro_ __declare_static_bit_vector(konst_352,7);\
bit_vector_clear(&konst_352);\
__declare_static_bit_vector(BITSEL_u7_u1_353,1);\
bit_vector_clear(&konst_352);\
bit_vector_bitsel( &(crc_out), &(konst_352), &(BITSEL_u7_u1_353));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_353));\
;

#define _generate_crc_7_assign_stmt_361_c_macro_ __declare_static_bit_vector(konst_357,33);\
bit_vector_clear(&konst_357);\
konst_357.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_358,1);\
__declare_static_bit_vector(konst_359,1);\
bit_vector_clear(&konst_359);\
konst_359.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_360,1);\
bit_vector_clear(&konst_357);\
konst_357.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_357), &(BITSEL_u33_u1_358));\
bit_vector_clear(&konst_359);\
konst_359.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u33_u1_358), &(konst_359), &(XOR_u1_u1_360));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_360));\
;

#define _generate_crc_7_assign_stmt_376_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_365,2);\
__declare_static_bit_vector(CONCAT_u1_u2_368,2);\
__declare_static_bit_vector(CONCAT_u2_u4_369,4);\
__declare_static_bit_vector(CONCAT_u1_u2_372,2);\
__declare_static_bit_vector(CONCAT_u2_u3_374,3);\
__declare_static_bit_vector(CONCAT_u4_u7_375,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_365));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_368));\
bit_vector_concatenate( &(CONCAT_u1_u2_365), &(CONCAT_u1_u2_368), &(CONCAT_u2_u4_369));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_372));\
bit_vector_concatenate( &(CONCAT_u1_u2_372), &(g), &(CONCAT_u2_u3_374));\
bit_vector_concatenate( &(CONCAT_u2_u4_369), &(CONCAT_u2_u3_374), &(CONCAT_u4_u7_375));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_375));\
;

#define _generate_crc_7_assign_stmt_386_c_macro_ __declare_static_bit_vector(slice_381,6);\
__declare_static_bit_vector(konst_383,33);\
bit_vector_clear(&konst_383);\
konst_383.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_384,1);\
__declare_static_bit_vector(CONCAT_u6_u7_385,7);\
bit_vector_slice(&(crc_out), &(slice_381), 0);\
bit_vector_clear(&konst_383);\
konst_383.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_383), &(BITSEL_u33_u1_384));\
bit_vector_concatenate( &(slice_381), &(BITSEL_u33_u1_384), &(CONCAT_u6_u7_385));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_385));\
;

#define _generate_crc_7_merge_stmt_389_c_preamble_macro_ uint8_t merge_stmt_389_entry_flag;\
merge_stmt_389_entry_flag = 1;\
uint8_t MSB_true_297_flag = 0;\
uint8_t MSB_false_297_flag = 0;\
goto merge_stmt_389_run;\
MSB_true_297: MSB_true_297_flag = 1;\
MSB_false_297_flag = 0;\
goto merge_stmt_389_run;\
MSB_false_297: MSB_false_297_flag = 1;\
MSB_true_297_flag = 0;\
goto merge_stmt_389_run;\
merge_stmt_389_run: ;\

#define _generate_crc_7_phi_stmt_390_c_macro_ if(MSB_true_297_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_297_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_merge_stmt_389_c_postamble_macro_ MSB_true_297_flag = 0;\
MSB_false_297_flag = 0;\
merge_stmt_389_entry_flag = 0;

#define _generate_crc_7_assign_stmt_399_c_macro_ __declare_static_bit_vector(konst_397,6);\
bit_vector_clear(&konst_397);\
konst_397.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u6_u6_398,6);\
bit_vector_clear(&konst_397);\
konst_397.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_397), &(SUB_u6_u6_398));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u6_u6_398));\
;

#define _generate_crc_7_assign_stmt_404_c_macro_ __declare_static_bit_vector(konst_402,33);\
bit_vector_clear(&konst_402);\
konst_402.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u33_u33_403,33);\
bit_vector_clear(&konst_402);\
konst_402.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_402), &(SHL_u33_u33_403));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u33_u33_403));\
;
;

#define _generate_crc_7_branch_block_stmt_297_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_assign_stmt_414_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _generate_crc_7_120_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,120);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_120_branch_block_stmt_419_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
__declare_static_bit_vector(I,8);\
__declare_static_bit_vector(crc_out,7);\
__declare_static_bit_vector(temp,113);\
__declare_static_bit_vector(crc_out_print,7);\
__declare_static_bit_vector(a,1);\
__declare_static_bit_vector(b,1);\
__declare_static_bit_vector(c,1);\
__declare_static_bit_vector(d,1);\
__declare_static_bit_vector(e,1);\
__declare_static_bit_vector(f,1);\
__declare_static_bit_vector(g,1);\
__declare_static_bit_vector(crc_out_true,7);\
__declare_static_bit_vector(crc_out_false,7);\
__declare_static_bit_vector(final_crc_out,7);\
__declare_static_bit_vector(next_I,8);\
__declare_static_bit_vector(next_temp,113);\


#define _generate_crc_7_120_merge_stmt_420_c_preamble_macro_ uint8_t merge_stmt_420_entry_flag;\
merge_stmt_420_entry_flag = 1;\
uint8_t loopback_419_flag = 0;\
goto merge_stmt_420_run;\
loopback_419: loopback_419_flag = 1;\
goto merge_stmt_420_run;\
merge_stmt_420_run: ;\

#define _generate_crc_7_120_phi_stmt_421_c_macro_ __declare_static_bit_vector(konst_423,8);\
bit_vector_clear(&konst_423);\
konst_423.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_424,8);\
bit_vector_clear(&type_cast_424);\
type_cast_424.val.byte_array[0] = 121;\
if(loopback_419_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_423,8);\
bit_vector_clear(&konst_423);\
konst_423.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_424,8);\
bit_vector_clear(&type_cast_424);\
type_cast_424.val.byte_array[0] = 121;\
bit_vector_clear(&konst_423);\
konst_423.val.byte_array[0] = 121;\
bit_vector_bitcast_to_bit_vector( &(type_cast_424), &(konst_423));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_424));\
}\
;

#define _generate_crc_7_120_phi_stmt_426_c_macro_ __declare_static_bit_vector(slice_429,7);\
if(loopback_419_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_429,7);\
bit_vector_slice(&(message_signal), &(slice_429), 113);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_429));\
}\
;

#define _generate_crc_7_120_phi_stmt_431_c_macro_ __declare_static_bit_vector(slice_435,113);\
if(loopback_419_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_435,113);\
bit_vector_slice(&(message_signal), &(slice_435), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_435));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_420_c_postamble_macro_ loopback_419_flag = 0;\
merge_stmt_420_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_442_c_macro_ __declare_static_bit_vector(konst_440,7);\
bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 6;\
__declare_static_bit_vector(LSHR_u7_u7_441,7);\
bit_vector_clear(&konst_440);\
konst_440.val.byte_array[0] = 6;\
bit_vector_shift_right(0, &(crc_out), &(konst_440), &(LSHR_u7_u7_441));\
bit_vector_cast_to_bit_vector(0, &(crc_out_print), &(LSHR_u7_u7_441));\
;

#define _generate_crc_7_120_assign_stmt_453_c_macro_ __declare_static_bit_vector(konst_451,7);\
bit_vector_clear(&konst_451);\
konst_451.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_452,1);\
bit_vector_clear(&konst_451);\
konst_451.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_451), &(BITSEL_u7_u1_452));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_452));\
;

#define _generate_crc_7_120_assign_stmt_458_c_macro_ __declare_static_bit_vector(konst_456,7);\
bit_vector_clear(&konst_456);\
konst_456.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_457,1);\
bit_vector_clear(&konst_456);\
konst_456.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_456), &(BITSEL_u7_u1_457));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_457));\
;

#define _generate_crc_7_120_assign_stmt_463_c_macro_ __declare_static_bit_vector(konst_461,7);\
bit_vector_clear(&konst_461);\
konst_461.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_462,1);\
bit_vector_clear(&konst_461);\
konst_461.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_461), &(BITSEL_u7_u1_462));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_462));\
;

#define _generate_crc_7_120_assign_stmt_470_c_macro_ __declare_static_bit_vector(konst_466,7);\
bit_vector_clear(&konst_466);\
konst_466.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_467,1);\
__declare_static_bit_vector(konst_468,1);\
bit_vector_clear(&konst_468);\
konst_468.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_469,1);\
bit_vector_clear(&konst_466);\
konst_466.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_466), &(BITSEL_u7_u1_467));\
bit_vector_clear(&konst_468);\
konst_468.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_467), &(konst_468), &(XOR_u1_u1_469));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_469));\
;

#define _generate_crc_7_120_assign_stmt_475_c_macro_ __declare_static_bit_vector(konst_473,7);\
bit_vector_clear(&konst_473);\
konst_473.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_474,1);\
bit_vector_clear(&konst_473);\
konst_473.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_473), &(BITSEL_u7_u1_474));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_474));\
;

#define _generate_crc_7_120_assign_stmt_480_c_macro_ __declare_static_bit_vector(konst_478,7);\
bit_vector_clear(&konst_478);\
__declare_static_bit_vector(BITSEL_u7_u1_479,1);\
bit_vector_clear(&konst_478);\
bit_vector_bitsel( &(crc_out), &(konst_478), &(BITSEL_u7_u1_479));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_479));\
;

#define _generate_crc_7_120_assign_stmt_487_c_macro_ __declare_static_bit_vector(konst_483,113);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_484,1);\
__declare_static_bit_vector(konst_485,1);\
bit_vector_clear(&konst_485);\
konst_485.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_486,1);\
bit_vector_clear(&konst_483);\
konst_483.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_483), &(BITSEL_u113_u1_484));\
bit_vector_clear(&konst_485);\
konst_485.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u113_u1_484), &(konst_485), &(XOR_u1_u1_486));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_486));\
;

#define _generate_crc_7_120_assign_stmt_502_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_491,2);\
__declare_static_bit_vector(CONCAT_u1_u2_494,2);\
__declare_static_bit_vector(CONCAT_u2_u4_495,4);\
__declare_static_bit_vector(CONCAT_u1_u2_498,2);\
__declare_static_bit_vector(CONCAT_u2_u3_500,3);\
__declare_static_bit_vector(CONCAT_u4_u7_501,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_491));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_494));\
bit_vector_concatenate( &(CONCAT_u1_u2_491), &(CONCAT_u1_u2_494), &(CONCAT_u2_u4_495));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_498));\
bit_vector_concatenate( &(CONCAT_u1_u2_498), &(g), &(CONCAT_u2_u3_500));\
bit_vector_concatenate( &(CONCAT_u2_u4_495), &(CONCAT_u2_u3_500), &(CONCAT_u4_u7_501));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_501));\
;

#define _generate_crc_7_120_assign_stmt_512_c_macro_ __declare_static_bit_vector(slice_507,6);\
__declare_static_bit_vector(konst_509,113);\
bit_vector_clear(&konst_509);\
konst_509.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_510,1);\
__declare_static_bit_vector(CONCAT_u6_u7_511,7);\
bit_vector_slice(&(crc_out), &(slice_507), 0);\
bit_vector_clear(&konst_509);\
konst_509.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_509), &(BITSEL_u113_u1_510));\
bit_vector_concatenate( &(slice_507), &(BITSEL_u113_u1_510), &(CONCAT_u6_u7_511));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_511));\
;

#define _generate_crc_7_120_merge_stmt_515_c_preamble_macro_ uint8_t merge_stmt_515_entry_flag;\
merge_stmt_515_entry_flag = 1;\
uint8_t MSB_true_419_flag = 0;\
uint8_t MSB_false_419_flag = 0;\
goto merge_stmt_515_run;\
MSB_true_419: MSB_true_419_flag = 1;\
MSB_false_419_flag = 0;\
goto merge_stmt_515_run;\
MSB_false_419: MSB_false_419_flag = 1;\
MSB_true_419_flag = 0;\
goto merge_stmt_515_run;\
merge_stmt_515_run: ;\

#define _generate_crc_7_120_phi_stmt_516_c_macro_ if(MSB_true_419_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_419_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_515_c_postamble_macro_ MSB_true_419_flag = 0;\
MSB_false_419_flag = 0;\
merge_stmt_515_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_525_c_macro_ __declare_static_bit_vector(konst_523,8);\
bit_vector_clear(&konst_523);\
konst_523.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_524,8);\
bit_vector_clear(&konst_523);\
konst_523.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_523), &(SUB_u8_u8_524));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u8_u8_524));\
;

#define _generate_crc_7_120_assign_stmt_530_c_macro_ __declare_static_bit_vector(konst_528,113);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u113_u113_529,113);\
bit_vector_clear(&konst_528);\
konst_528.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_528), &(SHL_u113_u113_529));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u113_u113_529));\
;
;

#define _generate_crc_7_120_branch_block_stmt_419_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_120_assign_stmt_540_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_120_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _resetRegisters_inner_inarg_prep_macro__ __declare_static_bit_vector(resetCondition,2);\
bit_vector_cast_to_bit_vector(0, &(resetCondition), &((*__presetCondition)));\

#define _resetRegisters_assign_stmt_3265_c_macro_ __declare_static_bit_vector(konst_3264,8);\
bit_vector_clear(&konst_3264);\
konst_3264.val.byte_array[0] = 138;\
bit_vector_clear(&konst_3264);\
konst_3264.val.byte_array[0] = 138;\
__declare_static_bit_vector(konst_3262,32);\
bit_vector_clear(&konst_3262);\
konst_3262.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3262);\
konst_3262.val.byte_array[0] = 64;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3262)])), &(konst_3264));\
;

#define _resetRegisters_assign_stmt_3269_c_macro_ __declare_static_bit_vector(konst_3268,8);\
bit_vector_clear(&konst_3268);\
konst_3268.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3268);\
konst_3268.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3266,32);\
bit_vector_clear(&konst_3266);\
konst_3266.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3266);\
konst_3266.val.byte_array[0] = 65;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3266)])), &(konst_3268));\
;

#define _resetRegisters_assign_stmt_3273_c_macro_ __declare_static_bit_vector(konst_3272,8);\
bit_vector_clear(&konst_3272);\
konst_3272.val.byte_array[0] = 32;\
bit_vector_clear(&konst_3272);\
konst_3272.val.byte_array[0] = 32;\
__declare_static_bit_vector(konst_3270,32);\
bit_vector_clear(&konst_3270);\
konst_3270.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3270);\
konst_3270.val.byte_array[0] = 66;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3270)])), &(konst_3272));\
;

#define _resetRegisters_assign_stmt_3277_c_macro_ __declare_static_bit_vector(konst_3276,8);\
bit_vector_clear(&konst_3276);\
konst_3276.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3276);\
konst_3276.val.byte_array[0] = 5;\
__declare_static_bit_vector(konst_3274,32);\
bit_vector_clear(&konst_3274);\
konst_3274.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3274);\
konst_3274.val.byte_array[0] = 67;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3274)])), &(konst_3276));\
;

#define _resetRegisters_assign_stmt_3281_c_macro_ __declare_static_bit_vector(konst_3280,8);\
bit_vector_clear(&konst_3280);\
konst_3280.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3280);\
konst_3280.val.byte_array[0] = 49;\
__declare_static_bit_vector(konst_3278,32);\
bit_vector_clear(&konst_3278);\
konst_3278.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3278);\
konst_3278.val.byte_array[0] = 68;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3278)])), &(konst_3280));\
;

#define _resetRegisters_assign_stmt_3285_c_macro_ __declare_static_bit_vector(konst_3284,8);\
bit_vector_clear(&konst_3284);\
bit_vector_clear(&konst_3284);\
__declare_static_bit_vector(konst_3282,32);\
bit_vector_clear(&konst_3282);\
konst_3282.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3282);\
konst_3282.val.byte_array[0] = 69;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3282)])), &(konst_3284));\
;

#define _resetRegisters_assign_stmt_3289_c_macro_ __declare_static_bit_vector(konst_3288,8);\
bit_vector_clear(&konst_3288);\
bit_vector_clear(&konst_3288);\
__declare_static_bit_vector(konst_3286,32);\
bit_vector_clear(&konst_3286);\
konst_3286.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3286);\
konst_3286.val.byte_array[0] = 70;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3286)])), &(konst_3288));\
;

#define _resetRegisters_assign_stmt_3293_c_macro_ __declare_static_bit_vector(konst_3292,8);\
bit_vector_clear(&konst_3292);\
bit_vector_clear(&konst_3292);\
__declare_static_bit_vector(konst_3290,32);\
bit_vector_clear(&konst_3290);\
konst_3290.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3290);\
konst_3290.val.byte_array[0] = 71;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3290)])), &(konst_3292));\
;

#define _resetRegisters_assign_stmt_3297_c_macro_ __declare_static_bit_vector(konst_3296,8);\
bit_vector_clear(&konst_3296);\
konst_3296.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3296);\
konst_3296.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3294,32);\
bit_vector_clear(&konst_3294);\
konst_3294.val.byte_array[0] = 72;\
bit_vector_clear(&konst_3294);\
konst_3294.val.byte_array[0] = 72;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3294)])), &(konst_3296));\
;

#define _resetRegisters_assign_stmt_3301_c_macro_ __declare_static_bit_vector(konst_3300,8);\
bit_vector_clear(&konst_3300);\
konst_3300.val.byte_array[0] = 150;\
bit_vector_clear(&konst_3300);\
konst_3300.val.byte_array[0] = 150;\
__declare_static_bit_vector(konst_3298,32);\
bit_vector_clear(&konst_3298);\
konst_3298.val.byte_array[0] = 73;\
bit_vector_clear(&konst_3298);\
konst_3298.val.byte_array[0] = 73;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3298)])), &(konst_3300));\
;

#define _resetRegisters_assign_stmt_3305_c_macro_ __declare_static_bit_vector(konst_3304,8);\
bit_vector_clear(&konst_3304);\
konst_3304.val.byte_array[0] = 200;\
bit_vector_clear(&konst_3304);\
konst_3304.val.byte_array[0] = 200;\
__declare_static_bit_vector(konst_3302,32);\
bit_vector_clear(&konst_3302);\
konst_3302.val.byte_array[0] = 74;\
bit_vector_clear(&konst_3302);\
konst_3302.val.byte_array[0] = 74;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3302)])), &(konst_3304));\
;

#define _resetRegisters_assign_stmt_3309_c_macro_ __declare_static_bit_vector(konst_3308,8);\
bit_vector_clear(&konst_3308);\
bit_vector_clear(&konst_3308);\
__declare_static_bit_vector(konst_3306,32);\
bit_vector_clear(&konst_3306);\
konst_3306.val.byte_array[0] = 75;\
bit_vector_clear(&konst_3306);\
konst_3306.val.byte_array[0] = 75;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3306)])), &(konst_3308));\
;

#define _resetRegisters_assign_stmt_3313_c_macro_ __declare_static_bit_vector(konst_3312,8);\
bit_vector_clear(&konst_3312);\
bit_vector_clear(&konst_3312);\
__declare_static_bit_vector(konst_3310,32);\
bit_vector_clear(&konst_3310);\
konst_3310.val.byte_array[0] = 76;\
bit_vector_clear(&konst_3310);\
konst_3310.val.byte_array[0] = 76;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3310)])), &(konst_3312));\
;

#define _resetRegisters_assign_stmt_3317_c_macro_ __declare_static_bit_vector(konst_3316,8);\
bit_vector_clear(&konst_3316);\
bit_vector_clear(&konst_3316);\
__declare_static_bit_vector(konst_3314,32);\
bit_vector_clear(&konst_3314);\
konst_3314.val.byte_array[0] = 77;\
bit_vector_clear(&konst_3314);\
konst_3314.val.byte_array[0] = 77;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3314)])), &(konst_3316));\
;

#define _resetRegisters_assign_stmt_3321_c_macro_ __declare_static_bit_vector(konst_3320,8);\
bit_vector_clear(&konst_3320);\
bit_vector_clear(&konst_3320);\
__declare_static_bit_vector(konst_3318,32);\
bit_vector_clear(&konst_3318);\
konst_3318.val.byte_array[0] = 78;\
bit_vector_clear(&konst_3318);\
konst_3318.val.byte_array[0] = 78;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3318)])), &(konst_3320));\
;

#define _resetRegisters_assign_stmt_3325_c_macro_ __declare_static_bit_vector(konst_3324,8);\
bit_vector_clear(&konst_3324);\
bit_vector_clear(&konst_3324);\
__declare_static_bit_vector(konst_3322,32);\
bit_vector_clear(&konst_3322);\
konst_3322.val.byte_array[0] = 79;\
bit_vector_clear(&konst_3322);\
konst_3322.val.byte_array[0] = 79;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3322)])), &(konst_3324));\
;

#define _resetRegisters_assign_stmt_3329_c_macro_ __declare_static_bit_vector(konst_3328,8);\
bit_vector_clear(&konst_3328);\
konst_3328.val.byte_array[0] = 125;\
bit_vector_clear(&konst_3328);\
konst_3328.val.byte_array[0] = 125;\
__declare_static_bit_vector(konst_3326,32);\
bit_vector_clear(&konst_3326);\
konst_3326.val.byte_array[0] = 96;\
bit_vector_clear(&konst_3326);\
konst_3326.val.byte_array[0] = 96;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3326)])), &(konst_3328));\
;

#define _resetRegisters_assign_stmt_3333_c_macro_ __declare_static_bit_vector(konst_3332,8);\
bit_vector_clear(&konst_3332);\
bit_vector_clear(&konst_3332);\
__declare_static_bit_vector(konst_3330,32);\
bit_vector_clear(&konst_3330);\
konst_3330.val.byte_array[0] = 97;\
bit_vector_clear(&konst_3330);\
konst_3330.val.byte_array[0] = 97;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3330)])), &(konst_3332));\
;

#define _resetRegisters_assign_stmt_3337_c_macro_ __declare_static_bit_vector(konst_3336,8);\
bit_vector_clear(&konst_3336);\
konst_3336.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3336);\
konst_3336.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3334,32);\
bit_vector_clear(&konst_3334);\
konst_3334.val.byte_array[0] = 98;\
bit_vector_clear(&konst_3334);\
konst_3334.val.byte_array[0] = 98;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3334)])), &(konst_3336));\
;

#define _resetRegisters_assign_stmt_3341_c_macro_ __declare_static_bit_vector(konst_3340,8);\
bit_vector_clear(&konst_3340);\
bit_vector_clear(&konst_3340);\
__declare_static_bit_vector(konst_3338,32);\
bit_vector_clear(&konst_3338);\
konst_3338.val.byte_array[0] = 99;\
bit_vector_clear(&konst_3338);\
konst_3338.val.byte_array[0] = 99;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3338)])), &(konst_3340));\
;

#define _resetRegisters_assign_stmt_3345_c_macro_ __declare_static_bit_vector(konst_3344,8);\
bit_vector_clear(&konst_3344);\
konst_3344.val.byte_array[0] = 1;\
bit_vector_clear(&konst_3344);\
konst_3344.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_3342,32);\
bit_vector_clear(&konst_3342);\
konst_3342.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3342);\
konst_3342.val.byte_array[0] = 100;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3342)])), &(konst_3344));\
;

#define _resetRegisters_assign_stmt_3349_c_macro_ __declare_static_bit_vector(konst_3348,8);\
bit_vector_clear(&konst_3348);\
bit_vector_clear(&konst_3348);\
__declare_static_bit_vector(konst_3346,32);\
bit_vector_clear(&konst_3346);\
konst_3346.val.byte_array[0] = 101;\
bit_vector_clear(&konst_3346);\
konst_3346.val.byte_array[0] = 101;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3346)])), &(konst_3348));\
;

#define _resetRegisters_assign_stmt_3353_c_macro_ __declare_static_bit_vector(konst_3352,8);\
bit_vector_clear(&konst_3352);\
konst_3352.val.byte_array[0] = 4;\
bit_vector_clear(&konst_3352);\
konst_3352.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_3350,32);\
bit_vector_clear(&konst_3350);\
konst_3350.val.byte_array[0] = 102;\
bit_vector_clear(&konst_3350);\
konst_3350.val.byte_array[0] = 102;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3350)])), &(konst_3352));\
;

#define _resetRegisters_assign_stmt_3357_c_macro_ __declare_static_bit_vector(konst_3356,8);\
bit_vector_clear(&konst_3356);\
bit_vector_clear(&konst_3356);\
__declare_static_bit_vector(konst_3354,32);\
bit_vector_clear(&konst_3354);\
konst_3354.val.byte_array[0] = 103;\
bit_vector_clear(&konst_3354);\
konst_3354.val.byte_array[0] = 103;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3354)])), &(konst_3356));\
;

#define _resetRegisters_assign_stmt_3361_c_macro_ __declare_static_bit_vector(konst_3360,8);\
bit_vector_clear(&konst_3360);\
konst_3360.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3360);\
konst_3360.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3358,32);\
bit_vector_clear(&konst_3358);\
konst_3358.val.byte_array[0] = 104;\
bit_vector_clear(&konst_3358);\
konst_3358.val.byte_array[0] = 104;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3358)])), &(konst_3360));\
;

#define _resetRegisters_assign_stmt_3365_c_macro_ __declare_static_bit_vector(konst_3364,8);\
bit_vector_clear(&konst_3364);\
konst_3364.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3364);\
konst_3364.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3362,32);\
bit_vector_clear(&konst_3362);\
konst_3362.val.byte_array[0] = 105;\
bit_vector_clear(&konst_3362);\
konst_3362.val.byte_array[0] = 105;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3362)])), &(konst_3364));\
;

#define _resetRegisters_assign_stmt_3369_c_macro_ __declare_static_bit_vector(konst_3368,8);\
bit_vector_clear(&konst_3368);\
konst_3368.val.byte_array[0] = 1;\
bit_vector_clear(&konst_3368);\
konst_3368.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_3366,32);\
bit_vector_clear(&konst_3366);\
konst_3366.val.byte_array[0] = 106;\
bit_vector_clear(&konst_3366);\
konst_3366.val.byte_array[0] = 106;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3366)])), &(konst_3368));\
;

#define _resetRegisters_assign_stmt_3373_c_macro_ __declare_static_bit_vector(konst_3372,8);\
bit_vector_clear(&konst_3372);\
konst_3372.val.byte_array[0] = 128;\
bit_vector_clear(&konst_3372);\
konst_3372.val.byte_array[0] = 128;\
__declare_static_bit_vector(konst_3370,32);\
bit_vector_clear(&konst_3370);\
konst_3370.val.byte_array[0] = 107;\
bit_vector_clear(&konst_3370);\
konst_3370.val.byte_array[0] = 107;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3370)])), &(konst_3372));\
;

#define _resetRegisters_assign_stmt_3377_c_macro_ __declare_static_bit_vector(konst_3376,8);\
bit_vector_clear(&konst_3376);\
bit_vector_clear(&konst_3376);\
__declare_static_bit_vector(konst_3374,32);\
bit_vector_clear(&konst_3374);\
konst_3374.val.byte_array[0] = 108;\
bit_vector_clear(&konst_3374);\
konst_3374.val.byte_array[0] = 108;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3374)])), &(konst_3376));\
;

#define _resetRegisters_assign_stmt_3381_c_macro_ __declare_static_bit_vector(konst_3380,8);\
bit_vector_clear(&konst_3380);\
bit_vector_clear(&konst_3380);\
__declare_static_bit_vector(konst_3378,32);\
bit_vector_clear(&konst_3378);\
konst_3378.val.byte_array[0] = 109;\
bit_vector_clear(&konst_3378);\
konst_3378.val.byte_array[0] = 109;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3378)])), &(konst_3380));\
;

#define _resetRegisters_assign_stmt_3385_c_macro_ __declare_static_bit_vector(konst_3384,8);\
bit_vector_clear(&konst_3384);\
bit_vector_clear(&konst_3384);\
__declare_static_bit_vector(konst_3382,32);\
bit_vector_clear(&konst_3382);\
konst_3382.val.byte_array[0] = 110;\
bit_vector_clear(&konst_3382);\
konst_3382.val.byte_array[0] = 110;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3382)])), &(konst_3384));\
;

#define _resetRegisters_assign_stmt_3389_c_macro_ __declare_static_bit_vector(konst_3388,8);\
bit_vector_clear(&konst_3388);\
bit_vector_clear(&konst_3388);\
__declare_static_bit_vector(konst_3386,32);\
bit_vector_clear(&konst_3386);\
konst_3386.val.byte_array[0] = 111;\
bit_vector_clear(&konst_3386);\
konst_3386.val.byte_array[0] = 111;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3386)])), &(konst_3388));\
;

#define _resetRegisters_assign_stmt_3393_c_macro_ __declare_static_bit_vector(konst_3392,8);\
bit_vector_clear(&konst_3392);\
konst_3392.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3392);\
konst_3392.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3390,32);\
bit_vector_clear(&konst_3390);\
konst_3390.val.byte_array[0] = 254;\
bit_vector_clear(&konst_3390);\
konst_3390.val.byte_array[0] = 254;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3390)])), &(konst_3392));\
;

#define _resetRegisters_assign_stmt_3397_c_macro_ __declare_static_bit_vector(konst_3396,8);\
bit_vector_clear(&konst_3396);\
bit_vector_clear(&konst_3396);\
__declare_static_bit_vector(konst_3394,32);\
bit_vector_clear(&konst_3394);\
konst_3394.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3394);\
konst_3394.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3394)])), &(konst_3396));\
;

#define _resetRegisters_branch_block_stmt_3398_c_export_decl_macro_ __declare_static_bit_vector(I,9);\
__declare_static_bit_vector(current_register_value,8);\
__declare_static_bit_vector(current_softwarereset_register_value,8);\
__declare_static_bit_vector(condition,1);\
__declare_static_bit_vector(condition2,1);\
__declare_static_bit_vector(condition3,1);\
__declare_static_bit_vector(condition4,1);\
__declare_static_bit_vector(next_I,9);\


#define _resetRegisters_merge_stmt_3399_c_preamble_macro_ uint8_t merge_stmt_3399_entry_flag;\
merge_stmt_3399_entry_flag = 1;\
uint8_t loopback_3398_flag = 0;\
goto merge_stmt_3399_run;\
loopback_3398: loopback_3398_flag = 1;\
goto merge_stmt_3399_run;\
merge_stmt_3399_run: ;\

#define _resetRegisters_phi_stmt_3400_c_macro_ __declare_static_bit_vector(konst_3403,9);\
bit_vector_clear(&konst_3403);\
__declare_static_bit_vector(type_cast_3404,9);\
bit_vector_clear(&type_cast_3404);\
if(loopback_3398_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_3403,9);\
bit_vector_clear(&konst_3403);\
__declare_static_bit_vector(type_cast_3404,9);\
bit_vector_clear(&type_cast_3404);\
bit_vector_clear(&konst_3403);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3404), &(konst_3403));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_3404));\
}\
;
;

#define _resetRegisters_merge_stmt_3399_c_postamble_macro_ loopback_3398_flag = 0;\
merge_stmt_3399_entry_flag = 0;

#define _resetRegisters_assign_stmt_3410_c_macro_ bit_vector_cast_to_bit_vector(0, &(current_register_value), &((sdhcRegisters[bit_vector_to_uint64(0, &I)])));\
;

#define _resetRegisters_assign_stmt_3414_c_macro_ __declare_static_bit_vector(konst_3412,32);\
bit_vector_clear(&konst_3412);\
konst_3412.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3412);\
konst_3412.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &(current_softwarereset_register_value), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3412)])));\
;

#define _resetRegisters_assign_stmt_3423_c_macro_ __declare_static_bit_vector(konst_3417,9);\
bit_vector_clear(&konst_3417);\
konst_3417.val.byte_array[0] = 64;\
__declare_static_bit_vector(UGE_u9_u1_3418,1);\
__declare_static_bit_vector(konst_3420,9);\
bit_vector_clear(&konst_3420);\
konst_3420.val.byte_array[0] = 72;\
__declare_static_bit_vector(ULT_u9_u1_3421,1);\
__declare_static_bit_vector(AND_u1_u1_3422,1);\
bit_vector_clear(&konst_3417);\
konst_3417.val.byte_array[0] = 64;\
bit_vector_greater_equal(0, &(I), &(konst_3417), &(UGE_u9_u1_3418));\
bit_vector_clear(&konst_3420);\
konst_3420.val.byte_array[0] = 72;\
bit_vector_less(0, &(I), &(konst_3420), &(ULT_u9_u1_3421));\
bit_vector_and(&(UGE_u9_u1_3418), &(ULT_u9_u1_3421), &(AND_u1_u1_3422));\
bit_vector_cast_to_bit_vector(0, &(condition), &(AND_u1_u1_3422));\
;

#define _resetRegisters_assign_stmt_3432_c_macro_ __declare_static_bit_vector(konst_3426,9);\
bit_vector_clear(&konst_3426);\
konst_3426.val.byte_array[0] = 72;\
__declare_static_bit_vector(UGE_u9_u1_3427,1);\
__declare_static_bit_vector(konst_3429,9);\
bit_vector_clear(&konst_3429);\
konst_3429.val.byte_array[0] = 80;\
__declare_static_bit_vector(ULT_u9_u1_3430,1);\
__declare_static_bit_vector(AND_u1_u1_3431,1);\
bit_vector_clear(&konst_3426);\
konst_3426.val.byte_array[0] = 72;\
bit_vector_greater_equal(0, &(I), &(konst_3426), &(UGE_u9_u1_3427));\
bit_vector_clear(&konst_3429);\
konst_3429.val.byte_array[0] = 80;\
bit_vector_less(0, &(I), &(konst_3429), &(ULT_u9_u1_3430));\
bit_vector_and(&(UGE_u9_u1_3427), &(ULT_u9_u1_3430), &(AND_u1_u1_3431));\
bit_vector_cast_to_bit_vector(0, &(condition2), &(AND_u1_u1_3431));\
;

#define _resetRegisters_assign_stmt_3441_c_macro_ __declare_static_bit_vector(konst_3435,9);\
bit_vector_clear(&konst_3435);\
konst_3435.val.byte_array[0] = 96;\
__declare_static_bit_vector(UGE_u9_u1_3436,1);\
__declare_static_bit_vector(konst_3438,9);\
bit_vector_clear(&konst_3438);\
konst_3438.val.byte_array[0] = 112;\
__declare_static_bit_vector(ULT_u9_u1_3439,1);\
__declare_static_bit_vector(AND_u1_u1_3440,1);\
bit_vector_clear(&konst_3435);\
konst_3435.val.byte_array[0] = 96;\
bit_vector_greater_equal(0, &(I), &(konst_3435), &(UGE_u9_u1_3436));\
bit_vector_clear(&konst_3438);\
konst_3438.val.byte_array[0] = 112;\
bit_vector_less(0, &(I), &(konst_3438), &(ULT_u9_u1_3439));\
bit_vector_and(&(UGE_u9_u1_3436), &(ULT_u9_u1_3439), &(AND_u1_u1_3440));\
bit_vector_cast_to_bit_vector(0, &(condition3), &(AND_u1_u1_3440));\
;

#define _resetRegisters_assign_stmt_3450_c_macro_ __declare_static_bit_vector(konst_3444,9);\
bit_vector_clear(&konst_3444);\
konst_3444.val.byte_array[0] = 254;\
__declare_static_bit_vector(UGE_u9_u1_3445,1);\
__declare_static_bit_vector(konst_3447,9);\
bit_vector_clear(&konst_3447);\
konst_3447.val.byte_array[1] = 1;\
__declare_static_bit_vector(ULT_u9_u1_3448,1);\
__declare_static_bit_vector(AND_u1_u1_3449,1);\
bit_vector_clear(&konst_3444);\
konst_3444.val.byte_array[0] = 254;\
bit_vector_greater_equal(0, &(I), &(konst_3444), &(UGE_u9_u1_3445));\
bit_vector_clear(&konst_3447);\
konst_3447.val.byte_array[1] = 1;\
bit_vector_less(0, &(I), &(konst_3447), &(ULT_u9_u1_3448));\
bit_vector_and(&(UGE_u9_u1_3445), &(ULT_u9_u1_3448), &(AND_u1_u1_3449));\
bit_vector_cast_to_bit_vector(0, &(condition4), &(AND_u1_u1_3449));\
;

#define _resetRegisters_assign_stmt_3468_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3487_c_macro_ __declare_static_bit_vector(konst_3485,8);\
bit_vector_clear(&konst_3485);\
konst_3485.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_3486,8);\
bit_vector_clear(&konst_3485);\
konst_3485.val.byte_array[0] = 254;\
bit_vector_and(&(current_register_value), &(konst_3485), &(AND_u8_u8_3486));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3486));\
;

#define _resetRegisters_assign_stmt_3505_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3516_c_macro_ __declare_static_bit_vector(konst_3514,8);\
bit_vector_clear(&konst_3514);\
konst_3514.val.byte_array[0] = 9;\
__declare_static_bit_vector(AND_u8_u8_3515,8);\
bit_vector_clear(&konst_3514);\
konst_3514.val.byte_array[0] = 9;\
bit_vector_and(&(current_register_value), &(konst_3514), &(AND_u8_u8_3515));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3515));\
;

#define _resetRegisters_assign_stmt_3525_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3536_c_macro_ __declare_static_bit_vector(konst_3534,8);\
bit_vector_clear(&konst_3534);\
konst_3534.val.byte_array[0] = 12;\
__declare_static_bit_vector(AND_u8_u8_3535,8);\
bit_vector_clear(&konst_3534);\
konst_3534.val.byte_array[0] = 12;\
bit_vector_and(&(current_register_value), &(konst_3534), &(AND_u8_u8_3535));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3535));\
;

#define _resetRegisters_assign_stmt_3547_c_macro_ __declare_static_bit_vector(konst_3545,8);\
bit_vector_clear(&konst_3545);\
konst_3545.val.byte_array[0] = 193;\
__declare_static_bit_vector(AND_u8_u8_3546,8);\
bit_vector_clear(&konst_3545);\
konst_3545.val.byte_array[0] = 193;\
bit_vector_and(&(current_register_value), &(konst_3545), &(AND_u8_u8_3546));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3546));\
;

#define _resetRegisters_assign_stmt_3557_c_macro_ __declare_static_bit_vector(konst_3555,9);\
bit_vector_clear(&konst_3555);\
konst_3555.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u9_u9_3556,9);\
bit_vector_clear(&konst_3555);\
konst_3555.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_3555), &(ADD_u9_u9_3556));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u9_u9_3556));\
;

#define _resetRegisters_assign_stmt_3573_c_macro_ __declare_static_bit_vector(konst_3571,8);\
bit_vector_clear(&konst_3571);\
konst_3571.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_3572,8);\
bit_vector_clear(&konst_3571);\
konst_3571.val.byte_array[0] = 253;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3571), &(AND_u8_u8_3572));\
__declare_static_bit_vector(konst_3568,32);\
bit_vector_clear(&konst_3568);\
konst_3568.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3568);\
konst_3568.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3568)])), &(AND_u8_u8_3572));\
;

#define _resetRegisters_assign_stmt_3585_c_macro_ __declare_static_bit_vector(konst_3583,8);\
bit_vector_clear(&konst_3583);\
konst_3583.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3584,8);\
bit_vector_clear(&konst_3583);\
konst_3583.val.byte_array[0] = 251;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3583), &(AND_u8_u8_3584));\
__declare_static_bit_vector(konst_3580,32);\
bit_vector_clear(&konst_3580);\
konst_3580.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3580);\
konst_3580.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3580)])), &(AND_u8_u8_3584));\
;
;

#define _resetRegisters_branch_block_stmt_3398_c_export_apply_macro_ ;

#define _resetRegisters_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_inner_inarg_prep_macro__ 
#define _sdhc_daemon_assign_stmt_3914_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3917_c_macro_ __declare_static_bit_vector(konst_3916,8);\
bit_vector_clear(&konst_3916);\
konst_3916.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3916);\
konst_3916.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_3916));\
;

#define _sdhc_daemon_assign_stmt_3920_c_macro_ __declare_static_bit_vector(konst_3919,8);\
bit_vector_clear(&konst_3919);\
konst_3919.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3919);\
konst_3919.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_3919));\
;

#define _sdhc_daemon_assign_stmt_3923_c_macro_ __declare_static_bit_vector(konst_3922,8);\
bit_vector_clear(&konst_3922);\
konst_3922.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3922);\
konst_3922.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_3922));\
;

#define _sdhc_daemon_assign_stmt_3926_c_macro_ __declare_static_bit_vector(konst_3925,8);\
bit_vector_clear(&konst_3925);\
konst_3925.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3925);\
konst_3925.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_3925));\
;

#define _sdhc_daemon_assign_stmt_3930_c_macro_ __declare_static_bit_vector(konst_3928,10);\
bit_vector_clear(&konst_3928);\
__declare_static_bit_vector(type_cast_3929,10);\
bit_vector_clear(&type_cast_3929);\
bit_vector_clear(&konst_3928);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3929), &(konst_3928));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_3929));\
;

#define _sdhc_daemon_assign_stmt_3934_c_macro_ __declare_static_bit_vector(konst_3932,10);\
bit_vector_clear(&konst_3932);\
__declare_static_bit_vector(type_cast_3933,10);\
bit_vector_clear(&type_cast_3933);\
bit_vector_clear(&konst_3932);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3933), &(konst_3932));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_3933));\
;

#define _sdhc_daemon_assign_stmt_3937_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3940_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3943_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3946_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(ZERO_8));\
;

#define _sdhc_daemon_call_stmt_3948_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_branch_block_stmt_3949_c_export_decl_macro_ __declare_static_bit_vector(request,64);\
__declare_static_bit_vector(rwbar,1);\
__declare_static_bit_vector(bytemask,4);\
__declare_static_bit_vector(unused,3);\
__declare_static_bit_vector(addressunused,16);\
__declare_static_bit_vector(address,8);\
__declare_static_bit_vector(data3,8);\
__declare_static_bit_vector(data2,8);\
__declare_static_bit_vector(data1,8);\
__declare_static_bit_vector(data0,8);\
__declare_static_bit_vector(b3,1);\
__declare_static_bit_vector(b2,1);\
__declare_static_bit_vector(b1,1);\
__declare_static_bit_vector(b0,1);\
__declare_static_bit_vector(commandInhibit_CMD,1);\
__declare_static_bit_vector(addresscheck,1);\
__declare_static_bit_vector(presentState,8);\
__declare_static_bit_vector(normalInterruptStatusVar1,8);\
__declare_static_bit_vector(normalInterruptStatusVar2,8);\
__declare_static_bit_vector(errorInterruptStatusVar1,8);\
__declare_static_bit_vector(errorInterruptStatusVar2,8);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1,8);\
__declare_static_bit_vector(dataTransferComplete,8);\
__declare_static_bit_vector(bufferReadReady,8);\
bit_vector_clear(&bufferReadReady);\
bufferReadReady.val.byte_array[0] = 32;\
__declare_static_bit_vector(bufferWriteReady,8);\
bit_vector_clear(&bufferWriteReady);\
bufferWriteReady.val.byte_array[0] = 16;\
__declare_static_bit_vector(bufferDataPortCheck,1);\
__declare_static_bit_vector(singleMultipleBlock,1);\
__declare_static_bit_vector(blockCountEnable,1);\
__declare_static_bit_vector(blockCount,16);\
__declare_static_bit_vector(blockCountTrue,1);\
__declare_static_bit_vector(lastBlock,1);\
__declare_static_bit_vector(blockCountNext,16);\
__declare_static_bit_vector(transferComplete,8);\
__declare_static_bit_vector(readBufferDataPortCheck,1);\
__declare_static_bit_vector(singleMultipleReadBlock,1);\
__declare_static_bit_vector(readBlockCountEnable,1);\
__declare_static_bit_vector(readBlockCount,16);\
__declare_static_bit_vector(readBlockCountTrue,1);\
__declare_static_bit_vector(readLastBlock,1);\
__declare_static_bit_vector(newReadBlockCount,16);\
__declare_static_bit_vector(dataErrorInterruptStatusVar,8);\
__declare_static_bit_vector(readDataTransferComplete,8);\
__declare_static_bit_vector(readdata3,8);\
__declare_static_bit_vector(readdata2,8);\
__declare_static_bit_vector(readdata1,8);\
__declare_static_bit_vector(readdata0,8);\
__declare_static_bit_vector(errorInterruptBit,8);\
__declare_static_bit_vector(checkInterruptEnable,1);\
__declare_static_bit_vector(interrupt,8);\
__declare_static_bit_vector(interruptLine,8);\
__declare_static_bit_vector(errorInterruptLine,8);\


#define _sdhc_daemon_merge_stmt_3950_c_preamble_macro_ uint8_t merge_stmt_3950_entry_flag;\
merge_stmt_3950_entry_flag = 1;\
uint8_t loopback_3949_flag = 0;\
goto merge_stmt_3950_run;\
loopback_3949: loopback_3949_flag = 1;\
goto merge_stmt_3950_run;\
merge_stmt_3950_run: ;\
;

#define _sdhc_daemon_merge_stmt_3950_c_postamble_macro_ loopback_3949_flag = 0;\
merge_stmt_3950_entry_flag = 0;

#define _sdhc_daemon_assign_stmt_3953_c_macro_ __declare_static_bit_vector(RPIPE_peripheral_bridge_to_sdhc_request_3952,64);\
read_bit_vector_from_pipe("peripheral_bridge_to_sdhc_request",&(RPIPE_peripheral_bridge_to_sdhc_request_3952));\
bit_vector_cast_to_bit_vector(0, &(request), &(RPIPE_peripheral_bridge_to_sdhc_request_3952));\
;

#define _sdhc_daemon_assign_stmt_3957_c_macro_ __declare_static_bit_vector(slice_3956,1);\
bit_vector_slice(&(request), &(slice_3956), 63);\
bit_vector_cast_to_bit_vector(0, &(rwbar), &(slice_3956));\
;

#define _sdhc_daemon_assign_stmt_3961_c_macro_ __declare_static_bit_vector(slice_3960,4);\
bit_vector_slice(&(request), &(slice_3960), 59);\
bit_vector_cast_to_bit_vector(0, &(bytemask), &(slice_3960));\
;

#define _sdhc_daemon_assign_stmt_3965_c_macro_ __declare_static_bit_vector(slice_3964,3);\
bit_vector_slice(&(request), &(slice_3964), 56);\
bit_vector_cast_to_bit_vector(0, &(unused), &(slice_3964));\
;

#define _sdhc_daemon_assign_stmt_3969_c_macro_ __declare_static_bit_vector(slice_3968,16);\
bit_vector_slice(&(request), &(slice_3968), 40);\
bit_vector_cast_to_bit_vector(0, &(addressunused), &(slice_3968));\
;

#define _sdhc_daemon_assign_stmt_3973_c_macro_ __declare_static_bit_vector(slice_3972,8);\
bit_vector_slice(&(request), &(slice_3972), 32);\
bit_vector_cast_to_bit_vector(0, &(address), &(slice_3972));\
;

#define _sdhc_daemon_assign_stmt_3977_c_macro_ __declare_static_bit_vector(slice_3976,8);\
bit_vector_slice(&(request), &(slice_3976), 24);\
bit_vector_cast_to_bit_vector(0, &(data3), &(slice_3976));\
;

#define _sdhc_daemon_assign_stmt_3981_c_macro_ __declare_static_bit_vector(slice_3980,8);\
bit_vector_slice(&(request), &(slice_3980), 16);\
bit_vector_cast_to_bit_vector(0, &(data2), &(slice_3980));\
;

#define _sdhc_daemon_assign_stmt_3985_c_macro_ __declare_static_bit_vector(slice_3984,8);\
bit_vector_slice(&(request), &(slice_3984), 8);\
bit_vector_cast_to_bit_vector(0, &(data1), &(slice_3984));\
;

#define _sdhc_daemon_assign_stmt_3989_c_macro_ __declare_static_bit_vector(slice_3988,8);\
bit_vector_slice(&(request), &(slice_3988), 0);\
bit_vector_cast_to_bit_vector(0, &(data0), &(slice_3988));\
;

#define _sdhc_daemon_assign_stmt_3993_c_macro_ __declare_static_bit_vector(slice_3992,1);\
bit_vector_slice(&(bytemask), &(slice_3992), 3);\
bit_vector_cast_to_bit_vector(0, &(b3), &(slice_3992));\
;

#define _sdhc_daemon_assign_stmt_3997_c_macro_ __declare_static_bit_vector(slice_3996,1);\
bit_vector_slice(&(bytemask), &(slice_3996), 2);\
bit_vector_cast_to_bit_vector(0, &(b2), &(slice_3996));\
;

#define _sdhc_daemon_assign_stmt_4001_c_macro_ __declare_static_bit_vector(slice_4000,1);\
bit_vector_slice(&(bytemask), &(slice_4000), 1);\
bit_vector_cast_to_bit_vector(0, &(b1), &(slice_4000));\
;

#define _sdhc_daemon_assign_stmt_4005_c_macro_ __declare_static_bit_vector(slice_4004,1);\
bit_vector_slice(&(bytemask), &(slice_4004), 0);\
bit_vector_cast_to_bit_vector(0, &(b0), &(slice_4004));\
;

#define _sdhc_daemon_call_stmt_4013_c_macro_ if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if (bit_vector_to_uint64(0, &b3)) {\
_sdhc_register_write_( &(address),  &(data3));\
}\
;

#define _sdhc_daemon_call_stmt_4019_c_macro_ if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
__declare_static_bit_vector(konst_4016,8);\
bit_vector_clear(&konst_4016);\
konst_4016.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_4017,8);\
if (bit_vector_to_uint64(0, &b2)) {\
bit_vector_clear(&konst_4016);\
konst_4016.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_4016), &(ADD_u8_u8_4017));\
_sdhc_register_write_( &(ADD_u8_u8_4017),  &(data2));\
}\
;

#define _sdhc_daemon_call_stmt_4025_c_macro_ if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
__declare_static_bit_vector(konst_4022,8);\
bit_vector_clear(&konst_4022);\
konst_4022.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_4023,8);\
if (bit_vector_to_uint64(0, &b1)) {\
bit_vector_clear(&konst_4022);\
konst_4022.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_4022), &(ADD_u8_u8_4023));\
_sdhc_register_write_( &(ADD_u8_u8_4023),  &(data1));\
}\
;

#define _sdhc_daemon_call_stmt_4031_c_macro_ if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
__declare_static_bit_vector(konst_4028,8);\
bit_vector_clear(&konst_4028);\
konst_4028.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4029,8);\
if (bit_vector_to_uint64(0, &b0)) {\
bit_vector_clear(&konst_4028);\
konst_4028.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4028), &(ADD_u8_u8_4029));\
_sdhc_register_write_( &(ADD_u8_u8_4029),  &(data0));\
}\
;

#define _sdhc_daemon_assign_stmt_4034_c_macro_ write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(ZERO_32));\
;

#define _sdhc_daemon_call_stmt_4047_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_call_stmt_4055_c_macro_ _resetRegisters_( &(ONE_2));\
;

#define _sdhc_daemon_call_stmt_4064_c_macro_ __declare_static_bit_vector(konst_4062,2);\
bit_vector_clear(&konst_4062);\
konst_4062.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_4063,2);\
bit_vector_clear(&type_cast_4063);\
type_cast_4063.val.byte_array[0] = 2;\
bit_vector_clear(&konst_4062);\
konst_4062.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_4063), &(konst_4062));\
_resetRegisters_( &(type_cast_4063));\
;

#define _sdhc_daemon_assign_stmt_4074_c_macro_ __declare_static_bit_vector(konst_4068,32);\
bit_vector_clear(&konst_4068);\
konst_4068.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_4070,8);\
bit_vector_clear(&konst_4070);\
konst_4070.val.byte_array[0] = 1;\
__declare_static_bit_vector(AND_u8_u8_4071,8);\
__declare_static_bit_vector(konst_4072,8);\
bit_vector_clear(&konst_4072);\
__declare_static_bit_vector(EQ_u8_u1_4073,1);\
bit_vector_clear(&konst_4068);\
konst_4068.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4070);\
konst_4070.val.byte_array[0] = 1;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4068)])), &(konst_4070), &(AND_u8_u8_4071));\
bit_vector_clear(&konst_4072);\
bit_vector_equal(0, &(AND_u8_u8_4071), &(konst_4072), &(EQ_u8_u1_4073));\
bit_vector_cast_to_bit_vector(0, &(commandInhibit_CMD), &(EQ_u8_u1_4073));\
;

#define _sdhc_daemon_assign_stmt_4083_c_macro_ __declare_static_bit_vector(konst_4077,8);\
bit_vector_clear(&konst_4077);\
konst_4077.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4078,8);\
__declare_static_bit_vector(konst_4079,8);\
bit_vector_clear(&konst_4079);\
konst_4079.val.byte_array[0] = 15;\
__declare_static_bit_vector(EQ_u8_u1_4080,1);\
__declare_static_bit_vector(AND_u1_u1_4082,1);\
bit_vector_clear(&konst_4077);\
konst_4077.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4077), &(ADD_u8_u8_4078));\
bit_vector_clear(&konst_4079);\
konst_4079.val.byte_array[0] = 15;\
bit_vector_equal(0, &(ADD_u8_u8_4078), &(konst_4079), &(EQ_u8_u1_4080));\
bit_vector_and(&(EQ_u8_u1_4080), &(b0), &(AND_u1_u1_4082));\
bit_vector_cast_to_bit_vector(0, &(addresscheck), &(AND_u1_u1_4082));\
;

#define _sdhc_daemon_assign_stmt_4091_c_macro_ __declare_static_bit_vector(konst_4085,32);\
bit_vector_clear(&konst_4085);\
konst_4085.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_4087,8);\
bit_vector_clear(&konst_4087);\
konst_4087.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_4088,8);\
__declare_static_bit_vector(konst_4089,8);\
bit_vector_clear(&konst_4089);\
konst_4089.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_4090,8);\
bit_vector_clear(&konst_4085);\
konst_4085.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4087);\
konst_4087.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4085)])), &(konst_4087), &(LSHR_u8_u8_4088));\
bit_vector_clear(&konst_4089);\
konst_4089.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_4088), &(konst_4089), &(SHL_u8_u8_4090));\
bit_vector_cast_to_bit_vector(0, &(presentState), &(SHL_u8_u8_4090));\
;

#define _sdhc_daemon_assign_stmt_4101_c_macro_ __declare_static_bit_vector(konst_4099,8);\
bit_vector_clear(&konst_4099);\
konst_4099.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_4100,8);\
bit_vector_clear(&konst_4099);\
konst_4099.val.byte_array[0] = 1;\
bit_vector_or(&(presentState), &(konst_4099), &(OR_u8_u8_4100));\
__declare_static_bit_vector(konst_4096,32);\
bit_vector_clear(&konst_4096);\
konst_4096.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4096);\
konst_4096.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4096)])), &(OR_u8_u8_4100));\
;

#define _sdhc_daemon_assign_stmt_4104_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_4107_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_call_stmt_4114_c_macro_ _command_generator_(&(normalInterruptStatusVar1), &(normalInterruptStatusVar2), &(errorInterruptStatusVar1), &(errorInterruptStatusVar2), &(dataErrorInterruptStatusVar1), &(dataTransferComplete));\
;

#define _sdhc_daemon_assign_stmt_4117_c_macro_ __declare_static_bit_vector(konst_4116,8);\
bit_vector_clear(&konst_4116);\
konst_4116.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4116);\
konst_4116.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_4116));\
;

#define _sdhc_daemon_assign_stmt_4120_c_macro_ __declare_static_bit_vector(konst_4119,8);\
bit_vector_clear(&konst_4119);\
konst_4119.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4119);\
konst_4119.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_4119));\
;

#define _sdhc_daemon_assign_stmt_4123_c_macro_ __declare_static_bit_vector(konst_4122,8);\
bit_vector_clear(&konst_4122);\
konst_4122.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4122);\
konst_4122.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_4122));\
;

#define _sdhc_daemon_assign_stmt_4126_c_macro_ __declare_static_bit_vector(konst_4125,8);\
bit_vector_clear(&konst_4125);\
konst_4125.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4125);\
konst_4125.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_4125));\
;

#define _sdhc_daemon_assign_stmt_4138_c_macro_ __declare_static_bit_vector(konst_4134,32);\
bit_vector_clear(&konst_4134);\
konst_4134.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4136,8);\
bit_vector_clear(&konst_4136);\
konst_4136.val.byte_array[0] = 8;\
__declare_static_bit_vector(OR_u8_u8_4137,8);\
bit_vector_clear(&konst_4134);\
konst_4134.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4136);\
konst_4136.val.byte_array[0] = 8;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4134)])), &(konst_4136), &(OR_u8_u8_4137));\
__declare_static_bit_vector(konst_4132,32);\
bit_vector_clear(&konst_4132);\
konst_4132.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4132);\
konst_4132.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4132)])), &(OR_u8_u8_4137));\
;

#define _sdhc_daemon_assign_stmt_4143_c_macro_ __declare_static_bit_vector(konst_4141,8);\
bit_vector_clear(&konst_4141);\
konst_4141.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_4142,8);\
bit_vector_clear(&OR_u8_u8_4142);\
OR_u8_u8_4142.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4141);\
konst_4141.val.byte_array[0] = 32;\
bit_vector_or(&(ZERO_8), &(konst_4141), &(OR_u8_u8_4142));\
bit_vector_cast_to_bit_vector(0, &(bufferReadReady), &(OR_u8_u8_4142));\
;

#define _sdhc_daemon_assign_stmt_4148_c_macro_ __declare_static_bit_vector(konst_4146,8);\
bit_vector_clear(&konst_4146);\
konst_4146.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_4147,8);\
bit_vector_clear(&konst_4146);\
konst_4146.val.byte_array[0] = 32;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4146), &(OR_u8_u8_4147));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4147));\
;

#define _sdhc_daemon_assign_stmt_4160_c_macro_ __declare_static_bit_vector(konst_4156,32);\
bit_vector_clear(&konst_4156);\
konst_4156.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4158,8);\
bit_vector_clear(&konst_4158);\
konst_4158.val.byte_array[0] = 4;\
__declare_static_bit_vector(OR_u8_u8_4159,8);\
bit_vector_clear(&konst_4156);\
konst_4156.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4158);\
konst_4158.val.byte_array[0] = 4;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4156)])), &(konst_4158), &(OR_u8_u8_4159));\
__declare_static_bit_vector(konst_4154,32);\
bit_vector_clear(&konst_4154);\
konst_4154.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4154);\
konst_4154.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4154)])), &(OR_u8_u8_4159));\
;

#define _sdhc_daemon_assign_stmt_4165_c_macro_ __declare_static_bit_vector(konst_4163,8);\
bit_vector_clear(&konst_4163);\
konst_4163.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_4164,8);\
bit_vector_clear(&OR_u8_u8_4164);\
OR_u8_u8_4164.val.byte_array[0] = 16;\
bit_vector_clear(&konst_4163);\
konst_4163.val.byte_array[0] = 16;\
bit_vector_or(&(ZERO_8), &(konst_4163), &(OR_u8_u8_4164));\
bit_vector_cast_to_bit_vector(0, &(bufferWriteReady), &(OR_u8_u8_4164));\
;

#define _sdhc_daemon_assign_stmt_4170_c_macro_ __declare_static_bit_vector(konst_4168,8);\
bit_vector_clear(&konst_4168);\
konst_4168.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_4169,8);\
bit_vector_clear(&konst_4168);\
konst_4168.val.byte_array[0] = 16;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4168), &(OR_u8_u8_4169));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4169));\
;

#define _sdhc_daemon_assign_stmt_4176_c_macro_ __declare_static_bit_vector(konst_4174,8);\
bit_vector_clear(&konst_4174);\
konst_4174.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_4175,1);\
bit_vector_clear(&konst_4174);\
konst_4174.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_4174), &(EQ_u8_u1_4175));\
bit_vector_cast_to_bit_vector(0, &(bufferDataPortCheck), &(EQ_u8_u1_4175));\
;

#define _sdhc_daemon_assign_stmt_4188_c_macro_ __declare_static_bit_vector(konst_4186,32);\
bit_vector_clear(&konst_4186);\
konst_4186.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4186);\
konst_4186.val.byte_array[0] = 32;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4186)])));\
;

#define _sdhc_daemon_assign_stmt_4192_c_macro_ __declare_static_bit_vector(konst_4190,32);\
bit_vector_clear(&konst_4190);\
konst_4190.val.byte_array[0] = 33;\
bit_vector_clear(&konst_4190);\
konst_4190.val.byte_array[0] = 33;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4190)])));\
;

#define _sdhc_daemon_assign_stmt_4196_c_macro_ __declare_static_bit_vector(konst_4194,32);\
bit_vector_clear(&konst_4194);\
konst_4194.val.byte_array[0] = 34;\
bit_vector_clear(&konst_4194);\
konst_4194.val.byte_array[0] = 34;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4194)])));\
;

#define _sdhc_daemon_assign_stmt_4200_c_macro_ __declare_static_bit_vector(konst_4198,32);\
bit_vector_clear(&konst_4198);\
konst_4198.val.byte_array[0] = 35;\
bit_vector_clear(&konst_4198);\
konst_4198.val.byte_array[0] = 35;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4198)])));\
;

#define _sdhc_daemon_assign_stmt_4205_c_macro_ __declare_static_bit_vector(konst_4203,10);\
bit_vector_clear(&konst_4203);\
konst_4203.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u10_u10_4204,10);\
bit_vector_clear(&konst_4203);\
konst_4203.val.byte_array[0] = 4;\
bit_vector_plus( &(txBufferPointer), &(konst_4203), &(ADD_u10_u10_4204));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(ADD_u10_u10_4204));\
;

#define _sdhc_daemon_assign_stmt_4216_c_macro_ __declare_static_bit_vector(konst_4212,32);\
bit_vector_clear(&konst_4212);\
konst_4212.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4214,8);\
bit_vector_clear(&konst_4214);\
konst_4214.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_4215,8);\
bit_vector_clear(&konst_4212);\
konst_4212.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4214);\
konst_4214.val.byte_array[0] = 251;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4212)])), &(konst_4214), &(AND_u8_u8_4215));\
__declare_static_bit_vector(konst_4210,32);\
bit_vector_clear(&konst_4210);\
konst_4210.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4210);\
konst_4210.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4210)])), &(AND_u8_u8_4215));\
;

#define _sdhc_daemon_assign_stmt_4223_c_macro_ __declare_static_bit_vector(konst_4218,32);\
bit_vector_clear(&konst_4218);\
konst_4218.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4220,8);\
bit_vector_clear(&konst_4220);\
konst_4220.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_4221,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4222,1);\
bit_vector_clear(&konst_4218);\
konst_4218.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4220);\
konst_4220.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4218)])), &(konst_4220), &(AND_u8_u8_4221));\
bit_vector_reduce_or( &(AND_u8_u8_4221), &(BITREDUCEOR_u8_u1_4222));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleBlock), &(BITREDUCEOR_u8_u1_4222));\
;

#define _sdhc_daemon_assign_stmt_4232_c_macro_ __declare_static_bit_vector(konst_4225,32);\
bit_vector_clear(&konst_4225);\
konst_4225.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4227,8);\
bit_vector_clear(&konst_4227);\
konst_4227.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_4228,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4229,1);\
__declare_static_bit_vector(AND_u1_u1_4231,1);\
bit_vector_clear(&konst_4225);\
konst_4225.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4227);\
konst_4227.val.byte_array[0] = 2;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4225)])), &(konst_4227), &(AND_u8_u8_4228));\
bit_vector_reduce_or( &(AND_u8_u8_4228), &(BITREDUCEOR_u8_u1_4229));\
bit_vector_and(&(BITREDUCEOR_u8_u1_4229), &(singleMultipleBlock), &(AND_u1_u1_4231));\
bit_vector_cast_to_bit_vector(0, &(blockCountEnable), &(AND_u1_u1_4231));\
;

#define _sdhc_daemon_assign_stmt_4239_c_macro_ __declare_static_bit_vector(konst_4234,32);\
bit_vector_clear(&konst_4234);\
konst_4234.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_4236,32);\
bit_vector_clear(&konst_4236);\
konst_4236.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_4238,16);\
bit_vector_clear(&konst_4234);\
konst_4234.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4236);\
konst_4236.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4234)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4236)])), &(CONCAT_u8_u16_4238));\
bit_vector_cast_to_bit_vector(0, &(blockCount), &(CONCAT_u8_u16_4238));\
;

#define _sdhc_daemon_assign_stmt_4244_c_macro_ __declare_static_bit_vector(konst_4242,16);\
bit_vector_clear(&konst_4242);\
konst_4242.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_4243,1);\
bit_vector_clear(&konst_4242);\
konst_4242.val.byte_array[0] = 1;\
bit_vector_equal(0, &(blockCount), &(konst_4242), &(EQ_u16_u1_4243));\
bit_vector_cast_to_bit_vector(0, &(blockCountTrue), &(EQ_u16_u1_4243));\
;

#define _sdhc_daemon_assign_stmt_4252_c_macro_ __declare_static_bit_vector(NOT_u1_u1_4247,1);\
__declare_static_bit_vector(AND_u1_u1_4250,1);\
__declare_static_bit_vector(OR_u1_u1_4251,1);\
bit_vector_not( &(singleMultipleBlock), &(NOT_u1_u1_4247));\
bit_vector_and(&(blockCountEnable), &(blockCountTrue), &(AND_u1_u1_4250));\
bit_vector_or(&(NOT_u1_u1_4247), &(AND_u1_u1_4250), &(OR_u1_u1_4251));\
bit_vector_cast_to_bit_vector(0, &(lastBlock), &(OR_u1_u1_4251));\
;

#define _sdhc_daemon_call_stmt_4258_c_macro_ _dataTx_( &(lastBlock),  &(blockCountEnable),  &(blockCount), &(blockCountNext), &(transferComplete));\
;

#define _sdhc_daemon_assign_stmt_4263_c_macro_ __declare_static_bit_vector(slice_4262,8);\
bit_vector_slice(&(blockCountNext), &(slice_4262), 8);\
__declare_static_bit_vector(konst_4259,32);\
bit_vector_clear(&konst_4259);\
konst_4259.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4259);\
konst_4259.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4259)])), &(slice_4262));\
;

#define _sdhc_daemon_assign_stmt_4268_c_macro_ __declare_static_bit_vector(slice_4267,8);\
bit_vector_slice(&(blockCountNext), &(slice_4267), 0);\
__declare_static_bit_vector(konst_4264,32);\
bit_vector_clear(&konst_4264);\
konst_4264.val.byte_array[0] = 6;\
bit_vector_clear(&konst_4264);\
konst_4264.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4264)])), &(slice_4267));\
;

#define _sdhc_daemon_assign_stmt_4273_c_macro_ __declare_static_bit_vector(konst_4271,8);\
bit_vector_clear(&konst_4271);\
konst_4271.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_4272,8);\
bit_vector_clear(&konst_4271);\
konst_4271.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4271), &(OR_u8_u8_4272));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4272));\
;

#define _sdhc_daemon_assign_stmt_4278_c_macro_ __declare_static_bit_vector(konst_4276,8);\
bit_vector_clear(&konst_4276);\
konst_4276.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_4277,8);\
bit_vector_clear(&konst_4276);\
konst_4276.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_4276), &(OR_u8_u8_4277));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_4277));\
;

#define _sdhc_daemon_assign_stmt_4286_c_macro_ __declare_static_bit_vector(konst_4284,8);\
bit_vector_clear(&konst_4284);\
konst_4284.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_4285,1);\
bit_vector_clear(&konst_4284);\
konst_4284.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_4284), &(EQ_u8_u1_4285));\
bit_vector_cast_to_bit_vector(0, &(readBufferDataPortCheck), &(EQ_u8_u1_4285));\
;

#define _sdhc_daemon_assign_stmt_4298_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4297,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4297));\
__declare_static_bit_vector(konst_4295,32);\
bit_vector_clear(&konst_4295);\
konst_4295.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4295);\
konst_4295.val.byte_array[0] = 32;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4295)])), &(RPIPE_dataBufferRx_4297));\
;

#define _sdhc_daemon_assign_stmt_4302_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4301,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4301));\
__declare_static_bit_vector(konst_4299,32);\
bit_vector_clear(&konst_4299);\
konst_4299.val.byte_array[0] = 33;\
bit_vector_clear(&konst_4299);\
konst_4299.val.byte_array[0] = 33;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4299)])), &(RPIPE_dataBufferRx_4301));\
;

#define _sdhc_daemon_assign_stmt_4306_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4305,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4305));\
__declare_static_bit_vector(konst_4303,32);\
bit_vector_clear(&konst_4303);\
konst_4303.val.byte_array[0] = 34;\
bit_vector_clear(&konst_4303);\
konst_4303.val.byte_array[0] = 34;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4303)])), &(RPIPE_dataBufferRx_4305));\
;

#define _sdhc_daemon_assign_stmt_4310_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4309,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4309));\
__declare_static_bit_vector(konst_4307,32);\
bit_vector_clear(&konst_4307);\
konst_4307.val.byte_array[0] = 35;\
bit_vector_clear(&konst_4307);\
konst_4307.val.byte_array[0] = 35;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4307)])), &(RPIPE_dataBufferRx_4309));\
;

#define _sdhc_daemon_assign_stmt_4315_c_macro_ __declare_static_bit_vector(konst_4313,10);\
bit_vector_clear(&konst_4313);\
konst_4313.val.byte_array[0] = 4;\
__declare_static_bit_vector(SUB_u10_u10_4314,10);\
bit_vector_clear(&konst_4313);\
konst_4313.val.byte_array[0] = 4;\
bit_vector_minus( &(rxBufferPointer), &(konst_4313), &(SUB_u10_u10_4314));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(SUB_u10_u10_4314));\
;

#define _sdhc_daemon_assign_stmt_4322_c_macro_ __declare_static_bit_vector(konst_4317,32);\
bit_vector_clear(&konst_4317);\
konst_4317.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4319,8);\
bit_vector_clear(&konst_4319);\
konst_4319.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_4320,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4321,1);\
bit_vector_clear(&konst_4317);\
konst_4317.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4319);\
konst_4319.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4317)])), &(konst_4319), &(AND_u8_u8_4320));\
bit_vector_reduce_or( &(AND_u8_u8_4320), &(BITREDUCEOR_u8_u1_4321));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_4321));\
;

#define _sdhc_daemon_assign_stmt_4333_c_macro_ __declare_static_bit_vector(konst_4329,32);\
bit_vector_clear(&konst_4329);\
konst_4329.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4331,8);\
bit_vector_clear(&konst_4331);\
konst_4331.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_4332,8);\
bit_vector_clear(&konst_4329);\
konst_4329.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4331);\
konst_4331.val.byte_array[0] = 247;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4329)])), &(konst_4331), &(AND_u8_u8_4332));\
__declare_static_bit_vector(konst_4327,32);\
bit_vector_clear(&konst_4327);\
konst_4327.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4327);\
konst_4327.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4327)])), &(AND_u8_u8_4332));\
;

#define _sdhc_daemon_assign_stmt_4346_c_macro_ __declare_static_bit_vector(konst_4339,32);\
bit_vector_clear(&konst_4339);\
konst_4339.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4341,8);\
bit_vector_clear(&konst_4341);\
konst_4341.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_4342,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4343,1);\
__declare_static_bit_vector(AND_u1_u1_4345,1);\
bit_vector_clear(&konst_4339);\
konst_4339.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4341);\
konst_4341.val.byte_array[0] = 2;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4339)])), &(konst_4341), &(AND_u8_u8_4342));\
bit_vector_reduce_or( &(AND_u8_u8_4342), &(BITREDUCEOR_u8_u1_4343));\
bit_vector_and(&(BITREDUCEOR_u8_u1_4343), &(singleMultipleBlock), &(AND_u1_u1_4345));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountEnable), &(AND_u1_u1_4345));\
;

#define _sdhc_daemon_assign_stmt_4353_c_macro_ __declare_static_bit_vector(konst_4348,32);\
bit_vector_clear(&konst_4348);\
konst_4348.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_4350,32);\
bit_vector_clear(&konst_4350);\
konst_4350.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_4352,16);\
bit_vector_clear(&konst_4348);\
konst_4348.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4350);\
konst_4350.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4348)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4350)])), &(CONCAT_u8_u16_4352));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_4352));\
;

#define _sdhc_daemon_assign_stmt_4358_c_macro_ __declare_static_bit_vector(konst_4356,16);\
bit_vector_clear(&konst_4356);\
konst_4356.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_4357,1);\
bit_vector_clear(&konst_4356);\
konst_4356.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBlockCount), &(konst_4356), &(EQ_u16_u1_4357));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountTrue), &(EQ_u16_u1_4357));\
;

#define _sdhc_daemon_assign_stmt_4363_c_macro_ __declare_static_bit_vector(AND_u1_u1_4362,1);\
bit_vector_and(&(readBlockCountEnable), &(readBlockCountTrue), &(AND_u1_u1_4362));\
bit_vector_cast_to_bit_vector(0, &(readLastBlock), &(AND_u1_u1_4362));\
;

#define _sdhc_daemon_assign_stmt_4372_c_macro_ __declare_static_bit_vector(konst_4370,16);\
bit_vector_clear(&konst_4370);\
konst_4370.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_4371,16);\
bit_vector_clear(&konst_4370);\
konst_4370.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_4370), &(SUB_u16_u16_4371));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_4371));\
;

#define _sdhc_daemon_call_stmt_4375_c_macro_ _dataRx_( &(readLastBlock), &(dataErrorInterruptStatusVar));\
;

#define _sdhc_daemon_assign_stmt_4378_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_4381_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ONE_1));\
;

#define _sdhc_daemon_assign_stmt_4386_c_macro_ __declare_static_bit_vector(slice_4385,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_4385), 8);\
__declare_static_bit_vector(konst_4382,32);\
bit_vector_clear(&konst_4382);\
konst_4382.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4382);\
konst_4382.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4382)])), &(slice_4385));\
;

#define _sdhc_daemon_assign_stmt_4391_c_macro_ __declare_static_bit_vector(slice_4390,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_4390), 0);\
__declare_static_bit_vector(konst_4387,32);\
bit_vector_clear(&konst_4387);\
konst_4387.val.byte_array[0] = 6;\
bit_vector_clear(&konst_4387);\
konst_4387.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4387)])), &(slice_4390));\
;

#define _sdhc_daemon_assign_stmt_4398_c_macro_ __declare_static_bit_vector(konst_4394,8);\
bit_vector_clear(&konst_4394);\
konst_4394.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_4395,8);\
bit_vector_clear(&type_cast_4395);\
type_cast_4395.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_4397,8);\
if (has_undefined_bit(&readLastBlock)) {fprintf(stderr, "Error: variable readLastBlock has undefined value (%s) at test point.\n", to_string(&readLastBlock));assert(0);} \
if(bit_vector_to_uint64(0, &readLastBlock)){bit_vector_clear(&konst_4394);\
konst_4394.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_4395), &(konst_4394));\
bit_vector_cast_to_bit_vector(0, &(MUX_4397), &(type_cast_4395));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4397), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readDataTransferComplete), &(MUX_4397));\
;

#define _sdhc_daemon_assign_stmt_4403_c_macro_ __declare_static_bit_vector(konst_4401,8);\
bit_vector_clear(&konst_4401);\
konst_4401.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_4402,8);\
bit_vector_clear(&konst_4401);\
konst_4401.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4401), &(OR_u8_u8_4402));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4402));\
;

#define _sdhc_daemon_assign_stmt_4408_c_macro_ __declare_static_bit_vector(konst_4406,8);\
bit_vector_clear(&konst_4406);\
konst_4406.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_4407,8);\
bit_vector_clear(&konst_4406);\
konst_4406.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_4406), &(OR_u8_u8_4407));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_4407));\
;

#define _sdhc_daemon_assign_stmt_4421_c_macro_ __declare_static_bit_vector(konst_4416,8);\
bit_vector_clear(&konst_4416);\
__declare_static_bit_vector(ADD_u8_u8_4417,8);\
__declare_static_bit_vector(MUX_4420,8);\
if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if(bit_vector_to_uint64(0, &b3)){bit_vector_clear(&konst_4416);\
bit_vector_plus( &(address), &(konst_4416), &(ADD_u8_u8_4417));\
bit_vector_cast_to_bit_vector(0, &(MUX_4420), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4417)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4420), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata3), &(MUX_4420));\
;

#define _sdhc_daemon_assign_stmt_4430_c_macro_ __declare_static_bit_vector(konst_4425,8);\
bit_vector_clear(&konst_4425);\
konst_4425.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_4426,8);\
__declare_static_bit_vector(MUX_4429,8);\
if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
if(bit_vector_to_uint64(0, &b2)){bit_vector_clear(&konst_4425);\
konst_4425.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_4425), &(ADD_u8_u8_4426));\
bit_vector_cast_to_bit_vector(0, &(MUX_4429), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4426)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4429), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata2), &(MUX_4429));\
;

#define _sdhc_daemon_assign_stmt_4439_c_macro_ __declare_static_bit_vector(konst_4434,8);\
bit_vector_clear(&konst_4434);\
konst_4434.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_4435,8);\
__declare_static_bit_vector(MUX_4438,8);\
if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
if(bit_vector_to_uint64(0, &b1)){bit_vector_clear(&konst_4434);\
konst_4434.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_4434), &(ADD_u8_u8_4435));\
bit_vector_cast_to_bit_vector(0, &(MUX_4438), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4435)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4438), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata1), &(MUX_4438));\
;

#define _sdhc_daemon_assign_stmt_4448_c_macro_ __declare_static_bit_vector(konst_4443,8);\
bit_vector_clear(&konst_4443);\
konst_4443.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4444,8);\
__declare_static_bit_vector(MUX_4447,8);\
if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
if(bit_vector_to_uint64(0, &b0)){bit_vector_clear(&konst_4443);\
konst_4443.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4443), &(ADD_u8_u8_4444));\
bit_vector_cast_to_bit_vector(0, &(MUX_4447), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4444)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4447), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata0), &(MUX_4447));\
;

#define _sdhc_daemon_assign_stmt_4457_c_macro_ __declare_static_bit_vector(CONCAT_u8_u16_4452,16);\
__declare_static_bit_vector(CONCAT_u8_u16_4455,16);\
__declare_static_bit_vector(CONCAT_u16_u32_4456,32);\
bit_vector_concatenate( &(readdata3), &(readdata2), &(CONCAT_u8_u16_4452));\
bit_vector_concatenate( &(readdata1), &(readdata0), &(CONCAT_u8_u16_4455));\
bit_vector_concatenate( &(CONCAT_u8_u16_4452), &(CONCAT_u8_u16_4455), &(CONCAT_u16_u32_4456));\
write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(CONCAT_u16_u32_4456));\
;

#define _sdhc_daemon_assign_stmt_4478_c_macro_ __declare_static_bit_vector(konst_4462,8);\
bit_vector_clear(&konst_4462);\
__declare_static_bit_vector(MUX_4463,8);\
__declare_static_bit_vector(konst_4466,8);\
bit_vector_clear(&konst_4466);\
__declare_static_bit_vector(MUX_4467,8);\
__declare_static_bit_vector(OR_u8_u8_4468,8);\
__declare_static_bit_vector(NOT_u1_u1_4470,1);\
__declare_static_bit_vector(NOT_u1_u1_4472,1);\
__declare_static_bit_vector(AND_u1_u1_4473,1);\
__declare_static_bit_vector(konst_4475,8);\
bit_vector_clear(&konst_4475);\
__declare_static_bit_vector(MUX_4476,8);\
__declare_static_bit_vector(OR_u8_u8_4477,8);\
if (has_undefined_bit(&dataRxEnrty1)) {fprintf(stderr, "Error: variable dataRxEnrty1 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty1));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty1)){bit_vector_cast_to_bit_vector(0, &(MUX_4463), &(dataErrorInterruptStatusVar1));\
}else {bit_vector_clear(&konst_4462);\
bit_vector_cast_to_bit_vector(0, &(MUX_4463), &(konst_4462));\
}if (has_undefined_bit(&dataRxEnrty2)) {fprintf(stderr, "Error: variable dataRxEnrty2 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty2));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty2)){bit_vector_cast_to_bit_vector(0, &(MUX_4467), &(dataErrorInterruptStatusVar));\
}else {bit_vector_clear(&konst_4466);\
bit_vector_cast_to_bit_vector(0, &(MUX_4467), &(konst_4466));\
}bit_vector_or(&(MUX_4463), &(MUX_4467), &(OR_u8_u8_4468));\
bit_vector_not( &(dataRxEnrty1), &(NOT_u1_u1_4470));\
bit_vector_not( &(dataRxEnrty2), &(NOT_u1_u1_4472));\
bit_vector_and(&(NOT_u1_u1_4470), &(NOT_u1_u1_4472), &(AND_u1_u1_4473));\
if (has_undefined_bit(&AND_u1_u1_4473)) {fprintf(stderr, "Error: variable AND_u1_u1_4473 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4473));assert(0);} \
if(bit_vector_to_uint64(0, &AND_u1_u1_4473)){bit_vector_cast_to_bit_vector(0, &(MUX_4476), &(ZERO_8));\
}else {bit_vector_clear(&konst_4475);\
bit_vector_cast_to_bit_vector(0, &(MUX_4476), &(konst_4475));\
}bit_vector_or(&(OR_u8_u8_4468), &(MUX_4476), &(OR_u8_u8_4477));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(OR_u8_u8_4477));\
;

#define _sdhc_daemon_assign_stmt_4492_c_macro_ __declare_static_bit_vector(konst_4481,32);\
bit_vector_clear(&konst_4481);\
konst_4481.val.byte_array[0] = 50;\
__declare_static_bit_vector(OR_u8_u8_4485,8);\
__declare_static_bit_vector(OR_u8_u8_4486,8);\
__declare_static_bit_vector(AND_u8_u8_4488,8);\
__declare_static_bit_vector(konst_4489,32);\
bit_vector_clear(&konst_4489);\
konst_4489.val.byte_array[0] = 54;\
__declare_static_bit_vector(AND_u8_u8_4491,8);\
bit_vector_clear(&konst_4481);\
konst_4481.val.byte_array[0] = 50;\
bit_vector_or(&(dataErrorInterruptStatus), &(errorInterruptStatusVar1), &(OR_u8_u8_4485));\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4481)])), &(OR_u8_u8_4485), &(OR_u8_u8_4486));\
bit_vector_and(&(OR_u8_u8_4486), &(errorInterruptFlag1), &(AND_u8_u8_4488));\
bit_vector_clear(&konst_4489);\
konst_4489.val.byte_array[0] = 54;\
bit_vector_and(&(AND_u8_u8_4488), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4489)])), &(AND_u8_u8_4491));\
__declare_static_bit_vector(konst_4479,32);\
bit_vector_clear(&konst_4479);\
konst_4479.val.byte_array[0] = 50;\
bit_vector_clear(&konst_4479);\
konst_4479.val.byte_array[0] = 50;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4479)])), &(AND_u8_u8_4491));\
;

#define _sdhc_daemon_assign_stmt_4504_c_macro_ __declare_static_bit_vector(konst_4495,32);\
bit_vector_clear(&konst_4495);\
konst_4495.val.byte_array[0] = 51;\
__declare_static_bit_vector(OR_u8_u8_4498,8);\
__declare_static_bit_vector(AND_u8_u8_4500,8);\
__declare_static_bit_vector(konst_4501,32);\
bit_vector_clear(&konst_4501);\
konst_4501.val.byte_array[0] = 55;\
__declare_static_bit_vector(AND_u8_u8_4503,8);\
bit_vector_clear(&konst_4495);\
konst_4495.val.byte_array[0] = 51;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4495)])), &(errorInterruptStatusVar2), &(OR_u8_u8_4498));\
bit_vector_and(&(OR_u8_u8_4498), &(errorInterruptFlag2), &(AND_u8_u8_4500));\
bit_vector_clear(&konst_4501);\
konst_4501.val.byte_array[0] = 55;\
bit_vector_and(&(AND_u8_u8_4500), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4501)])), &(AND_u8_u8_4503));\
__declare_static_bit_vector(konst_4493,32);\
bit_vector_clear(&konst_4493);\
konst_4493.val.byte_array[0] = 51;\
bit_vector_clear(&konst_4493);\
konst_4493.val.byte_array[0] = 51;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4493)])), &(AND_u8_u8_4503));\
;

#define _sdhc_daemon_assign_stmt_4516_c_macro_ __declare_static_bit_vector(konst_4506,32);\
bit_vector_clear(&konst_4506);\
konst_4506.val.byte_array[0] = 50;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4508,1);\
__declare_static_bit_vector(konst_4509,32);\
bit_vector_clear(&konst_4509);\
konst_4509.val.byte_array[0] = 51;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4511,1);\
__declare_static_bit_vector(OR_u1_u1_4512,1);\
__declare_static_bit_vector(konst_4513,7);\
bit_vector_clear(&konst_4513);\
__declare_static_bit_vector(type_cast_4514,7);\
bit_vector_clear(&type_cast_4514);\
__declare_static_bit_vector(CONCAT_u1_u8_4515,8);\
bit_vector_clear(&konst_4506);\
konst_4506.val.byte_array[0] = 50;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4506)])), &(BITREDUCEOR_u8_u1_4508));\
bit_vector_clear(&konst_4509);\
konst_4509.val.byte_array[0] = 51;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4509)])), &(BITREDUCEOR_u8_u1_4511));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4508), &(BITREDUCEOR_u8_u1_4511), &(OR_u1_u1_4512));\
bit_vector_clear(&konst_4513);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4514), &(konst_4513));\
bit_vector_concatenate( &(OR_u1_u1_4512), &(type_cast_4514), &(CONCAT_u1_u8_4515));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptBit), &(CONCAT_u1_u8_4515));\
;

#define _sdhc_daemon_assign_stmt_4525_c_macro_ __declare_static_bit_vector(konst_4518,32);\
bit_vector_clear(&konst_4518);\
konst_4518.val.byte_array[0] = 52;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4520,1);\
__declare_static_bit_vector(konst_4521,32);\
bit_vector_clear(&konst_4521);\
konst_4521.val.byte_array[0] = 53;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4523,1);\
__declare_static_bit_vector(OR_u1_u1_4524,1);\
bit_vector_clear(&konst_4518);\
konst_4518.val.byte_array[0] = 52;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4518)])), &(BITREDUCEOR_u8_u1_4520));\
bit_vector_clear(&konst_4521);\
konst_4521.val.byte_array[0] = 53;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4521)])), &(BITREDUCEOR_u8_u1_4523));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4520), &(BITREDUCEOR_u8_u1_4523), &(OR_u1_u1_4524));\
bit_vector_cast_to_bit_vector(0, &(checkInterruptEnable), &(OR_u1_u1_4524));\
;

#define _sdhc_daemon_assign_stmt_4547_c_macro_ __declare_static_bit_vector(OR_u8_u8_4533,8);\
__declare_static_bit_vector(OR_u8_u8_4535,8);\
__declare_static_bit_vector(OR_u8_u8_4538,8);\
bit_vector_clear(&OR_u8_u8_4538);\
OR_u8_u8_4538.val.byte_array[0] = 48;\
__declare_static_bit_vector(OR_u8_u8_4540,8);\
__declare_static_bit_vector(OR_u8_u8_4541,8);\
__declare_static_bit_vector(konst_4542,32);\
bit_vector_clear(&konst_4542);\
konst_4542.val.byte_array[0] = 52;\
__declare_static_bit_vector(AND_u8_u8_4544,8);\
__declare_static_bit_vector(AND_u8_u8_4546,8);\
bit_vector_or(&(readDataTransferComplete), &(dataTransferComplete), &(OR_u8_u8_4533));\
bit_vector_or(&(OR_u8_u8_4533), &(transferComplete), &(OR_u8_u8_4535));\
bit_vector_or(&(bufferReadReady), &(bufferWriteReady), &(OR_u8_u8_4538));\
bit_vector_or(&(OR_u8_u8_4538), &(normalInterruptStatusVar1), &(OR_u8_u8_4540));\
bit_vector_or(&(OR_u8_u8_4535), &(OR_u8_u8_4540), &(OR_u8_u8_4541));\
bit_vector_clear(&konst_4542);\
konst_4542.val.byte_array[0] = 52;\
bit_vector_and(&(OR_u8_u8_4541), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4542)])), &(AND_u8_u8_4544));\
bit_vector_and(&(AND_u8_u8_4544), &(normalInterruptFlag1), &(AND_u8_u8_4546));\
bit_vector_cast_to_bit_vector(0, &(interrupt), &(AND_u8_u8_4546));\
;

#define _sdhc_daemon_assign_stmt_4551_c_macro_ __declare_static_bit_vector(konst_4548,32);\
bit_vector_clear(&konst_4548);\
konst_4548.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4548);\
konst_4548.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4548)])), &(interrupt));\
;

#define _sdhc_daemon_assign_stmt_4555_c_macro_ __declare_static_bit_vector(konst_4552,32);\
bit_vector_clear(&konst_4552);\
konst_4552.val.byte_array[0] = 49;\
bit_vector_clear(&konst_4552);\
konst_4552.val.byte_array[0] = 49;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4552)])), &(errorInterruptBit));\
;

#define _sdhc_daemon_assign_stmt_4561_c_macro_ __declare_static_bit_vector(konst_4557,32);\
bit_vector_clear(&konst_4557);\
konst_4557.val.byte_array[0] = 56;\
__declare_static_bit_vector(AND_u8_u8_4560,8);\
bit_vector_clear(&konst_4557);\
konst_4557.val.byte_array[0] = 56;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4557)])), &(interrupt), &(AND_u8_u8_4560));\
bit_vector_cast_to_bit_vector(0, &(interruptLine), &(AND_u8_u8_4560));\
;

#define _sdhc_daemon_assign_stmt_4574_c_macro_ __declare_static_bit_vector(konst_4563,32);\
bit_vector_clear(&konst_4563);\
konst_4563.val.byte_array[0] = 50;\
__declare_static_bit_vector(konst_4565,32);\
bit_vector_clear(&konst_4565);\
konst_4565.val.byte_array[0] = 58;\
__declare_static_bit_vector(AND_u8_u8_4567,8);\
__declare_static_bit_vector(konst_4568,32);\
bit_vector_clear(&konst_4568);\
konst_4568.val.byte_array[0] = 51;\
__declare_static_bit_vector(konst_4570,32);\
bit_vector_clear(&konst_4570);\
konst_4570.val.byte_array[0] = 59;\
__declare_static_bit_vector(AND_u8_u8_4572,8);\
__declare_static_bit_vector(OR_u8_u8_4573,8);\
bit_vector_clear(&konst_4563);\
konst_4563.val.byte_array[0] = 50;\
bit_vector_clear(&konst_4565);\
konst_4565.val.byte_array[0] = 58;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4563)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4565)])), &(AND_u8_u8_4567));\
bit_vector_clear(&konst_4568);\
konst_4568.val.byte_array[0] = 51;\
bit_vector_clear(&konst_4570);\
konst_4570.val.byte_array[0] = 59;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4568)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4570)])), &(AND_u8_u8_4572));\
bit_vector_or(&(AND_u8_u8_4567), &(AND_u8_u8_4572), &(OR_u8_u8_4573));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptLine), &(OR_u8_u8_4573));\
;

#define _sdhc_daemon_assign_stmt_4581_c_macro_ __declare_static_bit_vector(BITREDUCEOR_u8_u1_4577,1);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4579,1);\
__declare_static_bit_vector(OR_u1_u1_4580,1);\
bit_vector_reduce_or( &(interruptLine), &(BITREDUCEOR_u8_u1_4577));\
bit_vector_reduce_or( &(errorInterruptLine), &(BITREDUCEOR_u8_u1_4579));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4577), &(BITREDUCEOR_u8_u1_4579), &(OR_u1_u1_4580));\
write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(OR_u1_u1_4580));\
;

#define _sdhc_daemon_assign_stmt_4586_c_macro_ __declare_static_bit_vector(konst_4583,32);\
bit_vector_clear(&konst_4583);\
konst_4583.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4583);\
konst_4583.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4583)])), &(ZERO_8));\
;

#define _sdhc_daemon_assign_stmt_4589_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_stmt_4594_c_macro_ uint32_t _sdhc_daemon_stmt_4594_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]int>\t%s\n",_sdhc_daemon_stmt_4594_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4594_c_macro___print_counter,"dataErrorInterruptStatus");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataErrorInterruptStatus)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4594_c_macro___print_counter,"errorInterruptStatusVar1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptStatusVar1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4594_c_macro___print_counter,"errorInterruptFlag1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptFlag1)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _sdhc_daemon_branch_block_stmt_3949_c_export_apply_macro_ ;

#define _sdhc_daemon_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_outer_arg_decl_macro__ ;

#define _sdhc_daemon_outer_op_xfer_macro__ ;

#define _sdhc_register_write_inner_inarg_prep_macro__ __declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\

#define _sdhc_register_write_branch_block_stmt_3592_c_export_decl_macro_ 

#define _sdhc_register_write_assign_stmt_3601_c_macro_ __declare_static_bit_vector(konst_3599,8);\
bit_vector_clear(&konst_3599);\
konst_3599.val.byte_array[0] = 127;\
__declare_static_bit_vector(AND_u8_u8_3600,8);\
bit_vector_clear(&konst_3599);\
konst_3599.val.byte_array[0] = 127;\
bit_vector_and(&(data), &(konst_3599), &(AND_u8_u8_3600));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3600));\
;

#define _sdhc_register_write_assign_stmt_3609_c_macro_ __declare_static_bit_vector(konst_3607,8);\
bit_vector_clear(&konst_3607);\
konst_3607.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3608,8);\
bit_vector_clear(&konst_3607);\
konst_3607.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3607), &(AND_u8_u8_3608));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3608));\
;

#define _sdhc_register_write_assign_stmt_3615_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3623_c_macro_ __declare_static_bit_vector(konst_3621,8);\
bit_vector_clear(&konst_3621);\
konst_3621.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3622,8);\
bit_vector_clear(&konst_3621);\
konst_3621.val.byte_array[0] = 251;\
bit_vector_and(&(data), &(konst_3621), &(AND_u8_u8_3622));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3622));\
;

#define _sdhc_register_write_assign_stmt_3631_c_macro_ __declare_static_bit_vector(konst_3629,8);\
bit_vector_clear(&konst_3629);\
konst_3629.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3630,8);\
bit_vector_clear(&konst_3629);\
konst_3629.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3629), &(AND_u8_u8_3630));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3630));\
;

#define _sdhc_register_write_assign_stmt_3699_c_macro_ __declare_static_bit_vector(konst_3697,8);\
bit_vector_clear(&konst_3697);\
konst_3697.val.byte_array[0] = 15;\
__declare_static_bit_vector(AND_u8_u8_3698,8);\
bit_vector_clear(&konst_3697);\
konst_3697.val.byte_array[0] = 15;\
bit_vector_and(&(data), &(konst_3697), &(AND_u8_u8_3698));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3698));\
;

#define _sdhc_register_write_assign_stmt_3707_c_macro_ __declare_static_bit_vector(konst_3705,8);\
bit_vector_clear(&konst_3705);\
konst_3705.val.byte_array[0] = 15;\
__declare_static_bit_vector(AND_u8_u8_3706,8);\
bit_vector_clear(&konst_3705);\
konst_3705.val.byte_array[0] = 15;\
bit_vector_and(&(data), &(konst_3705), &(AND_u8_u8_3706));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3706));\
;

#define _sdhc_register_write_assign_stmt_3715_c_macro_ __declare_static_bit_vector(konst_3713,8);\
bit_vector_clear(&konst_3713);\
konst_3713.val.byte_array[0] = 7;\
__declare_static_bit_vector(AND_u8_u8_3714,8);\
bit_vector_clear(&konst_3713);\
konst_3713.val.byte_array[0] = 7;\
bit_vector_and(&(data), &(konst_3713), &(AND_u8_u8_3714));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3714));\
;

#define _sdhc_register_write_call_stmt_3720_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3728_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3733_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_assign_stmt_3741_c_macro_ __declare_static_bit_vector(konst_3739,8);\
bit_vector_clear(&konst_3739);\
konst_3739.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3740,8);\
bit_vector_clear(&konst_3739);\
konst_3739.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3739), &(AND_u8_u8_3740));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3740));\
;

#define _sdhc_register_write_assign_stmt_3749_c_macro_ __declare_static_bit_vector(konst_3747,8);\
bit_vector_clear(&konst_3747);\
konst_3747.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3748,8);\
bit_vector_clear(&konst_3747);\
konst_3747.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3747), &(AND_u8_u8_3748));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3748));\
;

#define _sdhc_register_write_assign_stmt_3757_c_macro_ __declare_static_bit_vector(konst_3755,8);\
bit_vector_clear(&konst_3755);\
konst_3755.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3756,8);\
bit_vector_clear(&konst_3755);\
konst_3755.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3755), &(AND_u8_u8_3756));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3756));\
;

#define _sdhc_register_write_assign_stmt_3765_c_macro_ __declare_static_bit_vector(konst_3763,8);\
bit_vector_clear(&konst_3763);\
konst_3763.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3764,8);\
bit_vector_clear(&konst_3763);\
konst_3763.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3763), &(AND_u8_u8_3764));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3764));\
;

#define _sdhc_register_write_assign_stmt_3774_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3782_c_macro_ __declare_static_bit_vector(konst_3780,8);\
bit_vector_clear(&konst_3780);\
konst_3780.val.byte_array[0] = 192;\
__declare_static_bit_vector(AND_u8_u8_3781,8);\
bit_vector_clear(&konst_3780);\
konst_3780.val.byte_array[0] = 192;\
bit_vector_and(&(data), &(konst_3780), &(AND_u8_u8_3781));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3781));\
;

#define _sdhc_register_write_assign_stmt_3809_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3824_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3830_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3836_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3842_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3848_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3907_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(data));\
;
;

#define _sdhc_register_write_branch_block_stmt_3592_c_export_apply_macro_ ;

#define _sdhc_register_write_inner_outarg_prep_macro__ ;

#define _sdhc_register_write_outer_arg_decl_macro__ __declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
__declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
;

#define _sdhc_register_write_outer_op_xfer_macro__ ;
