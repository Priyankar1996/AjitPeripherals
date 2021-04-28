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


#define _bigResponseWrite_merge_stmt_254_c_preamble_macro_ uint8_t merge_stmt_254_entry_flag;\
merge_stmt_254_entry_flag = do_while_entry_flag;\
goto merge_stmt_254_run;\
merge_stmt_254_run: ;\

#define _bigResponseWrite_phi_stmt_255_c_macro_ __declare_static_bit_vector(konst_257,8);\
bit_vector_clear(&konst_257);\
__declare_static_bit_vector(type_cast_258,8);\
bit_vector_clear(&type_cast_258);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k), &(next_k));\
}\
else {\
__declare_static_bit_vector(konst_257,8);\
bit_vector_clear(&konst_257);\
__declare_static_bit_vector(type_cast_258,8);\
bit_vector_clear(&type_cast_258);\
bit_vector_clear(&konst_257);\
bit_vector_bitcast_to_bit_vector( &(type_cast_258), &(konst_257));\
bit_vector_cast_to_bit_vector(0, &(k), &(type_cast_258));\
}\
;

#define _bigResponseWrite_phi_stmt_260_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(temp), &(CID));\
}\
;
;

#define _bigResponseWrite_merge_stmt_254_c_postamble_macro_ merge_stmt_254_entry_flag = 0;

#define _bigResponseWrite_assign_stmt_269_c_macro_ __declare_static_bit_vector(konst_266,8);\
bit_vector_clear(&konst_266);\
konst_266.val.byte_array[0] = 16;\
__declare_static_bit_vector(ADD_u8_u8_268,8);\
bit_vector_clear(&konst_266);\
konst_266.val.byte_array[0] = 16;\
bit_vector_plus( &(konst_266), &(k), &(ADD_u8_u8_268));\
bit_vector_cast_to_bit_vector(0, &(address), &(ADD_u8_u8_268));\
;

#define _bigResponseWrite_assign_stmt_274_c_macro_ __declare_static_bit_vector(slice_273,8);\
bit_vector_slice(&(temp), &(slice_273), 0);\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(slice_273));\
;

#define _bigResponseWrite_assign_stmt_279_c_macro_ __declare_static_bit_vector(konst_277,120);\
bit_vector_clear(&konst_277);\
konst_277.val.byte_array[0] = 8;\
__declare_static_bit_vector(LSHR_u120_u120_278,120);\
bit_vector_clear(&konst_277);\
konst_277.val.byte_array[0] = 8;\
bit_vector_shift_right(0, &(temp), &(konst_277), &(LSHR_u120_u120_278));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(LSHR_u120_u120_278));\
;

#define _bigResponseWrite_assign_stmt_284_c_macro_ __declare_static_bit_vector(konst_282,8);\
bit_vector_clear(&konst_282);\
konst_282.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_283,8);\
bit_vector_clear(&konst_282);\
konst_282.val.byte_array[0] = 1;\
bit_vector_plus( &(k), &(konst_282), &(ADD_u8_u8_283));\
bit_vector_cast_to_bit_vector(0, &(next_k), &(ADD_u8_u8_283));\
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

#define _command_generator_branch_block_stmt_1820_c_export_decl_macro_ __declare_static_bit_vector(argumentVal3,8);\
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
__declare_static_bit_vector(wait,8);\
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


#define _command_generator_assign_stmt_1824_c_macro_ __declare_static_bit_vector(konst_1822,32);\
bit_vector_clear(&konst_1822);\
konst_1822.val.byte_array[0] = 11;\
bit_vector_clear(&konst_1822);\
konst_1822.val.byte_array[0] = 11;\
bit_vector_cast_to_bit_vector(0, &(argumentVal3), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1822)])));\
;

#define _command_generator_assign_stmt_1828_c_macro_ __declare_static_bit_vector(konst_1826,32);\
bit_vector_clear(&konst_1826);\
konst_1826.val.byte_array[0] = 10;\
bit_vector_clear(&konst_1826);\
konst_1826.val.byte_array[0] = 10;\
bit_vector_cast_to_bit_vector(0, &(argumentVal2), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1826)])));\
;

#define _command_generator_assign_stmt_1832_c_macro_ __declare_static_bit_vector(konst_1830,32);\
bit_vector_clear(&konst_1830);\
konst_1830.val.byte_array[0] = 9;\
bit_vector_clear(&konst_1830);\
konst_1830.val.byte_array[0] = 9;\
bit_vector_cast_to_bit_vector(0, &(argumentVal1), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1830)])));\
;

#define _command_generator_assign_stmt_1836_c_macro_ __declare_static_bit_vector(konst_1834,32);\
bit_vector_clear(&konst_1834);\
konst_1834.val.byte_array[0] = 8;\
bit_vector_clear(&konst_1834);\
konst_1834.val.byte_array[0] = 8;\
bit_vector_cast_to_bit_vector(0, &(argumentVal0), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1834)])));\
;

#define _command_generator_assign_stmt_1853_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1840,2);\
bit_vector_clear(&CONCAT_u1_u2_1840);\
CONCAT_u1_u2_1840.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_1841,32);\
bit_vector_clear(&konst_1841);\
konst_1841.val.byte_array[0] = 15;\
__declare_static_bit_vector(slice_1843,6);\
__declare_static_bit_vector(CONCAT_u6_u14_1845,14);\
__declare_static_bit_vector(CONCAT_u2_u16_1846,16);\
__declare_static_bit_vector(CONCAT_u8_u16_1849,16);\
__declare_static_bit_vector(CONCAT_u16_u24_1851,24);\
__declare_static_bit_vector(CONCAT_u16_u40_1852,40);\
bit_vector_concatenate( &(ZERO_1), &(ONE_1), &(CONCAT_u1_u2_1840));\
bit_vector_clear(&konst_1841);\
konst_1841.val.byte_array[0] = 15;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1841)])), &(slice_1843), 0);\
bit_vector_concatenate( &(slice_1843), &(argumentVal3), &(CONCAT_u6_u14_1845));\
bit_vector_concatenate( &(CONCAT_u1_u2_1840), &(CONCAT_u6_u14_1845), &(CONCAT_u2_u16_1846));\
bit_vector_concatenate( &(argumentVal2), &(argumentVal1), &(CONCAT_u8_u16_1849));\
bit_vector_concatenate( &(CONCAT_u8_u16_1849), &(argumentVal0), &(CONCAT_u16_u24_1851));\
bit_vector_concatenate( &(CONCAT_u2_u16_1846), &(CONCAT_u16_u24_1851), &(CONCAT_u16_u40_1852));\
bit_vector_cast_to_bit_vector(0, &(command40bits), &(CONCAT_u16_u40_1852));\
;

#define _command_generator_assign_stmt_1856_c_macro_ bit_vector_cast_to_bit_vector(0, &(current_crc), &(ZERO_8));\
;

#define _command_generator_call_stmt_1859_c_macro_ _generate_crc_7_( &(command40bits), &(crc7));\
;

#define _command_generator_assign_stmt_1866_c_macro_ __declare_static_bit_vector(CONCAT_u40_u47_1863,47);\
__declare_static_bit_vector(CONCAT_u47_u48_1865,48);\
bit_vector_concatenate( &(command40bits), &(crc7), &(CONCAT_u40_u47_1863));\
bit_vector_concatenate( &(CONCAT_u40_u47_1863), &(ONE_1), &(CONCAT_u47_u48_1865));\
bit_vector_cast_to_bit_vector(0, &(commandbits), &(CONCAT_u47_u48_1865));\
;

#define _command_generator_branch_block_stmt_1867_c_export_decl_macro_ __declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_commandbits,48);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bit,1);\
__declare_static_bit_vector(new_commandbits,48);\


#define _command_generator_merge_stmt_1869_c_preamble_macro_ uint8_t merge_stmt_1869_entry_flag;\
merge_stmt_1869_entry_flag = do_while_entry_flag;\
goto merge_stmt_1869_run;\
merge_stmt_1869_run: ;\

#define _command_generator_phi_stmt_1870_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(J), &(ZERO_8));\
}\
;

#define _command_generator_phi_stmt_1874_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(new_commandbits));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(old_commandbits), &(commandbits));\
}\
;
;

#define _command_generator_merge_stmt_1869_c_postamble_macro_ merge_stmt_1869_entry_flag = 0;

#define _command_generator_assign_stmt_1883_c_macro_ __declare_static_bit_vector(konst_1881,8);\
bit_vector_clear(&konst_1881);\
konst_1881.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_1882,8);\
bit_vector_clear(&konst_1881);\
konst_1881.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1881), &(ADD_u8_u8_1882));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_1882));\
;

#define _command_generator_assign_stmt_1887_c_macro_ __declare_static_bit_vector(slice_1886,1);\
bit_vector_slice(&(old_commandbits), &(slice_1886), 47);\
bit_vector_cast_to_bit_vector(0, &(bit), &(slice_1886));\
;

#define _command_generator_assign_stmt_1890_c_macro_ write_bit_vector_to_pipe("commandTx",&(bit));\
;

#define _command_generator_assign_stmt_1895_c_macro_ __declare_static_bit_vector(konst_1893,48);\
bit_vector_clear(&konst_1893);\
konst_1893.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_1894,48);\
bit_vector_clear(&konst_1893);\
konst_1893.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_commandbits), &(konst_1893), &(SHL_u48_u48_1894));\
bit_vector_cast_to_bit_vector(0, &(new_commandbits), &(SHL_u48_u48_1894));\
;
;

#define _command_generator_branch_block_stmt_1867_c_export_apply_macro_ ;

#define _command_generator_assign_stmt_1905_c_macro_ __declare_static_bit_vector(konst_1902,32);\
bit_vector_clear(&konst_1902);\
konst_1902.val.byte_array[0] = 14;\
__declare_static_bit_vector(slice_1904,2);\
bit_vector_clear(&konst_1902);\
konst_1902.val.byte_array[0] = 14;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1902)])), &(slice_1904), 0);\
bit_vector_cast_to_bit_vector(0, &(response_type), &(slice_1904));\
;

#define _command_generator_assign_stmt_1911_c_macro_ __declare_static_bit_vector(konst_1907,32);\
bit_vector_clear(&konst_1907);\
konst_1907.val.byte_array[0] = 14;\
__declare_static_bit_vector(konst_1909,8);\
bit_vector_clear(&konst_1909);\
konst_1909.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_1910,1);\
bit_vector_clear(&konst_1907);\
konst_1907.val.byte_array[0] = 14;\
bit_vector_clear(&konst_1909);\
konst_1909.val.byte_array[0] = 5;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1907)])), &(konst_1909), &(BITSEL_u8_u1_1910));\
bit_vector_cast_to_bit_vector(0, &(dataPresentSelect), &(BITSEL_u8_u1_1910));\
;

#define _command_generator_assign_stmt_1922_c_macro_ __declare_static_bit_vector(konst_1917,32);\
bit_vector_clear(&konst_1917);\
konst_1917.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_1919,8);\
bit_vector_clear(&konst_1919);\
konst_1919.val.byte_array[0] = 16;\
__declare_static_bit_vector(AND_u8_u8_1920,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_1921,1);\
bit_vector_clear(&konst_1917);\
konst_1917.val.byte_array[0] = 12;\
bit_vector_clear(&konst_1919);\
konst_1919.val.byte_array[0] = 16;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_1917)])), &(konst_1919), &(AND_u8_u8_1920));\
bit_vector_reduce_or( &(AND_u8_u8_1920), &(BITREDUCEOR_u8_u1_1921));\
bit_vector_cast_to_bit_vector(0, &(txOrRX), &(BITREDUCEOR_u8_u1_1921));\
;

#define _command_generator_assign_stmt_1926_c_macro_ __declare_static_bit_vector(konst_1924,32);\
bit_vector_clear(&konst_1924);\
konst_1924.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1924);\
konst_1924.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1924)])));\
;

#define _command_generator_assign_stmt_1930_c_macro_ __declare_static_bit_vector(konst_1928,32);\
bit_vector_clear(&konst_1928);\
konst_1928.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1928);\
konst_1928.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1928)])));\
;

#define _command_generator_assign_stmt_1945_c_macro_ __declare_static_bit_vector(konst_1939,8);\
bit_vector_clear(&konst_1939);\
konst_1939.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_1940,8);\
__declare_static_bit_vector(konst_1942,8);\
bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_1943,8);\
__declare_static_bit_vector(MUX_1944,8);\
if (has_undefined_bit(&txOrRX)) {fprintf(stderr, "Error: variable txOrRX has undefined value (%s) at test point.\n", to_string(&txOrRX));assert(0);} \
if(bit_vector_to_uint64(0, &txOrRX)){bit_vector_clear(&konst_1939);\
konst_1939.val.byte_array[0] = 2;\
bit_vector_or(&(presentState1Var), &(konst_1939), &(OR_u8_u8_1940));\
bit_vector_cast_to_bit_vector(0, &(MUX_1944), &(OR_u8_u8_1940));\
}else {bit_vector_clear(&konst_1942);\
konst_1942.val.byte_array[0] = 1;\
bit_vector_or(&(presentState1Var), &(konst_1942), &(OR_u8_u8_1943));\
bit_vector_cast_to_bit_vector(0, &(MUX_1944), &(OR_u8_u8_1943));\
}__declare_static_bit_vector(konst_1935,32);\
bit_vector_clear(&konst_1935);\
konst_1935.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1935);\
konst_1935.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1935)])), &(MUX_1944));\
;

#define _command_generator_assign_stmt_1952_c_macro_ __declare_static_bit_vector(konst_1950,8);\
bit_vector_clear(&konst_1950);\
konst_1950.val.byte_array[0] = 6;\
__declare_static_bit_vector(OR_u8_u8_1951,8);\
bit_vector_clear(&konst_1950);\
konst_1950.val.byte_array[0] = 6;\
bit_vector_or(&(presentState0Var), &(konst_1950), &(OR_u8_u8_1951));\
__declare_static_bit_vector(konst_1947,32);\
bit_vector_clear(&konst_1947);\
konst_1947.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1947);\
konst_1947.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1947)])), &(OR_u8_u8_1951));\
;

#define _command_generator_stmt_1956_c_macro_ uint32_t _command_generator_stmt_1956_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]rsp>\t%s\n",_command_generator_stmt_1956_c_macro___print_counter,"resp");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1956_c_macro___print_counter,"response_type");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response_type)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]rsp>\t\t%s\t\t",_command_generator_stmt_1956_c_macro___print_counter,"dataPresentSelect");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataPresentSelect)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_branch_block_stmt_1965_c_export_decl_macro_ __declare_static_bit_vector(response__new_responsebits,48);\
__declare_static_bit_vector(J,6);\
__declare_static_bit_vector(old_responsebits,48);\
__declare_static_bit_vector(next_J,6);\
__declare_static_bit_vector(responsebit,8);\
__declare_static_bit_vector(responsebits,48);\
__declare_static_bit_vector(new_responsebits,48);\


#define _command_generator_merge_stmt_1967_c_preamble_macro_ uint8_t merge_stmt_1967_entry_flag;\
merge_stmt_1967_entry_flag = do_while_entry_flag;\
goto merge_stmt_1967_run;\
merge_stmt_1967_run: ;\

#define _command_generator_phi_stmt_1968_c_macro_ __declare_static_bit_vector(konst_1970,6);\
bit_vector_clear(&konst_1970);\
__declare_static_bit_vector(type_cast_1971,6);\
bit_vector_clear(&type_cast_1971);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1970,6);\
bit_vector_clear(&konst_1970);\
__declare_static_bit_vector(type_cast_1971,6);\
bit_vector_clear(&type_cast_1971);\
bit_vector_clear(&konst_1970);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1971), &(konst_1970));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1971));\
}\
;

#define _command_generator_phi_stmt_1973_c_macro_ __declare_static_bit_vector(konst_1976,48);\
bit_vector_clear(&konst_1976);\
__declare_static_bit_vector(type_cast_1977,48);\
bit_vector_clear(&type_cast_1977);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(new_responsebits));\
}\
else {\
__declare_static_bit_vector(konst_1976,48);\
bit_vector_clear(&konst_1976);\
__declare_static_bit_vector(type_cast_1977,48);\
bit_vector_clear(&type_cast_1977);\
bit_vector_clear(&konst_1976);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1977), &(konst_1976));\
bit_vector_cast_to_bit_vector(0, &(old_responsebits), &(type_cast_1977));\
}\
;
;

#define _command_generator_merge_stmt_1967_c_postamble_macro_ merge_stmt_1967_entry_flag = 0;

#define _command_generator_assign_stmt_1984_c_macro_ __declare_static_bit_vector(konst_1982,6);\
bit_vector_clear(&konst_1982);\
konst_1982.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u6_u6_1983,6);\
bit_vector_clear(&konst_1982);\
konst_1982.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1982), &(ADD_u6_u6_1983));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u6_u6_1983));\
;

#define _command_generator_assign_stmt_1987_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_1986,8);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_1986));\
bit_vector_cast_to_bit_vector(0, &(responsebit), &(RPIPE_responseRx_1986));\
;

#define _command_generator_assign_stmt_1996_c_macro_ __declare_static_bit_vector(konst_1990,47);\
bit_vector_clear(&konst_1990);\
__declare_static_bit_vector(type_cast_1991,47);\
bit_vector_clear(&type_cast_1991);\
__declare_static_bit_vector(konst_1993,8);\
bit_vector_clear(&konst_1993);\
__declare_static_bit_vector(BITSEL_u8_u1_1994,1);\
__declare_static_bit_vector(CONCAT_u47_u48_1995,48);\
bit_vector_clear(&konst_1990);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1991), &(konst_1990));\
bit_vector_clear(&konst_1993);\
bit_vector_bitsel( &(responsebit), &(konst_1993), &(BITSEL_u8_u1_1994));\
bit_vector_concatenate( &(type_cast_1991), &(BITSEL_u8_u1_1994), &(CONCAT_u47_u48_1995));\
bit_vector_cast_to_bit_vector(0, &(responsebits), &(CONCAT_u47_u48_1995));\
;

#define _command_generator_assign_stmt_2003_c_macro_ __declare_static_bit_vector(konst_1999,48);\
bit_vector_clear(&konst_1999);\
konst_1999.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u48_u48_2000,48);\
__declare_static_bit_vector(OR_u48_u48_2002,48);\
bit_vector_clear(&konst_1999);\
konst_1999.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_responsebits), &(konst_1999), &(SHL_u48_u48_2000));\
bit_vector_or(&(SHL_u48_u48_2000), &(responsebits), &(OR_u48_u48_2002));\
bit_vector_cast_to_bit_vector(0, &(new_responsebits), &(OR_u48_u48_2002));\
;
;

#define _command_generator_branch_block_stmt_1965_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(response__new_responsebits), &(new_responsebits));\
;

#define _command_generator_stmt_2010_c_macro_ uint32_t _command_generator_stmt_2010_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_2010_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_2010_c_macro___print_counter,"response");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(response__new_responsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_merge_stmt_2015_c_preamble_macro_ uint8_t merge_stmt_2015_entry_flag;\
merge_stmt_2015_entry_flag = 1;\
uint8_t waitloop_1820_flag = 0;\
goto merge_stmt_2015_run;\
waitloop_1820: waitloop_1820_flag = 1;\
goto merge_stmt_2015_run;\
merge_stmt_2015_run: ;\
;

#define _command_generator_merge_stmt_2015_c_postamble_macro_ waitloop_1820_flag = 0;\
merge_stmt_2015_entry_flag = 0;

#define _command_generator_assign_stmt_2018_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_2017,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_2017));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_2017));\
;

#define _command_generator_call_stmt_2036_c_macro_ __declare_static_bit_vector(slice_2034,40);\
bit_vector_slice(&(response__new_responsebits), &(slice_2034), 8);\
_generate_crc_7_( &(slice_2034), &(R1_6_7CRC));\
;

#define _command_generator_assign_stmt_2045_c_macro_ __declare_static_bit_vector(slice_2039,7);\
__declare_static_bit_vector(EQ_u7_u1_2041,1);\
__declare_static_bit_vector(konst_2042,8);\
bit_vector_clear(&konst_2042);\
__declare_static_bit_vector(konst_2043,8);\
bit_vector_clear(&konst_2043);\
konst_2043.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2044,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2039), 1);\
bit_vector_equal(0, &(slice_2039), &(R1_6_7CRC), &(EQ_u7_u1_2041));\
if (has_undefined_bit(&EQ_u7_u1_2041)) {fprintf(stderr, "Error: variable EQ_u7_u1_2041 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_2041));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_2041)){bit_vector_clear(&konst_2042);\
bit_vector_cast_to_bit_vector(0, &(MUX_2044), &(konst_2042));\
}else {bit_vector_clear(&konst_2043);\
konst_2043.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_2044), &(konst_2043));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError), &(MUX_2044));\
;

#define _command_generator_assign_stmt_2050_c_macro_ __declare_static_bit_vector(slice_2049,7);\
bit_vector_slice(&(response__new_responsebits), &(slice_2049), 1);\
bit_vector_cast_to_bit_vector(0, &(checkit), &(slice_2049));\
;

#define _command_generator_stmt_2054_c_macro_ uint32_t _command_generator_stmt_2054_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]r1crc>\t%s\n",_command_generator_stmt_2054_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2054_c_macro___print_counter,"CommandCRCError");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(CommandCRCError)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2054_c_macro___print_counter,"R1_6_7CRC");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(R1_6_7CRC)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]r1crc>\t\t%s\t\t",_command_generator_stmt_2054_c_macro___print_counter,"checkit");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(checkit)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_2069_c_macro_ __declare_static_bit_vector(konst_2063,32);\
bit_vector_clear(&konst_2063);\
konst_2063.val.byte_array[0] = 15;\
__declare_static_bit_vector(slice_2065,6);\
__declare_static_bit_vector(slice_2067,6);\
__declare_static_bit_vector(EQ_u6_u1_2068,1);\
bit_vector_clear(&konst_2063);\
konst_2063.val.byte_array[0] = 15;\
bit_vector_slice(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2063)])), &(slice_2065), 0);\
bit_vector_slice(&(response__new_responsebits), &(slice_2067), 40);\
bit_vector_equal(0, &(slice_2065), &(slice_2067), &(EQ_u6_u1_2068));\
bit_vector_cast_to_bit_vector(0, &(commandIndexCheck), &(EQ_u6_u1_2068));\
;

#define _command_generator_assign_stmt_2075_c_macro_ __declare_static_bit_vector(konst_2072,8);\
bit_vector_clear(&konst_2072);\
__declare_static_bit_vector(konst_2073,8);\
bit_vector_clear(&konst_2073);\
konst_2073.val.byte_array[0] = 8;\
__declare_static_bit_vector(MUX_2074,8);\
if (has_undefined_bit(&commandIndexCheck)) {fprintf(stderr, "Error: variable commandIndexCheck has undefined value (%s) at test point.\n", to_string(&commandIndexCheck));assert(0);} \
if(bit_vector_to_uint64(0, &commandIndexCheck)){bit_vector_clear(&konst_2072);\
bit_vector_cast_to_bit_vector(0, &(MUX_2074), &(konst_2072));\
}else {bit_vector_clear(&konst_2073);\
konst_2073.val.byte_array[0] = 8;\
bit_vector_cast_to_bit_vector(0, &(MUX_2074), &(konst_2073));\
}bit_vector_cast_to_bit_vector(0, &(CommandIndexError), &(MUX_2074));\
;

#define _command_generator_assign_stmt_2081_c_macro_ __declare_static_bit_vector(slice_2080,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2080), 32);\
__declare_static_bit_vector(konst_2077,32);\
bit_vector_clear(&konst_2077);\
konst_2077.val.byte_array[0] = 19;\
bit_vector_clear(&konst_2077);\
konst_2077.val.byte_array[0] = 19;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2077)])), &(slice_2080));\
;

#define _command_generator_assign_stmt_2086_c_macro_ __declare_static_bit_vector(slice_2085,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2085), 24);\
__declare_static_bit_vector(konst_2082,32);\
bit_vector_clear(&konst_2082);\
konst_2082.val.byte_array[0] = 18;\
bit_vector_clear(&konst_2082);\
konst_2082.val.byte_array[0] = 18;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2082)])), &(slice_2085));\
;

#define _command_generator_assign_stmt_2091_c_macro_ __declare_static_bit_vector(slice_2090,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2090), 16);\
__declare_static_bit_vector(konst_2087,32);\
bit_vector_clear(&konst_2087);\
konst_2087.val.byte_array[0] = 17;\
bit_vector_clear(&konst_2087);\
konst_2087.val.byte_array[0] = 17;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2087)])), &(slice_2090));\
;

#define _command_generator_assign_stmt_2096_c_macro_ __declare_static_bit_vector(slice_2095,8);\
bit_vector_slice(&(response__new_responsebits), &(slice_2095), 8);\
__declare_static_bit_vector(konst_2092,32);\
bit_vector_clear(&konst_2092);\
konst_2092.val.byte_array[0] = 16;\
bit_vector_clear(&konst_2092);\
konst_2092.val.byte_array[0] = 16;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2092)])), &(slice_2095));\
;

#define _command_generator_assign_stmt_2104_c_macro_ __declare_static_bit_vector(konst_2098,32);\
bit_vector_clear(&konst_2098);\
konst_2098.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2100,8);\
bit_vector_clear(&konst_2100);\
konst_2100.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2101,8);\
__declare_static_bit_vector(konst_2102,8);\
bit_vector_clear(&konst_2102);\
konst_2102.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2103,8);\
bit_vector_clear(&konst_2098);\
konst_2098.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2100);\
konst_2100.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2098)])), &(konst_2100), &(LSHR_u8_u8_2101));\
bit_vector_clear(&konst_2102);\
konst_2102.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2101), &(konst_2102), &(SHL_u8_u8_2103));\
bit_vector_cast_to_bit_vector(0, &(presentState2), &(SHL_u8_u8_2103));\
;

#define _command_generator_assign_stmt_2108_c_macro_ __declare_static_bit_vector(konst_2106,32);\
bit_vector_clear(&konst_2106);\
konst_2106.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2106);\
konst_2106.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt2), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2106)])));\
;

#define _command_generator_assign_stmt_2112_c_macro_ __declare_static_bit_vector(konst_2109,32);\
bit_vector_clear(&konst_2109);\
konst_2109.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2109);\
konst_2109.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2109)])), &(presentState2));\
;

#define _command_generator_assign_stmt_2121_c_macro_ __declare_static_bit_vector(konst_2115,48);\
bit_vector_clear(&konst_2115);\
__declare_static_bit_vector(BITSEL_u48_u1_2116,1);\
__declare_static_bit_vector(konst_2118,8);\
bit_vector_clear(&konst_2118);\
konst_2118.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_2119,8);\
bit_vector_clear(&type_cast_2119);\
type_cast_2119.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_2120,8);\
bit_vector_clear(&konst_2115);\
bit_vector_bitsel( &(response__new_responsebits), &(konst_2115), &(BITSEL_u48_u1_2116));\
if (has_undefined_bit(&BITSEL_u48_u1_2116)) {fprintf(stderr, "Error: variable BITSEL_u48_u1_2116 has undefined value (%s) at test point.\n", to_string(&BITSEL_u48_u1_2116));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u48_u1_2116)){bit_vector_cast_to_bit_vector(0, &(MUX_2120), &(ZERO_8));\
}else {bit_vector_clear(&konst_2118);\
konst_2118.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2119), &(konst_2118));\
bit_vector_cast_to_bit_vector(0, &(MUX_2120), &(type_cast_2119));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError), &(MUX_2120));\
;

#define _command_generator_assign_stmt_2126_c_macro_ __declare_static_bit_vector(konst_2124,8);\
bit_vector_clear(&konst_2124);\
konst_2124.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2125,8);\
bit_vector_clear(&konst_2124);\
konst_2124.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt2), &(konst_2124), &(OR_u8_u8_2125));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_2), &(OR_u8_u8_2125));\
;

#define _command_generator_assign_stmt_2133_c_macro_ __declare_static_bit_vector(OR_u8_u8_2130,8);\
__declare_static_bit_vector(OR_u8_u8_2132,8);\
bit_vector_or(&(CommandIndexError), &(CommandCRCError), &(OR_u8_u8_2130));\
bit_vector_or(&(OR_u8_u8_2130), &(commandEndBitError), &(OR_u8_u8_2132));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_2), &(OR_u8_u8_2132));\
;

#define _command_generator_branch_block_stmt_2140_c_export_decl_macro_ __declare_static_bit_vector(bigResponse__new_bigresponsebits,136);\
__declare_static_bit_vector(J,8);\
__declare_static_bit_vector(old_bigresponsebits,136);\
__declare_static_bit_vector(next_J,8);\
__declare_static_bit_vector(bigresponsebit,8);\
__declare_static_bit_vector(bigresponsebits,136);\
__declare_static_bit_vector(new_bigresponsebits,136);\


#define _command_generator_merge_stmt_2142_c_preamble_macro_ uint8_t merge_stmt_2142_entry_flag;\
merge_stmt_2142_entry_flag = do_while_entry_flag;\
goto merge_stmt_2142_run;\
merge_stmt_2142_run: ;\

#define _command_generator_phi_stmt_2143_c_macro_ __declare_static_bit_vector(konst_2145,8);\
bit_vector_clear(&konst_2145);\
__declare_static_bit_vector(type_cast_2146,8);\
bit_vector_clear(&type_cast_2146);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_2145,8);\
bit_vector_clear(&konst_2145);\
__declare_static_bit_vector(type_cast_2146,8);\
bit_vector_clear(&type_cast_2146);\
bit_vector_clear(&konst_2145);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2146), &(konst_2145));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_2146));\
}\
;

#define _command_generator_phi_stmt_2148_c_macro_ __declare_static_bit_vector(konst_2151,136);\
bit_vector_clear(&konst_2151);\
__declare_static_bit_vector(type_cast_2152,136);\
bit_vector_clear(&type_cast_2152);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(new_bigresponsebits));\
}\
else {\
__declare_static_bit_vector(konst_2151,136);\
bit_vector_clear(&konst_2151);\
__declare_static_bit_vector(type_cast_2152,136);\
bit_vector_clear(&type_cast_2152);\
bit_vector_clear(&konst_2151);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2152), &(konst_2151));\
bit_vector_cast_to_bit_vector(0, &(old_bigresponsebits), &(type_cast_2152));\
}\
;
;

#define _command_generator_merge_stmt_2142_c_postamble_macro_ merge_stmt_2142_entry_flag = 0;

#define _command_generator_assign_stmt_2159_c_macro_ __declare_static_bit_vector(konst_2157,8);\
bit_vector_clear(&konst_2157);\
konst_2157.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_2158,8);\
bit_vector_clear(&konst_2157);\
konst_2157.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_2157), &(ADD_u8_u8_2158));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u8_u8_2158));\
;

#define _command_generator_assign_stmt_2162_c_macro_ __declare_static_bit_vector(RPIPE_responseRx_2161,8);\
read_bit_vector_from_pipe("responseRx",&(RPIPE_responseRx_2161));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebit), &(RPIPE_responseRx_2161));\
;

#define _command_generator_assign_stmt_2171_c_macro_ __declare_static_bit_vector(konst_2165,135);\
bit_vector_clear(&konst_2165);\
__declare_static_bit_vector(type_cast_2166,135);\
bit_vector_clear(&type_cast_2166);\
__declare_static_bit_vector(konst_2168,8);\
bit_vector_clear(&konst_2168);\
__declare_static_bit_vector(BITSEL_u8_u1_2169,1);\
__declare_static_bit_vector(CONCAT_u135_u136_2170,136);\
bit_vector_clear(&konst_2165);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2166), &(konst_2165));\
bit_vector_clear(&konst_2168);\
bit_vector_bitsel( &(bigresponsebit), &(konst_2168), &(BITSEL_u8_u1_2169));\
bit_vector_concatenate( &(type_cast_2166), &(BITSEL_u8_u1_2169), &(CONCAT_u135_u136_2170));\
bit_vector_cast_to_bit_vector(0, &(bigresponsebits), &(CONCAT_u135_u136_2170));\
;

#define _command_generator_assign_stmt_2178_c_macro_ __declare_static_bit_vector(konst_2174,136);\
bit_vector_clear(&konst_2174);\
konst_2174.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u136_u136_2175,136);\
__declare_static_bit_vector(OR_u136_u136_2177,136);\
bit_vector_clear(&konst_2174);\
konst_2174.val.byte_array[0] = 1;\
bit_vector_shift_left(&(old_bigresponsebits), &(konst_2174), &(SHL_u136_u136_2175));\
bit_vector_or(&(SHL_u136_u136_2175), &(bigresponsebits), &(OR_u136_u136_2177));\
bit_vector_cast_to_bit_vector(0, &(new_bigresponsebits), &(OR_u136_u136_2177));\
;
;

#define _command_generator_branch_block_stmt_2140_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(bigResponse__new_bigresponsebits), &(new_bigresponsebits));\
;

#define _command_generator_stmt_2185_c_macro_ uint32_t _command_generator_stmt_2185_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]gen_comm>\t%s\n",_command_generator_stmt_2185_c_macro___print_counter,"f");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]gen_comm>\t\t%s\t\t",_command_generator_stmt_2185_c_macro___print_counter,"bigResponse");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(bigResponse__new_bigresponsebits)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _command_generator_assign_stmt_2189_c_macro_ __declare_static_bit_vector(slice_2188,120);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_2188), 8);\
bit_vector_cast_to_bit_vector(0, &(CID), &(slice_2188));\
;

#define _command_generator_assign_stmt_2193_c_macro_ __declare_static_bit_vector(slice_2192,7);\
bit_vector_slice(&(bigResponse__new_bigresponsebits), &(slice_2192), 1);\
bit_vector_cast_to_bit_vector(0, &(CID_CRC), &(slice_2192));\
;

#define _command_generator_call_stmt_2203_c_macro_ _generate_crc_7_120_( &(CID), &(R2_CRC));\
;

#define _command_generator_assign_stmt_2211_c_macro_ __declare_static_bit_vector(EQ_u7_u1_2207,1);\
__declare_static_bit_vector(konst_2208,8);\
bit_vector_clear(&konst_2208);\
__declare_static_bit_vector(konst_2209,8);\
bit_vector_clear(&konst_2209);\
konst_2209.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2210,8);\
bit_vector_equal(0, &(crc7), &(R2_CRC), &(EQ_u7_u1_2207));\
if (has_undefined_bit(&EQ_u7_u1_2207)) {fprintf(stderr, "Error: variable EQ_u7_u1_2207 has undefined value (%s) at test point.\n", to_string(&EQ_u7_u1_2207));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u7_u1_2207)){bit_vector_clear(&konst_2208);\
bit_vector_cast_to_bit_vector(0, &(MUX_2210), &(konst_2208));\
}else {bit_vector_clear(&konst_2209);\
konst_2209.val.byte_array[0] = 2;\
bit_vector_cast_to_bit_vector(0, &(MUX_2210), &(konst_2209));\
}bit_vector_cast_to_bit_vector(0, &(CommandCRCError1), &(MUX_2210));\
;

#define _command_generator_assign_stmt_2221_c_macro_ __declare_static_bit_vector(konst_2215,136);\
bit_vector_clear(&konst_2215);\
__declare_static_bit_vector(BITSEL_u136_u1_2216,1);\
__declare_static_bit_vector(konst_2218,8);\
bit_vector_clear(&konst_2218);\
konst_2218.val.byte_array[0] = 4;\
__declare_static_bit_vector(type_cast_2219,8);\
bit_vector_clear(&type_cast_2219);\
type_cast_2219.val.byte_array[0] = 4;\
__declare_static_bit_vector(MUX_2220,8);\
bit_vector_clear(&konst_2215);\
bit_vector_bitsel( &(bigResponse__new_bigresponsebits), &(konst_2215), &(BITSEL_u136_u1_2216));\
if (has_undefined_bit(&BITSEL_u136_u1_2216)) {fprintf(stderr, "Error: variable BITSEL_u136_u1_2216 has undefined value (%s) at test point.\n", to_string(&BITSEL_u136_u1_2216));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u136_u1_2216)){bit_vector_cast_to_bit_vector(0, &(MUX_2220), &(ZERO_8));\
}else {bit_vector_clear(&konst_2218);\
konst_2218.val.byte_array[0] = 4;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2219), &(konst_2218));\
bit_vector_cast_to_bit_vector(0, &(MUX_2220), &(type_cast_2219));\
}bit_vector_cast_to_bit_vector(0, &(commandEndBitError1), &(MUX_2220));\
;

#define _command_generator_assign_stmt_2226_c_macro_ __declare_static_bit_vector(OR_u8_u8_2225,8);\
bit_vector_or(&(CommandCRCError1), &(commandEndBitError1), &(OR_u8_u8_2225));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_3), &(OR_u8_u8_2225));\
;

#define _command_generator_call_stmt_2228_c_macro_ _bigResponseWrite_( &(CID));\
;

#define _command_generator_assign_stmt_2236_c_macro_ __declare_static_bit_vector(konst_2230,32);\
bit_vector_clear(&konst_2230);\
konst_2230.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2232,8);\
bit_vector_clear(&konst_2232);\
konst_2232.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2233,8);\
__declare_static_bit_vector(konst_2234,8);\
bit_vector_clear(&konst_2234);\
konst_2234.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2235,8);\
bit_vector_clear(&konst_2230);\
konst_2230.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2232);\
konst_2232.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2230)])), &(konst_2232), &(LSHR_u8_u8_2233));\
bit_vector_clear(&konst_2234);\
konst_2234.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2233), &(konst_2234), &(SHL_u8_u8_2235));\
bit_vector_cast_to_bit_vector(0, &(presentState3), &(SHL_u8_u8_2235));\
;

#define _command_generator_assign_stmt_2240_c_macro_ __declare_static_bit_vector(konst_2238,32);\
bit_vector_clear(&konst_2238);\
konst_2238.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2238);\
konst_2238.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt3), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2238)])));\
;

#define _command_generator_assign_stmt_2244_c_macro_ __declare_static_bit_vector(konst_2241,32);\
bit_vector_clear(&konst_2241);\
konst_2241.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2241);\
konst_2241.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2241)])), &(presentState3));\
;

#define _command_generator_assign_stmt_2249_c_macro_ __declare_static_bit_vector(konst_2247,8);\
bit_vector_clear(&konst_2247);\
konst_2247.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2248,8);\
bit_vector_clear(&konst_2247);\
konst_2247.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt3), &(konst_2247), &(OR_u8_u8_2248));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_3), &(OR_u8_u8_2248));\
;

#define _command_generator_assign_stmt_2263_c_macro_ __declare_static_bit_vector(konst_2257,32);\
bit_vector_clear(&konst_2257);\
konst_2257.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_2259,8);\
bit_vector_clear(&konst_2259);\
konst_2259.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_2260,8);\
__declare_static_bit_vector(konst_2261,8);\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_2262,8);\
bit_vector_clear(&konst_2257);\
konst_2257.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2259);\
konst_2259.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2257)])), &(konst_2259), &(LSHR_u8_u8_2260));\
bit_vector_clear(&konst_2261);\
konst_2261.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_2260), &(konst_2261), &(SHL_u8_u8_2262));\
bit_vector_cast_to_bit_vector(0, &(presentState1), &(SHL_u8_u8_2262));\
;

#define _command_generator_assign_stmt_2267_c_macro_ __declare_static_bit_vector(konst_2265,32);\
bit_vector_clear(&konst_2265);\
konst_2265.val.byte_array[0] = 48;\
bit_vector_clear(&konst_2265);\
konst_2265.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &(normalInterrupt1), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2265)])));\
;

#define _command_generator_assign_stmt_2271_c_macro_ __declare_static_bit_vector(konst_2268,32);\
bit_vector_clear(&konst_2268);\
konst_2268.val.byte_array[0] = 36;\
bit_vector_clear(&konst_2268);\
konst_2268.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2268)])), &(presentState1));\
;

#define _command_generator_assign_stmt_2276_c_macro_ __declare_static_bit_vector(konst_2274,8);\
bit_vector_clear(&konst_2274);\
konst_2274.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_2275,8);\
bit_vector_clear(&konst_2274);\
konst_2274.val.byte_array[0] = 1;\
bit_vector_or(&(normalInterrupt1), &(konst_2274), &(OR_u8_u8_2275));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar_1), &(OR_u8_u8_2275));\
;

#define _command_generator_assign_stmt_2279_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar_1), &(ZERO_8));\
;

#define _command_generator_merge_stmt_2284_c_preamble_macro_ uint8_t merge_stmt_2284_entry_flag;\
merge_stmt_2284_entry_flag = 1;\
uint8_t normalInterruptResponse1_1820_flag = 0;\
uint8_t normalInterruptResponse2_1820_flag = 0;\
uint8_t normalInterruptResponse3_1820_flag = 0;\
goto merge_stmt_2284_run;\
normalInterruptResponse1_1820: normalInterruptResponse1_1820_flag = 1;\
normalInterruptResponse2_1820_flag = 0;\
normalInterruptResponse3_1820_flag = 0;\
goto merge_stmt_2284_run;\
normalInterruptResponse2_1820: normalInterruptResponse2_1820_flag = 1;\
normalInterruptResponse1_1820_flag = 0;\
normalInterruptResponse3_1820_flag = 0;\
goto merge_stmt_2284_run;\
normalInterruptResponse3_1820: normalInterruptResponse3_1820_flag = 1;\
normalInterruptResponse1_1820_flag = 0;\
normalInterruptResponse2_1820_flag = 0;\
goto merge_stmt_2284_run;\
merge_stmt_2284_run: ;\

#define _command_generator_phi_stmt_2285_c_macro_ if(normalInterruptResponse1_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar1), &(normalInterruptStatusVar_3));\
}\
;

#define _command_generator_phi_stmt_2290_c_macro_ if(normalInterruptResponse1_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_1));\
}\
 else if(normalInterruptResponse2_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_2));\
}\
 else if(normalInterruptResponse3_1820_flag) {\
bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar1), &(errorInterruptStatusVar_3));\
}\
;
;

#define _command_generator_merge_stmt_2284_c_postamble_macro_ normalInterruptResponse1_1820_flag = 0;\
normalInterruptResponse2_1820_flag = 0;\
normalInterruptResponse3_1820_flag = 0;\
merge_stmt_2284_entry_flag = 0;

#define _command_generator_assign_stmt_2314_c_macro_ __declare_static_bit_vector(konst_2309,32);\
bit_vector_clear(&konst_2309);\
konst_2309.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_2311,8);\
bit_vector_clear(&konst_2311);\
konst_2311.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_2312,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_2313,1);\
bit_vector_clear(&konst_2309);\
konst_2309.val.byte_array[0] = 12;\
bit_vector_clear(&konst_2311);\
konst_2311.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_2309)])), &(konst_2311), &(AND_u8_u8_2312));\
bit_vector_reduce_or( &(AND_u8_u8_2312), &(BITREDUCEOR_u8_u1_2313));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_2313));\
;

#define _command_generator_call_stmt_2317_c_macro_ _dataRx_( &(singleMultipleReadBlock), &(dataErrorInterruptStatusVar1));\
;

#define _command_generator_assign_stmt_2320_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ONE_1));\
;

#define _command_generator_assign_stmt_2323_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _command_generator_assign_stmt_2330_c_macro_ __declare_static_bit_vector(konst_2326,8);\
bit_vector_clear(&konst_2326);\
konst_2326.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2327,8);\
bit_vector_clear(&type_cast_2327);\
type_cast_2327.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2329,8);\
if (has_undefined_bit(&singleMultipleReadBlock)) {fprintf(stderr, "Error: variable singleMultipleReadBlock has undefined value (%s) at test point.\n", to_string(&singleMultipleReadBlock));assert(0);} \
if(bit_vector_to_uint64(0, &singleMultipleReadBlock)){bit_vector_clear(&konst_2326);\
konst_2326.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2327), &(konst_2326));\
bit_vector_cast_to_bit_vector(0, &(MUX_2329), &(type_cast_2327));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2329), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(transferCompleteData), &(MUX_2329));\
;

#define _command_generator_assign_stmt_2341_c_macro_ __declare_static_bit_vector(konst_2336,32);\
bit_vector_clear(&konst_2336);\
konst_2336.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_2338,32);\
bit_vector_clear(&konst_2338);\
konst_2338.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_2340,16);\
bit_vector_clear(&konst_2336);\
konst_2336.val.byte_array[0] = 7;\
bit_vector_clear(&konst_2338);\
konst_2338.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2336)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2338)])), &(CONCAT_u8_u16_2340));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_2340));\
;

#define _command_generator_assign_stmt_2346_c_macro_ __declare_static_bit_vector(konst_2344,16);\
bit_vector_clear(&konst_2344);\
konst_2344.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_2345,16);\
bit_vector_clear(&konst_2344);\
konst_2344.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_2344), &(SUB_u16_u16_2345));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_2345));\
;

#define _command_generator_assign_stmt_2351_c_macro_ __declare_static_bit_vector(slice_2350,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_2350), 8);\
__declare_static_bit_vector(konst_2347,32);\
bit_vector_clear(&konst_2347);\
konst_2347.val.byte_array[0] = 7;\
bit_vector_clear(&konst_2347);\
konst_2347.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2347)])), &(slice_2350));\
;

#define _command_generator_assign_stmt_2356_c_macro_ __declare_static_bit_vector(slice_2355,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_2355), 0);\
__declare_static_bit_vector(konst_2352,32);\
bit_vector_clear(&konst_2352);\
konst_2352.val.byte_array[0] = 6;\
bit_vector_clear(&konst_2352);\
konst_2352.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_2352)])), &(slice_2355));\
;

#define _command_generator_assign_stmt_2367_c_macro_ __declare_static_bit_vector(konst_2361,2);\
bit_vector_clear(&konst_2361);\
konst_2361.val.byte_array[0] = 3;\
__declare_static_bit_vector(EQ_u2_u1_2362,1);\
__declare_static_bit_vector(konst_2363,8);\
bit_vector_clear(&konst_2363);\
konst_2363.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_2364,8);\
bit_vector_clear(&type_cast_2364);\
type_cast_2364.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_2366,8);\
bit_vector_clear(&konst_2361);\
konst_2361.val.byte_array[0] = 3;\
bit_vector_equal(0, &(response_type), &(konst_2361), &(EQ_u2_u1_2362));\
if (has_undefined_bit(&EQ_u2_u1_2362)) {fprintf(stderr, "Error: variable EQ_u2_u1_2362 has undefined value (%s) at test point.\n", to_string(&EQ_u2_u1_2362));assert(0);} \
if(bit_vector_to_uint64(0, &EQ_u2_u1_2362)){bit_vector_clear(&konst_2363);\
konst_2363.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_2364), &(konst_2363));\
bit_vector_cast_to_bit_vector(0, &(MUX_2366), &(type_cast_2364));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_2366), &(transferCompleteData));\
}bit_vector_cast_to_bit_vector(0, &(dataTransferComplete), &(MUX_2366));\
;

#define _command_generator_assign_stmt_2371_c_macro_ bit_vector_cast_to_bit_vector(0, &(normalInterruptStatusVar2), &(ZERO_8));\
;

#define _command_generator_assign_stmt_2374_c_macro_ bit_vector_cast_to_bit_vector(0, &(errorInterruptStatusVar2), &(ZERO_8));\
;
;

#define _command_generator_branch_block_stmt_1820_c_export_apply_macro_ ;

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

#define _dataRx_branch_block_stmt_544_c_export_decl_macro_ __declare_static_bit_vector(presentState1Var,8);\
__declare_static_bit_vector(presentState0Var,8);\
__declare_static_bit_vector(startBit0,8);\
__declare_static_bit_vector(K_0,5);\
__declare_static_bit_vector(currentCRC_0,16);\
__declare_static_bit_vector(nextCRC_0,16);\
__declare_static_bit_vector(next_K_0,5);\
__declare_static_bit_vector(stopBit0,8);\
__declare_static_bit_vector(stopBitError0,1);\
__declare_static_bit_vector(J_0,13);\
__declare_static_bit_vector(CRC_16_0,16);\
__declare_static_bit_vector(tempData0,1024);\
__declare_static_bit_vector(inv0,1);\
__declare_static_bit_vector(nextCRC16_0,16);\
__declare_static_bit_vector(nextTempData0,1024);\
__declare_static_bit_vector(next_J_0,13);\
__declare_static_bit_vector(crcError0,1);\
__declare_static_bit_vector(startBit1,8);\
__declare_static_bit_vector(K_1,5);\
__declare_static_bit_vector(currentCRC_1,16);\
__declare_static_bit_vector(nextCRC_1,16);\
__declare_static_bit_vector(next_K_1,5);\
__declare_static_bit_vector(stopBit1,8);\
__declare_static_bit_vector(stopBitError1,1);\
__declare_static_bit_vector(J_1,13);\
__declare_static_bit_vector(CRC_16_1,16);\
__declare_static_bit_vector(tempData1,1024);\
__declare_static_bit_vector(inv1,1);\
__declare_static_bit_vector(nextCRC16_1,16);\
__declare_static_bit_vector(nextTempData1,1024);\
__declare_static_bit_vector(next_J_1,13);\
__declare_static_bit_vector(crcError1,1);\
__declare_static_bit_vector(startBit2,8);\
__declare_static_bit_vector(K_2,5);\
__declare_static_bit_vector(currentCRC_2,16);\
__declare_static_bit_vector(nextCRC_2,16);\
__declare_static_bit_vector(next_K_2,5);\
__declare_static_bit_vector(stopBit2,8);\
__declare_static_bit_vector(stopBitError2,1);\
__declare_static_bit_vector(J_2,13);\
__declare_static_bit_vector(CRC_16_2,16);\
__declare_static_bit_vector(tempData2,1024);\
__declare_static_bit_vector(inv2,1);\
__declare_static_bit_vector(nextCRC16_2,16);\
__declare_static_bit_vector(nextTempData2,1024);\
__declare_static_bit_vector(next_J_2,13);\
__declare_static_bit_vector(crcError2,1);\
__declare_static_bit_vector(startBit3,8);\
__declare_static_bit_vector(K_3,5);\
__declare_static_bit_vector(currentCRC_3,16);\
__declare_static_bit_vector(nextCRC_3,16);\
__declare_static_bit_vector(next_K_3,5);\
__declare_static_bit_vector(stopBit3,8);\
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
__declare_static_bit_vector(nextDataForBuffer0,1024);\
__declare_static_bit_vector(nextDataForBuffer1,1024);\
__declare_static_bit_vector(nextDataForBuffer2,1024);\
__declare_static_bit_vector(nextDataForBuffer3,1024);\
__declare_static_bit_vector(next_B,10);\
__declare_static_bit_vector(stopBitError_Final,1);\
__declare_static_bit_vector(crcError_Final,1);\
__declare_static_bit_vector(dataErrorInterruptStatusVar1_4,8);\
__declare_static_bit_vector(startBit,8);\
__declare_static_bit_vector(K,5);\
__declare_static_bit_vector(currentCRC,16);\
__declare_static_bit_vector(nextCRC,16);\
__declare_static_bit_vector(next_K,5);\
__declare_static_bit_vector(stopBit,8);\
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


#define _dataRx_assign_stmt_548_c_macro_ __declare_static_bit_vector(konst_546,32);\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 37;\
bit_vector_clear(&konst_546);\
konst_546.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_546)])));\
;

#define _dataRx_assign_stmt_552_c_macro_ __declare_static_bit_vector(konst_550,32);\
bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 36;\
bit_vector_clear(&konst_550);\
konst_550.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_550)])));\
;

#define _dataRx_assign_stmt_560_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_559,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_559));\
bit_vector_cast_to_bit_vector(0, &(startBit0), &(RPIPE_DAT0Rx_559));\
;

#define _dataRx_branch_block_stmt_561_c_export_decl_macro_ __declare_static_bit_vector(dat0__next_data0,1024);\
__declare_static_bit_vector(I_0,10);\
__declare_static_bit_vector(dat0,1024);\
__declare_static_bit_vector(bit7_0,8);\
__declare_static_bit_vector(bit6_0,8);\
__declare_static_bit_vector(bit5_0,8);\
__declare_static_bit_vector(bit4_0,8);\
__declare_static_bit_vector(bit3_0,8);\
__declare_static_bit_vector(bit2_0,8);\
__declare_static_bit_vector(bit1_0,8);\
__declare_static_bit_vector(bit0_0,8);\
__declare_static_bit_vector(next_data0,1024);\
__declare_static_bit_vector(next_I_0,10);\


#define _dataRx_merge_stmt_563_c_preamble_macro_ uint8_t merge_stmt_563_entry_flag;\
merge_stmt_563_entry_flag = do_while_entry_flag;\
goto merge_stmt_563_run;\
merge_stmt_563_run: ;\

#define _dataRx_phi_stmt_564_c_macro_ __declare_static_bit_vector(konst_566,10);\
bit_vector_clear(&konst_566);\
__declare_static_bit_vector(type_cast_567,10);\
bit_vector_clear(&type_cast_567);\
if(do_while_loopback_flag) {\
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
if(do_while_loopback_flag) {\
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

#define _dataRx_merge_stmt_563_c_postamble_macro_ merge_stmt_563_entry_flag = 0;

#define _dataRx_assign_stmt_578_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_577,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_577));\
bit_vector_cast_to_bit_vector(0, &(bit7_0), &(RPIPE_DAT0Rx_577));\
;

#define _dataRx_assign_stmt_581_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_580,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_580));\
bit_vector_cast_to_bit_vector(0, &(bit6_0), &(RPIPE_DAT0Rx_580));\
;

#define _dataRx_assign_stmt_584_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_583,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_583));\
bit_vector_cast_to_bit_vector(0, &(bit5_0), &(RPIPE_DAT0Rx_583));\
;

#define _dataRx_assign_stmt_587_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_586,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_586));\
bit_vector_cast_to_bit_vector(0, &(bit4_0), &(RPIPE_DAT0Rx_586));\
;

#define _dataRx_assign_stmt_590_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_589,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_589));\
bit_vector_cast_to_bit_vector(0, &(bit3_0), &(RPIPE_DAT0Rx_589));\
;

#define _dataRx_assign_stmt_593_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_592,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_592));\
bit_vector_cast_to_bit_vector(0, &(bit2_0), &(RPIPE_DAT0Rx_592));\
;

#define _dataRx_assign_stmt_596_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_595,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_595));\
bit_vector_cast_to_bit_vector(0, &(bit1_0), &(RPIPE_DAT0Rx_595));\
;

#define _dataRx_assign_stmt_599_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_598,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_598));\
bit_vector_cast_to_bit_vector(0, &(bit0_0), &(RPIPE_DAT0Rx_598));\
;

#define _dataRx_assign_stmt_641_c_macro_ __declare_static_bit_vector(konst_602,1024);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_603,1024);\
__declare_static_bit_vector(konst_605,1016);\
bit_vector_clear(&konst_605);\
__declare_static_bit_vector(type_cast_606,1016);\
bit_vector_clear(&type_cast_606);\
__declare_static_bit_vector(konst_608,8);\
bit_vector_clear(&konst_608);\
__declare_static_bit_vector(BITSEL_u8_u1_609,1);\
__declare_static_bit_vector(konst_611,8);\
bit_vector_clear(&konst_611);\
__declare_static_bit_vector(BITSEL_u8_u1_612,1);\
__declare_static_bit_vector(CONCAT_u1_u2_613,2);\
__declare_static_bit_vector(konst_615,8);\
bit_vector_clear(&konst_615);\
__declare_static_bit_vector(BITSEL_u8_u1_616,1);\
__declare_static_bit_vector(konst_618,8);\
bit_vector_clear(&konst_618);\
__declare_static_bit_vector(BITSEL_u8_u1_619,1);\
__declare_static_bit_vector(CONCAT_u1_u2_620,2);\
__declare_static_bit_vector(CONCAT_u2_u4_621,4);\
__declare_static_bit_vector(konst_624,8);\
bit_vector_clear(&konst_624);\
__declare_static_bit_vector(BITSEL_u8_u1_625,1);\
__declare_static_bit_vector(konst_627,8);\
bit_vector_clear(&konst_627);\
__declare_static_bit_vector(BITSEL_u8_u1_628,1);\
__declare_static_bit_vector(CONCAT_u1_u2_629,2);\
__declare_static_bit_vector(konst_631,8);\
bit_vector_clear(&konst_631);\
__declare_static_bit_vector(BITSEL_u8_u1_632,1);\
__declare_static_bit_vector(konst_634,8);\
bit_vector_clear(&konst_634);\
__declare_static_bit_vector(BITSEL_u8_u1_635,1);\
__declare_static_bit_vector(CONCAT_u1_u2_636,2);\
__declare_static_bit_vector(CONCAT_u2_u4_637,4);\
__declare_static_bit_vector(CONCAT_u4_u8_638,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_639,1024);\
__declare_static_bit_vector(OR_u1024_u1024_640,1024);\
bit_vector_clear(&konst_602);\
konst_602.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat0), &(konst_602), &(SHL_u1024_u1024_603));\
bit_vector_clear(&konst_605);\
bit_vector_bitcast_to_bit_vector( &(type_cast_606), &(konst_605));\
bit_vector_clear(&konst_608);\
bit_vector_bitsel( &(bit7_0), &(konst_608), &(BITSEL_u8_u1_609));\
bit_vector_clear(&konst_611);\
bit_vector_bitsel( &(bit6_0), &(konst_611), &(BITSEL_u8_u1_612));\
bit_vector_concatenate( &(BITSEL_u8_u1_609), &(BITSEL_u8_u1_612), &(CONCAT_u1_u2_613));\
bit_vector_clear(&konst_615);\
bit_vector_bitsel( &(bit5_0), &(konst_615), &(BITSEL_u8_u1_616));\
bit_vector_clear(&konst_618);\
bit_vector_bitsel( &(bit4_0), &(konst_618), &(BITSEL_u8_u1_619));\
bit_vector_concatenate( &(BITSEL_u8_u1_616), &(BITSEL_u8_u1_619), &(CONCAT_u1_u2_620));\
bit_vector_concatenate( &(CONCAT_u1_u2_613), &(CONCAT_u1_u2_620), &(CONCAT_u2_u4_621));\
bit_vector_clear(&konst_624);\
bit_vector_bitsel( &(bit3_0), &(konst_624), &(BITSEL_u8_u1_625));\
bit_vector_clear(&konst_627);\
bit_vector_bitsel( &(bit2_0), &(konst_627), &(BITSEL_u8_u1_628));\
bit_vector_concatenate( &(BITSEL_u8_u1_625), &(BITSEL_u8_u1_628), &(CONCAT_u1_u2_629));\
bit_vector_clear(&konst_631);\
bit_vector_bitsel( &(bit1_0), &(konst_631), &(BITSEL_u8_u1_632));\
bit_vector_clear(&konst_634);\
bit_vector_bitsel( &(bit0_0), &(konst_634), &(BITSEL_u8_u1_635));\
bit_vector_concatenate( &(BITSEL_u8_u1_632), &(BITSEL_u8_u1_635), &(CONCAT_u1_u2_636));\
bit_vector_concatenate( &(CONCAT_u1_u2_629), &(CONCAT_u1_u2_636), &(CONCAT_u2_u4_637));\
bit_vector_concatenate( &(CONCAT_u2_u4_621), &(CONCAT_u2_u4_637), &(CONCAT_u4_u8_638));\
bit_vector_concatenate( &(type_cast_606), &(CONCAT_u4_u8_638), &(CONCAT_u1016_u1024_639));\
bit_vector_or(&(SHL_u1024_u1024_603), &(CONCAT_u1016_u1024_639), &(OR_u1024_u1024_640));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1024_u1024_640));\
;

#define _dataRx_assign_stmt_646_c_macro_ __declare_static_bit_vector(konst_644,10);\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_645,10);\
bit_vector_clear(&konst_644);\
konst_644.val.byte_array[0] = 1;\
bit_vector_plus( &(I_0), &(konst_644), &(ADD_u10_u10_645));\
bit_vector_cast_to_bit_vector(0, &(next_I_0), &(ADD_u10_u10_645));\
;
;

#define _dataRx_branch_block_stmt_561_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__next_data0), &(next_data0));\
;

#define _dataRx_merge_stmt_653_c_preamble_macro_ uint8_t merge_stmt_653_entry_flag;\
merge_stmt_653_entry_flag = do_while_entry_flag;\
goto merge_stmt_653_run;\
merge_stmt_653_run: ;\

#define _dataRx_phi_stmt_654_c_macro_ __declare_static_bit_vector(konst_657,5);\
bit_vector_clear(&konst_657);\
__declare_static_bit_vector(type_cast_658,5);\
bit_vector_clear(&type_cast_658);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_0), &(next_K_0));\
}\
else {\
__declare_static_bit_vector(konst_657,5);\
bit_vector_clear(&konst_657);\
__declare_static_bit_vector(type_cast_658,5);\
bit_vector_clear(&type_cast_658);\
bit_vector_clear(&konst_657);\
bit_vector_bitcast_to_bit_vector( &(type_cast_658), &(konst_657));\
bit_vector_cast_to_bit_vector(0, &(K_0), &(type_cast_658));\
}\
;

#define _dataRx_phi_stmt_660_c_macro_ __declare_static_bit_vector(konst_662,16);\
bit_vector_clear(&konst_662);\
__declare_static_bit_vector(type_cast_663,16);\
bit_vector_clear(&type_cast_663);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_0), &(nextCRC_0));\
}\
else {\
__declare_static_bit_vector(konst_662,16);\
bit_vector_clear(&konst_662);\
__declare_static_bit_vector(type_cast_663,16);\
bit_vector_clear(&type_cast_663);\
bit_vector_clear(&konst_662);\
bit_vector_bitcast_to_bit_vector( &(type_cast_663), &(konst_662));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_0), &(type_cast_663));\
}\
;
;

#define _dataRx_merge_stmt_653_c_postamble_macro_ merge_stmt_653_entry_flag = 0;

#define _dataRx_assign_stmt_678_c_macro_ __declare_static_bit_vector(konst_668,16);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_669,16);\
__declare_static_bit_vector(konst_671,15);\
bit_vector_clear(&konst_671);\
__declare_static_bit_vector(type_cast_672,15);\
bit_vector_clear(&type_cast_672);\
__declare_static_bit_vector(RPIPE_DAT0Rx_673,8);\
__declare_static_bit_vector(konst_674,8);\
bit_vector_clear(&konst_674);\
__declare_static_bit_vector(BITSEL_u8_u1_675,1);\
__declare_static_bit_vector(CONCAT_u15_u16_676,16);\
__declare_static_bit_vector(OR_u16_u16_677,16);\
bit_vector_clear(&konst_668);\
konst_668.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_0), &(konst_668), &(SHL_u16_u16_669));\
bit_vector_clear(&konst_671);\
bit_vector_bitcast_to_bit_vector( &(type_cast_672), &(konst_671));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_673));\
bit_vector_clear(&konst_674);\
bit_vector_bitsel( &(RPIPE_DAT0Rx_673), &(konst_674), &(BITSEL_u8_u1_675));\
bit_vector_concatenate( &(type_cast_672), &(BITSEL_u8_u1_675), &(CONCAT_u15_u16_676));\
bit_vector_or(&(SHL_u16_u16_669), &(CONCAT_u15_u16_676), &(OR_u16_u16_677));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_0), &(OR_u16_u16_677));\
;

#define _dataRx_assign_stmt_683_c_macro_ __declare_static_bit_vector(konst_681,5);\
bit_vector_clear(&konst_681);\
konst_681.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_682,5);\
bit_vector_clear(&konst_681);\
konst_681.val.byte_array[0] = 1;\
bit_vector_plus( &(K_0), &(konst_681), &(ADD_u5_u5_682));\
bit_vector_cast_to_bit_vector(0, &(next_K_0), &(ADD_u5_u5_682));\
;

#define _dataRx_assign_stmt_690_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_689,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_689));\
bit_vector_cast_to_bit_vector(0, &(stopBit0), &(RPIPE_DAT0Rx_689));\
;

#define _dataRx_assign_stmt_695_c_macro_ __declare_static_bit_vector(konst_693,8);\
bit_vector_clear(&konst_693);\
__declare_static_bit_vector(EQ_u8_u1_694,1);\
bit_vector_clear(&konst_693);\
bit_vector_equal(0, &(stopBit0), &(konst_693), &(EQ_u8_u1_694));\
bit_vector_cast_to_bit_vector(0, &(stopBitError0), &(EQ_u8_u1_694));\
;

#define _dataRx_merge_stmt_697_c_preamble_macro_ uint8_t merge_stmt_697_entry_flag;\
merge_stmt_697_entry_flag = do_while_entry_flag;\
goto merge_stmt_697_run;\
merge_stmt_697_run: ;\

#define _dataRx_phi_stmt_698_c_macro_ __declare_static_bit_vector(konst_701,13);\
bit_vector_clear(&konst_701);\
__declare_static_bit_vector(type_cast_702,13);\
bit_vector_clear(&type_cast_702);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_0), &(next_J_0));\
}\
else {\
__declare_static_bit_vector(konst_701,13);\
bit_vector_clear(&konst_701);\
__declare_static_bit_vector(type_cast_702,13);\
bit_vector_clear(&type_cast_702);\
bit_vector_clear(&konst_701);\
bit_vector_bitcast_to_bit_vector( &(type_cast_702), &(konst_701));\
bit_vector_cast_to_bit_vector(0, &(J_0), &(type_cast_702));\
}\
;

#define _dataRx_phi_stmt_704_c_macro_ __declare_static_bit_vector(konst_706,16);\
bit_vector_clear(&konst_706);\
__declare_static_bit_vector(type_cast_707,16);\
bit_vector_clear(&type_cast_707);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(nextCRC16_0));\
}\
else {\
__declare_static_bit_vector(konst_706,16);\
bit_vector_clear(&konst_706);\
__declare_static_bit_vector(type_cast_707,16);\
bit_vector_clear(&type_cast_707);\
bit_vector_clear(&konst_706);\
bit_vector_bitcast_to_bit_vector( &(type_cast_707), &(konst_706));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_0), &(type_cast_707));\
}\
;

#define _dataRx_phi_stmt_709_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(nextTempData0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData0), &(dat0__next_data0));\
}\
;
;

#define _dataRx_merge_stmt_697_c_postamble_macro_ merge_stmt_697_entry_flag = 0;

#define _dataRx_assign_stmt_722_c_macro_ __declare_static_bit_vector(konst_716,1024);\
bit_vector_clear(&konst_716);\
konst_716.val.byte_array[0] = 255;\
konst_716.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_717,1);\
__declare_static_bit_vector(konst_719,16);\
bit_vector_clear(&konst_719);\
konst_719.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_720,1);\
__declare_static_bit_vector(XOR_u1_u1_721,1);\
bit_vector_clear(&konst_716);\
konst_716.val.byte_array[0] = 255;\
konst_716.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData0), &(konst_716), &(BITSEL_u1024_u1_717));\
bit_vector_clear(&konst_719);\
konst_719.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_0), &(konst_719), &(BITSEL_u16_u1_720));\
bit_vector_xor(&(BITSEL_u1024_u1_717), &(BITSEL_u16_u1_720), &(XOR_u1_u1_721));\
bit_vector_cast_to_bit_vector(0, &(inv0), &(XOR_u1_u1_721));\
;

#define _dataRx_assign_stmt_747_c_macro_ __declare_static_bit_vector(slice_726,3);\
__declare_static_bit_vector(konst_728,16);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_729,1);\
__declare_static_bit_vector(XOR_u1_u1_731,1);\
__declare_static_bit_vector(CONCAT_u3_u4_732,4);\
__declare_static_bit_vector(slice_734,6);\
__declare_static_bit_vector(CONCAT_u4_u10_735,10);\
__declare_static_bit_vector(konst_737,16);\
bit_vector_clear(&konst_737);\
konst_737.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_738,1);\
__declare_static_bit_vector(XOR_u1_u1_740,1);\
__declare_static_bit_vector(slice_742,4);\
__declare_static_bit_vector(CONCAT_u1_u5_743,5);\
__declare_static_bit_vector(CONCAT_u5_u6_745,6);\
__declare_static_bit_vector(CONCAT_u10_u16_746,16);\
bit_vector_slice(&(CRC_16_0), &(slice_726), 12);\
bit_vector_clear(&konst_728);\
konst_728.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_0), &(konst_728), &(BITSEL_u16_u1_729));\
bit_vector_xor(&(BITSEL_u16_u1_729), &(inv0), &(XOR_u1_u1_731));\
bit_vector_concatenate( &(slice_726), &(XOR_u1_u1_731), &(CONCAT_u3_u4_732));\
bit_vector_slice(&(CRC_16_0), &(slice_734), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_732), &(slice_734), &(CONCAT_u4_u10_735));\
bit_vector_clear(&konst_737);\
konst_737.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_0), &(konst_737), &(BITSEL_u16_u1_738));\
bit_vector_xor(&(BITSEL_u16_u1_738), &(inv0), &(XOR_u1_u1_740));\
bit_vector_slice(&(CRC_16_0), &(slice_742), 0);\
bit_vector_concatenate( &(XOR_u1_u1_740), &(slice_742), &(CONCAT_u1_u5_743));\
bit_vector_concatenate( &(CONCAT_u1_u5_743), &(inv0), &(CONCAT_u5_u6_745));\
bit_vector_concatenate( &(CONCAT_u4_u10_735), &(CONCAT_u5_u6_745), &(CONCAT_u10_u16_746));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_0), &(CONCAT_u10_u16_746));\
;

#define _dataRx_assign_stmt_752_c_macro_ __declare_static_bit_vector(konst_750,1024);\
bit_vector_clear(&konst_750);\
konst_750.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_751,1024);\
bit_vector_clear(&konst_750);\
konst_750.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData0), &(konst_750), &(SHL_u1024_u1024_751));\
bit_vector_cast_to_bit_vector(0, &(nextTempData0), &(SHL_u1024_u1024_751));\
;

#define _dataRx_assign_stmt_757_c_macro_ __declare_static_bit_vector(konst_755,13);\
bit_vector_clear(&konst_755);\
konst_755.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_756,13);\
bit_vector_clear(&konst_755);\
konst_755.val.byte_array[0] = 1;\
bit_vector_plus( &(J_0), &(konst_755), &(ADD_u13_u13_756));\
bit_vector_cast_to_bit_vector(0, &(next_J_0), &(ADD_u13_u13_756));\
;

#define _dataRx_assign_stmt_766_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_765,1);\
bit_vector_not_equal(0, &(nextCRC_0), &(nextCRC16_0), &NEQ_u16_u1_765);\
bit_vector_cast_to_bit_vector(0, &(crcError0), &(NEQ_u16_u1_765));\
;

#define _dataRx_assign_stmt_769_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_768,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_768));\
bit_vector_cast_to_bit_vector(0, &(startBit1), &(RPIPE_DAT1Rx_768));\
;

#define _dataRx_branch_block_stmt_770_c_export_decl_macro_ __declare_static_bit_vector(dat1__next_data1,1024);\
__declare_static_bit_vector(I_1,10);\
__declare_static_bit_vector(dat1,1024);\
__declare_static_bit_vector(bit7_1,8);\
__declare_static_bit_vector(bit6_1,8);\
__declare_static_bit_vector(bit5_1,8);\
__declare_static_bit_vector(bit4_1,8);\
__declare_static_bit_vector(bit3_1,8);\
__declare_static_bit_vector(bit2_1,8);\
__declare_static_bit_vector(bit1_1,8);\
__declare_static_bit_vector(bit0_1,8);\
__declare_static_bit_vector(next_data1,1024);\
__declare_static_bit_vector(next_I_1,10);\


#define _dataRx_merge_stmt_772_c_preamble_macro_ uint8_t merge_stmt_772_entry_flag;\
merge_stmt_772_entry_flag = do_while_entry_flag;\
goto merge_stmt_772_run;\
merge_stmt_772_run: ;\

#define _dataRx_phi_stmt_773_c_macro_ __declare_static_bit_vector(konst_775,10);\
bit_vector_clear(&konst_775);\
__declare_static_bit_vector(type_cast_776,10);\
bit_vector_clear(&type_cast_776);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_1), &(next_I_1));\
}\
else {\
__declare_static_bit_vector(konst_775,10);\
bit_vector_clear(&konst_775);\
__declare_static_bit_vector(type_cast_776,10);\
bit_vector_clear(&type_cast_776);\
bit_vector_clear(&konst_775);\
bit_vector_bitcast_to_bit_vector( &(type_cast_776), &(konst_775));\
bit_vector_cast_to_bit_vector(0, &(I_1), &(type_cast_776));\
}\
;

#define _dataRx_phi_stmt_778_c_macro_ __declare_static_bit_vector(konst_780,1024);\
bit_vector_clear(&konst_780);\
__declare_static_bit_vector(type_cast_781,1024);\
bit_vector_clear(&type_cast_781);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_780,1024);\
bit_vector_clear(&konst_780);\
__declare_static_bit_vector(type_cast_781,1024);\
bit_vector_clear(&type_cast_781);\
bit_vector_clear(&konst_780);\
bit_vector_bitcast_to_bit_vector( &(type_cast_781), &(konst_780));\
bit_vector_cast_to_bit_vector(0, &(dat1), &(type_cast_781));\
}\
;
;

#define _dataRx_merge_stmt_772_c_postamble_macro_ merge_stmt_772_entry_flag = 0;

#define _dataRx_assign_stmt_786_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_785,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_785));\
bit_vector_cast_to_bit_vector(0, &(bit7_1), &(RPIPE_DAT1Rx_785));\
;

#define _dataRx_assign_stmt_789_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_788,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_788));\
bit_vector_cast_to_bit_vector(0, &(bit6_1), &(RPIPE_DAT1Rx_788));\
;

#define _dataRx_assign_stmt_792_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_791,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_791));\
bit_vector_cast_to_bit_vector(0, &(bit5_1), &(RPIPE_DAT1Rx_791));\
;

#define _dataRx_assign_stmt_795_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_794,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_794));\
bit_vector_cast_to_bit_vector(0, &(bit4_1), &(RPIPE_DAT1Rx_794));\
;

#define _dataRx_assign_stmt_798_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_797,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_797));\
bit_vector_cast_to_bit_vector(0, &(bit3_1), &(RPIPE_DAT1Rx_797));\
;

#define _dataRx_assign_stmt_801_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_800,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_800));\
bit_vector_cast_to_bit_vector(0, &(bit2_1), &(RPIPE_DAT1Rx_800));\
;

#define _dataRx_assign_stmt_804_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_803,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_803));\
bit_vector_cast_to_bit_vector(0, &(bit1_1), &(RPIPE_DAT1Rx_803));\
;

#define _dataRx_assign_stmt_807_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_806,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_806));\
bit_vector_cast_to_bit_vector(0, &(bit0_1), &(RPIPE_DAT1Rx_806));\
;

#define _dataRx_assign_stmt_847_c_macro_ __declare_static_bit_vector(konst_810,1024);\
bit_vector_clear(&konst_810);\
konst_810.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_811,1024);\
__declare_static_bit_vector(konst_812,1016);\
bit_vector_clear(&konst_812);\
__declare_static_bit_vector(type_cast_813,1016);\
bit_vector_clear(&type_cast_813);\
__declare_static_bit_vector(konst_815,8);\
bit_vector_clear(&konst_815);\
__declare_static_bit_vector(BITSEL_u8_u1_816,1);\
__declare_static_bit_vector(konst_818,8);\
bit_vector_clear(&konst_818);\
__declare_static_bit_vector(BITSEL_u8_u1_819,1);\
__declare_static_bit_vector(CONCAT_u1_u2_820,2);\
__declare_static_bit_vector(konst_822,8);\
bit_vector_clear(&konst_822);\
__declare_static_bit_vector(BITSEL_u8_u1_823,1);\
__declare_static_bit_vector(konst_825,8);\
bit_vector_clear(&konst_825);\
__declare_static_bit_vector(BITSEL_u8_u1_826,1);\
__declare_static_bit_vector(CONCAT_u1_u2_827,2);\
__declare_static_bit_vector(CONCAT_u2_u4_828,4);\
__declare_static_bit_vector(konst_830,8);\
bit_vector_clear(&konst_830);\
__declare_static_bit_vector(BITSEL_u8_u1_831,1);\
__declare_static_bit_vector(konst_833,8);\
bit_vector_clear(&konst_833);\
__declare_static_bit_vector(BITSEL_u8_u1_834,1);\
__declare_static_bit_vector(CONCAT_u1_u2_835,2);\
__declare_static_bit_vector(konst_837,8);\
bit_vector_clear(&konst_837);\
__declare_static_bit_vector(BITSEL_u8_u1_838,1);\
__declare_static_bit_vector(konst_840,8);\
bit_vector_clear(&konst_840);\
__declare_static_bit_vector(BITSEL_u8_u1_841,1);\
__declare_static_bit_vector(CONCAT_u1_u2_842,2);\
__declare_static_bit_vector(CONCAT_u2_u4_843,4);\
__declare_static_bit_vector(CONCAT_u4_u8_844,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_845,1024);\
__declare_static_bit_vector(OR_u1024_u1024_846,1024);\
bit_vector_clear(&konst_810);\
konst_810.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat1), &(konst_810), &(SHL_u1024_u1024_811));\
bit_vector_clear(&konst_812);\
bit_vector_bitcast_to_bit_vector( &(type_cast_813), &(konst_812));\
bit_vector_clear(&konst_815);\
bit_vector_bitsel( &(bit7_1), &(konst_815), &(BITSEL_u8_u1_816));\
bit_vector_clear(&konst_818);\
bit_vector_bitsel( &(bit6_1), &(konst_818), &(BITSEL_u8_u1_819));\
bit_vector_concatenate( &(BITSEL_u8_u1_816), &(BITSEL_u8_u1_819), &(CONCAT_u1_u2_820));\
bit_vector_clear(&konst_822);\
bit_vector_bitsel( &(bit5_1), &(konst_822), &(BITSEL_u8_u1_823));\
bit_vector_clear(&konst_825);\
bit_vector_bitsel( &(bit4_1), &(konst_825), &(BITSEL_u8_u1_826));\
bit_vector_concatenate( &(BITSEL_u8_u1_823), &(BITSEL_u8_u1_826), &(CONCAT_u1_u2_827));\
bit_vector_concatenate( &(CONCAT_u1_u2_820), &(CONCAT_u1_u2_827), &(CONCAT_u2_u4_828));\
bit_vector_clear(&konst_830);\
bit_vector_bitsel( &(bit3_1), &(konst_830), &(BITSEL_u8_u1_831));\
bit_vector_clear(&konst_833);\
bit_vector_bitsel( &(bit2_1), &(konst_833), &(BITSEL_u8_u1_834));\
bit_vector_concatenate( &(BITSEL_u8_u1_831), &(BITSEL_u8_u1_834), &(CONCAT_u1_u2_835));\
bit_vector_clear(&konst_837);\
bit_vector_bitsel( &(bit1_1), &(konst_837), &(BITSEL_u8_u1_838));\
bit_vector_clear(&konst_840);\
bit_vector_bitsel( &(bit0_1), &(konst_840), &(BITSEL_u8_u1_841));\
bit_vector_concatenate( &(BITSEL_u8_u1_838), &(BITSEL_u8_u1_841), &(CONCAT_u1_u2_842));\
bit_vector_concatenate( &(CONCAT_u1_u2_835), &(CONCAT_u1_u2_842), &(CONCAT_u2_u4_843));\
bit_vector_concatenate( &(CONCAT_u2_u4_828), &(CONCAT_u2_u4_843), &(CONCAT_u4_u8_844));\
bit_vector_concatenate( &(type_cast_813), &(CONCAT_u4_u8_844), &(CONCAT_u1016_u1024_845));\
bit_vector_or(&(SHL_u1024_u1024_811), &(CONCAT_u1016_u1024_845), &(OR_u1024_u1024_846));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1024_u1024_846));\
;

#define _dataRx_assign_stmt_852_c_macro_ __declare_static_bit_vector(konst_850,10);\
bit_vector_clear(&konst_850);\
konst_850.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_851,10);\
bit_vector_clear(&konst_850);\
konst_850.val.byte_array[0] = 1;\
bit_vector_plus( &(I_1), &(konst_850), &(ADD_u10_u10_851));\
bit_vector_cast_to_bit_vector(0, &(next_I_1), &(ADD_u10_u10_851));\
;
;

#define _dataRx_branch_block_stmt_770_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat1__next_data1), &(next_data1));\
;

#define _dataRx_merge_stmt_859_c_preamble_macro_ uint8_t merge_stmt_859_entry_flag;\
merge_stmt_859_entry_flag = do_while_entry_flag;\
goto merge_stmt_859_run;\
merge_stmt_859_run: ;\

#define _dataRx_phi_stmt_860_c_macro_ __declare_static_bit_vector(konst_862,5);\
bit_vector_clear(&konst_862);\
__declare_static_bit_vector(type_cast_863,5);\
bit_vector_clear(&type_cast_863);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_1), &(next_K_1));\
}\
else {\
__declare_static_bit_vector(konst_862,5);\
bit_vector_clear(&konst_862);\
__declare_static_bit_vector(type_cast_863,5);\
bit_vector_clear(&type_cast_863);\
bit_vector_clear(&konst_862);\
bit_vector_bitcast_to_bit_vector( &(type_cast_863), &(konst_862));\
bit_vector_cast_to_bit_vector(0, &(K_1), &(type_cast_863));\
}\
;

#define _dataRx_phi_stmt_865_c_macro_ __declare_static_bit_vector(konst_867,16);\
bit_vector_clear(&konst_867);\
__declare_static_bit_vector(type_cast_868,16);\
bit_vector_clear(&type_cast_868);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_1), &(nextCRC_1));\
}\
else {\
__declare_static_bit_vector(konst_867,16);\
bit_vector_clear(&konst_867);\
__declare_static_bit_vector(type_cast_868,16);\
bit_vector_clear(&type_cast_868);\
bit_vector_clear(&konst_867);\
bit_vector_bitcast_to_bit_vector( &(type_cast_868), &(konst_867));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_1), &(type_cast_868));\
}\
;
;

#define _dataRx_merge_stmt_859_c_postamble_macro_ merge_stmt_859_entry_flag = 0;

#define _dataRx_assign_stmt_882_c_macro_ __declare_static_bit_vector(konst_873,16);\
bit_vector_clear(&konst_873);\
konst_873.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_874,16);\
__declare_static_bit_vector(konst_875,15);\
bit_vector_clear(&konst_875);\
__declare_static_bit_vector(type_cast_876,15);\
bit_vector_clear(&type_cast_876);\
__declare_static_bit_vector(RPIPE_DAT1Rx_877,8);\
__declare_static_bit_vector(konst_878,8);\
bit_vector_clear(&konst_878);\
__declare_static_bit_vector(BITSEL_u8_u1_879,1);\
__declare_static_bit_vector(CONCAT_u15_u16_880,16);\
__declare_static_bit_vector(OR_u16_u16_881,16);\
bit_vector_clear(&konst_873);\
konst_873.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_1), &(konst_873), &(SHL_u16_u16_874));\
bit_vector_clear(&konst_875);\
bit_vector_bitcast_to_bit_vector( &(type_cast_876), &(konst_875));\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_877));\
bit_vector_clear(&konst_878);\
bit_vector_bitsel( &(RPIPE_DAT1Rx_877), &(konst_878), &(BITSEL_u8_u1_879));\
bit_vector_concatenate( &(type_cast_876), &(BITSEL_u8_u1_879), &(CONCAT_u15_u16_880));\
bit_vector_or(&(SHL_u16_u16_874), &(CONCAT_u15_u16_880), &(OR_u16_u16_881));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_1), &(OR_u16_u16_881));\
;

#define _dataRx_assign_stmt_887_c_macro_ __declare_static_bit_vector(konst_885,5);\
bit_vector_clear(&konst_885);\
konst_885.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_886,5);\
bit_vector_clear(&konst_885);\
konst_885.val.byte_array[0] = 1;\
bit_vector_plus( &(K_1), &(konst_885), &(ADD_u5_u5_886));\
bit_vector_cast_to_bit_vector(0, &(next_K_1), &(ADD_u5_u5_886));\
;

#define _dataRx_assign_stmt_894_c_macro_ __declare_static_bit_vector(RPIPE_DAT1Rx_893,8);\
read_bit_vector_from_pipe("DAT1Rx",&(RPIPE_DAT1Rx_893));\
bit_vector_cast_to_bit_vector(0, &(stopBit1), &(RPIPE_DAT1Rx_893));\
;

#define _dataRx_stmt_897_c_macro_ uint32_t _dataRx_stmt_897_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]DATAreieve>\t%s\n",_dataRx_stmt_897_c_macro___print_counter,"rcv");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAreieve>\t\t%s\t\t",_dataRx_stmt_897_c_macro___print_counter,"stopBit1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(stopBit1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]DATAreieve>\t\t%s\t\t",_dataRx_stmt_897_c_macro___print_counter,"dat1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat1__next_data1)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataRx_assign_stmt_902_c_macro_ __declare_static_bit_vector(konst_900,8);\
bit_vector_clear(&konst_900);\
__declare_static_bit_vector(EQ_u8_u1_901,1);\
bit_vector_clear(&konst_900);\
bit_vector_equal(0, &(stopBit1), &(konst_900), &(EQ_u8_u1_901));\
bit_vector_cast_to_bit_vector(0, &(stopBitError1), &(EQ_u8_u1_901));\
;

#define _dataRx_merge_stmt_904_c_preamble_macro_ uint8_t merge_stmt_904_entry_flag;\
merge_stmt_904_entry_flag = do_while_entry_flag;\
goto merge_stmt_904_run;\
merge_stmt_904_run: ;\

#define _dataRx_phi_stmt_905_c_macro_ __declare_static_bit_vector(konst_907,13);\
bit_vector_clear(&konst_907);\
__declare_static_bit_vector(type_cast_908,13);\
bit_vector_clear(&type_cast_908);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_1), &(next_J_1));\
}\
else {\
__declare_static_bit_vector(konst_907,13);\
bit_vector_clear(&konst_907);\
__declare_static_bit_vector(type_cast_908,13);\
bit_vector_clear(&type_cast_908);\
bit_vector_clear(&konst_907);\
bit_vector_bitcast_to_bit_vector( &(type_cast_908), &(konst_907));\
bit_vector_cast_to_bit_vector(0, &(J_1), &(type_cast_908));\
}\
;

#define _dataRx_phi_stmt_910_c_macro_ __declare_static_bit_vector(konst_912,16);\
bit_vector_clear(&konst_912);\
__declare_static_bit_vector(type_cast_913,16);\
bit_vector_clear(&type_cast_913);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(nextCRC16_1));\
}\
else {\
__declare_static_bit_vector(konst_912,16);\
bit_vector_clear(&konst_912);\
__declare_static_bit_vector(type_cast_913,16);\
bit_vector_clear(&type_cast_913);\
bit_vector_clear(&konst_912);\
bit_vector_bitcast_to_bit_vector( &(type_cast_913), &(konst_912));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_1), &(type_cast_913));\
}\
;

#define _dataRx_phi_stmt_915_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(nextTempData1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData1), &(dat1__next_data1));\
}\
;
;

#define _dataRx_merge_stmt_904_c_postamble_macro_ merge_stmt_904_entry_flag = 0;

#define _dataRx_assign_stmt_928_c_macro_ __declare_static_bit_vector(konst_922,1024);\
bit_vector_clear(&konst_922);\
konst_922.val.byte_array[0] = 255;\
konst_922.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_923,1);\
__declare_static_bit_vector(konst_925,16);\
bit_vector_clear(&konst_925);\
konst_925.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_926,1);\
__declare_static_bit_vector(XOR_u1_u1_927,1);\
bit_vector_clear(&konst_922);\
konst_922.val.byte_array[0] = 255;\
konst_922.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData1), &(konst_922), &(BITSEL_u1024_u1_923));\
bit_vector_clear(&konst_925);\
konst_925.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_1), &(konst_925), &(BITSEL_u16_u1_926));\
bit_vector_xor(&(BITSEL_u1024_u1_923), &(BITSEL_u16_u1_926), &(XOR_u1_u1_927));\
bit_vector_cast_to_bit_vector(0, &(inv1), &(XOR_u1_u1_927));\
;

#define _dataRx_assign_stmt_952_c_macro_ __declare_static_bit_vector(slice_931,3);\
__declare_static_bit_vector(konst_933,16);\
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_934,1);\
__declare_static_bit_vector(XOR_u1_u1_936,1);\
__declare_static_bit_vector(CONCAT_u3_u4_937,4);\
__declare_static_bit_vector(slice_939,6);\
__declare_static_bit_vector(CONCAT_u4_u10_940,10);\
__declare_static_bit_vector(konst_942,16);\
bit_vector_clear(&konst_942);\
konst_942.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_943,1);\
__declare_static_bit_vector(XOR_u1_u1_945,1);\
__declare_static_bit_vector(slice_947,4);\
__declare_static_bit_vector(CONCAT_u1_u5_948,5);\
__declare_static_bit_vector(CONCAT_u5_u6_950,6);\
__declare_static_bit_vector(CONCAT_u10_u16_951,16);\
bit_vector_slice(&(CRC_16_1), &(slice_931), 12);\
bit_vector_clear(&konst_933);\
konst_933.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_1), &(konst_933), &(BITSEL_u16_u1_934));\
bit_vector_xor(&(BITSEL_u16_u1_934), &(inv1), &(XOR_u1_u1_936));\
bit_vector_concatenate( &(slice_931), &(XOR_u1_u1_936), &(CONCAT_u3_u4_937));\
bit_vector_slice(&(CRC_16_1), &(slice_939), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_937), &(slice_939), &(CONCAT_u4_u10_940));\
bit_vector_clear(&konst_942);\
konst_942.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_1), &(konst_942), &(BITSEL_u16_u1_943));\
bit_vector_xor(&(BITSEL_u16_u1_943), &(inv1), &(XOR_u1_u1_945));\
bit_vector_slice(&(CRC_16_1), &(slice_947), 0);\
bit_vector_concatenate( &(XOR_u1_u1_945), &(slice_947), &(CONCAT_u1_u5_948));\
bit_vector_concatenate( &(CONCAT_u1_u5_948), &(inv1), &(CONCAT_u5_u6_950));\
bit_vector_concatenate( &(CONCAT_u4_u10_940), &(CONCAT_u5_u6_950), &(CONCAT_u10_u16_951));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_1), &(CONCAT_u10_u16_951));\
;

#define _dataRx_assign_stmt_957_c_macro_ __declare_static_bit_vector(konst_955,1024);\
bit_vector_clear(&konst_955);\
konst_955.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_956,1024);\
bit_vector_clear(&konst_955);\
konst_955.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData1), &(konst_955), &(SHL_u1024_u1024_956));\
bit_vector_cast_to_bit_vector(0, &(nextTempData1), &(SHL_u1024_u1024_956));\
;

#define _dataRx_assign_stmt_962_c_macro_ __declare_static_bit_vector(konst_960,13);\
bit_vector_clear(&konst_960);\
konst_960.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_961,13);\
bit_vector_clear(&konst_960);\
konst_960.val.byte_array[0] = 1;\
bit_vector_plus( &(J_1), &(konst_960), &(ADD_u13_u13_961));\
bit_vector_cast_to_bit_vector(0, &(next_J_1), &(ADD_u13_u13_961));\
;

#define _dataRx_assign_stmt_971_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_970,1);\
bit_vector_not_equal(0, &(nextCRC_1), &(nextCRC16_1), &NEQ_u16_u1_970);\
bit_vector_cast_to_bit_vector(0, &(crcError1), &(NEQ_u16_u1_970));\
;

#define _dataRx_assign_stmt_974_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_973,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_973));\
bit_vector_cast_to_bit_vector(0, &(startBit2), &(RPIPE_DAT2Rx_973));\
;

#define _dataRx_branch_block_stmt_975_c_export_decl_macro_ __declare_static_bit_vector(dat2__next_data2,1024);\
__declare_static_bit_vector(I_2,10);\
__declare_static_bit_vector(dat2,1024);\
__declare_static_bit_vector(bit7_2,8);\
__declare_static_bit_vector(bit6_2,8);\
__declare_static_bit_vector(bit5_2,8);\
__declare_static_bit_vector(bit4_2,8);\
__declare_static_bit_vector(bit3_2,8);\
__declare_static_bit_vector(bit2_2,8);\
__declare_static_bit_vector(bit1_2,8);\
__declare_static_bit_vector(bit0_2,8);\
__declare_static_bit_vector(next_data2,1024);\
__declare_static_bit_vector(next_I_2,10);\


#define _dataRx_merge_stmt_977_c_preamble_macro_ uint8_t merge_stmt_977_entry_flag;\
merge_stmt_977_entry_flag = do_while_entry_flag;\
goto merge_stmt_977_run;\
merge_stmt_977_run: ;\

#define _dataRx_phi_stmt_978_c_macro_ __declare_static_bit_vector(konst_980,10);\
bit_vector_clear(&konst_980);\
__declare_static_bit_vector(type_cast_981,10);\
bit_vector_clear(&type_cast_981);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_2), &(next_I_2));\
}\
else {\
__declare_static_bit_vector(konst_980,10);\
bit_vector_clear(&konst_980);\
__declare_static_bit_vector(type_cast_981,10);\
bit_vector_clear(&type_cast_981);\
bit_vector_clear(&konst_980);\
bit_vector_bitcast_to_bit_vector( &(type_cast_981), &(konst_980));\
bit_vector_cast_to_bit_vector(0, &(I_2), &(type_cast_981));\
}\
;

#define _dataRx_phi_stmt_983_c_macro_ __declare_static_bit_vector(konst_985,1024);\
bit_vector_clear(&konst_985);\
__declare_static_bit_vector(type_cast_986,1024);\
bit_vector_clear(&type_cast_986);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_985,1024);\
bit_vector_clear(&konst_985);\
__declare_static_bit_vector(type_cast_986,1024);\
bit_vector_clear(&type_cast_986);\
bit_vector_clear(&konst_985);\
bit_vector_bitcast_to_bit_vector( &(type_cast_986), &(konst_985));\
bit_vector_cast_to_bit_vector(0, &(dat2), &(type_cast_986));\
}\
;
;

#define _dataRx_merge_stmt_977_c_postamble_macro_ merge_stmt_977_entry_flag = 0;

#define _dataRx_assign_stmt_991_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_990,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_990));\
bit_vector_cast_to_bit_vector(0, &(bit7_2), &(RPIPE_DAT2Rx_990));\
;

#define _dataRx_assign_stmt_994_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_993,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_993));\
bit_vector_cast_to_bit_vector(0, &(bit6_2), &(RPIPE_DAT2Rx_993));\
;

#define _dataRx_assign_stmt_997_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_996,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_996));\
bit_vector_cast_to_bit_vector(0, &(bit5_2), &(RPIPE_DAT2Rx_996));\
;

#define _dataRx_assign_stmt_1000_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_999,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_999));\
bit_vector_cast_to_bit_vector(0, &(bit4_2), &(RPIPE_DAT2Rx_999));\
;

#define _dataRx_assign_stmt_1003_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1002,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1002));\
bit_vector_cast_to_bit_vector(0, &(bit3_2), &(RPIPE_DAT2Rx_1002));\
;

#define _dataRx_assign_stmt_1006_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1005,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1005));\
bit_vector_cast_to_bit_vector(0, &(bit2_2), &(RPIPE_DAT2Rx_1005));\
;

#define _dataRx_assign_stmt_1009_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1008,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1008));\
bit_vector_cast_to_bit_vector(0, &(bit1_2), &(RPIPE_DAT2Rx_1008));\
;

#define _dataRx_assign_stmt_1012_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1011,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1011));\
bit_vector_cast_to_bit_vector(0, &(bit0_2), &(RPIPE_DAT2Rx_1011));\
;

#define _dataRx_assign_stmt_1052_c_macro_ __declare_static_bit_vector(konst_1015,1024);\
bit_vector_clear(&konst_1015);\
konst_1015.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_1016,1024);\
__declare_static_bit_vector(konst_1017,1016);\
bit_vector_clear(&konst_1017);\
__declare_static_bit_vector(type_cast_1018,1016);\
bit_vector_clear(&type_cast_1018);\
__declare_static_bit_vector(konst_1020,8);\
bit_vector_clear(&konst_1020);\
__declare_static_bit_vector(BITSEL_u8_u1_1021,1);\
__declare_static_bit_vector(konst_1023,8);\
bit_vector_clear(&konst_1023);\
__declare_static_bit_vector(BITSEL_u8_u1_1024,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1025,2);\
__declare_static_bit_vector(konst_1027,8);\
bit_vector_clear(&konst_1027);\
__declare_static_bit_vector(BITSEL_u8_u1_1028,1);\
__declare_static_bit_vector(konst_1030,8);\
bit_vector_clear(&konst_1030);\
__declare_static_bit_vector(BITSEL_u8_u1_1031,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1032,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1033,4);\
__declare_static_bit_vector(konst_1035,8);\
bit_vector_clear(&konst_1035);\
__declare_static_bit_vector(BITSEL_u8_u1_1036,1);\
__declare_static_bit_vector(konst_1038,8);\
bit_vector_clear(&konst_1038);\
__declare_static_bit_vector(BITSEL_u8_u1_1039,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1040,2);\
__declare_static_bit_vector(konst_1042,8);\
bit_vector_clear(&konst_1042);\
__declare_static_bit_vector(BITSEL_u8_u1_1043,1);\
__declare_static_bit_vector(konst_1045,8);\
bit_vector_clear(&konst_1045);\
__declare_static_bit_vector(BITSEL_u8_u1_1046,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1047,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1048,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1049,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_1050,1024);\
__declare_static_bit_vector(OR_u1024_u1024_1051,1024);\
bit_vector_clear(&konst_1015);\
konst_1015.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat2), &(konst_1015), &(SHL_u1024_u1024_1016));\
bit_vector_clear(&konst_1017);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1018), &(konst_1017));\
bit_vector_clear(&konst_1020);\
bit_vector_bitsel( &(bit7_2), &(konst_1020), &(BITSEL_u8_u1_1021));\
bit_vector_clear(&konst_1023);\
bit_vector_bitsel( &(bit6_2), &(konst_1023), &(BITSEL_u8_u1_1024));\
bit_vector_concatenate( &(BITSEL_u8_u1_1021), &(BITSEL_u8_u1_1024), &(CONCAT_u1_u2_1025));\
bit_vector_clear(&konst_1027);\
bit_vector_bitsel( &(bit5_2), &(konst_1027), &(BITSEL_u8_u1_1028));\
bit_vector_clear(&konst_1030);\
bit_vector_bitsel( &(bit4_2), &(konst_1030), &(BITSEL_u8_u1_1031));\
bit_vector_concatenate( &(BITSEL_u8_u1_1028), &(BITSEL_u8_u1_1031), &(CONCAT_u1_u2_1032));\
bit_vector_concatenate( &(CONCAT_u1_u2_1025), &(CONCAT_u1_u2_1032), &(CONCAT_u2_u4_1033));\
bit_vector_clear(&konst_1035);\
bit_vector_bitsel( &(bit3_2), &(konst_1035), &(BITSEL_u8_u1_1036));\
bit_vector_clear(&konst_1038);\
bit_vector_bitsel( &(bit2_2), &(konst_1038), &(BITSEL_u8_u1_1039));\
bit_vector_concatenate( &(BITSEL_u8_u1_1036), &(BITSEL_u8_u1_1039), &(CONCAT_u1_u2_1040));\
bit_vector_clear(&konst_1042);\
bit_vector_bitsel( &(bit1_2), &(konst_1042), &(BITSEL_u8_u1_1043));\
bit_vector_clear(&konst_1045);\
bit_vector_bitsel( &(bit0_2), &(konst_1045), &(BITSEL_u8_u1_1046));\
bit_vector_concatenate( &(BITSEL_u8_u1_1043), &(BITSEL_u8_u1_1046), &(CONCAT_u1_u2_1047));\
bit_vector_concatenate( &(CONCAT_u1_u2_1040), &(CONCAT_u1_u2_1047), &(CONCAT_u2_u4_1048));\
bit_vector_concatenate( &(CONCAT_u2_u4_1033), &(CONCAT_u2_u4_1048), &(CONCAT_u4_u8_1049));\
bit_vector_concatenate( &(type_cast_1018), &(CONCAT_u4_u8_1049), &(CONCAT_u1016_u1024_1050));\
bit_vector_or(&(SHL_u1024_u1024_1016), &(CONCAT_u1016_u1024_1050), &(OR_u1024_u1024_1051));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1024_u1024_1051));\
;

#define _dataRx_assign_stmt_1057_c_macro_ __declare_static_bit_vector(konst_1055,10);\
bit_vector_clear(&konst_1055);\
konst_1055.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1056,10);\
bit_vector_clear(&konst_1055);\
konst_1055.val.byte_array[0] = 1;\
bit_vector_plus( &(I_2), &(konst_1055), &(ADD_u10_u10_1056));\
bit_vector_cast_to_bit_vector(0, &(next_I_2), &(ADD_u10_u10_1056));\
;
;

#define _dataRx_branch_block_stmt_975_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat2__next_data2), &(next_data2));\
;

#define _dataRx_merge_stmt_1064_c_preamble_macro_ uint8_t merge_stmt_1064_entry_flag;\
merge_stmt_1064_entry_flag = do_while_entry_flag;\
goto merge_stmt_1064_run;\
merge_stmt_1064_run: ;\

#define _dataRx_phi_stmt_1065_c_macro_ __declare_static_bit_vector(konst_1067,5);\
bit_vector_clear(&konst_1067);\
__declare_static_bit_vector(type_cast_1068,5);\
bit_vector_clear(&type_cast_1068);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_2), &(next_K_2));\
}\
else {\
__declare_static_bit_vector(konst_1067,5);\
bit_vector_clear(&konst_1067);\
__declare_static_bit_vector(type_cast_1068,5);\
bit_vector_clear(&type_cast_1068);\
bit_vector_clear(&konst_1067);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1068), &(konst_1067));\
bit_vector_cast_to_bit_vector(0, &(K_2), &(type_cast_1068));\
}\
;

#define _dataRx_phi_stmt_1070_c_macro_ __declare_static_bit_vector(konst_1072,16);\
bit_vector_clear(&konst_1072);\
__declare_static_bit_vector(type_cast_1073,16);\
bit_vector_clear(&type_cast_1073);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_2), &(nextCRC_2));\
}\
else {\
__declare_static_bit_vector(konst_1072,16);\
bit_vector_clear(&konst_1072);\
__declare_static_bit_vector(type_cast_1073,16);\
bit_vector_clear(&type_cast_1073);\
bit_vector_clear(&konst_1072);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1073), &(konst_1072));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_2), &(type_cast_1073));\
}\
;
;

#define _dataRx_merge_stmt_1064_c_postamble_macro_ merge_stmt_1064_entry_flag = 0;

#define _dataRx_assign_stmt_1087_c_macro_ __declare_static_bit_vector(konst_1078,16);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1079,16);\
__declare_static_bit_vector(konst_1080,15);\
bit_vector_clear(&konst_1080);\
__declare_static_bit_vector(type_cast_1081,15);\
bit_vector_clear(&type_cast_1081);\
__declare_static_bit_vector(RPIPE_DAT2Rx_1082,8);\
__declare_static_bit_vector(konst_1083,8);\
bit_vector_clear(&konst_1083);\
__declare_static_bit_vector(BITSEL_u8_u1_1084,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1085,16);\
__declare_static_bit_vector(OR_u16_u16_1086,16);\
bit_vector_clear(&konst_1078);\
konst_1078.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_2), &(konst_1078), &(SHL_u16_u16_1079));\
bit_vector_clear(&konst_1080);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1081), &(konst_1080));\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1082));\
bit_vector_clear(&konst_1083);\
bit_vector_bitsel( &(RPIPE_DAT2Rx_1082), &(konst_1083), &(BITSEL_u8_u1_1084));\
bit_vector_concatenate( &(type_cast_1081), &(BITSEL_u8_u1_1084), &(CONCAT_u15_u16_1085));\
bit_vector_or(&(SHL_u16_u16_1079), &(CONCAT_u15_u16_1085), &(OR_u16_u16_1086));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_2), &(OR_u16_u16_1086));\
;

#define _dataRx_assign_stmt_1092_c_macro_ __declare_static_bit_vector(konst_1090,5);\
bit_vector_clear(&konst_1090);\
konst_1090.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1091,5);\
bit_vector_clear(&konst_1090);\
konst_1090.val.byte_array[0] = 1;\
bit_vector_plus( &(K_2), &(konst_1090), &(ADD_u5_u5_1091));\
bit_vector_cast_to_bit_vector(0, &(next_K_2), &(ADD_u5_u5_1091));\
;

#define _dataRx_assign_stmt_1099_c_macro_ __declare_static_bit_vector(RPIPE_DAT2Rx_1098,8);\
read_bit_vector_from_pipe("DAT2Rx",&(RPIPE_DAT2Rx_1098));\
bit_vector_cast_to_bit_vector(0, &(stopBit2), &(RPIPE_DAT2Rx_1098));\
;

#define _dataRx_assign_stmt_1104_c_macro_ __declare_static_bit_vector(konst_1102,8);\
bit_vector_clear(&konst_1102);\
__declare_static_bit_vector(EQ_u8_u1_1103,1);\
bit_vector_clear(&konst_1102);\
bit_vector_equal(0, &(stopBit2), &(konst_1102), &(EQ_u8_u1_1103));\
bit_vector_cast_to_bit_vector(0, &(stopBitError2), &(EQ_u8_u1_1103));\
;

#define _dataRx_merge_stmt_1106_c_preamble_macro_ uint8_t merge_stmt_1106_entry_flag;\
merge_stmt_1106_entry_flag = do_while_entry_flag;\
goto merge_stmt_1106_run;\
merge_stmt_1106_run: ;\

#define _dataRx_phi_stmt_1107_c_macro_ __declare_static_bit_vector(konst_1109,13);\
bit_vector_clear(&konst_1109);\
__declare_static_bit_vector(type_cast_1110,13);\
bit_vector_clear(&type_cast_1110);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_2), &(next_J_2));\
}\
else {\
__declare_static_bit_vector(konst_1109,13);\
bit_vector_clear(&konst_1109);\
__declare_static_bit_vector(type_cast_1110,13);\
bit_vector_clear(&type_cast_1110);\
bit_vector_clear(&konst_1109);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1110), &(konst_1109));\
bit_vector_cast_to_bit_vector(0, &(J_2), &(type_cast_1110));\
}\
;

#define _dataRx_phi_stmt_1112_c_macro_ __declare_static_bit_vector(konst_1114,16);\
bit_vector_clear(&konst_1114);\
__declare_static_bit_vector(type_cast_1115,16);\
bit_vector_clear(&type_cast_1115);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(nextCRC16_2));\
}\
else {\
__declare_static_bit_vector(konst_1114,16);\
bit_vector_clear(&konst_1114);\
__declare_static_bit_vector(type_cast_1115,16);\
bit_vector_clear(&type_cast_1115);\
bit_vector_clear(&konst_1114);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1115), &(konst_1114));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_2), &(type_cast_1115));\
}\
;

#define _dataRx_phi_stmt_1117_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(nextTempData2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData2), &(dat2__next_data2));\
}\
;
;

#define _dataRx_merge_stmt_1106_c_postamble_macro_ merge_stmt_1106_entry_flag = 0;

#define _dataRx_assign_stmt_1130_c_macro_ __declare_static_bit_vector(konst_1124,1024);\
bit_vector_clear(&konst_1124);\
konst_1124.val.byte_array[0] = 255;\
konst_1124.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1125,1);\
__declare_static_bit_vector(konst_1127,16);\
bit_vector_clear(&konst_1127);\
konst_1127.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1128,1);\
__declare_static_bit_vector(XOR_u1_u1_1129,1);\
bit_vector_clear(&konst_1124);\
konst_1124.val.byte_array[0] = 255;\
konst_1124.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData2), &(konst_1124), &(BITSEL_u1024_u1_1125));\
bit_vector_clear(&konst_1127);\
konst_1127.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1127), &(BITSEL_u16_u1_1128));\
bit_vector_xor(&(BITSEL_u1024_u1_1125), &(BITSEL_u16_u1_1128), &(XOR_u1_u1_1129));\
bit_vector_cast_to_bit_vector(0, &(inv2), &(XOR_u1_u1_1129));\
;

#define _dataRx_assign_stmt_1154_c_macro_ __declare_static_bit_vector(slice_1133,3);\
__declare_static_bit_vector(konst_1135,16);\
bit_vector_clear(&konst_1135);\
konst_1135.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1136,1);\
__declare_static_bit_vector(XOR_u1_u1_1138,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1139,4);\
__declare_static_bit_vector(slice_1141,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1142,10);\
__declare_static_bit_vector(konst_1144,16);\
bit_vector_clear(&konst_1144);\
konst_1144.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1145,1);\
__declare_static_bit_vector(XOR_u1_u1_1147,1);\
__declare_static_bit_vector(slice_1149,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1150,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1152,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1153,16);\
bit_vector_slice(&(CRC_16_2), &(slice_1133), 12);\
bit_vector_clear(&konst_1135);\
konst_1135.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1135), &(BITSEL_u16_u1_1136));\
bit_vector_xor(&(BITSEL_u16_u1_1136), &(inv2), &(XOR_u1_u1_1138));\
bit_vector_concatenate( &(slice_1133), &(XOR_u1_u1_1138), &(CONCAT_u3_u4_1139));\
bit_vector_slice(&(CRC_16_2), &(slice_1141), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1139), &(slice_1141), &(CONCAT_u4_u10_1142));\
bit_vector_clear(&konst_1144);\
konst_1144.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_2), &(konst_1144), &(BITSEL_u16_u1_1145));\
bit_vector_xor(&(BITSEL_u16_u1_1145), &(inv2), &(XOR_u1_u1_1147));\
bit_vector_slice(&(CRC_16_2), &(slice_1149), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1147), &(slice_1149), &(CONCAT_u1_u5_1150));\
bit_vector_concatenate( &(CONCAT_u1_u5_1150), &(inv2), &(CONCAT_u5_u6_1152));\
bit_vector_concatenate( &(CONCAT_u4_u10_1142), &(CONCAT_u5_u6_1152), &(CONCAT_u10_u16_1153));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_2), &(CONCAT_u10_u16_1153));\
;

#define _dataRx_assign_stmt_1159_c_macro_ __declare_static_bit_vector(konst_1157,1024);\
bit_vector_clear(&konst_1157);\
konst_1157.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_1158,1024);\
bit_vector_clear(&konst_1157);\
konst_1157.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData2), &(konst_1157), &(SHL_u1024_u1024_1158));\
bit_vector_cast_to_bit_vector(0, &(nextTempData2), &(SHL_u1024_u1024_1158));\
;

#define _dataRx_assign_stmt_1164_c_macro_ __declare_static_bit_vector(konst_1162,13);\
bit_vector_clear(&konst_1162);\
konst_1162.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1163,13);\
bit_vector_clear(&konst_1162);\
konst_1162.val.byte_array[0] = 1;\
bit_vector_plus( &(J_2), &(konst_1162), &(ADD_u13_u13_1163));\
bit_vector_cast_to_bit_vector(0, &(next_J_2), &(ADD_u13_u13_1163));\
;

#define _dataRx_assign_stmt_1173_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1172,1);\
bit_vector_not_equal(0, &(nextCRC_2), &(nextCRC16_2), &NEQ_u16_u1_1172);\
bit_vector_cast_to_bit_vector(0, &(crcError2), &(NEQ_u16_u1_1172));\
;

#define _dataRx_assign_stmt_1176_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1175,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1175));\
bit_vector_cast_to_bit_vector(0, &(startBit3), &(RPIPE_DAT3Rx_1175));\
;

#define _dataRx_branch_block_stmt_1177_c_export_decl_macro_ __declare_static_bit_vector(dat3__next_data3,1024);\
__declare_static_bit_vector(I_3,10);\
__declare_static_bit_vector(dat3,1024);\
__declare_static_bit_vector(bit7_3,8);\
__declare_static_bit_vector(bit6_3,8);\
__declare_static_bit_vector(bit5_3,8);\
__declare_static_bit_vector(bit4_3,8);\
__declare_static_bit_vector(bit3_3,8);\
__declare_static_bit_vector(bit2_3,8);\
__declare_static_bit_vector(bit1_3,8);\
__declare_static_bit_vector(bit0_3,8);\
__declare_static_bit_vector(next_data3,1024);\
__declare_static_bit_vector(next_I_3,10);\


#define _dataRx_merge_stmt_1179_c_preamble_macro_ uint8_t merge_stmt_1179_entry_flag;\
merge_stmt_1179_entry_flag = do_while_entry_flag;\
goto merge_stmt_1179_run;\
merge_stmt_1179_run: ;\

#define _dataRx_phi_stmt_1180_c_macro_ __declare_static_bit_vector(konst_1182,10);\
bit_vector_clear(&konst_1182);\
__declare_static_bit_vector(type_cast_1183,10);\
bit_vector_clear(&type_cast_1183);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(I_3), &(next_I_3));\
}\
else {\
__declare_static_bit_vector(konst_1182,10);\
bit_vector_clear(&konst_1182);\
__declare_static_bit_vector(type_cast_1183,10);\
bit_vector_clear(&type_cast_1183);\
bit_vector_clear(&konst_1182);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1183), &(konst_1182));\
bit_vector_cast_to_bit_vector(0, &(I_3), &(type_cast_1183));\
}\
;

#define _dataRx_phi_stmt_1185_c_macro_ __declare_static_bit_vector(konst_1187,1024);\
bit_vector_clear(&konst_1187);\
__declare_static_bit_vector(type_cast_1188,1024);\
bit_vector_clear(&type_cast_1188);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_1187,1024);\
bit_vector_clear(&konst_1187);\
__declare_static_bit_vector(type_cast_1188,1024);\
bit_vector_clear(&type_cast_1188);\
bit_vector_clear(&konst_1187);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1188), &(konst_1187));\
bit_vector_cast_to_bit_vector(0, &(dat3), &(type_cast_1188));\
}\
;
;

#define _dataRx_merge_stmt_1179_c_postamble_macro_ merge_stmt_1179_entry_flag = 0;

#define _dataRx_assign_stmt_1193_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1192,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1192));\
bit_vector_cast_to_bit_vector(0, &(bit7_3), &(RPIPE_DAT3Rx_1192));\
;

#define _dataRx_assign_stmt_1196_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1195,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1195));\
bit_vector_cast_to_bit_vector(0, &(bit6_3), &(RPIPE_DAT3Rx_1195));\
;

#define _dataRx_assign_stmt_1199_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1198,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1198));\
bit_vector_cast_to_bit_vector(0, &(bit5_3), &(RPIPE_DAT3Rx_1198));\
;

#define _dataRx_assign_stmt_1202_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1201,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1201));\
bit_vector_cast_to_bit_vector(0, &(bit4_3), &(RPIPE_DAT3Rx_1201));\
;

#define _dataRx_assign_stmt_1205_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1204,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1204));\
bit_vector_cast_to_bit_vector(0, &(bit3_3), &(RPIPE_DAT3Rx_1204));\
;

#define _dataRx_assign_stmt_1208_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1207,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1207));\
bit_vector_cast_to_bit_vector(0, &(bit2_3), &(RPIPE_DAT3Rx_1207));\
;

#define _dataRx_assign_stmt_1211_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1210,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1210));\
bit_vector_cast_to_bit_vector(0, &(bit1_3), &(RPIPE_DAT3Rx_1210));\
;

#define _dataRx_assign_stmt_1214_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1213,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1213));\
bit_vector_cast_to_bit_vector(0, &(bit0_3), &(RPIPE_DAT3Rx_1213));\
;

#define _dataRx_assign_stmt_1254_c_macro_ __declare_static_bit_vector(konst_1217,1024);\
bit_vector_clear(&konst_1217);\
konst_1217.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u1024_u1024_1218,1024);\
__declare_static_bit_vector(konst_1219,1016);\
bit_vector_clear(&konst_1219);\
__declare_static_bit_vector(type_cast_1220,1016);\
bit_vector_clear(&type_cast_1220);\
__declare_static_bit_vector(konst_1222,8);\
bit_vector_clear(&konst_1222);\
__declare_static_bit_vector(BITSEL_u8_u1_1223,1);\
__declare_static_bit_vector(konst_1225,8);\
bit_vector_clear(&konst_1225);\
__declare_static_bit_vector(BITSEL_u8_u1_1226,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1227,2);\
__declare_static_bit_vector(konst_1229,8);\
bit_vector_clear(&konst_1229);\
__declare_static_bit_vector(BITSEL_u8_u1_1230,1);\
__declare_static_bit_vector(konst_1232,8);\
bit_vector_clear(&konst_1232);\
__declare_static_bit_vector(BITSEL_u8_u1_1233,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1234,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1235,4);\
__declare_static_bit_vector(konst_1237,8);\
bit_vector_clear(&konst_1237);\
__declare_static_bit_vector(BITSEL_u8_u1_1238,1);\
__declare_static_bit_vector(konst_1240,8);\
bit_vector_clear(&konst_1240);\
__declare_static_bit_vector(BITSEL_u8_u1_1241,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1242,2);\
__declare_static_bit_vector(konst_1244,8);\
bit_vector_clear(&konst_1244);\
__declare_static_bit_vector(BITSEL_u8_u1_1245,1);\
__declare_static_bit_vector(konst_1247,8);\
bit_vector_clear(&konst_1247);\
__declare_static_bit_vector(BITSEL_u8_u1_1248,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1249,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1250,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1251,8);\
__declare_static_bit_vector(CONCAT_u1016_u1024_1252,1024);\
__declare_static_bit_vector(OR_u1024_u1024_1253,1024);\
bit_vector_clear(&konst_1217);\
konst_1217.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat3), &(konst_1217), &(SHL_u1024_u1024_1218));\
bit_vector_clear(&konst_1219);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1220), &(konst_1219));\
bit_vector_clear(&konst_1222);\
bit_vector_bitsel( &(bit7_3), &(konst_1222), &(BITSEL_u8_u1_1223));\
bit_vector_clear(&konst_1225);\
bit_vector_bitsel( &(bit6_3), &(konst_1225), &(BITSEL_u8_u1_1226));\
bit_vector_concatenate( &(BITSEL_u8_u1_1223), &(BITSEL_u8_u1_1226), &(CONCAT_u1_u2_1227));\
bit_vector_clear(&konst_1229);\
bit_vector_bitsel( &(bit5_3), &(konst_1229), &(BITSEL_u8_u1_1230));\
bit_vector_clear(&konst_1232);\
bit_vector_bitsel( &(bit4_3), &(konst_1232), &(BITSEL_u8_u1_1233));\
bit_vector_concatenate( &(BITSEL_u8_u1_1230), &(BITSEL_u8_u1_1233), &(CONCAT_u1_u2_1234));\
bit_vector_concatenate( &(CONCAT_u1_u2_1227), &(CONCAT_u1_u2_1234), &(CONCAT_u2_u4_1235));\
bit_vector_clear(&konst_1237);\
bit_vector_bitsel( &(bit3_3), &(konst_1237), &(BITSEL_u8_u1_1238));\
bit_vector_clear(&konst_1240);\
bit_vector_bitsel( &(bit2_3), &(konst_1240), &(BITSEL_u8_u1_1241));\
bit_vector_concatenate( &(BITSEL_u8_u1_1238), &(BITSEL_u8_u1_1241), &(CONCAT_u1_u2_1242));\
bit_vector_clear(&konst_1244);\
bit_vector_bitsel( &(bit1_3), &(konst_1244), &(BITSEL_u8_u1_1245));\
bit_vector_clear(&konst_1247);\
bit_vector_bitsel( &(bit0_3), &(konst_1247), &(BITSEL_u8_u1_1248));\
bit_vector_concatenate( &(BITSEL_u8_u1_1245), &(BITSEL_u8_u1_1248), &(CONCAT_u1_u2_1249));\
bit_vector_concatenate( &(CONCAT_u1_u2_1242), &(CONCAT_u1_u2_1249), &(CONCAT_u2_u4_1250));\
bit_vector_concatenate( &(CONCAT_u2_u4_1235), &(CONCAT_u2_u4_1250), &(CONCAT_u4_u8_1251));\
bit_vector_concatenate( &(type_cast_1220), &(CONCAT_u4_u8_1251), &(CONCAT_u1016_u1024_1252));\
bit_vector_or(&(SHL_u1024_u1024_1218), &(CONCAT_u1016_u1024_1252), &(OR_u1024_u1024_1253));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1024_u1024_1253));\
;

#define _dataRx_assign_stmt_1259_c_macro_ __declare_static_bit_vector(konst_1257,10);\
bit_vector_clear(&konst_1257);\
konst_1257.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1258,10);\
bit_vector_clear(&konst_1257);\
konst_1257.val.byte_array[0] = 1;\
bit_vector_plus( &(I_3), &(konst_1257), &(ADD_u10_u10_1258));\
bit_vector_cast_to_bit_vector(0, &(next_I_3), &(ADD_u10_u10_1258));\
;
;

#define _dataRx_branch_block_stmt_1177_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat3__next_data3), &(next_data3));\
;

#define _dataRx_merge_stmt_1266_c_preamble_macro_ uint8_t merge_stmt_1266_entry_flag;\
merge_stmt_1266_entry_flag = do_while_entry_flag;\
goto merge_stmt_1266_run;\
merge_stmt_1266_run: ;\

#define _dataRx_phi_stmt_1267_c_macro_ __declare_static_bit_vector(konst_1269,5);\
bit_vector_clear(&konst_1269);\
__declare_static_bit_vector(type_cast_1270,5);\
bit_vector_clear(&type_cast_1270);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(K_3), &(next_K_3));\
}\
else {\
__declare_static_bit_vector(konst_1269,5);\
bit_vector_clear(&konst_1269);\
__declare_static_bit_vector(type_cast_1270,5);\
bit_vector_clear(&type_cast_1270);\
bit_vector_clear(&konst_1269);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1270), &(konst_1269));\
bit_vector_cast_to_bit_vector(0, &(K_3), &(type_cast_1270));\
}\
;

#define _dataRx_phi_stmt_1272_c_macro_ __declare_static_bit_vector(konst_1274,16);\
bit_vector_clear(&konst_1274);\
__declare_static_bit_vector(type_cast_1275,16);\
bit_vector_clear(&type_cast_1275);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC_3), &(nextCRC_3));\
}\
else {\
__declare_static_bit_vector(konst_1274,16);\
bit_vector_clear(&konst_1274);\
__declare_static_bit_vector(type_cast_1275,16);\
bit_vector_clear(&type_cast_1275);\
bit_vector_clear(&konst_1274);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1275), &(konst_1274));\
bit_vector_cast_to_bit_vector(0, &(currentCRC_3), &(type_cast_1275));\
}\
;
;

#define _dataRx_merge_stmt_1266_c_postamble_macro_ merge_stmt_1266_entry_flag = 0;

#define _dataRx_assign_stmt_1289_c_macro_ __declare_static_bit_vector(konst_1280,16);\
bit_vector_clear(&konst_1280);\
konst_1280.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1281,16);\
__declare_static_bit_vector(konst_1282,15);\
bit_vector_clear(&konst_1282);\
__declare_static_bit_vector(type_cast_1283,15);\
bit_vector_clear(&type_cast_1283);\
__declare_static_bit_vector(RPIPE_DAT3Rx_1284,8);\
__declare_static_bit_vector(konst_1285,8);\
bit_vector_clear(&konst_1285);\
__declare_static_bit_vector(BITSEL_u8_u1_1286,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1287,16);\
__declare_static_bit_vector(OR_u16_u16_1288,16);\
bit_vector_clear(&konst_1280);\
konst_1280.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC_3), &(konst_1280), &(SHL_u16_u16_1281));\
bit_vector_clear(&konst_1282);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1283), &(konst_1282));\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1284));\
bit_vector_clear(&konst_1285);\
bit_vector_bitsel( &(RPIPE_DAT3Rx_1284), &(konst_1285), &(BITSEL_u8_u1_1286));\
bit_vector_concatenate( &(type_cast_1283), &(BITSEL_u8_u1_1286), &(CONCAT_u15_u16_1287));\
bit_vector_or(&(SHL_u16_u16_1281), &(CONCAT_u15_u16_1287), &(OR_u16_u16_1288));\
bit_vector_cast_to_bit_vector(0, &(nextCRC_3), &(OR_u16_u16_1288));\
;

#define _dataRx_assign_stmt_1294_c_macro_ __declare_static_bit_vector(konst_1292,5);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1293,5);\
bit_vector_clear(&konst_1292);\
konst_1292.val.byte_array[0] = 1;\
bit_vector_plus( &(K_3), &(konst_1292), &(ADD_u5_u5_1293));\
bit_vector_cast_to_bit_vector(0, &(next_K_3), &(ADD_u5_u5_1293));\
;

#define _dataRx_assign_stmt_1301_c_macro_ __declare_static_bit_vector(RPIPE_DAT3Rx_1300,8);\
read_bit_vector_from_pipe("DAT3Rx",&(RPIPE_DAT3Rx_1300));\
bit_vector_cast_to_bit_vector(0, &(stopBit3), &(RPIPE_DAT3Rx_1300));\
;

#define _dataRx_assign_stmt_1306_c_macro_ __declare_static_bit_vector(konst_1304,8);\
bit_vector_clear(&konst_1304);\
__declare_static_bit_vector(EQ_u8_u1_1305,1);\
bit_vector_clear(&konst_1304);\
bit_vector_equal(0, &(stopBit3), &(konst_1304), &(EQ_u8_u1_1305));\
bit_vector_cast_to_bit_vector(0, &(stopBitError3), &(EQ_u8_u1_1305));\
;

#define _dataRx_merge_stmt_1308_c_preamble_macro_ uint8_t merge_stmt_1308_entry_flag;\
merge_stmt_1308_entry_flag = do_while_entry_flag;\
goto merge_stmt_1308_run;\
merge_stmt_1308_run: ;\

#define _dataRx_phi_stmt_1309_c_macro_ __declare_static_bit_vector(konst_1311,13);\
bit_vector_clear(&konst_1311);\
__declare_static_bit_vector(type_cast_1312,13);\
bit_vector_clear(&type_cast_1312);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(J_3), &(next_J_3));\
}\
else {\
__declare_static_bit_vector(konst_1311,13);\
bit_vector_clear(&konst_1311);\
__declare_static_bit_vector(type_cast_1312,13);\
bit_vector_clear(&type_cast_1312);\
bit_vector_clear(&konst_1311);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1312), &(konst_1311));\
bit_vector_cast_to_bit_vector(0, &(J_3), &(type_cast_1312));\
}\
;

#define _dataRx_phi_stmt_1314_c_macro_ __declare_static_bit_vector(konst_1316,16);\
bit_vector_clear(&konst_1316);\
__declare_static_bit_vector(type_cast_1317,16);\
bit_vector_clear(&type_cast_1317);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(nextCRC16_3));\
}\
else {\
__declare_static_bit_vector(konst_1316,16);\
bit_vector_clear(&konst_1316);\
__declare_static_bit_vector(type_cast_1317,16);\
bit_vector_clear(&type_cast_1317);\
bit_vector_clear(&konst_1316);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1317), &(konst_1316));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_3), &(type_cast_1317));\
}\
;

#define _dataRx_phi_stmt_1319_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(nextTempData3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData3), &(dat3__next_data3));\
}\
;
;

#define _dataRx_merge_stmt_1308_c_postamble_macro_ merge_stmt_1308_entry_flag = 0;

#define _dataRx_assign_stmt_1332_c_macro_ __declare_static_bit_vector(konst_1326,1024);\
bit_vector_clear(&konst_1326);\
konst_1326.val.byte_array[0] = 255;\
konst_1326.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1327,1);\
__declare_static_bit_vector(konst_1329,16);\
bit_vector_clear(&konst_1329);\
konst_1329.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1330,1);\
__declare_static_bit_vector(XOR_u1_u1_1331,1);\
bit_vector_clear(&konst_1326);\
konst_1326.val.byte_array[0] = 255;\
konst_1326.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempData3), &(konst_1326), &(BITSEL_u1024_u1_1327));\
bit_vector_clear(&konst_1329);\
konst_1329.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1329), &(BITSEL_u16_u1_1330));\
bit_vector_xor(&(BITSEL_u1024_u1_1327), &(BITSEL_u16_u1_1330), &(XOR_u1_u1_1331));\
bit_vector_cast_to_bit_vector(0, &(inv3), &(XOR_u1_u1_1331));\
;

#define _dataRx_assign_stmt_1356_c_macro_ __declare_static_bit_vector(slice_1335,3);\
__declare_static_bit_vector(konst_1337,16);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1338,1);\
__declare_static_bit_vector(XOR_u1_u1_1340,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1341,4);\
__declare_static_bit_vector(slice_1343,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1344,10);\
__declare_static_bit_vector(konst_1346,16);\
bit_vector_clear(&konst_1346);\
konst_1346.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1347,1);\
__declare_static_bit_vector(XOR_u1_u1_1349,1);\
__declare_static_bit_vector(slice_1351,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1352,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1354,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1355,16);\
bit_vector_slice(&(CRC_16_3), &(slice_1335), 12);\
bit_vector_clear(&konst_1337);\
konst_1337.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1337), &(BITSEL_u16_u1_1338));\
bit_vector_xor(&(BITSEL_u16_u1_1338), &(inv3), &(XOR_u1_u1_1340));\
bit_vector_concatenate( &(slice_1335), &(XOR_u1_u1_1340), &(CONCAT_u3_u4_1341));\
bit_vector_slice(&(CRC_16_3), &(slice_1343), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1341), &(slice_1343), &(CONCAT_u4_u10_1344));\
bit_vector_clear(&konst_1346);\
konst_1346.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_3), &(konst_1346), &(BITSEL_u16_u1_1347));\
bit_vector_xor(&(BITSEL_u16_u1_1347), &(inv3), &(XOR_u1_u1_1349));\
bit_vector_slice(&(CRC_16_3), &(slice_1351), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1349), &(slice_1351), &(CONCAT_u1_u5_1352));\
bit_vector_concatenate( &(CONCAT_u1_u5_1352), &(inv3), &(CONCAT_u5_u6_1354));\
bit_vector_concatenate( &(CONCAT_u4_u10_1344), &(CONCAT_u5_u6_1354), &(CONCAT_u10_u16_1355));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_3), &(CONCAT_u10_u16_1355));\
;

#define _dataRx_assign_stmt_1361_c_macro_ __declare_static_bit_vector(konst_1359,1024);\
bit_vector_clear(&konst_1359);\
konst_1359.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_1360,1024);\
bit_vector_clear(&konst_1359);\
konst_1359.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData3), &(konst_1359), &(SHL_u1024_u1024_1360));\
bit_vector_cast_to_bit_vector(0, &(nextTempData3), &(SHL_u1024_u1024_1360));\
;

#define _dataRx_assign_stmt_1366_c_macro_ __declare_static_bit_vector(konst_1364,13);\
bit_vector_clear(&konst_1364);\
konst_1364.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1365,13);\
bit_vector_clear(&konst_1364);\
konst_1364.val.byte_array[0] = 1;\
bit_vector_plus( &(J_3), &(konst_1364), &(ADD_u13_u13_1365));\
bit_vector_cast_to_bit_vector(0, &(next_J_3), &(ADD_u13_u13_1365));\
;

#define _dataRx_assign_stmt_1375_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1374,1);\
bit_vector_not_equal(0, &(nextCRC_3), &(nextCRC16_3), &NEQ_u16_u1_1374);\
bit_vector_cast_to_bit_vector(0, &(crcError3), &(NEQ_u16_u1_1374));\
;

#define _dataRx_assign_stmt_1379_c_macro_ __declare_static_bit_vector(konst_1377,10);\
bit_vector_clear(&konst_1377);\
konst_1377.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1378,10);\
bit_vector_clear(&type_cast_1378);\
type_cast_1378.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1377);\
konst_1377.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1378), &(konst_1377));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1378));\
;

#define _dataRx_assign_stmt_1389_c_macro_ __declare_static_bit_vector(konst_1387,8);\
bit_vector_clear(&konst_1387);\
konst_1387.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1388,8);\
bit_vector_clear(&konst_1387);\
konst_1387.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1387), &(AND_u8_u8_1388));\
__declare_static_bit_vector(konst_1384,32);\
bit_vector_clear(&konst_1384);\
konst_1384.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1384);\
konst_1384.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1384)])), &(AND_u8_u8_1388));\
;

#define _dataRx_merge_stmt_1392_c_preamble_macro_ uint8_t merge_stmt_1392_entry_flag;\
merge_stmt_1392_entry_flag = do_while_entry_flag;\
goto merge_stmt_1392_run;\
merge_stmt_1392_run: ;\

#define _dataRx_phi_stmt_1393_c_macro_ __declare_static_bit_vector(konst_1395,10);\
bit_vector_clear(&konst_1395);\
__declare_static_bit_vector(type_cast_1396,10);\
bit_vector_clear(&type_cast_1396);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(B), &(next_B));\
}\
else {\
__declare_static_bit_vector(konst_1395,10);\
bit_vector_clear(&konst_1395);\
__declare_static_bit_vector(type_cast_1396,10);\
bit_vector_clear(&type_cast_1396);\
bit_vector_clear(&konst_1395);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1396), &(konst_1395));\
bit_vector_cast_to_bit_vector(0, &(B), &(type_cast_1396));\
}\
;

#define _dataRx_phi_stmt_1398_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(nextDataForBuffer0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer0), &(dat0__next_data0));\
}\
;

#define _dataRx_phi_stmt_1402_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(nextDataForBuffer1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer1), &(dat1__next_data1));\
}\
;

#define _dataRx_phi_stmt_1406_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(nextDataForBuffer2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer2), &(dat2__next_data2));\
}\
;

#define _dataRx_phi_stmt_1410_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(nextDataForBuffer3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dataForBuffer3), &(dat3__next_data3));\
}\
;
;

#define _dataRx_merge_stmt_1392_c_postamble_macro_ merge_stmt_1392_entry_flag = 0;

#define _dataRx_assign_stmt_1447_c_macro_ __declare_static_bit_vector(konst_1417,1024);\
bit_vector_clear(&konst_1417);\
konst_1417.val.byte_array[0] = 255;\
konst_1417.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1418,1);\
__declare_static_bit_vector(konst_1420,1024);\
bit_vector_clear(&konst_1420);\
konst_1420.val.byte_array[0] = 255;\
konst_1420.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1421,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1422,2);\
__declare_static_bit_vector(konst_1424,1024);\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 255;\
konst_1424.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1425,1);\
__declare_static_bit_vector(konst_1427,1024);\
bit_vector_clear(&konst_1427);\
konst_1427.val.byte_array[0] = 255;\
konst_1427.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1428,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1429,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1430,4);\
__declare_static_bit_vector(konst_1432,1024);\
bit_vector_clear(&konst_1432);\
konst_1432.val.byte_array[0] = 254;\
konst_1432.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1433,1);\
__declare_static_bit_vector(konst_1435,1024);\
bit_vector_clear(&konst_1435);\
konst_1435.val.byte_array[0] = 254;\
konst_1435.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1436,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1437,2);\
__declare_static_bit_vector(konst_1439,1024);\
bit_vector_clear(&konst_1439);\
konst_1439.val.byte_array[0] = 254;\
konst_1439.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1440,1);\
__declare_static_bit_vector(konst_1442,1024);\
bit_vector_clear(&konst_1442);\
konst_1442.val.byte_array[0] = 254;\
konst_1442.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_1443,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1444,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1445,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1446,8);\
bit_vector_clear(&konst_1417);\
konst_1417.val.byte_array[0] = 255;\
konst_1417.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1417), &(BITSEL_u1024_u1_1418));\
bit_vector_clear(&konst_1420);\
konst_1420.val.byte_array[0] = 255;\
konst_1420.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1420), &(BITSEL_u1024_u1_1421));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1418), &(BITSEL_u1024_u1_1421), &(CONCAT_u1_u2_1422));\
bit_vector_clear(&konst_1424);\
konst_1424.val.byte_array[0] = 255;\
konst_1424.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1424), &(BITSEL_u1024_u1_1425));\
bit_vector_clear(&konst_1427);\
konst_1427.val.byte_array[0] = 255;\
konst_1427.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1427), &(BITSEL_u1024_u1_1428));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1425), &(BITSEL_u1024_u1_1428), &(CONCAT_u1_u2_1429));\
bit_vector_concatenate( &(CONCAT_u1_u2_1422), &(CONCAT_u1_u2_1429), &(CONCAT_u2_u4_1430));\
bit_vector_clear(&konst_1432);\
konst_1432.val.byte_array[0] = 254;\
konst_1432.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer0), &(konst_1432), &(BITSEL_u1024_u1_1433));\
bit_vector_clear(&konst_1435);\
konst_1435.val.byte_array[0] = 254;\
konst_1435.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer1), &(konst_1435), &(BITSEL_u1024_u1_1436));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1433), &(BITSEL_u1024_u1_1436), &(CONCAT_u1_u2_1437));\
bit_vector_clear(&konst_1439);\
konst_1439.val.byte_array[0] = 254;\
konst_1439.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer2), &(konst_1439), &(BITSEL_u1024_u1_1440));\
bit_vector_clear(&konst_1442);\
konst_1442.val.byte_array[0] = 254;\
konst_1442.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dataForBuffer3), &(konst_1442), &(BITSEL_u1024_u1_1443));\
bit_vector_concatenate( &(BITSEL_u1024_u1_1440), &(BITSEL_u1024_u1_1443), &(CONCAT_u1_u2_1444));\
bit_vector_concatenate( &(CONCAT_u1_u2_1437), &(CONCAT_u1_u2_1444), &(CONCAT_u2_u4_1445));\
bit_vector_concatenate( &(CONCAT_u2_u4_1430), &(CONCAT_u2_u4_1445), &(CONCAT_u4_u8_1446));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1446));\
;

#define _dataRx_assign_stmt_1452_c_macro_ __declare_static_bit_vector(konst_1450,1024);\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1451,1024);\
bit_vector_clear(&konst_1450);\
konst_1450.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer0), &(konst_1450), &(SHL_u1024_u1024_1451));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer0), &(SHL_u1024_u1024_1451));\
;

#define _dataRx_assign_stmt_1457_c_macro_ __declare_static_bit_vector(konst_1455,1024);\
bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1456,1024);\
bit_vector_clear(&konst_1455);\
konst_1455.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer1), &(konst_1455), &(SHL_u1024_u1024_1456));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer1), &(SHL_u1024_u1024_1456));\
;

#define _dataRx_assign_stmt_1462_c_macro_ __declare_static_bit_vector(konst_1460,1024);\
bit_vector_clear(&konst_1460);\
konst_1460.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1461,1024);\
bit_vector_clear(&konst_1460);\
konst_1460.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer2), &(konst_1460), &(SHL_u1024_u1024_1461));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer2), &(SHL_u1024_u1024_1461));\
;

#define _dataRx_assign_stmt_1467_c_macro_ __declare_static_bit_vector(konst_1465,1024);\
bit_vector_clear(&konst_1465);\
konst_1465.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_1466,1024);\
bit_vector_clear(&konst_1465);\
konst_1465.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dataForBuffer3), &(konst_1465), &(SHL_u1024_u1024_1466));\
bit_vector_cast_to_bit_vector(0, &(nextDataForBuffer3), &(SHL_u1024_u1024_1466));\
;

#define _dataRx_assign_stmt_1472_c_macro_ __declare_static_bit_vector(konst_1470,10);\
bit_vector_clear(&konst_1470);\
konst_1470.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1471,10);\
bit_vector_clear(&konst_1470);\
konst_1470.val.byte_array[0] = 1;\
bit_vector_plus( &(B), &(konst_1470), &(ADD_u10_u10_1471));\
bit_vector_cast_to_bit_vector(0, &(next_B), &(ADD_u10_u10_1471));\
;

#define _dataRx_assign_stmt_1485_c_macro_ __declare_static_bit_vector(OR_u1_u1_1480,1);\
__declare_static_bit_vector(OR_u1_u1_1483,1);\
__declare_static_bit_vector(OR_u1_u1_1484,1);\
bit_vector_or(&(stopBitError0), &(stopBitError1), &(OR_u1_u1_1480));\
bit_vector_or(&(stopBitError2), &(stopBitError3), &(OR_u1_u1_1483));\
bit_vector_or(&(OR_u1_u1_1480), &(OR_u1_u1_1483), &(OR_u1_u1_1484));\
bit_vector_cast_to_bit_vector(0, &(stopBitError_Final), &(OR_u1_u1_1484));\
;

#define _dataRx_assign_stmt_1494_c_macro_ __declare_static_bit_vector(OR_u1_u1_1489,1);\
__declare_static_bit_vector(OR_u1_u1_1492,1);\
__declare_static_bit_vector(OR_u1_u1_1493,1);\
bit_vector_or(&(crcError0), &(crcError1), &(OR_u1_u1_1489));\
bit_vector_or(&(crcError2), &(crcError3), &(OR_u1_u1_1492));\
bit_vector_or(&(OR_u1_u1_1489), &(OR_u1_u1_1492), &(OR_u1_u1_1493));\
bit_vector_cast_to_bit_vector(0, &(crcError_Final), &(OR_u1_u1_1493));\
;

#define _dataRx_assign_stmt_1507_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1498,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1500,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1503,3);\
bit_vector_clear(&CONCAT_u1_u3_1503);\
__declare_static_bit_vector(CONCAT_u3_u5_1505,5);\
bit_vector_clear(&CONCAT_u3_u5_1505);\
__declare_static_bit_vector(CONCAT_u3_u8_1506,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError_Final), &(CONCAT_u1_u2_1498));\
bit_vector_concatenate( &(CONCAT_u1_u2_1498), &(crcError_Final), &(CONCAT_u2_u3_1500));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1503));\
bit_vector_concatenate( &(CONCAT_u1_u3_1503), &(ZERO_2), &(CONCAT_u3_u5_1505));\
bit_vector_concatenate( &(CONCAT_u2_u3_1500), &(CONCAT_u3_u5_1505), &(CONCAT_u3_u8_1506));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_4), &(CONCAT_u3_u8_1506));\
;

#define _dataRx_assign_stmt_1511_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1510,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1510));\
bit_vector_cast_to_bit_vector(0, &(startBit), &(RPIPE_DAT0Rx_1510));\
;

#define _dataRx_branch_block_stmt_1512_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(bit7,8);\
__declare_static_bit_vector(bit6,8);\
__declare_static_bit_vector(bit5,8);\
__declare_static_bit_vector(bit4,8);\
__declare_static_bit_vector(bit3,8);\
__declare_static_bit_vector(bit2,8);\
__declare_static_bit_vector(bit1,8);\
__declare_static_bit_vector(bit0,8);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataRx_merge_stmt_1513_c_preamble_macro_ uint8_t merge_stmt_1513_entry_flag;\
merge_stmt_1513_entry_flag = 1;\
uint8_t loopback1_1512_flag = 0;\
goto merge_stmt_1513_run;\
loopback1_1512: loopback1_1512_flag = 1;\
goto merge_stmt_1513_run;\
merge_stmt_1513_run: ;\

#define _dataRx_phi_stmt_1514_c_macro_ __declare_static_bit_vector(konst_1516,10);\
bit_vector_clear(&konst_1516);\
__declare_static_bit_vector(type_cast_1517,10);\
bit_vector_clear(&type_cast_1517);\
if(loopback1_1512_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_1516,10);\
bit_vector_clear(&konst_1516);\
__declare_static_bit_vector(type_cast_1517,10);\
bit_vector_clear(&type_cast_1517);\
bit_vector_clear(&konst_1516);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1517), &(konst_1516));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_1517));\
}\
;

#define _dataRx_phi_stmt_1519_c_macro_ __declare_static_bit_vector(konst_1522,4096);\
bit_vector_clear(&konst_1522);\
__declare_static_bit_vector(type_cast_1523,4096);\
bit_vector_clear(&type_cast_1523);\
if(loopback1_1512_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_1522,4096);\
bit_vector_clear(&konst_1522);\
__declare_static_bit_vector(type_cast_1523,4096);\
bit_vector_clear(&type_cast_1523);\
bit_vector_clear(&konst_1522);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1523), &(konst_1522));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_1523));\
}\
;
;

#define _dataRx_merge_stmt_1513_c_postamble_macro_ loopback1_1512_flag = 0;\
merge_stmt_1513_entry_flag = 0;

#define _dataRx_assign_stmt_1528_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1527,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1527));\
bit_vector_cast_to_bit_vector(0, &(bit7), &(RPIPE_DAT0Rx_1527));\
;

#define _dataRx_assign_stmt_1531_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1530,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1530));\
bit_vector_cast_to_bit_vector(0, &(bit6), &(RPIPE_DAT0Rx_1530));\
;

#define _dataRx_assign_stmt_1534_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1533,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1533));\
bit_vector_cast_to_bit_vector(0, &(bit5), &(RPIPE_DAT0Rx_1533));\
;

#define _dataRx_assign_stmt_1537_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1536,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1536));\
bit_vector_cast_to_bit_vector(0, &(bit4), &(RPIPE_DAT0Rx_1536));\
;

#define _dataRx_assign_stmt_1540_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1539,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1539));\
bit_vector_cast_to_bit_vector(0, &(bit3), &(RPIPE_DAT0Rx_1539));\
;

#define _dataRx_assign_stmt_1543_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1542,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1542));\
bit_vector_cast_to_bit_vector(0, &(bit2), &(RPIPE_DAT0Rx_1542));\
;

#define _dataRx_assign_stmt_1546_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1545,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1545));\
bit_vector_cast_to_bit_vector(0, &(bit1), &(RPIPE_DAT0Rx_1545));\
;

#define _dataRx_assign_stmt_1549_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1548,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1548));\
bit_vector_cast_to_bit_vector(0, &(bit0), &(RPIPE_DAT0Rx_1548));\
;

#define _dataRx_assign_stmt_1582_c_macro_ __declare_static_bit_vector(konst_1552,8);\
bit_vector_clear(&konst_1552);\
__declare_static_bit_vector(BITSEL_u8_u1_1553,1);\
__declare_static_bit_vector(konst_1555,8);\
bit_vector_clear(&konst_1555);\
__declare_static_bit_vector(BITSEL_u8_u1_1556,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1557,2);\
__declare_static_bit_vector(konst_1559,8);\
bit_vector_clear(&konst_1559);\
__declare_static_bit_vector(BITSEL_u8_u1_1560,1);\
__declare_static_bit_vector(konst_1562,8);\
bit_vector_clear(&konst_1562);\
__declare_static_bit_vector(BITSEL_u8_u1_1563,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1564,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1565,4);\
__declare_static_bit_vector(konst_1567,8);\
bit_vector_clear(&konst_1567);\
__declare_static_bit_vector(BITSEL_u8_u1_1568,1);\
__declare_static_bit_vector(konst_1570,8);\
bit_vector_clear(&konst_1570);\
__declare_static_bit_vector(BITSEL_u8_u1_1571,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1572,2);\
__declare_static_bit_vector(konst_1574,8);\
bit_vector_clear(&konst_1574);\
__declare_static_bit_vector(BITSEL_u8_u1_1575,1);\
__declare_static_bit_vector(konst_1577,8);\
bit_vector_clear(&konst_1577);\
__declare_static_bit_vector(BITSEL_u8_u1_1578,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1579,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1580,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1581,8);\
bit_vector_clear(&konst_1552);\
bit_vector_bitsel( &(bit7), &(konst_1552), &(BITSEL_u8_u1_1553));\
bit_vector_clear(&konst_1555);\
bit_vector_bitsel( &(bit6), &(konst_1555), &(BITSEL_u8_u1_1556));\
bit_vector_concatenate( &(BITSEL_u8_u1_1553), &(BITSEL_u8_u1_1556), &(CONCAT_u1_u2_1557));\
bit_vector_clear(&konst_1559);\
bit_vector_bitsel( &(bit5), &(konst_1559), &(BITSEL_u8_u1_1560));\
bit_vector_clear(&konst_1562);\
bit_vector_bitsel( &(bit4), &(konst_1562), &(BITSEL_u8_u1_1563));\
bit_vector_concatenate( &(BITSEL_u8_u1_1560), &(BITSEL_u8_u1_1563), &(CONCAT_u1_u2_1564));\
bit_vector_concatenate( &(CONCAT_u1_u2_1557), &(CONCAT_u1_u2_1564), &(CONCAT_u2_u4_1565));\
bit_vector_clear(&konst_1567);\
bit_vector_bitsel( &(bit3), &(konst_1567), &(BITSEL_u8_u1_1568));\
bit_vector_clear(&konst_1570);\
bit_vector_bitsel( &(bit2), &(konst_1570), &(BITSEL_u8_u1_1571));\
bit_vector_concatenate( &(BITSEL_u8_u1_1568), &(BITSEL_u8_u1_1571), &(CONCAT_u1_u2_1572));\
bit_vector_clear(&konst_1574);\
bit_vector_bitsel( &(bit1), &(konst_1574), &(BITSEL_u8_u1_1575));\
bit_vector_clear(&konst_1577);\
bit_vector_bitsel( &(bit0), &(konst_1577), &(BITSEL_u8_u1_1578));\
bit_vector_concatenate( &(BITSEL_u8_u1_1575), &(BITSEL_u8_u1_1578), &(CONCAT_u1_u2_1579));\
bit_vector_concatenate( &(CONCAT_u1_u2_1572), &(CONCAT_u1_u2_1579), &(CONCAT_u2_u4_1580));\
bit_vector_concatenate( &(CONCAT_u2_u4_1565), &(CONCAT_u2_u4_1580), &(CONCAT_u4_u8_1581));\
write_bit_vector_to_pipe("dataBufferRx",&(CONCAT_u4_u8_1581));\
;

#define _dataRx_assign_stmt_1623_c_macro_ __declare_static_bit_vector(konst_1585,4096);\
bit_vector_clear(&konst_1585);\
konst_1585.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_1586,4096);\
__declare_static_bit_vector(konst_1588,4088);\
bit_vector_clear(&konst_1588);\
__declare_static_bit_vector(type_cast_1589,4088);\
bit_vector_clear(&type_cast_1589);\
__declare_static_bit_vector(konst_1591,8);\
bit_vector_clear(&konst_1591);\
__declare_static_bit_vector(BITSEL_u8_u1_1592,1);\
__declare_static_bit_vector(konst_1594,8);\
bit_vector_clear(&konst_1594);\
__declare_static_bit_vector(BITSEL_u8_u1_1595,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1596,2);\
__declare_static_bit_vector(konst_1598,8);\
bit_vector_clear(&konst_1598);\
__declare_static_bit_vector(BITSEL_u8_u1_1599,1);\
__declare_static_bit_vector(konst_1601,8);\
bit_vector_clear(&konst_1601);\
__declare_static_bit_vector(BITSEL_u8_u1_1602,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1603,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1604,4);\
__declare_static_bit_vector(konst_1606,8);\
bit_vector_clear(&konst_1606);\
__declare_static_bit_vector(BITSEL_u8_u1_1607,1);\
__declare_static_bit_vector(konst_1609,8);\
bit_vector_clear(&konst_1609);\
__declare_static_bit_vector(BITSEL_u8_u1_1610,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1611,2);\
__declare_static_bit_vector(konst_1613,8);\
bit_vector_clear(&konst_1613);\
__declare_static_bit_vector(BITSEL_u8_u1_1614,1);\
__declare_static_bit_vector(konst_1616,8);\
bit_vector_clear(&konst_1616);\
__declare_static_bit_vector(BITSEL_u8_u1_1617,1);\
__declare_static_bit_vector(CONCAT_u1_u2_1618,2);\
__declare_static_bit_vector(CONCAT_u2_u4_1619,4);\
__declare_static_bit_vector(CONCAT_u4_u8_1620,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_1621,4096);\
__declare_static_bit_vector(OR_u4096_u4096_1622,4096);\
bit_vector_clear(&konst_1585);\
konst_1585.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_1585), &(SHL_u4096_u4096_1586));\
bit_vector_clear(&konst_1588);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1589), &(konst_1588));\
bit_vector_clear(&konst_1591);\
bit_vector_bitsel( &(bit7), &(konst_1591), &(BITSEL_u8_u1_1592));\
bit_vector_clear(&konst_1594);\
bit_vector_bitsel( &(bit6), &(konst_1594), &(BITSEL_u8_u1_1595));\
bit_vector_concatenate( &(BITSEL_u8_u1_1592), &(BITSEL_u8_u1_1595), &(CONCAT_u1_u2_1596));\
bit_vector_clear(&konst_1598);\
bit_vector_bitsel( &(bit5), &(konst_1598), &(BITSEL_u8_u1_1599));\
bit_vector_clear(&konst_1601);\
bit_vector_bitsel( &(bit4), &(konst_1601), &(BITSEL_u8_u1_1602));\
bit_vector_concatenate( &(BITSEL_u8_u1_1599), &(BITSEL_u8_u1_1602), &(CONCAT_u1_u2_1603));\
bit_vector_concatenate( &(CONCAT_u1_u2_1596), &(CONCAT_u1_u2_1603), &(CONCAT_u2_u4_1604));\
bit_vector_clear(&konst_1606);\
bit_vector_bitsel( &(bit3), &(konst_1606), &(BITSEL_u8_u1_1607));\
bit_vector_clear(&konst_1609);\
bit_vector_bitsel( &(bit2), &(konst_1609), &(BITSEL_u8_u1_1610));\
bit_vector_concatenate( &(BITSEL_u8_u1_1607), &(BITSEL_u8_u1_1610), &(CONCAT_u1_u2_1611));\
bit_vector_clear(&konst_1613);\
bit_vector_bitsel( &(bit1), &(konst_1613), &(BITSEL_u8_u1_1614));\
bit_vector_clear(&konst_1616);\
bit_vector_bitsel( &(bit0), &(konst_1616), &(BITSEL_u8_u1_1617));\
bit_vector_concatenate( &(BITSEL_u8_u1_1614), &(BITSEL_u8_u1_1617), &(CONCAT_u1_u2_1618));\
bit_vector_concatenate( &(CONCAT_u1_u2_1611), &(CONCAT_u1_u2_1618), &(CONCAT_u2_u4_1619));\
bit_vector_concatenate( &(CONCAT_u2_u4_1604), &(CONCAT_u2_u4_1619), &(CONCAT_u4_u8_1620));\
bit_vector_concatenate( &(type_cast_1589), &(CONCAT_u4_u8_1620), &(CONCAT_u4088_u4096_1621));\
bit_vector_or(&(SHL_u4096_u4096_1586), &(CONCAT_u4088_u4096_1621), &(OR_u4096_u4096_1622));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_1622));\
;

#define _dataRx_assign_stmt_1628_c_macro_ __declare_static_bit_vector(konst_1626,10);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_1627,10);\
bit_vector_clear(&konst_1626);\
konst_1626.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_1626), &(ADD_u10_u10_1627));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_1627));\
;
;

#define _dataRx_branch_block_stmt_1512_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataRx_assign_stmt_1639_c_macro_ __declare_static_bit_vector(konst_1637,10);\
bit_vector_clear(&konst_1637);\
konst_1637.val.byte_array[1] = 2;\
__declare_static_bit_vector(type_cast_1638,10);\
bit_vector_clear(&type_cast_1638);\
type_cast_1638.val.byte_array[1] = 2;\
bit_vector_clear(&konst_1637);\
konst_1637.val.byte_array[1] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_1638), &(konst_1637));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_1638));\
;

#define _dataRx_merge_stmt_1640_c_preamble_macro_ uint8_t merge_stmt_1640_entry_flag;\
merge_stmt_1640_entry_flag = 1;\
uint8_t crcloopback_544_flag = 0;\
goto merge_stmt_1640_run;\
crcloopback_544: crcloopback_544_flag = 1;\
goto merge_stmt_1640_run;\
merge_stmt_1640_run: ;\

#define _dataRx_phi_stmt_1641_c_macro_ __declare_static_bit_vector(konst_1643,5);\
bit_vector_clear(&konst_1643);\
__declare_static_bit_vector(type_cast_1644,5);\
bit_vector_clear(&type_cast_1644);\
if(crcloopback_544_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_1643,5);\
bit_vector_clear(&konst_1643);\
__declare_static_bit_vector(type_cast_1644,5);\
bit_vector_clear(&type_cast_1644);\
bit_vector_clear(&konst_1643);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1644), &(konst_1643));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_1644));\
}\
;

#define _dataRx_phi_stmt_1646_c_macro_ __declare_static_bit_vector(konst_1648,16);\
bit_vector_clear(&konst_1648);\
__declare_static_bit_vector(type_cast_1649,16);\
bit_vector_clear(&type_cast_1649);\
if(crcloopback_544_flag) {\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(nextCRC));\
}\
else {\
__declare_static_bit_vector(konst_1648,16);\
bit_vector_clear(&konst_1648);\
__declare_static_bit_vector(type_cast_1649,16);\
bit_vector_clear(&type_cast_1649);\
bit_vector_clear(&konst_1648);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1649), &(konst_1648));\
bit_vector_cast_to_bit_vector(0, &(currentCRC), &(type_cast_1649));\
}\
;
;

#define _dataRx_merge_stmt_1640_c_postamble_macro_ crcloopback_544_flag = 0;\
merge_stmt_1640_entry_flag = 0;

#define _dataRx_assign_stmt_1663_c_macro_ __declare_static_bit_vector(konst_1654,16);\
bit_vector_clear(&konst_1654);\
konst_1654.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_1655,16);\
__declare_static_bit_vector(konst_1656,15);\
bit_vector_clear(&konst_1656);\
__declare_static_bit_vector(type_cast_1657,15);\
bit_vector_clear(&type_cast_1657);\
__declare_static_bit_vector(RPIPE_DAT0Rx_1658,8);\
__declare_static_bit_vector(konst_1659,8);\
bit_vector_clear(&konst_1659);\
__declare_static_bit_vector(BITSEL_u8_u1_1660,1);\
__declare_static_bit_vector(CONCAT_u15_u16_1661,16);\
__declare_static_bit_vector(OR_u16_u16_1662,16);\
bit_vector_clear(&konst_1654);\
konst_1654.val.byte_array[0] = 1;\
bit_vector_shift_left(&(currentCRC), &(konst_1654), &(SHL_u16_u16_1655));\
bit_vector_clear(&konst_1656);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1657), &(konst_1656));\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1658));\
bit_vector_clear(&konst_1659);\
bit_vector_bitsel( &(RPIPE_DAT0Rx_1658), &(konst_1659), &(BITSEL_u8_u1_1660));\
bit_vector_concatenate( &(type_cast_1657), &(BITSEL_u8_u1_1660), &(CONCAT_u15_u16_1661));\
bit_vector_or(&(SHL_u16_u16_1655), &(CONCAT_u15_u16_1661), &(OR_u16_u16_1662));\
bit_vector_cast_to_bit_vector(0, &(nextCRC), &(OR_u16_u16_1662));\
;

#define _dataRx_assign_stmt_1668_c_macro_ __declare_static_bit_vector(konst_1666,5);\
bit_vector_clear(&konst_1666);\
konst_1666.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_1667,5);\
bit_vector_clear(&konst_1666);\
konst_1666.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_1666), &(ADD_u5_u5_1667));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u5_u5_1667));\
;

#define _dataRx_assign_stmt_1677_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_1676,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_1676));\
bit_vector_cast_to_bit_vector(0, &(stopBit), &(RPIPE_DAT0Rx_1676));\
;

#define _dataRx_assign_stmt_1687_c_macro_ __declare_static_bit_vector(konst_1685,8);\
bit_vector_clear(&konst_1685);\
konst_1685.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_1686,8);\
bit_vector_clear(&konst_1685);\
konst_1685.val.byte_array[0] = 251;\
bit_vector_and(&(presentState0Var), &(konst_1685), &(AND_u8_u8_1686));\
__declare_static_bit_vector(konst_1682,32);\
bit_vector_clear(&konst_1682);\
konst_1682.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1682);\
konst_1682.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1682)])), &(AND_u8_u8_1686));\
;

#define _dataRx_assign_stmt_1693_c_macro_ __declare_static_bit_vector(konst_1691,8);\
bit_vector_clear(&konst_1691);\
__declare_static_bit_vector(EQ_u8_u1_1692,1);\
bit_vector_clear(&konst_1691);\
bit_vector_equal(0, &(stopBit), &(konst_1691), &(EQ_u8_u1_1692));\
bit_vector_cast_to_bit_vector(0, &(stopBitError), &(EQ_u8_u1_1692));\
;

#define _dataRx_merge_stmt_1694_c_preamble_macro_ uint8_t merge_stmt_1694_entry_flag;\
merge_stmt_1694_entry_flag = 1;\
uint8_t loopback_544_flag = 0;\
goto merge_stmt_1694_run;\
loopback_544: loopback_544_flag = 1;\
goto merge_stmt_1694_run;\
merge_stmt_1694_run: ;\

#define _dataRx_phi_stmt_1695_c_macro_ __declare_static_bit_vector(konst_1697,13);\
bit_vector_clear(&konst_1697);\
__declare_static_bit_vector(type_cast_1698,13);\
bit_vector_clear(&type_cast_1698);\
if(loopback_544_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_1697,13);\
bit_vector_clear(&konst_1697);\
__declare_static_bit_vector(type_cast_1698,13);\
bit_vector_clear(&type_cast_1698);\
bit_vector_clear(&konst_1697);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1698), &(konst_1697));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_1698));\
}\
;

#define _dataRx_phi_stmt_1700_c_macro_ __declare_static_bit_vector(konst_1702,16);\
bit_vector_clear(&konst_1702);\
__declare_static_bit_vector(type_cast_1703,16);\
bit_vector_clear(&type_cast_1703);\
if(loopback_544_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_1702,16);\
bit_vector_clear(&konst_1702);\
__declare_static_bit_vector(type_cast_1703,16);\
bit_vector_clear(&type_cast_1703);\
bit_vector_clear(&konst_1702);\
bit_vector_bitcast_to_bit_vector( &(type_cast_1703), &(konst_1702));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_1703));\
}\
;

#define _dataRx_phi_stmt_1705_c_macro_ if(loopback_544_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataRx_merge_stmt_1694_c_postamble_macro_ loopback_544_flag = 0;\
merge_stmt_1694_entry_flag = 0;

#define _dataRx_assign_stmt_1718_c_macro_ __declare_static_bit_vector(konst_1712,4096);\
bit_vector_clear(&konst_1712);\
konst_1712.val.byte_array[0] = 255;\
konst_1712.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_1713,1);\
__declare_static_bit_vector(konst_1715,16);\
bit_vector_clear(&konst_1715);\
konst_1715.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_1716,1);\
__declare_static_bit_vector(XOR_u1_u1_1717,1);\
bit_vector_clear(&konst_1712);\
konst_1712.val.byte_array[0] = 255;\
konst_1712.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_1712), &(BITSEL_u4096_u1_1713));\
bit_vector_clear(&konst_1715);\
konst_1715.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_1715), &(BITSEL_u16_u1_1716));\
bit_vector_xor(&(BITSEL_u4096_u1_1713), &(BITSEL_u16_u1_1716), &(XOR_u1_u1_1717));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_1717));\
;

#define _dataRx_assign_stmt_1742_c_macro_ __declare_static_bit_vector(slice_1721,3);\
__declare_static_bit_vector(konst_1723,16);\
bit_vector_clear(&konst_1723);\
konst_1723.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_1724,1);\
__declare_static_bit_vector(XOR_u1_u1_1726,1);\
__declare_static_bit_vector(CONCAT_u3_u4_1727,4);\
__declare_static_bit_vector(slice_1729,6);\
__declare_static_bit_vector(CONCAT_u4_u10_1730,10);\
__declare_static_bit_vector(konst_1732,16);\
bit_vector_clear(&konst_1732);\
konst_1732.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_1733,1);\
__declare_static_bit_vector(XOR_u1_u1_1735,1);\
__declare_static_bit_vector(slice_1737,4);\
__declare_static_bit_vector(CONCAT_u1_u5_1738,5);\
__declare_static_bit_vector(CONCAT_u5_u6_1740,6);\
__declare_static_bit_vector(CONCAT_u10_u16_1741,16);\
bit_vector_slice(&(CRC_16), &(slice_1721), 12);\
bit_vector_clear(&konst_1723);\
konst_1723.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_1723), &(BITSEL_u16_u1_1724));\
bit_vector_xor(&(BITSEL_u16_u1_1724), &(inv), &(XOR_u1_u1_1726));\
bit_vector_concatenate( &(slice_1721), &(XOR_u1_u1_1726), &(CONCAT_u3_u4_1727));\
bit_vector_slice(&(CRC_16), &(slice_1729), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_1727), &(slice_1729), &(CONCAT_u4_u10_1730));\
bit_vector_clear(&konst_1732);\
konst_1732.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_1732), &(BITSEL_u16_u1_1733));\
bit_vector_xor(&(BITSEL_u16_u1_1733), &(inv), &(XOR_u1_u1_1735));\
bit_vector_slice(&(CRC_16), &(slice_1737), 0);\
bit_vector_concatenate( &(XOR_u1_u1_1735), &(slice_1737), &(CONCAT_u1_u5_1738));\
bit_vector_concatenate( &(CONCAT_u1_u5_1738), &(inv), &(CONCAT_u5_u6_1740));\
bit_vector_concatenate( &(CONCAT_u4_u10_1730), &(CONCAT_u5_u6_1740), &(CONCAT_u10_u16_1741));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_1741));\
;

#define _dataRx_assign_stmt_1747_c_macro_ __declare_static_bit_vector(konst_1745,4096);\
bit_vector_clear(&konst_1745);\
konst_1745.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_1746,4096);\
bit_vector_clear(&konst_1745);\
konst_1745.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_1745), &(SHL_u4096_u4096_1746));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_1746));\
;

#define _dataRx_assign_stmt_1752_c_macro_ __declare_static_bit_vector(konst_1750,13);\
bit_vector_clear(&konst_1750);\
konst_1750.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_1751,13);\
bit_vector_clear(&konst_1750);\
konst_1750.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_1750), &(ADD_u13_u13_1751));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_1751));\
;

#define _dataRx_assign_stmt_1763_c_macro_ __declare_static_bit_vector(NEQ_u16_u1_1762,1);\
bit_vector_not_equal(0, &(nextCRC), &(nextCRC16), &NEQ_u16_u1_1762);\
bit_vector_cast_to_bit_vector(0, &(crcError), &(NEQ_u16_u1_1762));\
;

#define _dataRx_assign_stmt_1766_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty), &(ONE_1));\
;

#define _dataRx_assign_stmt_1779_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_1770,2);\
__declare_static_bit_vector(CONCAT_u2_u3_1772,3);\
__declare_static_bit_vector(CONCAT_u1_u3_1775,3);\
bit_vector_clear(&CONCAT_u1_u3_1775);\
__declare_static_bit_vector(CONCAT_u3_u5_1777,5);\
bit_vector_clear(&CONCAT_u3_u5_1777);\
__declare_static_bit_vector(CONCAT_u3_u8_1778,8);\
bit_vector_concatenate( &(ZERO_1), &(stopBitError), &(CONCAT_u1_u2_1770));\
bit_vector_concatenate( &(CONCAT_u1_u2_1770), &(crcError), &(CONCAT_u2_u3_1772));\
bit_vector_concatenate( &(ZERO_1), &(ZERO_2), &(CONCAT_u1_u3_1775));\
bit_vector_concatenate( &(CONCAT_u1_u3_1775), &(ZERO_2), &(CONCAT_u3_u5_1777));\
bit_vector_concatenate( &(CONCAT_u2_u3_1772), &(CONCAT_u3_u5_1777), &(CONCAT_u3_u8_1778));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1_0), &(CONCAT_u3_u8_1778));\
;

#define _dataRx_assign_stmt_1789_c_macro_ __declare_static_bit_vector(konst_1782,32);\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 40;\
__declare_static_bit_vector(konst_1784,8);\
bit_vector_clear(&konst_1784);\
konst_1784.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_1785,1);\
__declare_static_bit_vector(MUX_1788,8);\
bit_vector_clear(&konst_1782);\
konst_1782.val.byte_array[0] = 40;\
bit_vector_clear(&konst_1784);\
konst_1784.val.byte_array[0] = 1;\
bit_vector_bitsel( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1782)])), &(konst_1784), &(BITSEL_u8_u1_1785));\
if (has_undefined_bit(&BITSEL_u8_u1_1785)) {fprintf(stderr, "Error: variable BITSEL_u8_u1_1785 has undefined value (%s) at test point.\n", to_string(&BITSEL_u8_u1_1785));assert(0);} \
if(bit_vector_to_uint64(0, &BITSEL_u8_u1_1785)){bit_vector_cast_to_bit_vector(0, &(MUX_1788), &(dataErrorInterruptStatusVar1_4));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_1788), &(dataErrorInterruptStatusVar1_0));\
}bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatusVar1), &(MUX_1788));\
;

#define _dataRx_assign_stmt_1799_c_macro_ __declare_static_bit_vector(konst_1797,8);\
bit_vector_clear(&konst_1797);\
konst_1797.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1798,8);\
bit_vector_clear(&konst_1797);\
konst_1797.val.byte_array[0] = 253;\
bit_vector_and(&(presentState1Var), &(konst_1797), &(AND_u8_u8_1798));\
__declare_static_bit_vector(konst_1794,32);\
bit_vector_clear(&konst_1794);\
konst_1794.val.byte_array[0] = 37;\
bit_vector_clear(&konst_1794);\
konst_1794.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1794)])), &(AND_u8_u8_1798));\
;

#define _dataRx_assign_stmt_1805_c_macro_ __declare_static_bit_vector(konst_1803,8);\
bit_vector_clear(&konst_1803);\
konst_1803.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_1804,8);\
bit_vector_clear(&konst_1803);\
konst_1803.val.byte_array[0] = 253;\
bit_vector_and(&(presentState0Var), &(konst_1803), &(AND_u8_u8_1804));\
__declare_static_bit_vector(konst_1800,32);\
bit_vector_clear(&konst_1800);\
konst_1800.val.byte_array[0] = 36;\
bit_vector_clear(&konst_1800);\
konst_1800.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_1800)])), &(AND_u8_u8_1804));\
;

#define _dataRx_stmt_1810_c_macro_ uint32_t _dataRx_stmt_1810_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]You>\t%s\n",_dataRx_stmt_1810_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1810_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1810_c_macro___print_counter,"nextCRC");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]You>\t\t%s\t\t",_dataRx_stmt_1810_c_macro___print_counter,"rxBufferPointer");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(rxBufferPointer)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataRx_branch_block_stmt_544_c_export_apply_macro_ ;

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

#define _dataTx_branch_block_stmt_2383_c_export_decl_macro_ __declare_static_bit_vector(j_0,11);\
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
__declare_static_bit_vector(wait,8);\


#define _dataTx_branch_block_stmt_2389_c_export_decl_macro_ __declare_static_bit_vector(dat0__next_data0,1024);\
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


#define _dataTx_merge_stmt_2391_c_preamble_macro_ uint8_t merge_stmt_2391_entry_flag;\
merge_stmt_2391_entry_flag = do_while_entry_flag;\
goto merge_stmt_2391_run;\
merge_stmt_2391_run: ;\

#define _dataTx_phi_stmt_2392_c_macro_ __declare_static_bit_vector(konst_2394,10);\
bit_vector_clear(&konst_2394);\
__declare_static_bit_vector(type_cast_2395,10);\
bit_vector_clear(&type_cast_2395);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(i), &(next_i));\
}\
else {\
__declare_static_bit_vector(konst_2394,10);\
bit_vector_clear(&konst_2394);\
__declare_static_bit_vector(type_cast_2395,10);\
bit_vector_clear(&type_cast_2395);\
bit_vector_clear(&konst_2394);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2395), &(konst_2394));\
bit_vector_cast_to_bit_vector(0, &(i), &(type_cast_2395));\
}\
;

#define _dataTx_phi_stmt_2397_c_macro_ __declare_static_bit_vector(konst_2399,1024);\
bit_vector_clear(&konst_2399);\
__declare_static_bit_vector(type_cast_2400,1024);\
bit_vector_clear(&type_cast_2400);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0), &(next_data0));\
}\
else {\
__declare_static_bit_vector(konst_2399,1024);\
bit_vector_clear(&konst_2399);\
__declare_static_bit_vector(type_cast_2400,1024);\
bit_vector_clear(&type_cast_2400);\
bit_vector_clear(&konst_2399);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2400), &(konst_2399));\
bit_vector_cast_to_bit_vector(0, &(dat0), &(type_cast_2400));\
}\
;

#define _dataTx_phi_stmt_2402_c_macro_ __declare_static_bit_vector(konst_2404,1024);\
bit_vector_clear(&konst_2404);\
__declare_static_bit_vector(type_cast_2405,1024);\
bit_vector_clear(&type_cast_2405);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1), &(next_data1));\
}\
else {\
__declare_static_bit_vector(konst_2404,1024);\
bit_vector_clear(&konst_2404);\
__declare_static_bit_vector(type_cast_2405,1024);\
bit_vector_clear(&type_cast_2405);\
bit_vector_clear(&konst_2404);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2405), &(konst_2404));\
bit_vector_cast_to_bit_vector(0, &(dat1), &(type_cast_2405));\
}\
;

#define _dataTx_phi_stmt_2407_c_macro_ __declare_static_bit_vector(konst_2410,1024);\
bit_vector_clear(&konst_2410);\
__declare_static_bit_vector(type_cast_2411,1024);\
bit_vector_clear(&type_cast_2411);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2), &(next_data2));\
}\
else {\
__declare_static_bit_vector(konst_2410,1024);\
bit_vector_clear(&konst_2410);\
__declare_static_bit_vector(type_cast_2411,1024);\
bit_vector_clear(&type_cast_2411);\
bit_vector_clear(&konst_2410);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2411), &(konst_2410));\
bit_vector_cast_to_bit_vector(0, &(dat2), &(type_cast_2411));\
}\
;

#define _dataTx_phi_stmt_2412_c_macro_ __declare_static_bit_vector(konst_2415,1024);\
bit_vector_clear(&konst_2415);\
__declare_static_bit_vector(type_cast_2416,1024);\
bit_vector_clear(&type_cast_2416);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3), &(next_data3));\
}\
else {\
__declare_static_bit_vector(konst_2415,1024);\
bit_vector_clear(&konst_2415);\
__declare_static_bit_vector(type_cast_2416,1024);\
bit_vector_clear(&type_cast_2416);\
bit_vector_clear(&konst_2415);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2416), &(konst_2415));\
bit_vector_cast_to_bit_vector(0, &(dat3), &(type_cast_2416));\
}\
;
;

#define _dataTx_merge_stmt_2391_c_postamble_macro_ merge_stmt_2391_entry_flag = 0;

#define _dataTx_assign_stmt_2420_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferTx_2419,8);\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_2419));\
bit_vector_cast_to_bit_vector(0, &(tempBuffer), &(RPIPE_dataBufferTx_2419));\
;

#define _dataTx_assign_stmt_2438_c_macro_ __declare_static_bit_vector(konst_2423,1024);\
bit_vector_clear(&konst_2423);\
konst_2423.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2424,1024);\
__declare_static_bit_vector(konst_2426,1022);\
bit_vector_clear(&konst_2426);\
__declare_static_bit_vector(type_cast_2427,1022);\
bit_vector_clear(&type_cast_2427);\
__declare_static_bit_vector(konst_2429,8);\
bit_vector_clear(&konst_2429);\
konst_2429.val.byte_array[0] = 7;\
__declare_static_bit_vector(BITSEL_u8_u1_2430,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2431,1023);\
__declare_static_bit_vector(konst_2434,8);\
bit_vector_clear(&konst_2434);\
konst_2434.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u8_u1_2435,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2436,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2437,1024);\
bit_vector_clear(&konst_2423);\
konst_2423.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat0), &(konst_2423), &(SHL_u1024_u1024_2424));\
bit_vector_clear(&konst_2426);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2427), &(konst_2426));\
bit_vector_clear(&konst_2429);\
konst_2429.val.byte_array[0] = 7;\
bit_vector_bitsel( &(tempBuffer), &(konst_2429), &(BITSEL_u8_u1_2430));\
bit_vector_concatenate( &(type_cast_2427), &(BITSEL_u8_u1_2430), &(CONCAT_u1022_u1023_2431));\
bit_vector_clear(&konst_2434);\
konst_2434.val.byte_array[0] = 3;\
bit_vector_bitsel( &(tempBuffer), &(konst_2434), &(BITSEL_u8_u1_2435));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2431), &(BITSEL_u8_u1_2435), &(CONCAT_u1023_u1024_2436));\
bit_vector_or(&(SHL_u1024_u1024_2424), &(CONCAT_u1023_u1024_2436), &(OR_u1024_u1024_2437));\
bit_vector_cast_to_bit_vector(0, &(next_data0), &(OR_u1024_u1024_2437));\
;

#define _dataTx_assign_stmt_2454_c_macro_ __declare_static_bit_vector(konst_2441,1024);\
bit_vector_clear(&konst_2441);\
konst_2441.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2442,1024);\
__declare_static_bit_vector(konst_2443,1022);\
bit_vector_clear(&konst_2443);\
__declare_static_bit_vector(type_cast_2444,1022);\
bit_vector_clear(&type_cast_2444);\
__declare_static_bit_vector(konst_2446,8);\
bit_vector_clear(&konst_2446);\
konst_2446.val.byte_array[0] = 6;\
__declare_static_bit_vector(BITSEL_u8_u1_2447,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2448,1023);\
__declare_static_bit_vector(konst_2450,8);\
bit_vector_clear(&konst_2450);\
konst_2450.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u8_u1_2451,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2452,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2453,1024);\
bit_vector_clear(&konst_2441);\
konst_2441.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat1), &(konst_2441), &(SHL_u1024_u1024_2442));\
bit_vector_clear(&konst_2443);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2444), &(konst_2443));\
bit_vector_clear(&konst_2446);\
konst_2446.val.byte_array[0] = 6;\
bit_vector_bitsel( &(tempBuffer), &(konst_2446), &(BITSEL_u8_u1_2447));\
bit_vector_concatenate( &(type_cast_2444), &(BITSEL_u8_u1_2447), &(CONCAT_u1022_u1023_2448));\
bit_vector_clear(&konst_2450);\
konst_2450.val.byte_array[0] = 2;\
bit_vector_bitsel( &(tempBuffer), &(konst_2450), &(BITSEL_u8_u1_2451));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2448), &(BITSEL_u8_u1_2451), &(CONCAT_u1023_u1024_2452));\
bit_vector_or(&(SHL_u1024_u1024_2442), &(CONCAT_u1023_u1024_2452), &(OR_u1024_u1024_2453));\
bit_vector_cast_to_bit_vector(0, &(next_data1), &(OR_u1024_u1024_2453));\
;

#define _dataTx_assign_stmt_2470_c_macro_ __declare_static_bit_vector(konst_2457,1024);\
bit_vector_clear(&konst_2457);\
konst_2457.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2458,1024);\
__declare_static_bit_vector(konst_2459,1022);\
bit_vector_clear(&konst_2459);\
__declare_static_bit_vector(type_cast_2460,1022);\
bit_vector_clear(&type_cast_2460);\
__declare_static_bit_vector(konst_2462,8);\
bit_vector_clear(&konst_2462);\
konst_2462.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u8_u1_2463,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2464,1023);\
__declare_static_bit_vector(konst_2466,8);\
bit_vector_clear(&konst_2466);\
konst_2466.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u8_u1_2467,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2468,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2469,1024);\
bit_vector_clear(&konst_2457);\
konst_2457.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat2), &(konst_2457), &(SHL_u1024_u1024_2458));\
bit_vector_clear(&konst_2459);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2460), &(konst_2459));\
bit_vector_clear(&konst_2462);\
konst_2462.val.byte_array[0] = 5;\
bit_vector_bitsel( &(tempBuffer), &(konst_2462), &(BITSEL_u8_u1_2463));\
bit_vector_concatenate( &(type_cast_2460), &(BITSEL_u8_u1_2463), &(CONCAT_u1022_u1023_2464));\
bit_vector_clear(&konst_2466);\
konst_2466.val.byte_array[0] = 1;\
bit_vector_bitsel( &(tempBuffer), &(konst_2466), &(BITSEL_u8_u1_2467));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2464), &(BITSEL_u8_u1_2467), &(CONCAT_u1023_u1024_2468));\
bit_vector_or(&(SHL_u1024_u1024_2458), &(CONCAT_u1023_u1024_2468), &(OR_u1024_u1024_2469));\
bit_vector_cast_to_bit_vector(0, &(next_data2), &(OR_u1024_u1024_2469));\
;

#define _dataTx_assign_stmt_2486_c_macro_ __declare_static_bit_vector(konst_2473,1024);\
bit_vector_clear(&konst_2473);\
konst_2473.val.byte_array[0] = 2;\
__declare_static_bit_vector(SHL_u1024_u1024_2474,1024);\
__declare_static_bit_vector(konst_2475,1022);\
bit_vector_clear(&konst_2475);\
__declare_static_bit_vector(type_cast_2476,1022);\
bit_vector_clear(&type_cast_2476);\
__declare_static_bit_vector(konst_2478,8);\
bit_vector_clear(&konst_2478);\
konst_2478.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u8_u1_2479,1);\
__declare_static_bit_vector(CONCAT_u1022_u1023_2480,1023);\
__declare_static_bit_vector(konst_2482,8);\
bit_vector_clear(&konst_2482);\
__declare_static_bit_vector(BITSEL_u8_u1_2483,1);\
__declare_static_bit_vector(CONCAT_u1023_u1024_2484,1024);\
__declare_static_bit_vector(OR_u1024_u1024_2485,1024);\
bit_vector_clear(&konst_2473);\
konst_2473.val.byte_array[0] = 2;\
bit_vector_shift_left(&(dat3), &(konst_2473), &(SHL_u1024_u1024_2474));\
bit_vector_clear(&konst_2475);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2476), &(konst_2475));\
bit_vector_clear(&konst_2478);\
konst_2478.val.byte_array[0] = 4;\
bit_vector_bitsel( &(tempBuffer), &(konst_2478), &(BITSEL_u8_u1_2479));\
bit_vector_concatenate( &(type_cast_2476), &(BITSEL_u8_u1_2479), &(CONCAT_u1022_u1023_2480));\
bit_vector_clear(&konst_2482);\
bit_vector_bitsel( &(tempBuffer), &(konst_2482), &(BITSEL_u8_u1_2483));\
bit_vector_concatenate( &(CONCAT_u1022_u1023_2480), &(BITSEL_u8_u1_2483), &(CONCAT_u1023_u1024_2484));\
bit_vector_or(&(SHL_u1024_u1024_2474), &(CONCAT_u1023_u1024_2484), &(OR_u1024_u1024_2485));\
bit_vector_cast_to_bit_vector(0, &(next_data3), &(OR_u1024_u1024_2485));\
;

#define _dataTx_assign_stmt_2491_c_macro_ __declare_static_bit_vector(konst_2489,10);\
bit_vector_clear(&konst_2489);\
konst_2489.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_2490,10);\
bit_vector_clear(&konst_2489);\
konst_2489.val.byte_array[0] = 1;\
bit_vector_plus( &(i), &(konst_2489), &(ADD_u10_u10_2490));\
bit_vector_cast_to_bit_vector(0, &(next_i), &(ADD_u10_u10_2490));\
;
;

#define _dataTx_branch_block_stmt_2389_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat0__next_data0), &(next_data0));\
bit_vector_cast_to_bit_vector(0, &(dat1__next_data1), &(next_data1));\
bit_vector_cast_to_bit_vector(0, &(dat2__next_data2), &(next_data2));\
bit_vector_cast_to_bit_vector(0, &(dat3__next_data3), &(next_data3));\
;

#define _dataTx_assign_stmt_2500_c_macro_ __declare_static_bit_vector(konst_2498,10);\
bit_vector_clear(&konst_2498);\
__declare_static_bit_vector(type_cast_2499,10);\
bit_vector_clear(&type_cast_2499);\
bit_vector_clear(&konst_2498);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2499), &(konst_2498));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_2499));\
;

#define _dataTx_merge_stmt_2502_c_preamble_macro_ uint8_t merge_stmt_2502_entry_flag;\
merge_stmt_2502_entry_flag = do_while_entry_flag;\
goto merge_stmt_2502_run;\
merge_stmt_2502_run: ;\

#define _dataTx_phi_stmt_2503_c_macro_ __declare_static_bit_vector(konst_2506,11);\
bit_vector_clear(&konst_2506);\
__declare_static_bit_vector(type_cast_2507,11);\
bit_vector_clear(&type_cast_2507);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_0), &(next_j_0));\
}\
else {\
__declare_static_bit_vector(konst_2506,11);\
bit_vector_clear(&konst_2506);\
__declare_static_bit_vector(type_cast_2507,11);\
bit_vector_clear(&type_cast_2507);\
bit_vector_clear(&konst_2506);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2507), &(konst_2506));\
bit_vector_cast_to_bit_vector(0, &(j_0), &(type_cast_2507));\
}\
;

#define _dataTx_phi_stmt_2509_c_macro_ __declare_static_bit_vector(konst_2511,16);\
bit_vector_clear(&konst_2511);\
__declare_static_bit_vector(type_cast_2512,16);\
bit_vector_clear(&type_cast_2512);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(nextCRC16_DAT0));\
}\
else {\
__declare_static_bit_vector(konst_2511,16);\
bit_vector_clear(&konst_2511);\
__declare_static_bit_vector(type_cast_2512,16);\
bit_vector_clear(&type_cast_2512);\
bit_vector_clear(&konst_2511);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2512), &(konst_2511));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT0), &(type_cast_2512));\
}\
;

#define _dataTx_phi_stmt_2514_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(nextTempDataD0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD0), &(dat0__next_data0));\
}\
;
;

#define _dataTx_merge_stmt_2502_c_postamble_macro_ merge_stmt_2502_entry_flag = 0;

#define _dataTx_assign_stmt_2527_c_macro_ __declare_static_bit_vector(konst_2521,1024);\
bit_vector_clear(&konst_2521);\
konst_2521.val.byte_array[0] = 255;\
konst_2521.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2522,1);\
__declare_static_bit_vector(konst_2524,16);\
bit_vector_clear(&konst_2524);\
konst_2524.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2525,1);\
__declare_static_bit_vector(XOR_u1_u1_2526,1);\
bit_vector_clear(&konst_2521);\
konst_2521.val.byte_array[0] = 255;\
konst_2521.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD0), &(konst_2521), &(BITSEL_u1024_u1_2522));\
bit_vector_clear(&konst_2524);\
konst_2524.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2524), &(BITSEL_u16_u1_2525));\
bit_vector_xor(&(BITSEL_u1024_u1_2522), &(BITSEL_u16_u1_2525), &(XOR_u1_u1_2526));\
bit_vector_cast_to_bit_vector(0, &(invd0), &(XOR_u1_u1_2526));\
;

#define _dataTx_assign_stmt_2551_c_macro_ __declare_static_bit_vector(slice_2530,3);\
__declare_static_bit_vector(konst_2532,16);\
bit_vector_clear(&konst_2532);\
konst_2532.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2533,1);\
__declare_static_bit_vector(XOR_u1_u1_2535,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2536,4);\
__declare_static_bit_vector(slice_2538,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2539,10);\
__declare_static_bit_vector(konst_2541,16);\
bit_vector_clear(&konst_2541);\
konst_2541.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2542,1);\
__declare_static_bit_vector(XOR_u1_u1_2544,1);\
__declare_static_bit_vector(slice_2546,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2547,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2549,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2550,16);\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2530), 12);\
bit_vector_clear(&konst_2532);\
konst_2532.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2532), &(BITSEL_u16_u1_2533));\
bit_vector_xor(&(BITSEL_u16_u1_2533), &(invd0), &(XOR_u1_u1_2535));\
bit_vector_concatenate( &(slice_2530), &(XOR_u1_u1_2535), &(CONCAT_u3_u4_2536));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2538), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2536), &(slice_2538), &(CONCAT_u4_u10_2539));\
bit_vector_clear(&konst_2541);\
konst_2541.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT0), &(konst_2541), &(BITSEL_u16_u1_2542));\
bit_vector_xor(&(BITSEL_u16_u1_2542), &(invd0), &(XOR_u1_u1_2544));\
bit_vector_slice(&(CRC_16_DAT0), &(slice_2546), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2544), &(slice_2546), &(CONCAT_u1_u5_2547));\
bit_vector_concatenate( &(CONCAT_u1_u5_2547), &(invd0), &(CONCAT_u5_u6_2549));\
bit_vector_concatenate( &(CONCAT_u4_u10_2539), &(CONCAT_u5_u6_2549), &(CONCAT_u10_u16_2550));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT0), &(CONCAT_u10_u16_2550));\
;

#define _dataTx_assign_stmt_2556_c_macro_ __declare_static_bit_vector(konst_2554,1024);\
bit_vector_clear(&konst_2554);\
konst_2554.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2555,1024);\
bit_vector_clear(&konst_2554);\
konst_2554.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD0), &(konst_2554), &(SHL_u1024_u1024_2555));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD0), &(SHL_u1024_u1024_2555));\
;

#define _dataTx_assign_stmt_2561_c_macro_ __declare_static_bit_vector(konst_2559,11);\
bit_vector_clear(&konst_2559);\
konst_2559.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2560,11);\
bit_vector_clear(&konst_2559);\
konst_2559.val.byte_array[0] = 1;\
bit_vector_plus( &(j_0), &(konst_2559), &(ADD_u11_u11_2560));\
bit_vector_cast_to_bit_vector(0, &(next_j_0), &(ADD_u11_u11_2560));\
;

#define _dataTx_merge_stmt_2567_c_preamble_macro_ uint8_t merge_stmt_2567_entry_flag;\
merge_stmt_2567_entry_flag = do_while_entry_flag;\
goto merge_stmt_2567_run;\
merge_stmt_2567_run: ;\

#define _dataTx_phi_stmt_2568_c_macro_ __declare_static_bit_vector(konst_2570,11);\
bit_vector_clear(&konst_2570);\
__declare_static_bit_vector(type_cast_2571,11);\
bit_vector_clear(&type_cast_2571);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_1), &(next_j_1));\
}\
else {\
__declare_static_bit_vector(konst_2570,11);\
bit_vector_clear(&konst_2570);\
__declare_static_bit_vector(type_cast_2571,11);\
bit_vector_clear(&type_cast_2571);\
bit_vector_clear(&konst_2570);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2571), &(konst_2570));\
bit_vector_cast_to_bit_vector(0, &(j_1), &(type_cast_2571));\
}\
;

#define _dataTx_phi_stmt_2573_c_macro_ __declare_static_bit_vector(konst_2576,16);\
bit_vector_clear(&konst_2576);\
__declare_static_bit_vector(type_cast_2577,16);\
bit_vector_clear(&type_cast_2577);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(nextCRC16_DAT1));\
}\
else {\
__declare_static_bit_vector(konst_2576,16);\
bit_vector_clear(&konst_2576);\
__declare_static_bit_vector(type_cast_2577,16);\
bit_vector_clear(&type_cast_2577);\
bit_vector_clear(&konst_2576);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2577), &(konst_2576));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT1), &(type_cast_2577));\
}\
;

#define _dataTx_phi_stmt_2578_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(nextTempDataD1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD1), &(dat1__next_data1));\
}\
;
;

#define _dataTx_merge_stmt_2567_c_postamble_macro_ merge_stmt_2567_entry_flag = 0;

#define _dataTx_assign_stmt_2591_c_macro_ __declare_static_bit_vector(konst_2585,1024);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 255;\
konst_2585.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2586,1);\
__declare_static_bit_vector(konst_2588,16);\
bit_vector_clear(&konst_2588);\
konst_2588.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2589,1);\
__declare_static_bit_vector(XOR_u1_u1_2590,1);\
bit_vector_clear(&konst_2585);\
konst_2585.val.byte_array[0] = 255;\
konst_2585.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD1), &(konst_2585), &(BITSEL_u1024_u1_2586));\
bit_vector_clear(&konst_2588);\
konst_2588.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2588), &(BITSEL_u16_u1_2589));\
bit_vector_xor(&(BITSEL_u1024_u1_2586), &(BITSEL_u16_u1_2589), &(XOR_u1_u1_2590));\
bit_vector_cast_to_bit_vector(0, &(invd1), &(XOR_u1_u1_2590));\
;

#define _dataTx_assign_stmt_2615_c_macro_ __declare_static_bit_vector(slice_2594,3);\
__declare_static_bit_vector(konst_2596,16);\
bit_vector_clear(&konst_2596);\
konst_2596.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2597,1);\
__declare_static_bit_vector(XOR_u1_u1_2599,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2600,4);\
__declare_static_bit_vector(slice_2602,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2603,10);\
__declare_static_bit_vector(konst_2605,16);\
bit_vector_clear(&konst_2605);\
konst_2605.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2606,1);\
__declare_static_bit_vector(XOR_u1_u1_2608,1);\
__declare_static_bit_vector(slice_2610,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2611,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2613,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2614,16);\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2594), 12);\
bit_vector_clear(&konst_2596);\
konst_2596.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2596), &(BITSEL_u16_u1_2597));\
bit_vector_xor(&(BITSEL_u16_u1_2597), &(invd1), &(XOR_u1_u1_2599));\
bit_vector_concatenate( &(slice_2594), &(XOR_u1_u1_2599), &(CONCAT_u3_u4_2600));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2602), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2600), &(slice_2602), &(CONCAT_u4_u10_2603));\
bit_vector_clear(&konst_2605);\
konst_2605.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT1), &(konst_2605), &(BITSEL_u16_u1_2606));\
bit_vector_xor(&(BITSEL_u16_u1_2606), &(invd1), &(XOR_u1_u1_2608));\
bit_vector_slice(&(CRC_16_DAT1), &(slice_2610), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2608), &(slice_2610), &(CONCAT_u1_u5_2611));\
bit_vector_concatenate( &(CONCAT_u1_u5_2611), &(invd1), &(CONCAT_u5_u6_2613));\
bit_vector_concatenate( &(CONCAT_u4_u10_2603), &(CONCAT_u5_u6_2613), &(CONCAT_u10_u16_2614));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT1), &(CONCAT_u10_u16_2614));\
;

#define _dataTx_assign_stmt_2620_c_macro_ __declare_static_bit_vector(konst_2618,1024);\
bit_vector_clear(&konst_2618);\
konst_2618.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2619,1024);\
bit_vector_clear(&konst_2618);\
konst_2618.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD1), &(konst_2618), &(SHL_u1024_u1024_2619));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD1), &(SHL_u1024_u1024_2619));\
;

#define _dataTx_assign_stmt_2625_c_macro_ __declare_static_bit_vector(konst_2623,11);\
bit_vector_clear(&konst_2623);\
konst_2623.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2624,11);\
bit_vector_clear(&konst_2623);\
konst_2623.val.byte_array[0] = 1;\
bit_vector_plus( &(j_1), &(konst_2623), &(ADD_u11_u11_2624));\
bit_vector_cast_to_bit_vector(0, &(next_j_1), &(ADD_u11_u11_2624));\
;

#define _dataTx_merge_stmt_2631_c_preamble_macro_ uint8_t merge_stmt_2631_entry_flag;\
merge_stmt_2631_entry_flag = do_while_entry_flag;\
goto merge_stmt_2631_run;\
merge_stmt_2631_run: ;\

#define _dataTx_phi_stmt_2632_c_macro_ __declare_static_bit_vector(konst_2634,11);\
bit_vector_clear(&konst_2634);\
__declare_static_bit_vector(type_cast_2635,11);\
bit_vector_clear(&type_cast_2635);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_2), &(next_j_2));\
}\
else {\
__declare_static_bit_vector(konst_2634,11);\
bit_vector_clear(&konst_2634);\
__declare_static_bit_vector(type_cast_2635,11);\
bit_vector_clear(&type_cast_2635);\
bit_vector_clear(&konst_2634);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2635), &(konst_2634));\
bit_vector_cast_to_bit_vector(0, &(j_2), &(type_cast_2635));\
}\
;

#define _dataTx_phi_stmt_2637_c_macro_ __declare_static_bit_vector(konst_2639,16);\
bit_vector_clear(&konst_2639);\
__declare_static_bit_vector(type_cast_2640,16);\
bit_vector_clear(&type_cast_2640);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(nextCRC16_DAT2));\
}\
else {\
__declare_static_bit_vector(konst_2639,16);\
bit_vector_clear(&konst_2639);\
__declare_static_bit_vector(type_cast_2640,16);\
bit_vector_clear(&type_cast_2640);\
bit_vector_clear(&konst_2639);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2640), &(konst_2639));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT2), &(type_cast_2640));\
}\
;

#define _dataTx_phi_stmt_2642_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(nextTempDataD2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD2), &(dat2__next_data2));\
}\
;
;

#define _dataTx_merge_stmt_2631_c_postamble_macro_ merge_stmt_2631_entry_flag = 0;

#define _dataTx_assign_stmt_2655_c_macro_ __declare_static_bit_vector(konst_2649,1024);\
bit_vector_clear(&konst_2649);\
konst_2649.val.byte_array[0] = 255;\
konst_2649.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2650,1);\
__declare_static_bit_vector(konst_2652,16);\
bit_vector_clear(&konst_2652);\
konst_2652.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2653,1);\
__declare_static_bit_vector(XOR_u1_u1_2654,1);\
bit_vector_clear(&konst_2649);\
konst_2649.val.byte_array[0] = 255;\
konst_2649.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD2), &(konst_2649), &(BITSEL_u1024_u1_2650));\
bit_vector_clear(&konst_2652);\
konst_2652.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2652), &(BITSEL_u16_u1_2653));\
bit_vector_xor(&(BITSEL_u1024_u1_2650), &(BITSEL_u16_u1_2653), &(XOR_u1_u1_2654));\
bit_vector_cast_to_bit_vector(0, &(invd2), &(XOR_u1_u1_2654));\
;

#define _dataTx_assign_stmt_2679_c_macro_ __declare_static_bit_vector(slice_2658,3);\
__declare_static_bit_vector(konst_2660,16);\
bit_vector_clear(&konst_2660);\
konst_2660.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2661,1);\
__declare_static_bit_vector(XOR_u1_u1_2663,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2664,4);\
__declare_static_bit_vector(slice_2666,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2667,10);\
__declare_static_bit_vector(konst_2669,16);\
bit_vector_clear(&konst_2669);\
konst_2669.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2670,1);\
__declare_static_bit_vector(XOR_u1_u1_2672,1);\
__declare_static_bit_vector(slice_2674,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2675,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2677,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2678,16);\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2658), 12);\
bit_vector_clear(&konst_2660);\
konst_2660.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2660), &(BITSEL_u16_u1_2661));\
bit_vector_xor(&(BITSEL_u16_u1_2661), &(invd2), &(XOR_u1_u1_2663));\
bit_vector_concatenate( &(slice_2658), &(XOR_u1_u1_2663), &(CONCAT_u3_u4_2664));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2666), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2664), &(slice_2666), &(CONCAT_u4_u10_2667));\
bit_vector_clear(&konst_2669);\
konst_2669.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT2), &(konst_2669), &(BITSEL_u16_u1_2670));\
bit_vector_xor(&(BITSEL_u16_u1_2670), &(invd2), &(XOR_u1_u1_2672));\
bit_vector_slice(&(CRC_16_DAT2), &(slice_2674), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2672), &(slice_2674), &(CONCAT_u1_u5_2675));\
bit_vector_concatenate( &(CONCAT_u1_u5_2675), &(invd2), &(CONCAT_u5_u6_2677));\
bit_vector_concatenate( &(CONCAT_u4_u10_2667), &(CONCAT_u5_u6_2677), &(CONCAT_u10_u16_2678));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT2), &(CONCAT_u10_u16_2678));\
;

#define _dataTx_assign_stmt_2684_c_macro_ __declare_static_bit_vector(konst_2682,1024);\
bit_vector_clear(&konst_2682);\
konst_2682.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2683,1024);\
bit_vector_clear(&konst_2682);\
konst_2682.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD2), &(konst_2682), &(SHL_u1024_u1024_2683));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD2), &(SHL_u1024_u1024_2683));\
;

#define _dataTx_assign_stmt_2689_c_macro_ __declare_static_bit_vector(konst_2687,11);\
bit_vector_clear(&konst_2687);\
konst_2687.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2688,11);\
bit_vector_clear(&konst_2687);\
konst_2687.val.byte_array[0] = 1;\
bit_vector_plus( &(j_2), &(konst_2687), &(ADD_u11_u11_2688));\
bit_vector_cast_to_bit_vector(0, &(next_j_2), &(ADD_u11_u11_2688));\
;

#define _dataTx_merge_stmt_2695_c_preamble_macro_ uint8_t merge_stmt_2695_entry_flag;\
merge_stmt_2695_entry_flag = do_while_entry_flag;\
goto merge_stmt_2695_run;\
merge_stmt_2695_run: ;\

#define _dataTx_phi_stmt_2696_c_macro_ __declare_static_bit_vector(konst_2698,11);\
bit_vector_clear(&konst_2698);\
__declare_static_bit_vector(type_cast_2699,11);\
bit_vector_clear(&type_cast_2699);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(j_3), &(next_j_3));\
}\
else {\
__declare_static_bit_vector(konst_2698,11);\
bit_vector_clear(&konst_2698);\
__declare_static_bit_vector(type_cast_2699,11);\
bit_vector_clear(&type_cast_2699);\
bit_vector_clear(&konst_2698);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2699), &(konst_2698));\
bit_vector_cast_to_bit_vector(0, &(j_3), &(type_cast_2699));\
}\
;

#define _dataTx_phi_stmt_2701_c_macro_ __declare_static_bit_vector(konst_2703,16);\
bit_vector_clear(&konst_2703);\
__declare_static_bit_vector(type_cast_2704,16);\
bit_vector_clear(&type_cast_2704);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(nextCRC16_DAT3));\
}\
else {\
__declare_static_bit_vector(konst_2703,16);\
bit_vector_clear(&konst_2703);\
__declare_static_bit_vector(type_cast_2704,16);\
bit_vector_clear(&type_cast_2704);\
bit_vector_clear(&konst_2703);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2704), &(konst_2703));\
bit_vector_cast_to_bit_vector(0, &(CRC_16_DAT3), &(type_cast_2704));\
}\
;

#define _dataTx_phi_stmt_2706_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(nextTempDataD3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempDataD3), &(dat3__next_data3));\
}\
;
;

#define _dataTx_merge_stmt_2695_c_postamble_macro_ merge_stmt_2695_entry_flag = 0;

#define _dataTx_assign_stmt_2719_c_macro_ __declare_static_bit_vector(konst_2713,1024);\
bit_vector_clear(&konst_2713);\
konst_2713.val.byte_array[0] = 255;\
konst_2713.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2714,1);\
__declare_static_bit_vector(konst_2716,16);\
bit_vector_clear(&konst_2716);\
konst_2716.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2717,1);\
__declare_static_bit_vector(XOR_u1_u1_2718,1);\
bit_vector_clear(&konst_2713);\
konst_2713.val.byte_array[0] = 255;\
konst_2713.val.byte_array[1] = 3;\
bit_vector_bitsel( &(tempDataD3), &(konst_2713), &(BITSEL_u1024_u1_2714));\
bit_vector_clear(&konst_2716);\
konst_2716.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2716), &(BITSEL_u16_u1_2717));\
bit_vector_xor(&(BITSEL_u1024_u1_2714), &(BITSEL_u16_u1_2717), &(XOR_u1_u1_2718));\
bit_vector_cast_to_bit_vector(0, &(invd3), &(XOR_u1_u1_2718));\
;

#define _dataTx_assign_stmt_2743_c_macro_ __declare_static_bit_vector(slice_2722,3);\
__declare_static_bit_vector(konst_2724,16);\
bit_vector_clear(&konst_2724);\
konst_2724.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_2725,1);\
__declare_static_bit_vector(XOR_u1_u1_2727,1);\
__declare_static_bit_vector(CONCAT_u3_u4_2728,4);\
__declare_static_bit_vector(slice_2730,6);\
__declare_static_bit_vector(CONCAT_u4_u10_2731,10);\
__declare_static_bit_vector(konst_2733,16);\
bit_vector_clear(&konst_2733);\
konst_2733.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_2734,1);\
__declare_static_bit_vector(XOR_u1_u1_2736,1);\
__declare_static_bit_vector(slice_2738,4);\
__declare_static_bit_vector(CONCAT_u1_u5_2739,5);\
__declare_static_bit_vector(CONCAT_u5_u6_2741,6);\
__declare_static_bit_vector(CONCAT_u10_u16_2742,16);\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2722), 12);\
bit_vector_clear(&konst_2724);\
konst_2724.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2724), &(BITSEL_u16_u1_2725));\
bit_vector_xor(&(BITSEL_u16_u1_2725), &(invd3), &(XOR_u1_u1_2727));\
bit_vector_concatenate( &(slice_2722), &(XOR_u1_u1_2727), &(CONCAT_u3_u4_2728));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2730), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_2728), &(slice_2730), &(CONCAT_u4_u10_2731));\
bit_vector_clear(&konst_2733);\
konst_2733.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16_DAT3), &(konst_2733), &(BITSEL_u16_u1_2734));\
bit_vector_xor(&(BITSEL_u16_u1_2734), &(invd3), &(XOR_u1_u1_2736));\
bit_vector_slice(&(CRC_16_DAT3), &(slice_2738), 0);\
bit_vector_concatenate( &(XOR_u1_u1_2736), &(slice_2738), &(CONCAT_u1_u5_2739));\
bit_vector_concatenate( &(CONCAT_u1_u5_2739), &(invd3), &(CONCAT_u5_u6_2741));\
bit_vector_concatenate( &(CONCAT_u4_u10_2731), &(CONCAT_u5_u6_2741), &(CONCAT_u10_u16_2742));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16_DAT3), &(CONCAT_u10_u16_2742));\
;

#define _dataTx_assign_stmt_2748_c_macro_ __declare_static_bit_vector(konst_2746,1024);\
bit_vector_clear(&konst_2746);\
konst_2746.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2747,1024);\
bit_vector_clear(&konst_2746);\
konst_2746.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempDataD3), &(konst_2746), &(SHL_u1024_u1024_2747));\
bit_vector_cast_to_bit_vector(0, &(nextTempDataD3), &(SHL_u1024_u1024_2747));\
;

#define _dataTx_assign_stmt_2753_c_macro_ __declare_static_bit_vector(konst_2751,11);\
bit_vector_clear(&konst_2751);\
konst_2751.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2752,11);\
bit_vector_clear(&konst_2751);\
konst_2751.val.byte_array[0] = 1;\
bit_vector_plus( &(j_3), &(konst_2751), &(ADD_u11_u11_2752));\
bit_vector_cast_to_bit_vector(0, &(next_j_3), &(ADD_u11_u11_2752));\
;

#define _dataTx_assign_stmt_2760_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2762_c_preamble_macro_ uint8_t merge_stmt_2762_entry_flag;\
merge_stmt_2762_entry_flag = do_while_entry_flag;\
goto merge_stmt_2762_run;\
merge_stmt_2762_run: ;\

#define _dataTx_phi_stmt_2763_c_macro_ __declare_static_bit_vector(konst_2765,11);\
bit_vector_clear(&konst_2765);\
__declare_static_bit_vector(type_cast_2766,11);\
bit_vector_clear(&type_cast_2766);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_0), &(next_k_0));\
}\
else {\
__declare_static_bit_vector(konst_2765,11);\
bit_vector_clear(&konst_2765);\
__declare_static_bit_vector(type_cast_2766,11);\
bit_vector_clear(&type_cast_2766);\
bit_vector_clear(&konst_2765);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2766), &(konst_2765));\
bit_vector_cast_to_bit_vector(0, &(k_0), &(type_cast_2766));\
}\
;

#define _dataTx_phi_stmt_2768_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(nextbit4_0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_0), &(dat0__next_data0));\
}\
;
;

#define _dataTx_merge_stmt_2762_c_postamble_macro_ merge_stmt_2762_entry_flag = 0;

#define _dataTx_assign_stmt_2777_c_macro_ __declare_static_bit_vector(konst_2775,1024);\
bit_vector_clear(&konst_2775);\
konst_2775.val.byte_array[0] = 255;\
konst_2775.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2776,1);\
bit_vector_clear(&konst_2775);\
konst_2775.val.byte_array[0] = 255;\
konst_2775.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_0), &(konst_2775), &(BITSEL_u1024_u1_2776));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u1024_u1_2776));\
;

#define _dataTx_assign_stmt_2782_c_macro_ __declare_static_bit_vector(konst_2780,1024);\
bit_vector_clear(&konst_2780);\
konst_2780.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2781,1024);\
bit_vector_clear(&konst_2780);\
konst_2780.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_0), &(konst_2780), &(SHL_u1024_u1024_2781));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_0), &(SHL_u1024_u1024_2781));\
;

#define _dataTx_assign_stmt_2787_c_macro_ __declare_static_bit_vector(konst_2785,11);\
bit_vector_clear(&konst_2785);\
konst_2785.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2786,11);\
bit_vector_clear(&konst_2785);\
konst_2785.val.byte_array[0] = 1;\
bit_vector_plus( &(k_0), &(konst_2785), &(ADD_u11_u11_2786));\
bit_vector_cast_to_bit_vector(0, &(next_k_0), &(ADD_u11_u11_2786));\
;

#define _dataTx_merge_stmt_2793_c_preamble_macro_ uint8_t merge_stmt_2793_entry_flag;\
merge_stmt_2793_entry_flag = do_while_entry_flag;\
goto merge_stmt_2793_run;\
merge_stmt_2793_run: ;\

#define _dataTx_phi_stmt_2794_c_macro_ __declare_static_bit_vector(konst_2796,5);\
bit_vector_clear(&konst_2796);\
__declare_static_bit_vector(type_cast_2797,5);\
bit_vector_clear(&type_cast_2797);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_0), &(next_l_0));\
}\
else {\
__declare_static_bit_vector(konst_2796,5);\
bit_vector_clear(&konst_2796);\
__declare_static_bit_vector(type_cast_2797,5);\
bit_vector_clear(&type_cast_2797);\
bit_vector_clear(&konst_2796);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2797), &(konst_2796));\
bit_vector_cast_to_bit_vector(0, &(l_0), &(type_cast_2797));\
}\
;

#define _dataTx_phi_stmt_2799_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0crc4), &(nextbitcrc4_0));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0crc4), &(nextCRC16_DAT0));\
}\
;
;

#define _dataTx_merge_stmt_2793_c_postamble_macro_ merge_stmt_2793_entry_flag = 0;

#define _dataTx_assign_stmt_2808_c_macro_ __declare_static_bit_vector(konst_2806,16);\
bit_vector_clear(&konst_2806);\
konst_2806.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2807,1);\
bit_vector_clear(&konst_2806);\
konst_2806.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat0crc4), &(konst_2806), &(BITSEL_u16_u1_2807));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u16_u1_2807));\
;

#define _dataTx_assign_stmt_2813_c_macro_ __declare_static_bit_vector(konst_2811,16);\
bit_vector_clear(&konst_2811);\
konst_2811.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2812,16);\
bit_vector_clear(&konst_2811);\
konst_2811.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0crc4), &(konst_2811), &(SHL_u16_u16_2812));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_0), &(SHL_u16_u16_2812));\
;

#define _dataTx_assign_stmt_2818_c_macro_ __declare_static_bit_vector(konst_2816,5);\
bit_vector_clear(&konst_2816);\
konst_2816.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2817,5);\
bit_vector_clear(&konst_2816);\
konst_2816.val.byte_array[0] = 1;\
bit_vector_plus( &(l_0), &(konst_2816), &(ADD_u5_u5_2817));\
bit_vector_cast_to_bit_vector(0, &(next_l_0), &(ADD_u5_u5_2817));\
;

#define _dataTx_assign_stmt_2825_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ONE_1));\
;

#define _dataTx_stmt_2827_c_macro_ uint32_t _dataTx_stmt_2827_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA0>\t%s\n",_dataTx_stmt_2827_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA0>\t\t%s\t\t",_dataTx_stmt_2827_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_2830_c_macro_ write_bit_vector_to_pipe("DAT1Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2832_c_preamble_macro_ uint8_t merge_stmt_2832_entry_flag;\
merge_stmt_2832_entry_flag = do_while_entry_flag;\
goto merge_stmt_2832_run;\
merge_stmt_2832_run: ;\

#define _dataTx_phi_stmt_2833_c_macro_ __declare_static_bit_vector(konst_2835,11);\
bit_vector_clear(&konst_2835);\
__declare_static_bit_vector(type_cast_2836,11);\
bit_vector_clear(&type_cast_2836);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_1), &(next_k_1));\
}\
else {\
__declare_static_bit_vector(konst_2835,11);\
bit_vector_clear(&konst_2835);\
__declare_static_bit_vector(type_cast_2836,11);\
bit_vector_clear(&type_cast_2836);\
bit_vector_clear(&konst_2835);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2836), &(konst_2835));\
bit_vector_cast_to_bit_vector(0, &(k_1), &(type_cast_2836));\
}\
;

#define _dataTx_phi_stmt_2838_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(nextbit4_1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_1), &(dat1__next_data1));\
}\
;
;

#define _dataTx_merge_stmt_2832_c_postamble_macro_ merge_stmt_2832_entry_flag = 0;

#define _dataTx_assign_stmt_2847_c_macro_ __declare_static_bit_vector(konst_2845,1024);\
bit_vector_clear(&konst_2845);\
konst_2845.val.byte_array[0] = 255;\
konst_2845.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2846,1);\
bit_vector_clear(&konst_2845);\
konst_2845.val.byte_array[0] = 255;\
konst_2845.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_1), &(konst_2845), &(BITSEL_u1024_u1_2846));\
write_bit_vector_to_pipe("DAT1Tx",&(BITSEL_u1024_u1_2846));\
;

#define _dataTx_assign_stmt_2852_c_macro_ __declare_static_bit_vector(konst_2850,1024);\
bit_vector_clear(&konst_2850);\
konst_2850.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2851,1024);\
bit_vector_clear(&konst_2850);\
konst_2850.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_1), &(konst_2850), &(SHL_u1024_u1024_2851));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_1), &(SHL_u1024_u1024_2851));\
;

#define _dataTx_assign_stmt_2857_c_macro_ __declare_static_bit_vector(konst_2855,11);\
bit_vector_clear(&konst_2855);\
konst_2855.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2856,11);\
bit_vector_clear(&konst_2855);\
konst_2855.val.byte_array[0] = 1;\
bit_vector_plus( &(k_1), &(konst_2855), &(ADD_u11_u11_2856));\
bit_vector_cast_to_bit_vector(0, &(next_k_1), &(ADD_u11_u11_2856));\
;

#define _dataTx_merge_stmt_2863_c_preamble_macro_ uint8_t merge_stmt_2863_entry_flag;\
merge_stmt_2863_entry_flag = do_while_entry_flag;\
goto merge_stmt_2863_run;\
merge_stmt_2863_run: ;\

#define _dataTx_phi_stmt_2864_c_macro_ __declare_static_bit_vector(konst_2866,5);\
bit_vector_clear(&konst_2866);\
__declare_static_bit_vector(type_cast_2867,5);\
bit_vector_clear(&type_cast_2867);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_1), &(next_l_1));\
}\
else {\
__declare_static_bit_vector(konst_2866,5);\
bit_vector_clear(&konst_2866);\
__declare_static_bit_vector(type_cast_2867,5);\
bit_vector_clear(&type_cast_2867);\
bit_vector_clear(&konst_2866);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2867), &(konst_2866));\
bit_vector_cast_to_bit_vector(0, &(l_1), &(type_cast_2867));\
}\
;

#define _dataTx_phi_stmt_2869_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat1crc4), &(nextbitcrc4_1));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat1crc4), &(nextCRC16_DAT1));\
}\
;
;

#define _dataTx_merge_stmt_2863_c_postamble_macro_ merge_stmt_2863_entry_flag = 0;

#define _dataTx_assign_stmt_2878_c_macro_ __declare_static_bit_vector(konst_2876,16);\
bit_vector_clear(&konst_2876);\
konst_2876.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2877,1);\
bit_vector_clear(&konst_2876);\
konst_2876.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat1crc4), &(konst_2876), &(BITSEL_u16_u1_2877));\
write_bit_vector_to_pipe("DAT1Tx",&(BITSEL_u16_u1_2877));\
;

#define _dataTx_assign_stmt_2883_c_macro_ __declare_static_bit_vector(konst_2881,16);\
bit_vector_clear(&konst_2881);\
konst_2881.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2882,16);\
bit_vector_clear(&konst_2881);\
konst_2881.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat1crc4), &(konst_2881), &(SHL_u16_u16_2882));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_1), &(SHL_u16_u16_2882));\
;

#define _dataTx_assign_stmt_2888_c_macro_ __declare_static_bit_vector(konst_2886,5);\
bit_vector_clear(&konst_2886);\
konst_2886.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2887,5);\
bit_vector_clear(&konst_2886);\
konst_2886.val.byte_array[0] = 1;\
bit_vector_plus( &(l_1), &(konst_2886), &(ADD_u5_u5_2887));\
bit_vector_cast_to_bit_vector(0, &(next_l_1), &(ADD_u5_u5_2887));\
;

#define _dataTx_assign_stmt_2895_c_macro_ write_bit_vector_to_pipe("DAT1Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_2898_c_macro_ write_bit_vector_to_pipe("DAT2Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2900_c_preamble_macro_ uint8_t merge_stmt_2900_entry_flag;\
merge_stmt_2900_entry_flag = do_while_entry_flag;\
goto merge_stmt_2900_run;\
merge_stmt_2900_run: ;\

#define _dataTx_phi_stmt_2901_c_macro_ __declare_static_bit_vector(konst_2903,11);\
bit_vector_clear(&konst_2903);\
__declare_static_bit_vector(type_cast_2904,11);\
bit_vector_clear(&type_cast_2904);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_2), &(next_k_2));\
}\
else {\
__declare_static_bit_vector(konst_2903,11);\
bit_vector_clear(&konst_2903);\
__declare_static_bit_vector(type_cast_2904,11);\
bit_vector_clear(&type_cast_2904);\
bit_vector_clear(&konst_2903);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2904), &(konst_2903));\
bit_vector_cast_to_bit_vector(0, &(k_2), &(type_cast_2904));\
}\
;

#define _dataTx_phi_stmt_2906_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(nextbit4_2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_2), &(dat2__next_data2));\
}\
;
;

#define _dataTx_merge_stmt_2900_c_postamble_macro_ merge_stmt_2900_entry_flag = 0;

#define _dataTx_assign_stmt_2915_c_macro_ __declare_static_bit_vector(konst_2913,1024);\
bit_vector_clear(&konst_2913);\
konst_2913.val.byte_array[0] = 255;\
konst_2913.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2914,1);\
bit_vector_clear(&konst_2913);\
konst_2913.val.byte_array[0] = 255;\
konst_2913.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_2), &(konst_2913), &(BITSEL_u1024_u1_2914));\
write_bit_vector_to_pipe("DAT2Tx",&(BITSEL_u1024_u1_2914));\
;

#define _dataTx_assign_stmt_2920_c_macro_ __declare_static_bit_vector(konst_2918,1024);\
bit_vector_clear(&konst_2918);\
konst_2918.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2919,1024);\
bit_vector_clear(&konst_2918);\
konst_2918.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_2), &(konst_2918), &(SHL_u1024_u1024_2919));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_2), &(SHL_u1024_u1024_2919));\
;

#define _dataTx_assign_stmt_2925_c_macro_ __declare_static_bit_vector(konst_2923,11);\
bit_vector_clear(&konst_2923);\
konst_2923.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2924,11);\
bit_vector_clear(&konst_2923);\
konst_2923.val.byte_array[0] = 1;\
bit_vector_plus( &(k_2), &(konst_2923), &(ADD_u11_u11_2924));\
bit_vector_cast_to_bit_vector(0, &(next_k_2), &(ADD_u11_u11_2924));\
;

#define _dataTx_merge_stmt_2931_c_preamble_macro_ uint8_t merge_stmt_2931_entry_flag;\
merge_stmt_2931_entry_flag = do_while_entry_flag;\
goto merge_stmt_2931_run;\
merge_stmt_2931_run: ;\

#define _dataTx_phi_stmt_2932_c_macro_ __declare_static_bit_vector(konst_2934,5);\
bit_vector_clear(&konst_2934);\
__declare_static_bit_vector(type_cast_2935,5);\
bit_vector_clear(&type_cast_2935);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_2), &(next_l_2));\
}\
else {\
__declare_static_bit_vector(konst_2934,5);\
bit_vector_clear(&konst_2934);\
__declare_static_bit_vector(type_cast_2935,5);\
bit_vector_clear(&type_cast_2935);\
bit_vector_clear(&konst_2934);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2935), &(konst_2934));\
bit_vector_cast_to_bit_vector(0, &(l_2), &(type_cast_2935));\
}\
;

#define _dataTx_phi_stmt_2937_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat2crc4), &(nextbitcrc4_2));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat2crc4), &(nextCRC16_DAT2));\
}\
;
;

#define _dataTx_merge_stmt_2931_c_postamble_macro_ merge_stmt_2931_entry_flag = 0;

#define _dataTx_assign_stmt_2946_c_macro_ __declare_static_bit_vector(konst_2944,16);\
bit_vector_clear(&konst_2944);\
konst_2944.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_2945,1);\
bit_vector_clear(&konst_2944);\
konst_2944.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat2crc4), &(konst_2944), &(BITSEL_u16_u1_2945));\
write_bit_vector_to_pipe("DAT2Tx",&(BITSEL_u16_u1_2945));\
;

#define _dataTx_assign_stmt_2951_c_macro_ __declare_static_bit_vector(konst_2949,16);\
bit_vector_clear(&konst_2949);\
konst_2949.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_2950,16);\
bit_vector_clear(&konst_2949);\
konst_2949.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat2crc4), &(konst_2949), &(SHL_u16_u16_2950));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_2), &(SHL_u16_u16_2950));\
;

#define _dataTx_assign_stmt_2956_c_macro_ __declare_static_bit_vector(konst_2954,5);\
bit_vector_clear(&konst_2954);\
konst_2954.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_2955,5);\
bit_vector_clear(&konst_2954);\
konst_2954.val.byte_array[0] = 1;\
bit_vector_plus( &(l_2), &(konst_2954), &(ADD_u5_u5_2955));\
bit_vector_cast_to_bit_vector(0, &(next_l_2), &(ADD_u5_u5_2955));\
;

#define _dataTx_assign_stmt_2963_c_macro_ write_bit_vector_to_pipe("DAT2Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_2966_c_macro_ write_bit_vector_to_pipe("DAT3Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_2968_c_preamble_macro_ uint8_t merge_stmt_2968_entry_flag;\
merge_stmt_2968_entry_flag = do_while_entry_flag;\
goto merge_stmt_2968_run;\
merge_stmt_2968_run: ;\

#define _dataTx_phi_stmt_2969_c_macro_ __declare_static_bit_vector(konst_2971,11);\
bit_vector_clear(&konst_2971);\
__declare_static_bit_vector(type_cast_2972,11);\
bit_vector_clear(&type_cast_2972);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(k_3), &(next_k_3));\
}\
else {\
__declare_static_bit_vector(konst_2971,11);\
bit_vector_clear(&konst_2971);\
__declare_static_bit_vector(type_cast_2972,11);\
bit_vector_clear(&type_cast_2972);\
bit_vector_clear(&konst_2971);\
bit_vector_bitcast_to_bit_vector( &(type_cast_2972), &(konst_2971));\
bit_vector_cast_to_bit_vector(0, &(k_3), &(type_cast_2972));\
}\
;

#define _dataTx_phi_stmt_2974_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(nextbit4_3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit4_3), &(dat3__next_data3));\
}\
;
;

#define _dataTx_merge_stmt_2968_c_postamble_macro_ merge_stmt_2968_entry_flag = 0;

#define _dataTx_assign_stmt_2983_c_macro_ __declare_static_bit_vector(konst_2981,1024);\
bit_vector_clear(&konst_2981);\
konst_2981.val.byte_array[0] = 255;\
konst_2981.val.byte_array[1] = 3;\
__declare_static_bit_vector(BITSEL_u1024_u1_2982,1);\
bit_vector_clear(&konst_2981);\
konst_2981.val.byte_array[0] = 255;\
konst_2981.val.byte_array[1] = 3;\
bit_vector_bitsel( &(dat0bit4_3), &(konst_2981), &(BITSEL_u1024_u1_2982));\
write_bit_vector_to_pipe("DAT3Tx",&(BITSEL_u1024_u1_2982));\
;

#define _dataTx_assign_stmt_2988_c_macro_ __declare_static_bit_vector(konst_2986,1024);\
bit_vector_clear(&konst_2986);\
konst_2986.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u1024_u1024_2987,1024);\
bit_vector_clear(&konst_2986);\
konst_2986.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit4_3), &(konst_2986), &(SHL_u1024_u1024_2987));\
bit_vector_cast_to_bit_vector(0, &(nextbit4_3), &(SHL_u1024_u1024_2987));\
;

#define _dataTx_assign_stmt_2993_c_macro_ __declare_static_bit_vector(konst_2991,11);\
bit_vector_clear(&konst_2991);\
konst_2991.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u11_u11_2992,11);\
bit_vector_clear(&konst_2991);\
konst_2991.val.byte_array[0] = 1;\
bit_vector_plus( &(k_3), &(konst_2991), &(ADD_u11_u11_2992));\
bit_vector_cast_to_bit_vector(0, &(next_k_3), &(ADD_u11_u11_2992));\
;

#define _dataTx_merge_stmt_2999_c_preamble_macro_ uint8_t merge_stmt_2999_entry_flag;\
merge_stmt_2999_entry_flag = do_while_entry_flag;\
goto merge_stmt_2999_run;\
merge_stmt_2999_run: ;\

#define _dataTx_phi_stmt_3000_c_macro_ __declare_static_bit_vector(konst_3002,5);\
bit_vector_clear(&konst_3002);\
__declare_static_bit_vector(type_cast_3003,5);\
bit_vector_clear(&type_cast_3003);\
if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(l_3), &(next_l_3));\
}\
else {\
__declare_static_bit_vector(konst_3002,5);\
bit_vector_clear(&konst_3002);\
__declare_static_bit_vector(type_cast_3003,5);\
bit_vector_clear(&type_cast_3003);\
bit_vector_clear(&konst_3002);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3003), &(konst_3002));\
bit_vector_cast_to_bit_vector(0, &(l_3), &(type_cast_3003));\
}\
;

#define _dataTx_phi_stmt_3005_c_macro_ if(do_while_loopback_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat3crc4), &(nextbitcrc4_3));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat3crc4), &(nextCRC16_DAT3));\
}\
;
;

#define _dataTx_merge_stmt_2999_c_postamble_macro_ merge_stmt_2999_entry_flag = 0;

#define _dataTx_assign_stmt_3014_c_macro_ __declare_static_bit_vector(konst_3012,16);\
bit_vector_clear(&konst_3012);\
konst_3012.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_3013,1);\
bit_vector_clear(&konst_3012);\
konst_3012.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat3crc4), &(konst_3012), &(BITSEL_u16_u1_3013));\
write_bit_vector_to_pipe("DAT3Tx",&(BITSEL_u16_u1_3013));\
;

#define _dataTx_assign_stmt_3019_c_macro_ __declare_static_bit_vector(konst_3017,16);\
bit_vector_clear(&konst_3017);\
konst_3017.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_3018,16);\
bit_vector_clear(&konst_3017);\
konst_3017.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat3crc4), &(konst_3017), &(SHL_u16_u16_3018));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc4_3), &(SHL_u16_u16_3018));\
;

#define _dataTx_assign_stmt_3024_c_macro_ __declare_static_bit_vector(konst_3022,5);\
bit_vector_clear(&konst_3022);\
konst_3022.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_3023,5);\
bit_vector_clear(&konst_3022);\
konst_3022.val.byte_array[0] = 1;\
bit_vector_plus( &(l_3), &(konst_3022), &(ADD_u5_u5_3023));\
bit_vector_cast_to_bit_vector(0, &(next_l_3), &(ADD_u5_u5_3023));\
;

#define _dataTx_assign_stmt_3031_c_macro_ write_bit_vector_to_pipe("DAT3Tx",&(ONE_1));\
;

#define _dataTx_stmt_3036_c_macro_ uint32_t _dataTx_stmt_3036_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]END>\t%s\n",_dataTx_stmt_3036_c_macro___print_counter,"transmission");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3036_c_macro___print_counter,"dat0");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat0__next_data0)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3036_c_macro___print_counter,"dat1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat1__next_data1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3036_c_macro___print_counter,"dat2");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat2__next_data2)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]END>\t\t%s\t\t",_dataTx_stmt_3036_c_macro___print_counter,"dat3");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat3__next_data3)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_branch_block_stmt_3038_c_export_decl_macro_ __declare_static_bit_vector(dat__next_data,4096);\
__declare_static_bit_vector(I,10);\
__declare_static_bit_vector(dat,4096);\
__declare_static_bit_vector(next_data,4096);\
__declare_static_bit_vector(next_I,10);\


#define _dataTx_merge_stmt_3039_c_preamble_macro_ uint8_t merge_stmt_3039_entry_flag;\
merge_stmt_3039_entry_flag = 1;\
uint8_t loopback1_3038_flag = 0;\
goto merge_stmt_3039_run;\
loopback1_3038: loopback1_3038_flag = 1;\
goto merge_stmt_3039_run;\
merge_stmt_3039_run: ;\

#define _dataTx_phi_stmt_3040_c_macro_ __declare_static_bit_vector(konst_3042,10);\
bit_vector_clear(&konst_3042);\
__declare_static_bit_vector(type_cast_3043,10);\
bit_vector_clear(&type_cast_3043);\
if(loopback1_3038_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_3042,10);\
bit_vector_clear(&konst_3042);\
__declare_static_bit_vector(type_cast_3043,10);\
bit_vector_clear(&type_cast_3043);\
bit_vector_clear(&konst_3042);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3043), &(konst_3042));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_3043));\
}\
;

#define _dataTx_phi_stmt_3045_c_macro_ __declare_static_bit_vector(konst_3047,4096);\
bit_vector_clear(&konst_3047);\
__declare_static_bit_vector(type_cast_3048,4096);\
bit_vector_clear(&type_cast_3048);\
if(loopback1_3038_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat), &(next_data));\
}\
else {\
__declare_static_bit_vector(konst_3047,4096);\
bit_vector_clear(&konst_3047);\
__declare_static_bit_vector(type_cast_3048,4096);\
bit_vector_clear(&type_cast_3048);\
bit_vector_clear(&konst_3047);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3048), &(konst_3047));\
bit_vector_cast_to_bit_vector(0, &(dat), &(type_cast_3048));\
}\
;
;

#define _dataTx_merge_stmt_3039_c_postamble_macro_ loopback1_3038_flag = 0;\
merge_stmt_3039_entry_flag = 0;

#define _dataTx_assign_stmt_3060_c_macro_ __declare_static_bit_vector(konst_3053,4096);\
bit_vector_clear(&konst_3053);\
konst_3053.val.byte_array[0] = 8;\
__declare_static_bit_vector(SHL_u4096_u4096_3054,4096);\
__declare_static_bit_vector(konst_3055,4088);\
bit_vector_clear(&konst_3055);\
__declare_static_bit_vector(type_cast_3056,4088);\
bit_vector_clear(&type_cast_3056);\
__declare_static_bit_vector(RPIPE_dataBufferTx_3057,8);\
__declare_static_bit_vector(CONCAT_u4088_u4096_3058,4096);\
__declare_static_bit_vector(OR_u4096_u4096_3059,4096);\
bit_vector_clear(&konst_3053);\
konst_3053.val.byte_array[0] = 8;\
bit_vector_shift_left(&(dat), &(konst_3053), &(SHL_u4096_u4096_3054));\
bit_vector_clear(&konst_3055);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3056), &(konst_3055));\
read_bit_vector_from_pipe("dataBufferTx",&(RPIPE_dataBufferTx_3057));\
bit_vector_concatenate( &(type_cast_3056), &(RPIPE_dataBufferTx_3057), &(CONCAT_u4088_u4096_3058));\
bit_vector_or(&(SHL_u4096_u4096_3054), &(CONCAT_u4088_u4096_3058), &(OR_u4096_u4096_3059));\
bit_vector_cast_to_bit_vector(0, &(next_data), &(OR_u4096_u4096_3059));\
;

#define _dataTx_assign_stmt_3065_c_macro_ __declare_static_bit_vector(konst_3063,10);\
bit_vector_clear(&konst_3063);\
konst_3063.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u10_u10_3064,10);\
bit_vector_clear(&konst_3063);\
konst_3063.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_3063), &(ADD_u10_u10_3064));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u10_u10_3064));\
;
;

#define _dataTx_branch_block_stmt_3038_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(dat__next_data), &(next_data));\
;

#define _dataTx_assign_stmt_3076_c_macro_ __declare_static_bit_vector(konst_3074,10);\
bit_vector_clear(&konst_3074);\
__declare_static_bit_vector(type_cast_3075,10);\
bit_vector_clear(&type_cast_3075);\
bit_vector_clear(&konst_3074);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3075), &(konst_3074));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_3075));\
;

#define _dataTx_merge_stmt_3077_c_preamble_macro_ uint8_t merge_stmt_3077_entry_flag;\
merge_stmt_3077_entry_flag = 1;\
uint8_t loopback_2383_flag = 0;\
goto merge_stmt_3077_run;\
loopback_2383: loopback_2383_flag = 1;\
goto merge_stmt_3077_run;\
merge_stmt_3077_run: ;\

#define _dataTx_phi_stmt_3078_c_macro_ __declare_static_bit_vector(konst_3080,13);\
bit_vector_clear(&konst_3080);\
__declare_static_bit_vector(type_cast_3081,13);\
bit_vector_clear(&type_cast_3081);\
if(loopback_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(J), &(next_J));\
}\
else {\
__declare_static_bit_vector(konst_3080,13);\
bit_vector_clear(&konst_3080);\
__declare_static_bit_vector(type_cast_3081,13);\
bit_vector_clear(&type_cast_3081);\
bit_vector_clear(&konst_3080);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3081), &(konst_3080));\
bit_vector_cast_to_bit_vector(0, &(J), &(type_cast_3081));\
}\
;

#define _dataTx_phi_stmt_3083_c_macro_ __declare_static_bit_vector(konst_3085,16);\
bit_vector_clear(&konst_3085);\
__declare_static_bit_vector(type_cast_3086,16);\
bit_vector_clear(&type_cast_3086);\
if(loopback_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(nextCRC16));\
}\
else {\
__declare_static_bit_vector(konst_3085,16);\
bit_vector_clear(&konst_3085);\
__declare_static_bit_vector(type_cast_3086,16);\
bit_vector_clear(&type_cast_3086);\
bit_vector_clear(&konst_3085);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3086), &(konst_3085));\
bit_vector_cast_to_bit_vector(0, &(CRC_16), &(type_cast_3086));\
}\
;

#define _dataTx_phi_stmt_3088_c_macro_ if(loopback_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(nextTempData));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(tempData), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_3077_c_postamble_macro_ loopback_2383_flag = 0;\
merge_stmt_3077_entry_flag = 0;

#define _dataTx_assign_stmt_3101_c_macro_ __declare_static_bit_vector(konst_3095,4096);\
bit_vector_clear(&konst_3095);\
konst_3095.val.byte_array[0] = 255;\
konst_3095.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_3096,1);\
__declare_static_bit_vector(konst_3098,16);\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_3099,1);\
__declare_static_bit_vector(XOR_u1_u1_3100,1);\
bit_vector_clear(&konst_3095);\
konst_3095.val.byte_array[0] = 255;\
konst_3095.val.byte_array[1] = 15;\
bit_vector_bitsel( &(tempData), &(konst_3095), &(BITSEL_u4096_u1_3096));\
bit_vector_clear(&konst_3098);\
konst_3098.val.byte_array[0] = 15;\
bit_vector_bitsel( &(CRC_16), &(konst_3098), &(BITSEL_u16_u1_3099));\
bit_vector_xor(&(BITSEL_u4096_u1_3096), &(BITSEL_u16_u1_3099), &(XOR_u1_u1_3100));\
bit_vector_cast_to_bit_vector(0, &(inv), &(XOR_u1_u1_3100));\
;

#define _dataTx_assign_stmt_3125_c_macro_ __declare_static_bit_vector(slice_3104,3);\
__declare_static_bit_vector(konst_3106,16);\
bit_vector_clear(&konst_3106);\
konst_3106.val.byte_array[0] = 11;\
__declare_static_bit_vector(BITSEL_u16_u1_3107,1);\
__declare_static_bit_vector(XOR_u1_u1_3109,1);\
__declare_static_bit_vector(CONCAT_u3_u4_3110,4);\
__declare_static_bit_vector(slice_3112,6);\
__declare_static_bit_vector(CONCAT_u4_u10_3113,10);\
__declare_static_bit_vector(konst_3115,16);\
bit_vector_clear(&konst_3115);\
konst_3115.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u16_u1_3116,1);\
__declare_static_bit_vector(XOR_u1_u1_3118,1);\
__declare_static_bit_vector(slice_3120,4);\
__declare_static_bit_vector(CONCAT_u1_u5_3121,5);\
__declare_static_bit_vector(CONCAT_u5_u6_3123,6);\
__declare_static_bit_vector(CONCAT_u10_u16_3124,16);\
bit_vector_slice(&(CRC_16), &(slice_3104), 12);\
bit_vector_clear(&konst_3106);\
konst_3106.val.byte_array[0] = 11;\
bit_vector_bitsel( &(CRC_16), &(konst_3106), &(BITSEL_u16_u1_3107));\
bit_vector_xor(&(BITSEL_u16_u1_3107), &(inv), &(XOR_u1_u1_3109));\
bit_vector_concatenate( &(slice_3104), &(XOR_u1_u1_3109), &(CONCAT_u3_u4_3110));\
bit_vector_slice(&(CRC_16), &(slice_3112), 5);\
bit_vector_concatenate( &(CONCAT_u3_u4_3110), &(slice_3112), &(CONCAT_u4_u10_3113));\
bit_vector_clear(&konst_3115);\
konst_3115.val.byte_array[0] = 4;\
bit_vector_bitsel( &(CRC_16), &(konst_3115), &(BITSEL_u16_u1_3116));\
bit_vector_xor(&(BITSEL_u16_u1_3116), &(inv), &(XOR_u1_u1_3118));\
bit_vector_slice(&(CRC_16), &(slice_3120), 0);\
bit_vector_concatenate( &(XOR_u1_u1_3118), &(slice_3120), &(CONCAT_u1_u5_3121));\
bit_vector_concatenate( &(CONCAT_u1_u5_3121), &(inv), &(CONCAT_u5_u6_3123));\
bit_vector_concatenate( &(CONCAT_u4_u10_3113), &(CONCAT_u5_u6_3123), &(CONCAT_u10_u16_3124));\
bit_vector_cast_to_bit_vector(0, &(nextCRC16), &(CONCAT_u10_u16_3124));\
;

#define _dataTx_assign_stmt_3130_c_macro_ __declare_static_bit_vector(konst_3128,4096);\
bit_vector_clear(&konst_3128);\
konst_3128.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_3129,4096);\
bit_vector_clear(&konst_3128);\
konst_3128.val.byte_array[0] = 1;\
bit_vector_shift_left(&(tempData), &(konst_3128), &(SHL_u4096_u4096_3129));\
bit_vector_cast_to_bit_vector(0, &(nextTempData), &(SHL_u4096_u4096_3129));\
;

#define _dataTx_assign_stmt_3135_c_macro_ __declare_static_bit_vector(konst_3133,13);\
bit_vector_clear(&konst_3133);\
konst_3133.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_3134,13);\
bit_vector_clear(&konst_3133);\
konst_3133.val.byte_array[0] = 1;\
bit_vector_plus( &(J), &(konst_3133), &(ADD_u13_u13_3134));\
bit_vector_cast_to_bit_vector(0, &(next_J), &(ADD_u13_u13_3134));\
;

#define _dataTx_stmt_3145_c_macro_ uint32_t _dataTx_stmt_3145_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_3145_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3145_c_macro___print_counter,"dat");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dat__next_data)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3145_c_macro___print_counter,"nextCRC16");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(nextCRC16)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3145_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;

#define _dataTx_assign_stmt_3148_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ZERO_1));\
;

#define _dataTx_merge_stmt_3149_c_preamble_macro_ uint8_t merge_stmt_3149_entry_flag;\
merge_stmt_3149_entry_flag = 1;\
uint8_t dataloop_2383_flag = 0;\
goto merge_stmt_3149_run;\
dataloop_2383: dataloop_2383_flag = 1;\
goto merge_stmt_3149_run;\
merge_stmt_3149_run: ;\

#define _dataTx_phi_stmt_3150_c_macro_ __declare_static_bit_vector(konst_3152,13);\
bit_vector_clear(&konst_3152);\
__declare_static_bit_vector(type_cast_3153,13);\
bit_vector_clear(&type_cast_3153);\
if(dataloop_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(K), &(next_K));\
}\
else {\
__declare_static_bit_vector(konst_3152,13);\
bit_vector_clear(&konst_3152);\
__declare_static_bit_vector(type_cast_3153,13);\
bit_vector_clear(&type_cast_3153);\
bit_vector_clear(&konst_3152);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3153), &(konst_3152));\
bit_vector_cast_to_bit_vector(0, &(K), &(type_cast_3153));\
}\
;

#define _dataTx_phi_stmt_3155_c_macro_ if(dataloop_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(nextbit));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0bit), &(dat__next_data));\
}\
;
;

#define _dataTx_merge_stmt_3149_c_postamble_macro_ dataloop_2383_flag = 0;\
merge_stmt_3149_entry_flag = 0;

#define _dataTx_assign_stmt_3164_c_macro_ __declare_static_bit_vector(konst_3162,4096);\
bit_vector_clear(&konst_3162);\
konst_3162.val.byte_array[0] = 255;\
konst_3162.val.byte_array[1] = 15;\
__declare_static_bit_vector(BITSEL_u4096_u1_3163,1);\
bit_vector_clear(&konst_3162);\
konst_3162.val.byte_array[0] = 255;\
konst_3162.val.byte_array[1] = 15;\
bit_vector_bitsel( &(dat0bit), &(konst_3162), &(BITSEL_u4096_u1_3163));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u4096_u1_3163));\
;

#define _dataTx_assign_stmt_3169_c_macro_ __declare_static_bit_vector(konst_3167,4096);\
bit_vector_clear(&konst_3167);\
konst_3167.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u4096_u4096_3168,4096);\
bit_vector_clear(&konst_3167);\
konst_3167.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0bit), &(konst_3167), &(SHL_u4096_u4096_3168));\
bit_vector_cast_to_bit_vector(0, &(nextbit), &(SHL_u4096_u4096_3168));\
;

#define _dataTx_assign_stmt_3174_c_macro_ __declare_static_bit_vector(konst_3172,13);\
bit_vector_clear(&konst_3172);\
konst_3172.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u13_u13_3173,13);\
bit_vector_clear(&konst_3172);\
konst_3172.val.byte_array[0] = 1;\
bit_vector_plus( &(K), &(konst_3172), &(ADD_u13_u13_3173));\
bit_vector_cast_to_bit_vector(0, &(next_K), &(ADD_u13_u13_3173));\
;

#define _dataTx_merge_stmt_3181_c_preamble_macro_ uint8_t merge_stmt_3181_entry_flag;\
merge_stmt_3181_entry_flag = 1;\
uint8_t crcloop_2383_flag = 0;\
goto merge_stmt_3181_run;\
crcloop_2383: crcloop_2383_flag = 1;\
goto merge_stmt_3181_run;\
merge_stmt_3181_run: ;\

#define _dataTx_phi_stmt_3182_c_macro_ __declare_static_bit_vector(konst_3184,5);\
bit_vector_clear(&konst_3184);\
__declare_static_bit_vector(type_cast_3185,5);\
bit_vector_clear(&type_cast_3185);\
if(crcloop_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(L), &(next_L));\
}\
else {\
__declare_static_bit_vector(konst_3184,5);\
bit_vector_clear(&konst_3184);\
__declare_static_bit_vector(type_cast_3185,5);\
bit_vector_clear(&type_cast_3185);\
bit_vector_clear(&konst_3184);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3185), &(konst_3184));\
bit_vector_cast_to_bit_vector(0, &(L), &(type_cast_3185));\
}\
;

#define _dataTx_phi_stmt_3187_c_macro_ if(crcloop_2383_flag) {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextbitcrc));\
}\
else {\
bit_vector_cast_to_bit_vector(0, &(dat0crc), &(nextCRC16));\
}\
;
;

#define _dataTx_merge_stmt_3181_c_postamble_macro_ crcloop_2383_flag = 0;\
merge_stmt_3181_entry_flag = 0;

#define _dataTx_assign_stmt_3196_c_macro_ __declare_static_bit_vector(konst_3194,16);\
bit_vector_clear(&konst_3194);\
konst_3194.val.byte_array[0] = 15;\
__declare_static_bit_vector(BITSEL_u16_u1_3195,1);\
bit_vector_clear(&konst_3194);\
konst_3194.val.byte_array[0] = 15;\
bit_vector_bitsel( &(dat0crc), &(konst_3194), &(BITSEL_u16_u1_3195));\
write_bit_vector_to_pipe("DAT0Tx",&(BITSEL_u16_u1_3195));\
;

#define _dataTx_assign_stmt_3201_c_macro_ __declare_static_bit_vector(konst_3199,16);\
bit_vector_clear(&konst_3199);\
konst_3199.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u16_u16_3200,16);\
bit_vector_clear(&konst_3199);\
konst_3199.val.byte_array[0] = 1;\
bit_vector_shift_left(&(dat0crc), &(konst_3199), &(SHL_u16_u16_3200));\
bit_vector_cast_to_bit_vector(0, &(nextbitcrc), &(SHL_u16_u16_3200));\
;

#define _dataTx_assign_stmt_3206_c_macro_ __declare_static_bit_vector(konst_3204,5);\
bit_vector_clear(&konst_3204);\
konst_3204.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u5_u5_3205,5);\
bit_vector_clear(&konst_3204);\
konst_3204.val.byte_array[0] = 1;\
bit_vector_plus( &(L), &(konst_3204), &(ADD_u5_u5_3205));\
bit_vector_cast_to_bit_vector(0, &(next_L), &(ADD_u5_u5_3205));\
;

#define _dataTx_assign_stmt_3215_c_macro_ write_bit_vector_to_pipe("DAT0Tx",&(ONE_1));\
;

#define _dataTx_assign_stmt_3222_c_macro_ if (has_undefined_bit(&blockCountEnable)) {fprintf(stderr, "Error: variable blockCountEnable has undefined value (%s) at test point.\n", to_string(&blockCountEnable));assert(0);} \
__declare_static_bit_vector(konst_3220,16);\
bit_vector_clear(&konst_3220);\
konst_3220.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_3221,16);\
if (bit_vector_to_uint64(0, &blockCountEnable)) {\
bit_vector_clear(&konst_3220);\
konst_3220.val.byte_array[0] = 1;\
bit_vector_minus( &(blockCount), &(konst_3220), &(SUB_u16_u16_3221));\
bit_vector_cast_to_bit_vector(0, &(blockCountNext), &(SUB_u16_u16_3221));\
}
;

#define _dataTx_assign_stmt_3230_c_macro_ __declare_static_bit_vector(konst_3228,32);\
bit_vector_clear(&konst_3228);\
konst_3228.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3228);\
konst_3228.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &(presentState1Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3228)])));\
;

#define _dataTx_assign_stmt_3234_c_macro_ __declare_static_bit_vector(konst_3232,32);\
bit_vector_clear(&konst_3232);\
konst_3232.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3232);\
konst_3232.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &(presentState0Var), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3232)])));\
;

#define _dataTx_assign_stmt_3240_c_macro_ __declare_static_bit_vector(konst_3238,8);\
bit_vector_clear(&konst_3238);\
konst_3238.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_3239,8);\
bit_vector_clear(&konst_3238);\
konst_3238.val.byte_array[0] = 254;\
bit_vector_and(&(presentState1Var), &(konst_3238), &(AND_u8_u8_3239));\
__declare_static_bit_vector(konst_3235,32);\
bit_vector_clear(&konst_3235);\
konst_3235.val.byte_array[0] = 37;\
bit_vector_clear(&konst_3235);\
konst_3235.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3235)])), &(AND_u8_u8_3239));\
;

#define _dataTx_merge_stmt_3242_c_preamble_macro_ uint8_t merge_stmt_3242_entry_flag;\
merge_stmt_3242_entry_flag = 1;\
uint8_t waitloop_2383_flag = 0;\
goto merge_stmt_3242_run;\
waitloop_2383: waitloop_2383_flag = 1;\
goto merge_stmt_3242_run;\
merge_stmt_3242_run: ;\
;

#define _dataTx_merge_stmt_3242_c_postamble_macro_ waitloop_2383_flag = 0;\
merge_stmt_3242_entry_flag = 0;

#define _dataTx_assign_stmt_3245_c_macro_ __declare_static_bit_vector(RPIPE_DAT0Rx_3244,8);\
read_bit_vector_from_pipe("DAT0Rx",&(RPIPE_DAT0Rx_3244));\
bit_vector_cast_to_bit_vector(0, &(wait), &(RPIPE_DAT0Rx_3244));\
;

#define _dataTx_assign_stmt_3261_c_macro_ __declare_static_bit_vector(konst_3259,8);\
bit_vector_clear(&konst_3259);\
konst_3259.val.byte_array[0] = 249;\
__declare_static_bit_vector(AND_u8_u8_3260,8);\
bit_vector_clear(&konst_3259);\
konst_3259.val.byte_array[0] = 249;\
bit_vector_and(&(presentState0Var), &(konst_3259), &(AND_u8_u8_3260));\
__declare_static_bit_vector(konst_3256,32);\
bit_vector_clear(&konst_3256);\
konst_3256.val.byte_array[0] = 36;\
bit_vector_clear(&konst_3256);\
konst_3256.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3256)])), &(AND_u8_u8_3260));\
;

#define _dataTx_assign_stmt_3266_c_macro_ __declare_static_bit_vector(konst_3264,8);\
bit_vector_clear(&konst_3264);\
konst_3264.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_3265,8);\
bit_vector_clear(&OR_u8_u8_3265);\
OR_u8_u8_3265.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3264);\
konst_3264.val.byte_array[0] = 2;\
bit_vector_or(&(ZERO_8), &(konst_3264), &(OR_u8_u8_3265));\
bit_vector_cast_to_bit_vector(0, &(transferComplete), &(OR_u8_u8_3265));\
;

#define _dataTx_stmt_3271_c_macro_ uint32_t _dataTx_stmt_3271_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]OUTDATA>\t%s\n",_dataTx_stmt_3271_c_macro___print_counter,"data");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3271_c_macro___print_counter,"lastBlock");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(lastBlock)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3271_c_macro___print_counter,"blockCount");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCount)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]OUTDATA>\t\t%s\t\t",_dataTx_stmt_3271_c_macro___print_counter,"blockCountEnable");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(blockCountEnable)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _dataTx_branch_block_stmt_2383_c_export_apply_macro_ ;

#define _dataTx_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pblockCountNext)), &(blockCountNext));\
bit_vector_cast_to_bit_vector(0, &((*__ptransferComplete)), &(transferComplete));\
;

#define _generate_crc_7_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,40);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_branch_block_stmt_296_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
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


#define _generate_crc_7_merge_stmt_297_c_preamble_macro_ uint8_t merge_stmt_297_entry_flag;\
merge_stmt_297_entry_flag = 1;\
uint8_t loopback_296_flag = 0;\
goto merge_stmt_297_run;\
loopback_296: loopback_296_flag = 1;\
goto merge_stmt_297_run;\
merge_stmt_297_run: ;\

#define _generate_crc_7_phi_stmt_298_c_macro_ __declare_static_bit_vector(konst_301,6);\
bit_vector_clear(&konst_301);\
konst_301.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_302,6);\
bit_vector_clear(&type_cast_302);\
type_cast_302.val.byte_array[0] = 41;\
if(loopback_296_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_301,6);\
bit_vector_clear(&konst_301);\
konst_301.val.byte_array[0] = 41;\
__declare_static_bit_vector(type_cast_302,6);\
bit_vector_clear(&type_cast_302);\
type_cast_302.val.byte_array[0] = 41;\
bit_vector_clear(&konst_301);\
konst_301.val.byte_array[0] = 41;\
bit_vector_bitcast_to_bit_vector( &(type_cast_302), &(konst_301));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_302));\
}\
;

#define _generate_crc_7_phi_stmt_304_c_macro_ __declare_static_bit_vector(slice_308,7);\
if(loopback_296_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_308,7);\
bit_vector_slice(&(message_signal), &(slice_308), 33);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_308));\
}\
;

#define _generate_crc_7_phi_stmt_309_c_macro_ __declare_static_bit_vector(slice_314,33);\
if(loopback_296_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_314,33);\
bit_vector_slice(&(message_signal), &(slice_314), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_314));\
}\
;
;

#define _generate_crc_7_merge_stmt_297_c_postamble_macro_ loopback_296_flag = 0;\
merge_stmt_297_entry_flag = 0;

#define _generate_crc_7_assign_stmt_326_c_macro_ __declare_static_bit_vector(konst_324,7);\
bit_vector_clear(&konst_324);\
konst_324.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_325,1);\
bit_vector_clear(&konst_324);\
konst_324.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_324), &(BITSEL_u7_u1_325));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_325));\
;

#define _generate_crc_7_assign_stmt_331_c_macro_ __declare_static_bit_vector(konst_329,7);\
bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_330,1);\
bit_vector_clear(&konst_329);\
konst_329.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_329), &(BITSEL_u7_u1_330));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_330));\
;

#define _generate_crc_7_assign_stmt_336_c_macro_ __declare_static_bit_vector(konst_334,7);\
bit_vector_clear(&konst_334);\
konst_334.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_335,1);\
bit_vector_clear(&konst_334);\
konst_334.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_334), &(BITSEL_u7_u1_335));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_335));\
;

#define _generate_crc_7_assign_stmt_343_c_macro_ __declare_static_bit_vector(konst_339,7);\
bit_vector_clear(&konst_339);\
konst_339.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_340,1);\
__declare_static_bit_vector(konst_341,1);\
bit_vector_clear(&konst_341);\
konst_341.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_342,1);\
bit_vector_clear(&konst_339);\
konst_339.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_339), &(BITSEL_u7_u1_340));\
bit_vector_clear(&konst_341);\
konst_341.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_340), &(konst_341), &(XOR_u1_u1_342));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_342));\
;

#define _generate_crc_7_assign_stmt_348_c_macro_ __declare_static_bit_vector(konst_346,7);\
bit_vector_clear(&konst_346);\
konst_346.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_347,1);\
bit_vector_clear(&konst_346);\
konst_346.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_346), &(BITSEL_u7_u1_347));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_347));\
;

#define _generate_crc_7_assign_stmt_353_c_macro_ __declare_static_bit_vector(konst_351,7);\
bit_vector_clear(&konst_351);\
__declare_static_bit_vector(BITSEL_u7_u1_352,1);\
bit_vector_clear(&konst_351);\
bit_vector_bitsel( &(crc_out), &(konst_351), &(BITSEL_u7_u1_352));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_352));\
;

#define _generate_crc_7_assign_stmt_360_c_macro_ __declare_static_bit_vector(konst_356,33);\
bit_vector_clear(&konst_356);\
konst_356.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_357,1);\
__declare_static_bit_vector(konst_358,1);\
bit_vector_clear(&konst_358);\
konst_358.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_359,1);\
bit_vector_clear(&konst_356);\
konst_356.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_356), &(BITSEL_u33_u1_357));\
bit_vector_clear(&konst_358);\
konst_358.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u33_u1_357), &(konst_358), &(XOR_u1_u1_359));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_359));\
;

#define _generate_crc_7_assign_stmt_375_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_364,2);\
__declare_static_bit_vector(CONCAT_u1_u2_367,2);\
__declare_static_bit_vector(CONCAT_u2_u4_368,4);\
__declare_static_bit_vector(CONCAT_u1_u2_371,2);\
__declare_static_bit_vector(CONCAT_u2_u3_373,3);\
__declare_static_bit_vector(CONCAT_u4_u7_374,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_364));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_367));\
bit_vector_concatenate( &(CONCAT_u1_u2_364), &(CONCAT_u1_u2_367), &(CONCAT_u2_u4_368));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_371));\
bit_vector_concatenate( &(CONCAT_u1_u2_371), &(g), &(CONCAT_u2_u3_373));\
bit_vector_concatenate( &(CONCAT_u2_u4_368), &(CONCAT_u2_u3_373), &(CONCAT_u4_u7_374));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_374));\
;

#define _generate_crc_7_assign_stmt_385_c_macro_ __declare_static_bit_vector(slice_380,6);\
__declare_static_bit_vector(konst_382,33);\
bit_vector_clear(&konst_382);\
konst_382.val.byte_array[0] = 32;\
__declare_static_bit_vector(BITSEL_u33_u1_383,1);\
__declare_static_bit_vector(CONCAT_u6_u7_384,7);\
bit_vector_slice(&(crc_out), &(slice_380), 0);\
bit_vector_clear(&konst_382);\
konst_382.val.byte_array[0] = 32;\
bit_vector_bitsel( &(temp), &(konst_382), &(BITSEL_u33_u1_383));\
bit_vector_concatenate( &(slice_380), &(BITSEL_u33_u1_383), &(CONCAT_u6_u7_384));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_384));\
;

#define _generate_crc_7_merge_stmt_388_c_preamble_macro_ uint8_t merge_stmt_388_entry_flag;\
merge_stmt_388_entry_flag = 1;\
uint8_t MSB_true_296_flag = 0;\
uint8_t MSB_false_296_flag = 0;\
goto merge_stmt_388_run;\
MSB_true_296: MSB_true_296_flag = 1;\
MSB_false_296_flag = 0;\
goto merge_stmt_388_run;\
MSB_false_296: MSB_false_296_flag = 1;\
MSB_true_296_flag = 0;\
goto merge_stmt_388_run;\
merge_stmt_388_run: ;\

#define _generate_crc_7_phi_stmt_389_c_macro_ if(MSB_true_296_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_296_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_merge_stmt_388_c_postamble_macro_ MSB_true_296_flag = 0;\
MSB_false_296_flag = 0;\
merge_stmt_388_entry_flag = 0;

#define _generate_crc_7_assign_stmt_398_c_macro_ __declare_static_bit_vector(konst_396,6);\
bit_vector_clear(&konst_396);\
konst_396.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u6_u6_397,6);\
bit_vector_clear(&konst_396);\
konst_396.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_396), &(SUB_u6_u6_397));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u6_u6_397));\
;

#define _generate_crc_7_assign_stmt_403_c_macro_ __declare_static_bit_vector(konst_401,33);\
bit_vector_clear(&konst_401);\
konst_401.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u33_u33_402,33);\
bit_vector_clear(&konst_401);\
konst_401.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_401), &(SHL_u33_u33_402));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u33_u33_402));\
;
;

#define _generate_crc_7_branch_block_stmt_296_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_assign_stmt_413_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _generate_crc_7_120_inner_inarg_prep_macro__ __declare_static_bit_vector(message_signal,120);\
bit_vector_cast_to_bit_vector(0, &(message_signal), &((*__pmessage_signal)));\
__declare_static_bit_vector(generated_crc,7);\

#define _generate_crc_7_120_branch_block_stmt_418_c_export_decl_macro_ __declare_static_bit_vector(crc_out__crc_out,7);\
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


#define _generate_crc_7_120_merge_stmt_419_c_preamble_macro_ uint8_t merge_stmt_419_entry_flag;\
merge_stmt_419_entry_flag = 1;\
uint8_t loopback_418_flag = 0;\
goto merge_stmt_419_run;\
loopback_418: loopback_418_flag = 1;\
goto merge_stmt_419_run;\
merge_stmt_419_run: ;\

#define _generate_crc_7_120_phi_stmt_420_c_macro_ __declare_static_bit_vector(konst_422,8);\
bit_vector_clear(&konst_422);\
konst_422.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_423,8);\
bit_vector_clear(&type_cast_423);\
type_cast_423.val.byte_array[0] = 121;\
if(loopback_418_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_422,8);\
bit_vector_clear(&konst_422);\
konst_422.val.byte_array[0] = 121;\
__declare_static_bit_vector(type_cast_423,8);\
bit_vector_clear(&type_cast_423);\
type_cast_423.val.byte_array[0] = 121;\
bit_vector_clear(&konst_422);\
konst_422.val.byte_array[0] = 121;\
bit_vector_bitcast_to_bit_vector( &(type_cast_423), &(konst_422));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_423));\
}\
;

#define _generate_crc_7_120_phi_stmt_425_c_macro_ __declare_static_bit_vector(slice_428,7);\
if(loopback_418_flag) {\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(final_crc_out));\
}\
else {\
__declare_static_bit_vector(slice_428,7);\
bit_vector_slice(&(message_signal), &(slice_428), 113);\
bit_vector_cast_to_bit_vector(0, &(crc_out), &(slice_428));\
}\
;

#define _generate_crc_7_120_phi_stmt_430_c_macro_ __declare_static_bit_vector(slice_434,113);\
if(loopback_418_flag) {\
bit_vector_cast_to_bit_vector(0, &(temp), &(next_temp));\
}\
else {\
__declare_static_bit_vector(slice_434,113);\
bit_vector_slice(&(message_signal), &(slice_434), 0);\
bit_vector_cast_to_bit_vector(0, &(temp), &(slice_434));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_419_c_postamble_macro_ loopback_418_flag = 0;\
merge_stmt_419_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_441_c_macro_ __declare_static_bit_vector(konst_439,7);\
bit_vector_clear(&konst_439);\
konst_439.val.byte_array[0] = 6;\
__declare_static_bit_vector(LSHR_u7_u7_440,7);\
bit_vector_clear(&konst_439);\
konst_439.val.byte_array[0] = 6;\
bit_vector_shift_right(0, &(crc_out), &(konst_439), &(LSHR_u7_u7_440));\
bit_vector_cast_to_bit_vector(0, &(crc_out_print), &(LSHR_u7_u7_440));\
;

#define _generate_crc_7_120_assign_stmt_452_c_macro_ __declare_static_bit_vector(konst_450,7);\
bit_vector_clear(&konst_450);\
konst_450.val.byte_array[0] = 5;\
__declare_static_bit_vector(BITSEL_u7_u1_451,1);\
bit_vector_clear(&konst_450);\
konst_450.val.byte_array[0] = 5;\
bit_vector_bitsel( &(crc_out), &(konst_450), &(BITSEL_u7_u1_451));\
bit_vector_cast_to_bit_vector(0, &(a), &(BITSEL_u7_u1_451));\
;

#define _generate_crc_7_120_assign_stmt_457_c_macro_ __declare_static_bit_vector(konst_455,7);\
bit_vector_clear(&konst_455);\
konst_455.val.byte_array[0] = 4;\
__declare_static_bit_vector(BITSEL_u7_u1_456,1);\
bit_vector_clear(&konst_455);\
konst_455.val.byte_array[0] = 4;\
bit_vector_bitsel( &(crc_out), &(konst_455), &(BITSEL_u7_u1_456));\
bit_vector_cast_to_bit_vector(0, &(b), &(BITSEL_u7_u1_456));\
;

#define _generate_crc_7_120_assign_stmt_462_c_macro_ __declare_static_bit_vector(konst_460,7);\
bit_vector_clear(&konst_460);\
konst_460.val.byte_array[0] = 3;\
__declare_static_bit_vector(BITSEL_u7_u1_461,1);\
bit_vector_clear(&konst_460);\
konst_460.val.byte_array[0] = 3;\
bit_vector_bitsel( &(crc_out), &(konst_460), &(BITSEL_u7_u1_461));\
bit_vector_cast_to_bit_vector(0, &(c), &(BITSEL_u7_u1_461));\
;

#define _generate_crc_7_120_assign_stmt_469_c_macro_ __declare_static_bit_vector(konst_465,7);\
bit_vector_clear(&konst_465);\
konst_465.val.byte_array[0] = 2;\
__declare_static_bit_vector(BITSEL_u7_u1_466,1);\
__declare_static_bit_vector(konst_467,1);\
bit_vector_clear(&konst_467);\
konst_467.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_468,1);\
bit_vector_clear(&konst_465);\
konst_465.val.byte_array[0] = 2;\
bit_vector_bitsel( &(crc_out), &(konst_465), &(BITSEL_u7_u1_466));\
bit_vector_clear(&konst_467);\
konst_467.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u7_u1_466), &(konst_467), &(XOR_u1_u1_468));\
bit_vector_cast_to_bit_vector(0, &(d), &(XOR_u1_u1_468));\
;

#define _generate_crc_7_120_assign_stmt_474_c_macro_ __declare_static_bit_vector(konst_472,7);\
bit_vector_clear(&konst_472);\
konst_472.val.byte_array[0] = 1;\
__declare_static_bit_vector(BITSEL_u7_u1_473,1);\
bit_vector_clear(&konst_472);\
konst_472.val.byte_array[0] = 1;\
bit_vector_bitsel( &(crc_out), &(konst_472), &(BITSEL_u7_u1_473));\
bit_vector_cast_to_bit_vector(0, &(e), &(BITSEL_u7_u1_473));\
;

#define _generate_crc_7_120_assign_stmt_479_c_macro_ __declare_static_bit_vector(konst_477,7);\
bit_vector_clear(&konst_477);\
__declare_static_bit_vector(BITSEL_u7_u1_478,1);\
bit_vector_clear(&konst_477);\
bit_vector_bitsel( &(crc_out), &(konst_477), &(BITSEL_u7_u1_478));\
bit_vector_cast_to_bit_vector(0, &(f), &(BITSEL_u7_u1_478));\
;

#define _generate_crc_7_120_assign_stmt_486_c_macro_ __declare_static_bit_vector(konst_482,113);\
bit_vector_clear(&konst_482);\
konst_482.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_483,1);\
__declare_static_bit_vector(konst_484,1);\
bit_vector_clear(&konst_484);\
konst_484.val.byte_array[0] = 1;\
__declare_static_bit_vector(XOR_u1_u1_485,1);\
bit_vector_clear(&konst_482);\
konst_482.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_482), &(BITSEL_u113_u1_483));\
bit_vector_clear(&konst_484);\
konst_484.val.byte_array[0] = 1;\
bit_vector_xor(&(BITSEL_u113_u1_483), &(konst_484), &(XOR_u1_u1_485));\
bit_vector_cast_to_bit_vector(0, &(g), &(XOR_u1_u1_485));\
;

#define _generate_crc_7_120_assign_stmt_501_c_macro_ __declare_static_bit_vector(CONCAT_u1_u2_490,2);\
__declare_static_bit_vector(CONCAT_u1_u2_493,2);\
__declare_static_bit_vector(CONCAT_u2_u4_494,4);\
__declare_static_bit_vector(CONCAT_u1_u2_497,2);\
__declare_static_bit_vector(CONCAT_u2_u3_499,3);\
__declare_static_bit_vector(CONCAT_u4_u7_500,7);\
bit_vector_concatenate( &(a), &(b), &(CONCAT_u1_u2_490));\
bit_vector_concatenate( &(c), &(d), &(CONCAT_u1_u2_493));\
bit_vector_concatenate( &(CONCAT_u1_u2_490), &(CONCAT_u1_u2_493), &(CONCAT_u2_u4_494));\
bit_vector_concatenate( &(e), &(f), &(CONCAT_u1_u2_497));\
bit_vector_concatenate( &(CONCAT_u1_u2_497), &(g), &(CONCAT_u2_u3_499));\
bit_vector_concatenate( &(CONCAT_u2_u4_494), &(CONCAT_u2_u3_499), &(CONCAT_u4_u7_500));\
bit_vector_cast_to_bit_vector(0, &(crc_out_true), &(CONCAT_u4_u7_500));\
;

#define _generate_crc_7_120_assign_stmt_511_c_macro_ __declare_static_bit_vector(slice_506,6);\
__declare_static_bit_vector(konst_508,113);\
bit_vector_clear(&konst_508);\
konst_508.val.byte_array[0] = 112;\
__declare_static_bit_vector(BITSEL_u113_u1_509,1);\
__declare_static_bit_vector(CONCAT_u6_u7_510,7);\
bit_vector_slice(&(crc_out), &(slice_506), 0);\
bit_vector_clear(&konst_508);\
konst_508.val.byte_array[0] = 112;\
bit_vector_bitsel( &(temp), &(konst_508), &(BITSEL_u113_u1_509));\
bit_vector_concatenate( &(slice_506), &(BITSEL_u113_u1_509), &(CONCAT_u6_u7_510));\
bit_vector_cast_to_bit_vector(0, &(crc_out_false), &(CONCAT_u6_u7_510));\
;

#define _generate_crc_7_120_merge_stmt_514_c_preamble_macro_ uint8_t merge_stmt_514_entry_flag;\
merge_stmt_514_entry_flag = 1;\
uint8_t MSB_true_418_flag = 0;\
uint8_t MSB_false_418_flag = 0;\
goto merge_stmt_514_run;\
MSB_true_418: MSB_true_418_flag = 1;\
MSB_false_418_flag = 0;\
goto merge_stmt_514_run;\
MSB_false_418: MSB_false_418_flag = 1;\
MSB_true_418_flag = 0;\
goto merge_stmt_514_run;\
merge_stmt_514_run: ;\

#define _generate_crc_7_120_phi_stmt_515_c_macro_ if(MSB_true_418_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_true));\
}\
 else if(MSB_false_418_flag) {\
bit_vector_cast_to_bit_vector(0, &(final_crc_out), &(crc_out_false));\
}\
;
;

#define _generate_crc_7_120_merge_stmt_514_c_postamble_macro_ MSB_true_418_flag = 0;\
MSB_false_418_flag = 0;\
merge_stmt_514_entry_flag = 0;

#define _generate_crc_7_120_assign_stmt_524_c_macro_ __declare_static_bit_vector(konst_522,8);\
bit_vector_clear(&konst_522);\
konst_522.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u8_u8_523,8);\
bit_vector_clear(&konst_522);\
konst_522.val.byte_array[0] = 1;\
bit_vector_minus( &(I), &(konst_522), &(SUB_u8_u8_523));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(SUB_u8_u8_523));\
;

#define _generate_crc_7_120_assign_stmt_529_c_macro_ __declare_static_bit_vector(konst_527,113);\
bit_vector_clear(&konst_527);\
konst_527.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u113_u113_528,113);\
bit_vector_clear(&konst_527);\
konst_527.val.byte_array[0] = 1;\
bit_vector_shift_left(&(temp), &(konst_527), &(SHL_u113_u113_528));\
bit_vector_cast_to_bit_vector(0, &(next_temp), &(SHL_u113_u113_528));\
;
;

#define _generate_crc_7_120_branch_block_stmt_418_c_export_apply_macro_ bit_vector_cast_to_bit_vector(0, &(crc_out__crc_out), &(crc_out));\
;

#define _generate_crc_7_120_assign_stmt_539_c_macro_ bit_vector_cast_to_bit_vector(0, &(generated_crc), &(crc_out__crc_out));\
;

#define _generate_crc_7_120_inner_outarg_prep_macro__ bit_vector_cast_to_bit_vector(0, &((*__pgenerated_crc)), &(generated_crc));\
;

#define _global_storage_initializer__inner_inarg_prep_macro__ 
#define _global_storage_initializer__inner_outarg_prep_macro__ ;

#define _global_storage_initializer__outer_arg_decl_macro__ ;

#define _global_storage_initializer__outer_op_xfer_macro__ ;

#define _resetRegisters_inner_inarg_prep_macro__ __declare_static_bit_vector(resetCondition,2);\
bit_vector_cast_to_bit_vector(0, &(resetCondition), &((*__presetCondition)));\

#define _resetRegisters_assign_stmt_3282_c_macro_ __declare_static_bit_vector(konst_3281,8);\
bit_vector_clear(&konst_3281);\
konst_3281.val.byte_array[0] = 138;\
bit_vector_clear(&konst_3281);\
konst_3281.val.byte_array[0] = 138;\
__declare_static_bit_vector(konst_3279,32);\
bit_vector_clear(&konst_3279);\
konst_3279.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3279);\
konst_3279.val.byte_array[0] = 64;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3279)])), &(konst_3281));\
;

#define _resetRegisters_assign_stmt_3286_c_macro_ __declare_static_bit_vector(konst_3285,8);\
bit_vector_clear(&konst_3285);\
konst_3285.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3285);\
konst_3285.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3283,32);\
bit_vector_clear(&konst_3283);\
konst_3283.val.byte_array[0] = 65;\
bit_vector_clear(&konst_3283);\
konst_3283.val.byte_array[0] = 65;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3283)])), &(konst_3285));\
;

#define _resetRegisters_assign_stmt_3290_c_macro_ __declare_static_bit_vector(konst_3289,8);\
bit_vector_clear(&konst_3289);\
konst_3289.val.byte_array[0] = 32;\
bit_vector_clear(&konst_3289);\
konst_3289.val.byte_array[0] = 32;\
__declare_static_bit_vector(konst_3287,32);\
bit_vector_clear(&konst_3287);\
konst_3287.val.byte_array[0] = 66;\
bit_vector_clear(&konst_3287);\
konst_3287.val.byte_array[0] = 66;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3287)])), &(konst_3289));\
;

#define _resetRegisters_assign_stmt_3294_c_macro_ __declare_static_bit_vector(konst_3293,8);\
bit_vector_clear(&konst_3293);\
konst_3293.val.byte_array[0] = 5;\
bit_vector_clear(&konst_3293);\
konst_3293.val.byte_array[0] = 5;\
__declare_static_bit_vector(konst_3291,32);\
bit_vector_clear(&konst_3291);\
konst_3291.val.byte_array[0] = 67;\
bit_vector_clear(&konst_3291);\
konst_3291.val.byte_array[0] = 67;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3291)])), &(konst_3293));\
;

#define _resetRegisters_assign_stmt_3298_c_macro_ __declare_static_bit_vector(konst_3297,8);\
bit_vector_clear(&konst_3297);\
konst_3297.val.byte_array[0] = 49;\
bit_vector_clear(&konst_3297);\
konst_3297.val.byte_array[0] = 49;\
__declare_static_bit_vector(konst_3295,32);\
bit_vector_clear(&konst_3295);\
konst_3295.val.byte_array[0] = 68;\
bit_vector_clear(&konst_3295);\
konst_3295.val.byte_array[0] = 68;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3295)])), &(konst_3297));\
;

#define _resetRegisters_assign_stmt_3302_c_macro_ __declare_static_bit_vector(konst_3301,8);\
bit_vector_clear(&konst_3301);\
bit_vector_clear(&konst_3301);\
__declare_static_bit_vector(konst_3299,32);\
bit_vector_clear(&konst_3299);\
konst_3299.val.byte_array[0] = 69;\
bit_vector_clear(&konst_3299);\
konst_3299.val.byte_array[0] = 69;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3299)])), &(konst_3301));\
;

#define _resetRegisters_assign_stmt_3306_c_macro_ __declare_static_bit_vector(konst_3305,8);\
bit_vector_clear(&konst_3305);\
bit_vector_clear(&konst_3305);\
__declare_static_bit_vector(konst_3303,32);\
bit_vector_clear(&konst_3303);\
konst_3303.val.byte_array[0] = 70;\
bit_vector_clear(&konst_3303);\
konst_3303.val.byte_array[0] = 70;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3303)])), &(konst_3305));\
;

#define _resetRegisters_assign_stmt_3310_c_macro_ __declare_static_bit_vector(konst_3309,8);\
bit_vector_clear(&konst_3309);\
bit_vector_clear(&konst_3309);\
__declare_static_bit_vector(konst_3307,32);\
bit_vector_clear(&konst_3307);\
konst_3307.val.byte_array[0] = 71;\
bit_vector_clear(&konst_3307);\
konst_3307.val.byte_array[0] = 71;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3307)])), &(konst_3309));\
;

#define _resetRegisters_assign_stmt_3314_c_macro_ __declare_static_bit_vector(konst_3313,8);\
bit_vector_clear(&konst_3313);\
konst_3313.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3313);\
konst_3313.val.byte_array[0] = 100;\
__declare_static_bit_vector(konst_3311,32);\
bit_vector_clear(&konst_3311);\
konst_3311.val.byte_array[0] = 72;\
bit_vector_clear(&konst_3311);\
konst_3311.val.byte_array[0] = 72;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3311)])), &(konst_3313));\
;

#define _resetRegisters_assign_stmt_3318_c_macro_ __declare_static_bit_vector(konst_3317,8);\
bit_vector_clear(&konst_3317);\
konst_3317.val.byte_array[0] = 150;\
bit_vector_clear(&konst_3317);\
konst_3317.val.byte_array[0] = 150;\
__declare_static_bit_vector(konst_3315,32);\
bit_vector_clear(&konst_3315);\
konst_3315.val.byte_array[0] = 73;\
bit_vector_clear(&konst_3315);\
konst_3315.val.byte_array[0] = 73;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3315)])), &(konst_3317));\
;

#define _resetRegisters_assign_stmt_3322_c_macro_ __declare_static_bit_vector(konst_3321,8);\
bit_vector_clear(&konst_3321);\
konst_3321.val.byte_array[0] = 200;\
bit_vector_clear(&konst_3321);\
konst_3321.val.byte_array[0] = 200;\
__declare_static_bit_vector(konst_3319,32);\
bit_vector_clear(&konst_3319);\
konst_3319.val.byte_array[0] = 74;\
bit_vector_clear(&konst_3319);\
konst_3319.val.byte_array[0] = 74;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3319)])), &(konst_3321));\
;

#define _resetRegisters_assign_stmt_3326_c_macro_ __declare_static_bit_vector(konst_3325,8);\
bit_vector_clear(&konst_3325);\
bit_vector_clear(&konst_3325);\
__declare_static_bit_vector(konst_3323,32);\
bit_vector_clear(&konst_3323);\
konst_3323.val.byte_array[0] = 75;\
bit_vector_clear(&konst_3323);\
konst_3323.val.byte_array[0] = 75;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3323)])), &(konst_3325));\
;

#define _resetRegisters_assign_stmt_3330_c_macro_ __declare_static_bit_vector(konst_3329,8);\
bit_vector_clear(&konst_3329);\
bit_vector_clear(&konst_3329);\
__declare_static_bit_vector(konst_3327,32);\
bit_vector_clear(&konst_3327);\
konst_3327.val.byte_array[0] = 76;\
bit_vector_clear(&konst_3327);\
konst_3327.val.byte_array[0] = 76;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3327)])), &(konst_3329));\
;

#define _resetRegisters_assign_stmt_3334_c_macro_ __declare_static_bit_vector(konst_3333,8);\
bit_vector_clear(&konst_3333);\
bit_vector_clear(&konst_3333);\
__declare_static_bit_vector(konst_3331,32);\
bit_vector_clear(&konst_3331);\
konst_3331.val.byte_array[0] = 77;\
bit_vector_clear(&konst_3331);\
konst_3331.val.byte_array[0] = 77;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3331)])), &(konst_3333));\
;

#define _resetRegisters_assign_stmt_3338_c_macro_ __declare_static_bit_vector(konst_3337,8);\
bit_vector_clear(&konst_3337);\
bit_vector_clear(&konst_3337);\
__declare_static_bit_vector(konst_3335,32);\
bit_vector_clear(&konst_3335);\
konst_3335.val.byte_array[0] = 78;\
bit_vector_clear(&konst_3335);\
konst_3335.val.byte_array[0] = 78;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3335)])), &(konst_3337));\
;

#define _resetRegisters_assign_stmt_3342_c_macro_ __declare_static_bit_vector(konst_3341,8);\
bit_vector_clear(&konst_3341);\
bit_vector_clear(&konst_3341);\
__declare_static_bit_vector(konst_3339,32);\
bit_vector_clear(&konst_3339);\
konst_3339.val.byte_array[0] = 79;\
bit_vector_clear(&konst_3339);\
konst_3339.val.byte_array[0] = 79;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3339)])), &(konst_3341));\
;

#define _resetRegisters_assign_stmt_3346_c_macro_ __declare_static_bit_vector(konst_3345,8);\
bit_vector_clear(&konst_3345);\
konst_3345.val.byte_array[0] = 125;\
bit_vector_clear(&konst_3345);\
konst_3345.val.byte_array[0] = 125;\
__declare_static_bit_vector(konst_3343,32);\
bit_vector_clear(&konst_3343);\
konst_3343.val.byte_array[0] = 96;\
bit_vector_clear(&konst_3343);\
konst_3343.val.byte_array[0] = 96;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3343)])), &(konst_3345));\
;

#define _resetRegisters_assign_stmt_3350_c_macro_ __declare_static_bit_vector(konst_3349,8);\
bit_vector_clear(&konst_3349);\
bit_vector_clear(&konst_3349);\
__declare_static_bit_vector(konst_3347,32);\
bit_vector_clear(&konst_3347);\
konst_3347.val.byte_array[0] = 97;\
bit_vector_clear(&konst_3347);\
konst_3347.val.byte_array[0] = 97;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3347)])), &(konst_3349));\
;

#define _resetRegisters_assign_stmt_3354_c_macro_ __declare_static_bit_vector(konst_3353,8);\
bit_vector_clear(&konst_3353);\
konst_3353.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3353);\
konst_3353.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3351,32);\
bit_vector_clear(&konst_3351);\
konst_3351.val.byte_array[0] = 98;\
bit_vector_clear(&konst_3351);\
konst_3351.val.byte_array[0] = 98;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3351)])), &(konst_3353));\
;

#define _resetRegisters_assign_stmt_3358_c_macro_ __declare_static_bit_vector(konst_3357,8);\
bit_vector_clear(&konst_3357);\
bit_vector_clear(&konst_3357);\
__declare_static_bit_vector(konst_3355,32);\
bit_vector_clear(&konst_3355);\
konst_3355.val.byte_array[0] = 99;\
bit_vector_clear(&konst_3355);\
konst_3355.val.byte_array[0] = 99;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3355)])), &(konst_3357));\
;

#define _resetRegisters_assign_stmt_3362_c_macro_ __declare_static_bit_vector(konst_3361,8);\
bit_vector_clear(&konst_3361);\
konst_3361.val.byte_array[0] = 1;\
bit_vector_clear(&konst_3361);\
konst_3361.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_3359,32);\
bit_vector_clear(&konst_3359);\
konst_3359.val.byte_array[0] = 100;\
bit_vector_clear(&konst_3359);\
konst_3359.val.byte_array[0] = 100;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3359)])), &(konst_3361));\
;

#define _resetRegisters_assign_stmt_3366_c_macro_ __declare_static_bit_vector(konst_3365,8);\
bit_vector_clear(&konst_3365);\
bit_vector_clear(&konst_3365);\
__declare_static_bit_vector(konst_3363,32);\
bit_vector_clear(&konst_3363);\
konst_3363.val.byte_array[0] = 101;\
bit_vector_clear(&konst_3363);\
konst_3363.val.byte_array[0] = 101;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3363)])), &(konst_3365));\
;

#define _resetRegisters_assign_stmt_3370_c_macro_ __declare_static_bit_vector(konst_3369,8);\
bit_vector_clear(&konst_3369);\
konst_3369.val.byte_array[0] = 4;\
bit_vector_clear(&konst_3369);\
konst_3369.val.byte_array[0] = 4;\
__declare_static_bit_vector(konst_3367,32);\
bit_vector_clear(&konst_3367);\
konst_3367.val.byte_array[0] = 102;\
bit_vector_clear(&konst_3367);\
konst_3367.val.byte_array[0] = 102;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3367)])), &(konst_3369));\
;

#define _resetRegisters_assign_stmt_3374_c_macro_ __declare_static_bit_vector(konst_3373,8);\
bit_vector_clear(&konst_3373);\
bit_vector_clear(&konst_3373);\
__declare_static_bit_vector(konst_3371,32);\
bit_vector_clear(&konst_3371);\
konst_3371.val.byte_array[0] = 103;\
bit_vector_clear(&konst_3371);\
konst_3371.val.byte_array[0] = 103;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3371)])), &(konst_3373));\
;

#define _resetRegisters_assign_stmt_3378_c_macro_ __declare_static_bit_vector(konst_3377,8);\
bit_vector_clear(&konst_3377);\
konst_3377.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3377);\
konst_3377.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3375,32);\
bit_vector_clear(&konst_3375);\
konst_3375.val.byte_array[0] = 104;\
bit_vector_clear(&konst_3375);\
konst_3375.val.byte_array[0] = 104;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3375)])), &(konst_3377));\
;

#define _resetRegisters_assign_stmt_3382_c_macro_ __declare_static_bit_vector(konst_3381,8);\
bit_vector_clear(&konst_3381);\
konst_3381.val.byte_array[0] = 64;\
bit_vector_clear(&konst_3381);\
konst_3381.val.byte_array[0] = 64;\
__declare_static_bit_vector(konst_3379,32);\
bit_vector_clear(&konst_3379);\
konst_3379.val.byte_array[0] = 105;\
bit_vector_clear(&konst_3379);\
konst_3379.val.byte_array[0] = 105;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3379)])), &(konst_3381));\
;

#define _resetRegisters_assign_stmt_3386_c_macro_ __declare_static_bit_vector(konst_3385,8);\
bit_vector_clear(&konst_3385);\
konst_3385.val.byte_array[0] = 1;\
bit_vector_clear(&konst_3385);\
konst_3385.val.byte_array[0] = 1;\
__declare_static_bit_vector(konst_3383,32);\
bit_vector_clear(&konst_3383);\
konst_3383.val.byte_array[0] = 106;\
bit_vector_clear(&konst_3383);\
konst_3383.val.byte_array[0] = 106;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3383)])), &(konst_3385));\
;

#define _resetRegisters_assign_stmt_3390_c_macro_ __declare_static_bit_vector(konst_3389,8);\
bit_vector_clear(&konst_3389);\
konst_3389.val.byte_array[0] = 128;\
bit_vector_clear(&konst_3389);\
konst_3389.val.byte_array[0] = 128;\
__declare_static_bit_vector(konst_3387,32);\
bit_vector_clear(&konst_3387);\
konst_3387.val.byte_array[0] = 107;\
bit_vector_clear(&konst_3387);\
konst_3387.val.byte_array[0] = 107;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3387)])), &(konst_3389));\
;

#define _resetRegisters_assign_stmt_3394_c_macro_ __declare_static_bit_vector(konst_3393,8);\
bit_vector_clear(&konst_3393);\
bit_vector_clear(&konst_3393);\
__declare_static_bit_vector(konst_3391,32);\
bit_vector_clear(&konst_3391);\
konst_3391.val.byte_array[0] = 108;\
bit_vector_clear(&konst_3391);\
konst_3391.val.byte_array[0] = 108;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3391)])), &(konst_3393));\
;

#define _resetRegisters_assign_stmt_3398_c_macro_ __declare_static_bit_vector(konst_3397,8);\
bit_vector_clear(&konst_3397);\
bit_vector_clear(&konst_3397);\
__declare_static_bit_vector(konst_3395,32);\
bit_vector_clear(&konst_3395);\
konst_3395.val.byte_array[0] = 109;\
bit_vector_clear(&konst_3395);\
konst_3395.val.byte_array[0] = 109;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3395)])), &(konst_3397));\
;

#define _resetRegisters_assign_stmt_3402_c_macro_ __declare_static_bit_vector(konst_3401,8);\
bit_vector_clear(&konst_3401);\
bit_vector_clear(&konst_3401);\
__declare_static_bit_vector(konst_3399,32);\
bit_vector_clear(&konst_3399);\
konst_3399.val.byte_array[0] = 110;\
bit_vector_clear(&konst_3399);\
konst_3399.val.byte_array[0] = 110;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3399)])), &(konst_3401));\
;

#define _resetRegisters_assign_stmt_3406_c_macro_ __declare_static_bit_vector(konst_3405,8);\
bit_vector_clear(&konst_3405);\
bit_vector_clear(&konst_3405);\
__declare_static_bit_vector(konst_3403,32);\
bit_vector_clear(&konst_3403);\
konst_3403.val.byte_array[0] = 111;\
bit_vector_clear(&konst_3403);\
konst_3403.val.byte_array[0] = 111;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3403)])), &(konst_3405));\
;

#define _resetRegisters_assign_stmt_3410_c_macro_ __declare_static_bit_vector(konst_3409,8);\
bit_vector_clear(&konst_3409);\
konst_3409.val.byte_array[0] = 2;\
bit_vector_clear(&konst_3409);\
konst_3409.val.byte_array[0] = 2;\
__declare_static_bit_vector(konst_3407,32);\
bit_vector_clear(&konst_3407);\
konst_3407.val.byte_array[0] = 254;\
bit_vector_clear(&konst_3407);\
konst_3407.val.byte_array[0] = 254;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3407)])), &(konst_3409));\
;

#define _resetRegisters_assign_stmt_3414_c_macro_ __declare_static_bit_vector(konst_3413,8);\
bit_vector_clear(&konst_3413);\
bit_vector_clear(&konst_3413);\
__declare_static_bit_vector(konst_3411,32);\
bit_vector_clear(&konst_3411);\
konst_3411.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3411);\
konst_3411.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3411)])), &(konst_3413));\
;

#define _resetRegisters_branch_block_stmt_3415_c_export_decl_macro_ __declare_static_bit_vector(I,9);\
__declare_static_bit_vector(current_register_value,8);\
__declare_static_bit_vector(current_softwarereset_register_value,8);\
__declare_static_bit_vector(condition,1);\
__declare_static_bit_vector(condition2,1);\
__declare_static_bit_vector(condition3,1);\
__declare_static_bit_vector(condition4,1);\
__declare_static_bit_vector(next_I,9);\


#define _resetRegisters_merge_stmt_3416_c_preamble_macro_ uint8_t merge_stmt_3416_entry_flag;\
merge_stmt_3416_entry_flag = 1;\
uint8_t loopback_3415_flag = 0;\
goto merge_stmt_3416_run;\
loopback_3415: loopback_3415_flag = 1;\
goto merge_stmt_3416_run;\
merge_stmt_3416_run: ;\

#define _resetRegisters_phi_stmt_3417_c_macro_ __declare_static_bit_vector(konst_3420,9);\
bit_vector_clear(&konst_3420);\
__declare_static_bit_vector(type_cast_3421,9);\
bit_vector_clear(&type_cast_3421);\
if(loopback_3415_flag) {\
bit_vector_cast_to_bit_vector(0, &(I), &(next_I));\
}\
else {\
__declare_static_bit_vector(konst_3420,9);\
bit_vector_clear(&konst_3420);\
__declare_static_bit_vector(type_cast_3421,9);\
bit_vector_clear(&type_cast_3421);\
bit_vector_clear(&konst_3420);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3421), &(konst_3420));\
bit_vector_cast_to_bit_vector(0, &(I), &(type_cast_3421));\
}\
;
;

#define _resetRegisters_merge_stmt_3416_c_postamble_macro_ loopback_3415_flag = 0;\
merge_stmt_3416_entry_flag = 0;

#define _resetRegisters_assign_stmt_3427_c_macro_ bit_vector_cast_to_bit_vector(0, &(current_register_value), &((sdhcRegisters[bit_vector_to_uint64(0, &I)])));\
;

#define _resetRegisters_assign_stmt_3431_c_macro_ __declare_static_bit_vector(konst_3429,32);\
bit_vector_clear(&konst_3429);\
konst_3429.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3429);\
konst_3429.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &(current_softwarereset_register_value), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3429)])));\
;

#define _resetRegisters_assign_stmt_3440_c_macro_ __declare_static_bit_vector(konst_3434,9);\
bit_vector_clear(&konst_3434);\
konst_3434.val.byte_array[0] = 64;\
__declare_static_bit_vector(UGE_u9_u1_3435,1);\
__declare_static_bit_vector(konst_3437,9);\
bit_vector_clear(&konst_3437);\
konst_3437.val.byte_array[0] = 72;\
__declare_static_bit_vector(ULT_u9_u1_3438,1);\
__declare_static_bit_vector(AND_u1_u1_3439,1);\
bit_vector_clear(&konst_3434);\
konst_3434.val.byte_array[0] = 64;\
bit_vector_greater_equal(0, &(I), &(konst_3434), &(UGE_u9_u1_3435));\
bit_vector_clear(&konst_3437);\
konst_3437.val.byte_array[0] = 72;\
bit_vector_less(0, &(I), &(konst_3437), &(ULT_u9_u1_3438));\
bit_vector_and(&(UGE_u9_u1_3435), &(ULT_u9_u1_3438), &(AND_u1_u1_3439));\
bit_vector_cast_to_bit_vector(0, &(condition), &(AND_u1_u1_3439));\
;

#define _resetRegisters_assign_stmt_3449_c_macro_ __declare_static_bit_vector(konst_3443,9);\
bit_vector_clear(&konst_3443);\
konst_3443.val.byte_array[0] = 72;\
__declare_static_bit_vector(UGE_u9_u1_3444,1);\
__declare_static_bit_vector(konst_3446,9);\
bit_vector_clear(&konst_3446);\
konst_3446.val.byte_array[0] = 80;\
__declare_static_bit_vector(ULT_u9_u1_3447,1);\
__declare_static_bit_vector(AND_u1_u1_3448,1);\
bit_vector_clear(&konst_3443);\
konst_3443.val.byte_array[0] = 72;\
bit_vector_greater_equal(0, &(I), &(konst_3443), &(UGE_u9_u1_3444));\
bit_vector_clear(&konst_3446);\
konst_3446.val.byte_array[0] = 80;\
bit_vector_less(0, &(I), &(konst_3446), &(ULT_u9_u1_3447));\
bit_vector_and(&(UGE_u9_u1_3444), &(ULT_u9_u1_3447), &(AND_u1_u1_3448));\
bit_vector_cast_to_bit_vector(0, &(condition2), &(AND_u1_u1_3448));\
;

#define _resetRegisters_assign_stmt_3458_c_macro_ __declare_static_bit_vector(konst_3452,9);\
bit_vector_clear(&konst_3452);\
konst_3452.val.byte_array[0] = 96;\
__declare_static_bit_vector(UGE_u9_u1_3453,1);\
__declare_static_bit_vector(konst_3455,9);\
bit_vector_clear(&konst_3455);\
konst_3455.val.byte_array[0] = 112;\
__declare_static_bit_vector(ULT_u9_u1_3456,1);\
__declare_static_bit_vector(AND_u1_u1_3457,1);\
bit_vector_clear(&konst_3452);\
konst_3452.val.byte_array[0] = 96;\
bit_vector_greater_equal(0, &(I), &(konst_3452), &(UGE_u9_u1_3453));\
bit_vector_clear(&konst_3455);\
konst_3455.val.byte_array[0] = 112;\
bit_vector_less(0, &(I), &(konst_3455), &(ULT_u9_u1_3456));\
bit_vector_and(&(UGE_u9_u1_3453), &(ULT_u9_u1_3456), &(AND_u1_u1_3457));\
bit_vector_cast_to_bit_vector(0, &(condition3), &(AND_u1_u1_3457));\
;

#define _resetRegisters_assign_stmt_3467_c_macro_ __declare_static_bit_vector(konst_3461,9);\
bit_vector_clear(&konst_3461);\
konst_3461.val.byte_array[0] = 254;\
__declare_static_bit_vector(UGE_u9_u1_3462,1);\
__declare_static_bit_vector(konst_3464,9);\
bit_vector_clear(&konst_3464);\
konst_3464.val.byte_array[1] = 1;\
__declare_static_bit_vector(ULT_u9_u1_3465,1);\
__declare_static_bit_vector(AND_u1_u1_3466,1);\
bit_vector_clear(&konst_3461);\
konst_3461.val.byte_array[0] = 254;\
bit_vector_greater_equal(0, &(I), &(konst_3461), &(UGE_u9_u1_3462));\
bit_vector_clear(&konst_3464);\
konst_3464.val.byte_array[1] = 1;\
bit_vector_less(0, &(I), &(konst_3464), &(ULT_u9_u1_3465));\
bit_vector_and(&(UGE_u9_u1_3462), &(ULT_u9_u1_3465), &(AND_u1_u1_3466));\
bit_vector_cast_to_bit_vector(0, &(condition4), &(AND_u1_u1_3466));\
;

#define _resetRegisters_assign_stmt_3485_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3504_c_macro_ __declare_static_bit_vector(konst_3502,8);\
bit_vector_clear(&konst_3502);\
konst_3502.val.byte_array[0] = 254;\
__declare_static_bit_vector(AND_u8_u8_3503,8);\
bit_vector_clear(&konst_3502);\
konst_3502.val.byte_array[0] = 254;\
bit_vector_and(&(current_register_value), &(konst_3502), &(AND_u8_u8_3503));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3503));\
;

#define _resetRegisters_assign_stmt_3522_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3533_c_macro_ __declare_static_bit_vector(konst_3531,8);\
bit_vector_clear(&konst_3531);\
konst_3531.val.byte_array[0] = 9;\
__declare_static_bit_vector(AND_u8_u8_3532,8);\
bit_vector_clear(&konst_3531);\
konst_3531.val.byte_array[0] = 9;\
bit_vector_and(&(current_register_value), &(konst_3531), &(AND_u8_u8_3532));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3532));\
;

#define _resetRegisters_assign_stmt_3542_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(ZERO_8));\
;

#define _resetRegisters_assign_stmt_3553_c_macro_ __declare_static_bit_vector(konst_3551,8);\
bit_vector_clear(&konst_3551);\
konst_3551.val.byte_array[0] = 12;\
__declare_static_bit_vector(AND_u8_u8_3552,8);\
bit_vector_clear(&konst_3551);\
konst_3551.val.byte_array[0] = 12;\
bit_vector_and(&(current_register_value), &(konst_3551), &(AND_u8_u8_3552));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3552));\
;

#define _resetRegisters_assign_stmt_3564_c_macro_ __declare_static_bit_vector(konst_3562,8);\
bit_vector_clear(&konst_3562);\
konst_3562.val.byte_array[0] = 193;\
__declare_static_bit_vector(AND_u8_u8_3563,8);\
bit_vector_clear(&konst_3562);\
konst_3562.val.byte_array[0] = 193;\
bit_vector_and(&(current_register_value), &(konst_3562), &(AND_u8_u8_3563));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &I)])), &(AND_u8_u8_3563));\
;

#define _resetRegisters_assign_stmt_3574_c_macro_ __declare_static_bit_vector(konst_3572,9);\
bit_vector_clear(&konst_3572);\
konst_3572.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u9_u9_3573,9);\
bit_vector_clear(&konst_3572);\
konst_3572.val.byte_array[0] = 1;\
bit_vector_plus( &(I), &(konst_3572), &(ADD_u9_u9_3573));\
bit_vector_cast_to_bit_vector(0, &(next_I), &(ADD_u9_u9_3573));\
;

#define _resetRegisters_assign_stmt_3590_c_macro_ __declare_static_bit_vector(konst_3588,8);\
bit_vector_clear(&konst_3588);\
konst_3588.val.byte_array[0] = 253;\
__declare_static_bit_vector(AND_u8_u8_3589,8);\
bit_vector_clear(&konst_3588);\
konst_3588.val.byte_array[0] = 253;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3588), &(AND_u8_u8_3589));\
__declare_static_bit_vector(konst_3585,32);\
bit_vector_clear(&konst_3585);\
konst_3585.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3585);\
konst_3585.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3585)])), &(AND_u8_u8_3589));\
;

#define _resetRegisters_assign_stmt_3602_c_macro_ __declare_static_bit_vector(konst_3600,8);\
bit_vector_clear(&konst_3600);\
konst_3600.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3601,8);\
bit_vector_clear(&konst_3600);\
konst_3600.val.byte_array[0] = 251;\
bit_vector_and(&(current_softwarereset_register_value), &(konst_3600), &(AND_u8_u8_3601));\
__declare_static_bit_vector(konst_3597,32);\
bit_vector_clear(&konst_3597);\
konst_3597.val.byte_array[0] = 47;\
bit_vector_clear(&konst_3597);\
konst_3597.val.byte_array[0] = 47;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_3597)])), &(AND_u8_u8_3601));\
;
;

#define _resetRegisters_branch_block_stmt_3415_c_export_apply_macro_ ;

#define _resetRegisters_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_inner_inarg_prep_macro__ 
#define _sdhc_daemon_assign_stmt_3931_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3934_c_macro_ __declare_static_bit_vector(konst_3933,8);\
bit_vector_clear(&konst_3933);\
konst_3933.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3933);\
konst_3933.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_3933));\
;

#define _sdhc_daemon_assign_stmt_3937_c_macro_ __declare_static_bit_vector(konst_3936,8);\
bit_vector_clear(&konst_3936);\
konst_3936.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3936);\
konst_3936.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_3936));\
;

#define _sdhc_daemon_assign_stmt_3940_c_macro_ __declare_static_bit_vector(konst_3939,8);\
bit_vector_clear(&konst_3939);\
konst_3939.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3939);\
konst_3939.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_3939));\
;

#define _sdhc_daemon_assign_stmt_3943_c_macro_ __declare_static_bit_vector(konst_3942,8);\
bit_vector_clear(&konst_3942);\
konst_3942.val.byte_array[0] = 255;\
bit_vector_clear(&konst_3942);\
konst_3942.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_3942));\
;

#define _sdhc_daemon_assign_stmt_3947_c_macro_ __declare_static_bit_vector(konst_3945,10);\
bit_vector_clear(&konst_3945);\
__declare_static_bit_vector(type_cast_3946,10);\
bit_vector_clear(&type_cast_3946);\
bit_vector_clear(&konst_3945);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3946), &(konst_3945));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(type_cast_3946));\
;

#define _sdhc_daemon_assign_stmt_3951_c_macro_ __declare_static_bit_vector(konst_3949,10);\
bit_vector_clear(&konst_3949);\
__declare_static_bit_vector(type_cast_3950,10);\
bit_vector_clear(&type_cast_3950);\
bit_vector_clear(&konst_3949);\
bit_vector_bitcast_to_bit_vector( &(type_cast_3950), &(konst_3949));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(type_cast_3950));\
;

#define _sdhc_daemon_assign_stmt_3954_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3957_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3960_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_3963_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(ZERO_8));\
;

#define _sdhc_daemon_call_stmt_3965_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_branch_block_stmt_3966_c_export_decl_macro_ __declare_static_bit_vector(request,64);\
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


#define _sdhc_daemon_merge_stmt_3967_c_preamble_macro_ uint8_t merge_stmt_3967_entry_flag;\
merge_stmt_3967_entry_flag = 1;\
uint8_t loopback_3966_flag = 0;\
goto merge_stmt_3967_run;\
loopback_3966: loopback_3966_flag = 1;\
goto merge_stmt_3967_run;\
merge_stmt_3967_run: ;\
;

#define _sdhc_daemon_merge_stmt_3967_c_postamble_macro_ loopback_3966_flag = 0;\
merge_stmt_3967_entry_flag = 0;

#define _sdhc_daemon_assign_stmt_3970_c_macro_ __declare_static_bit_vector(RPIPE_peripheral_bridge_to_sdhc_request_3969,64);\
read_bit_vector_from_pipe("peripheral_bridge_to_sdhc_request",&(RPIPE_peripheral_bridge_to_sdhc_request_3969));\
bit_vector_cast_to_bit_vector(0, &(request), &(RPIPE_peripheral_bridge_to_sdhc_request_3969));\
;

#define _sdhc_daemon_assign_stmt_3974_c_macro_ __declare_static_bit_vector(slice_3973,1);\
bit_vector_slice(&(request), &(slice_3973), 63);\
bit_vector_cast_to_bit_vector(0, &(rwbar), &(slice_3973));\
;

#define _sdhc_daemon_assign_stmt_3978_c_macro_ __declare_static_bit_vector(slice_3977,4);\
bit_vector_slice(&(request), &(slice_3977), 59);\
bit_vector_cast_to_bit_vector(0, &(bytemask), &(slice_3977));\
;

#define _sdhc_daemon_assign_stmt_3982_c_macro_ __declare_static_bit_vector(slice_3981,3);\
bit_vector_slice(&(request), &(slice_3981), 56);\
bit_vector_cast_to_bit_vector(0, &(unused), &(slice_3981));\
;

#define _sdhc_daemon_assign_stmt_3986_c_macro_ __declare_static_bit_vector(slice_3985,16);\
bit_vector_slice(&(request), &(slice_3985), 40);\
bit_vector_cast_to_bit_vector(0, &(addressunused), &(slice_3985));\
;

#define _sdhc_daemon_assign_stmt_3990_c_macro_ __declare_static_bit_vector(slice_3989,8);\
bit_vector_slice(&(request), &(slice_3989), 32);\
bit_vector_cast_to_bit_vector(0, &(address), &(slice_3989));\
;

#define _sdhc_daemon_assign_stmt_3994_c_macro_ __declare_static_bit_vector(slice_3993,8);\
bit_vector_slice(&(request), &(slice_3993), 24);\
bit_vector_cast_to_bit_vector(0, &(data3), &(slice_3993));\
;

#define _sdhc_daemon_assign_stmt_3998_c_macro_ __declare_static_bit_vector(slice_3997,8);\
bit_vector_slice(&(request), &(slice_3997), 16);\
bit_vector_cast_to_bit_vector(0, &(data2), &(slice_3997));\
;

#define _sdhc_daemon_assign_stmt_4002_c_macro_ __declare_static_bit_vector(slice_4001,8);\
bit_vector_slice(&(request), &(slice_4001), 8);\
bit_vector_cast_to_bit_vector(0, &(data1), &(slice_4001));\
;

#define _sdhc_daemon_assign_stmt_4006_c_macro_ __declare_static_bit_vector(slice_4005,8);\
bit_vector_slice(&(request), &(slice_4005), 0);\
bit_vector_cast_to_bit_vector(0, &(data0), &(slice_4005));\
;

#define _sdhc_daemon_assign_stmt_4010_c_macro_ __declare_static_bit_vector(slice_4009,1);\
bit_vector_slice(&(bytemask), &(slice_4009), 3);\
bit_vector_cast_to_bit_vector(0, &(b3), &(slice_4009));\
;

#define _sdhc_daemon_assign_stmt_4014_c_macro_ __declare_static_bit_vector(slice_4013,1);\
bit_vector_slice(&(bytemask), &(slice_4013), 2);\
bit_vector_cast_to_bit_vector(0, &(b2), &(slice_4013));\
;

#define _sdhc_daemon_assign_stmt_4018_c_macro_ __declare_static_bit_vector(slice_4017,1);\
bit_vector_slice(&(bytemask), &(slice_4017), 1);\
bit_vector_cast_to_bit_vector(0, &(b1), &(slice_4017));\
;

#define _sdhc_daemon_assign_stmt_4022_c_macro_ __declare_static_bit_vector(slice_4021,1);\
bit_vector_slice(&(bytemask), &(slice_4021), 0);\
bit_vector_cast_to_bit_vector(0, &(b0), &(slice_4021));\
;

#define _sdhc_daemon_call_stmt_4030_c_macro_ if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if (bit_vector_to_uint64(0, &b3)) {\
_sdhc_register_write_( &(address),  &(data3));\
}\
;

#define _sdhc_daemon_call_stmt_4036_c_macro_ if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
__declare_static_bit_vector(konst_4033,8);\
bit_vector_clear(&konst_4033);\
konst_4033.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_4034,8);\
if (bit_vector_to_uint64(0, &b2)) {\
bit_vector_clear(&konst_4033);\
konst_4033.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_4033), &(ADD_u8_u8_4034));\
_sdhc_register_write_( &(ADD_u8_u8_4034),  &(data2));\
}\
;

#define _sdhc_daemon_call_stmt_4042_c_macro_ if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
__declare_static_bit_vector(konst_4039,8);\
bit_vector_clear(&konst_4039);\
konst_4039.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_4040,8);\
if (bit_vector_to_uint64(0, &b1)) {\
bit_vector_clear(&konst_4039);\
konst_4039.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_4039), &(ADD_u8_u8_4040));\
_sdhc_register_write_( &(ADD_u8_u8_4040),  &(data1));\
}\
;

#define _sdhc_daemon_call_stmt_4048_c_macro_ if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
__declare_static_bit_vector(konst_4045,8);\
bit_vector_clear(&konst_4045);\
konst_4045.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4046,8);\
if (bit_vector_to_uint64(0, &b0)) {\
bit_vector_clear(&konst_4045);\
konst_4045.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4045), &(ADD_u8_u8_4046));\
_sdhc_register_write_( &(ADD_u8_u8_4046),  &(data0));\
}\
;

#define _sdhc_daemon_assign_stmt_4051_c_macro_ write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(ZERO_32));\
;

#define _sdhc_daemon_call_stmt_4064_c_macro_ _resetRegisters_( &(ZERO_2));\
;

#define _sdhc_daemon_call_stmt_4072_c_macro_ _resetRegisters_( &(ONE_2));\
;

#define _sdhc_daemon_call_stmt_4081_c_macro_ __declare_static_bit_vector(konst_4079,2);\
bit_vector_clear(&konst_4079);\
konst_4079.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_4080,2);\
bit_vector_clear(&type_cast_4080);\
type_cast_4080.val.byte_array[0] = 2;\
bit_vector_clear(&konst_4079);\
konst_4079.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_4080), &(konst_4079));\
_resetRegisters_( &(type_cast_4080));\
;

#define _sdhc_daemon_assign_stmt_4091_c_macro_ __declare_static_bit_vector(konst_4085,32);\
bit_vector_clear(&konst_4085);\
konst_4085.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_4087,8);\
bit_vector_clear(&konst_4087);\
konst_4087.val.byte_array[0] = 1;\
__declare_static_bit_vector(AND_u8_u8_4088,8);\
__declare_static_bit_vector(konst_4089,8);\
bit_vector_clear(&konst_4089);\
__declare_static_bit_vector(EQ_u8_u1_4090,1);\
bit_vector_clear(&konst_4085);\
konst_4085.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4087);\
konst_4087.val.byte_array[0] = 1;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4085)])), &(konst_4087), &(AND_u8_u8_4088));\
bit_vector_clear(&konst_4089);\
bit_vector_equal(0, &(AND_u8_u8_4088), &(konst_4089), &(EQ_u8_u1_4090));\
bit_vector_cast_to_bit_vector(0, &(commandInhibit_CMD), &(EQ_u8_u1_4090));\
;

#define _sdhc_daemon_assign_stmt_4100_c_macro_ __declare_static_bit_vector(konst_4094,8);\
bit_vector_clear(&konst_4094);\
konst_4094.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4095,8);\
__declare_static_bit_vector(konst_4096,8);\
bit_vector_clear(&konst_4096);\
konst_4096.val.byte_array[0] = 15;\
__declare_static_bit_vector(EQ_u8_u1_4097,1);\
__declare_static_bit_vector(AND_u1_u1_4099,1);\
bit_vector_clear(&konst_4094);\
konst_4094.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4094), &(ADD_u8_u8_4095));\
bit_vector_clear(&konst_4096);\
konst_4096.val.byte_array[0] = 15;\
bit_vector_equal(0, &(ADD_u8_u8_4095), &(konst_4096), &(EQ_u8_u1_4097));\
bit_vector_and(&(EQ_u8_u1_4097), &(b0), &(AND_u1_u1_4099));\
bit_vector_cast_to_bit_vector(0, &(addresscheck), &(AND_u1_u1_4099));\
;

#define _sdhc_daemon_assign_stmt_4108_c_macro_ __declare_static_bit_vector(konst_4102,32);\
bit_vector_clear(&konst_4102);\
konst_4102.val.byte_array[0] = 36;\
__declare_static_bit_vector(konst_4104,8);\
bit_vector_clear(&konst_4104);\
konst_4104.val.byte_array[0] = 1;\
__declare_static_bit_vector(LSHR_u8_u8_4105,8);\
__declare_static_bit_vector(konst_4106,8);\
bit_vector_clear(&konst_4106);\
konst_4106.val.byte_array[0] = 1;\
__declare_static_bit_vector(SHL_u8_u8_4107,8);\
bit_vector_clear(&konst_4102);\
konst_4102.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4104);\
konst_4104.val.byte_array[0] = 1;\
bit_vector_shift_right(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4102)])), &(konst_4104), &(LSHR_u8_u8_4105));\
bit_vector_clear(&konst_4106);\
konst_4106.val.byte_array[0] = 1;\
bit_vector_shift_left(&(LSHR_u8_u8_4105), &(konst_4106), &(SHL_u8_u8_4107));\
bit_vector_cast_to_bit_vector(0, &(presentState), &(SHL_u8_u8_4107));\
;

#define _sdhc_daemon_assign_stmt_4118_c_macro_ __declare_static_bit_vector(konst_4116,8);\
bit_vector_clear(&konst_4116);\
konst_4116.val.byte_array[0] = 1;\
__declare_static_bit_vector(OR_u8_u8_4117,8);\
bit_vector_clear(&konst_4116);\
konst_4116.val.byte_array[0] = 1;\
bit_vector_or(&(presentState), &(konst_4116), &(OR_u8_u8_4117));\
__declare_static_bit_vector(konst_4113,32);\
bit_vector_clear(&konst_4113);\
konst_4113.val.byte_array[0] = 36;\
bit_vector_clear(&konst_4113);\
konst_4113.val.byte_array[0] = 36;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4113)])), &(OR_u8_u8_4117));\
;

#define _sdhc_daemon_assign_stmt_4121_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_4124_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ZERO_1));\
;

#define _sdhc_daemon_call_stmt_4131_c_macro_ _command_generator_(&(normalInterruptStatusVar1), &(normalInterruptStatusVar2), &(errorInterruptStatusVar1), &(errorInterruptStatusVar2), &(dataErrorInterruptStatusVar1), &(dataTransferComplete));\
;

#define _sdhc_daemon_assign_stmt_4134_c_macro_ __declare_static_bit_vector(konst_4133,8);\
bit_vector_clear(&konst_4133);\
konst_4133.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4133);\
konst_4133.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(konst_4133));\
;

#define _sdhc_daemon_assign_stmt_4137_c_macro_ __declare_static_bit_vector(konst_4136,8);\
bit_vector_clear(&konst_4136);\
konst_4136.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4136);\
konst_4136.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag2), &(konst_4136));\
;

#define _sdhc_daemon_assign_stmt_4140_c_macro_ __declare_static_bit_vector(konst_4139,8);\
bit_vector_clear(&konst_4139);\
konst_4139.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4139);\
konst_4139.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(konst_4139));\
;

#define _sdhc_daemon_assign_stmt_4143_c_macro_ __declare_static_bit_vector(konst_4142,8);\
bit_vector_clear(&konst_4142);\
konst_4142.val.byte_array[0] = 255;\
bit_vector_clear(&konst_4142);\
konst_4142.val.byte_array[0] = 255;\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag2), &(konst_4142));\
;

#define _sdhc_daemon_assign_stmt_4155_c_macro_ __declare_static_bit_vector(konst_4151,32);\
bit_vector_clear(&konst_4151);\
konst_4151.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4153,8);\
bit_vector_clear(&konst_4153);\
konst_4153.val.byte_array[0] = 8;\
__declare_static_bit_vector(OR_u8_u8_4154,8);\
bit_vector_clear(&konst_4151);\
konst_4151.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4153);\
konst_4153.val.byte_array[0] = 8;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4151)])), &(konst_4153), &(OR_u8_u8_4154));\
__declare_static_bit_vector(konst_4149,32);\
bit_vector_clear(&konst_4149);\
konst_4149.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4149);\
konst_4149.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4149)])), &(OR_u8_u8_4154));\
;

#define _sdhc_daemon_assign_stmt_4160_c_macro_ __declare_static_bit_vector(konst_4158,8);\
bit_vector_clear(&konst_4158);\
konst_4158.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_4159,8);\
bit_vector_clear(&OR_u8_u8_4159);\
OR_u8_u8_4159.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4158);\
konst_4158.val.byte_array[0] = 32;\
bit_vector_or(&(ZERO_8), &(konst_4158), &(OR_u8_u8_4159));\
bit_vector_cast_to_bit_vector(0, &(bufferReadReady), &(OR_u8_u8_4159));\
;

#define _sdhc_daemon_assign_stmt_4165_c_macro_ __declare_static_bit_vector(konst_4163,8);\
bit_vector_clear(&konst_4163);\
konst_4163.val.byte_array[0] = 32;\
__declare_static_bit_vector(OR_u8_u8_4164,8);\
bit_vector_clear(&konst_4163);\
konst_4163.val.byte_array[0] = 32;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4163), &(OR_u8_u8_4164));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4164));\
;

#define _sdhc_daemon_assign_stmt_4177_c_macro_ __declare_static_bit_vector(konst_4173,32);\
bit_vector_clear(&konst_4173);\
konst_4173.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4175,8);\
bit_vector_clear(&konst_4175);\
konst_4175.val.byte_array[0] = 4;\
__declare_static_bit_vector(OR_u8_u8_4176,8);\
bit_vector_clear(&konst_4173);\
konst_4173.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4175);\
konst_4175.val.byte_array[0] = 4;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4173)])), &(konst_4175), &(OR_u8_u8_4176));\
__declare_static_bit_vector(konst_4171,32);\
bit_vector_clear(&konst_4171);\
konst_4171.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4171);\
konst_4171.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4171)])), &(OR_u8_u8_4176));\
;

#define _sdhc_daemon_assign_stmt_4182_c_macro_ __declare_static_bit_vector(konst_4180,8);\
bit_vector_clear(&konst_4180);\
konst_4180.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_4181,8);\
bit_vector_clear(&OR_u8_u8_4181);\
OR_u8_u8_4181.val.byte_array[0] = 16;\
bit_vector_clear(&konst_4180);\
konst_4180.val.byte_array[0] = 16;\
bit_vector_or(&(ZERO_8), &(konst_4180), &(OR_u8_u8_4181));\
bit_vector_cast_to_bit_vector(0, &(bufferWriteReady), &(OR_u8_u8_4181));\
;

#define _sdhc_daemon_assign_stmt_4187_c_macro_ __declare_static_bit_vector(konst_4185,8);\
bit_vector_clear(&konst_4185);\
konst_4185.val.byte_array[0] = 16;\
__declare_static_bit_vector(OR_u8_u8_4186,8);\
bit_vector_clear(&konst_4185);\
konst_4185.val.byte_array[0] = 16;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4185), &(OR_u8_u8_4186));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4186));\
;

#define _sdhc_daemon_assign_stmt_4193_c_macro_ __declare_static_bit_vector(konst_4191,8);\
bit_vector_clear(&konst_4191);\
konst_4191.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_4192,1);\
bit_vector_clear(&konst_4191);\
konst_4191.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_4191), &(EQ_u8_u1_4192));\
bit_vector_cast_to_bit_vector(0, &(bufferDataPortCheck), &(EQ_u8_u1_4192));\
;

#define _sdhc_daemon_assign_stmt_4205_c_macro_ __declare_static_bit_vector(konst_4203,32);\
bit_vector_clear(&konst_4203);\
konst_4203.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4203);\
konst_4203.val.byte_array[0] = 32;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4203)])));\
;

#define _sdhc_daemon_assign_stmt_4209_c_macro_ __declare_static_bit_vector(konst_4207,32);\
bit_vector_clear(&konst_4207);\
konst_4207.val.byte_array[0] = 33;\
bit_vector_clear(&konst_4207);\
konst_4207.val.byte_array[0] = 33;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4207)])));\
;

#define _sdhc_daemon_assign_stmt_4213_c_macro_ __declare_static_bit_vector(konst_4211,32);\
bit_vector_clear(&konst_4211);\
konst_4211.val.byte_array[0] = 34;\
bit_vector_clear(&konst_4211);\
konst_4211.val.byte_array[0] = 34;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4211)])));\
;

#define _sdhc_daemon_assign_stmt_4217_c_macro_ __declare_static_bit_vector(konst_4215,32);\
bit_vector_clear(&konst_4215);\
konst_4215.val.byte_array[0] = 35;\
bit_vector_clear(&konst_4215);\
konst_4215.val.byte_array[0] = 35;\
write_bit_vector_to_pipe("dataBufferTx",&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4215)])));\
;

#define _sdhc_daemon_assign_stmt_4222_c_macro_ __declare_static_bit_vector(konst_4220,10);\
bit_vector_clear(&konst_4220);\
konst_4220.val.byte_array[0] = 4;\
__declare_static_bit_vector(ADD_u10_u10_4221,10);\
bit_vector_clear(&konst_4220);\
konst_4220.val.byte_array[0] = 4;\
bit_vector_plus( &(txBufferPointer), &(konst_4220), &(ADD_u10_u10_4221));\
bit_vector_cast_to_bit_vector(0, &(txBufferPointer), &(ADD_u10_u10_4221));\
;

#define _sdhc_daemon_assign_stmt_4233_c_macro_ __declare_static_bit_vector(konst_4229,32);\
bit_vector_clear(&konst_4229);\
konst_4229.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4231,8);\
bit_vector_clear(&konst_4231);\
konst_4231.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_4232,8);\
bit_vector_clear(&konst_4229);\
konst_4229.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4231);\
konst_4231.val.byte_array[0] = 251;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4229)])), &(konst_4231), &(AND_u8_u8_4232));\
__declare_static_bit_vector(konst_4227,32);\
bit_vector_clear(&konst_4227);\
konst_4227.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4227);\
konst_4227.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4227)])), &(AND_u8_u8_4232));\
;

#define _sdhc_daemon_assign_stmt_4240_c_macro_ __declare_static_bit_vector(konst_4235,32);\
bit_vector_clear(&konst_4235);\
konst_4235.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4237,8);\
bit_vector_clear(&konst_4237);\
konst_4237.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_4238,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4239,1);\
bit_vector_clear(&konst_4235);\
konst_4235.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4237);\
konst_4237.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4235)])), &(konst_4237), &(AND_u8_u8_4238));\
bit_vector_reduce_or( &(AND_u8_u8_4238), &(BITREDUCEOR_u8_u1_4239));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleBlock), &(BITREDUCEOR_u8_u1_4239));\
;

#define _sdhc_daemon_assign_stmt_4249_c_macro_ __declare_static_bit_vector(konst_4242,32);\
bit_vector_clear(&konst_4242);\
konst_4242.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4244,8);\
bit_vector_clear(&konst_4244);\
konst_4244.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_4245,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4246,1);\
__declare_static_bit_vector(AND_u1_u1_4248,1);\
bit_vector_clear(&konst_4242);\
konst_4242.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4244);\
konst_4244.val.byte_array[0] = 2;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4242)])), &(konst_4244), &(AND_u8_u8_4245));\
bit_vector_reduce_or( &(AND_u8_u8_4245), &(BITREDUCEOR_u8_u1_4246));\
bit_vector_and(&(BITREDUCEOR_u8_u1_4246), &(singleMultipleBlock), &(AND_u1_u1_4248));\
bit_vector_cast_to_bit_vector(0, &(blockCountEnable), &(AND_u1_u1_4248));\
;

#define _sdhc_daemon_assign_stmt_4256_c_macro_ __declare_static_bit_vector(konst_4251,32);\
bit_vector_clear(&konst_4251);\
konst_4251.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_4253,32);\
bit_vector_clear(&konst_4253);\
konst_4253.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_4255,16);\
bit_vector_clear(&konst_4251);\
konst_4251.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4253);\
konst_4253.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4251)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4253)])), &(CONCAT_u8_u16_4255));\
bit_vector_cast_to_bit_vector(0, &(blockCount), &(CONCAT_u8_u16_4255));\
;

#define _sdhc_daemon_assign_stmt_4261_c_macro_ __declare_static_bit_vector(konst_4259,16);\
bit_vector_clear(&konst_4259);\
konst_4259.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_4260,1);\
bit_vector_clear(&konst_4259);\
konst_4259.val.byte_array[0] = 1;\
bit_vector_equal(0, &(blockCount), &(konst_4259), &(EQ_u16_u1_4260));\
bit_vector_cast_to_bit_vector(0, &(blockCountTrue), &(EQ_u16_u1_4260));\
;

#define _sdhc_daemon_assign_stmt_4269_c_macro_ __declare_static_bit_vector(NOT_u1_u1_4264,1);\
__declare_static_bit_vector(AND_u1_u1_4267,1);\
__declare_static_bit_vector(OR_u1_u1_4268,1);\
bit_vector_not( &(singleMultipleBlock), &(NOT_u1_u1_4264));\
bit_vector_and(&(blockCountEnable), &(blockCountTrue), &(AND_u1_u1_4267));\
bit_vector_or(&(NOT_u1_u1_4264), &(AND_u1_u1_4267), &(OR_u1_u1_4268));\
bit_vector_cast_to_bit_vector(0, &(lastBlock), &(OR_u1_u1_4268));\
;

#define _sdhc_daemon_call_stmt_4275_c_macro_ _dataTx_( &(lastBlock),  &(blockCountEnable),  &(blockCount), &(blockCountNext), &(transferComplete));\
;

#define _sdhc_daemon_assign_stmt_4280_c_macro_ __declare_static_bit_vector(slice_4279,8);\
bit_vector_slice(&(blockCountNext), &(slice_4279), 8);\
__declare_static_bit_vector(konst_4276,32);\
bit_vector_clear(&konst_4276);\
konst_4276.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4276);\
konst_4276.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4276)])), &(slice_4279));\
;

#define _sdhc_daemon_assign_stmt_4285_c_macro_ __declare_static_bit_vector(slice_4284,8);\
bit_vector_slice(&(blockCountNext), &(slice_4284), 0);\
__declare_static_bit_vector(konst_4281,32);\
bit_vector_clear(&konst_4281);\
konst_4281.val.byte_array[0] = 6;\
bit_vector_clear(&konst_4281);\
konst_4281.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4281)])), &(slice_4284));\
;

#define _sdhc_daemon_assign_stmt_4290_c_macro_ __declare_static_bit_vector(konst_4288,8);\
bit_vector_clear(&konst_4288);\
konst_4288.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_4289,8);\
bit_vector_clear(&konst_4288);\
konst_4288.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4288), &(OR_u8_u8_4289));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4289));\
;

#define _sdhc_daemon_assign_stmt_4295_c_macro_ __declare_static_bit_vector(konst_4293,8);\
bit_vector_clear(&konst_4293);\
konst_4293.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_4294,8);\
bit_vector_clear(&konst_4293);\
konst_4293.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_4293), &(OR_u8_u8_4294));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_4294));\
;

#define _sdhc_daemon_assign_stmt_4303_c_macro_ __declare_static_bit_vector(konst_4301,8);\
bit_vector_clear(&konst_4301);\
konst_4301.val.byte_array[0] = 32;\
__declare_static_bit_vector(EQ_u8_u1_4302,1);\
bit_vector_clear(&konst_4301);\
konst_4301.val.byte_array[0] = 32;\
bit_vector_equal(0, &(address), &(konst_4301), &(EQ_u8_u1_4302));\
bit_vector_cast_to_bit_vector(0, &(readBufferDataPortCheck), &(EQ_u8_u1_4302));\
;

#define _sdhc_daemon_assign_stmt_4315_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4314,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4314));\
__declare_static_bit_vector(konst_4312,32);\
bit_vector_clear(&konst_4312);\
konst_4312.val.byte_array[0] = 32;\
bit_vector_clear(&konst_4312);\
konst_4312.val.byte_array[0] = 32;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4312)])), &(RPIPE_dataBufferRx_4314));\
;

#define _sdhc_daemon_assign_stmt_4319_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4318,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4318));\
__declare_static_bit_vector(konst_4316,32);\
bit_vector_clear(&konst_4316);\
konst_4316.val.byte_array[0] = 33;\
bit_vector_clear(&konst_4316);\
konst_4316.val.byte_array[0] = 33;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4316)])), &(RPIPE_dataBufferRx_4318));\
;

#define _sdhc_daemon_assign_stmt_4323_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4322,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4322));\
__declare_static_bit_vector(konst_4320,32);\
bit_vector_clear(&konst_4320);\
konst_4320.val.byte_array[0] = 34;\
bit_vector_clear(&konst_4320);\
konst_4320.val.byte_array[0] = 34;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4320)])), &(RPIPE_dataBufferRx_4322));\
;

#define _sdhc_daemon_assign_stmt_4327_c_macro_ __declare_static_bit_vector(RPIPE_dataBufferRx_4326,8);\
read_bit_vector_from_pipe("dataBufferRx",&(RPIPE_dataBufferRx_4326));\
__declare_static_bit_vector(konst_4324,32);\
bit_vector_clear(&konst_4324);\
konst_4324.val.byte_array[0] = 35;\
bit_vector_clear(&konst_4324);\
konst_4324.val.byte_array[0] = 35;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4324)])), &(RPIPE_dataBufferRx_4326));\
;

#define _sdhc_daemon_assign_stmt_4332_c_macro_ __declare_static_bit_vector(konst_4330,10);\
bit_vector_clear(&konst_4330);\
konst_4330.val.byte_array[0] = 4;\
__declare_static_bit_vector(SUB_u10_u10_4331,10);\
bit_vector_clear(&konst_4330);\
konst_4330.val.byte_array[0] = 4;\
bit_vector_minus( &(rxBufferPointer), &(konst_4330), &(SUB_u10_u10_4331));\
bit_vector_cast_to_bit_vector(0, &(rxBufferPointer), &(SUB_u10_u10_4331));\
;

#define _sdhc_daemon_assign_stmt_4339_c_macro_ __declare_static_bit_vector(konst_4334,32);\
bit_vector_clear(&konst_4334);\
konst_4334.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4336,8);\
bit_vector_clear(&konst_4336);\
konst_4336.val.byte_array[0] = 32;\
__declare_static_bit_vector(AND_u8_u8_4337,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4338,1);\
bit_vector_clear(&konst_4334);\
konst_4334.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4336);\
konst_4336.val.byte_array[0] = 32;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4334)])), &(konst_4336), &(AND_u8_u8_4337));\
bit_vector_reduce_or( &(AND_u8_u8_4337), &(BITREDUCEOR_u8_u1_4338));\
bit_vector_cast_to_bit_vector(0, &(singleMultipleReadBlock), &(BITREDUCEOR_u8_u1_4338));\
;

#define _sdhc_daemon_assign_stmt_4350_c_macro_ __declare_static_bit_vector(konst_4346,32);\
bit_vector_clear(&konst_4346);\
konst_4346.val.byte_array[0] = 37;\
__declare_static_bit_vector(konst_4348,8);\
bit_vector_clear(&konst_4348);\
konst_4348.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_4349,8);\
bit_vector_clear(&konst_4346);\
konst_4346.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4348);\
konst_4348.val.byte_array[0] = 247;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4346)])), &(konst_4348), &(AND_u8_u8_4349));\
__declare_static_bit_vector(konst_4344,32);\
bit_vector_clear(&konst_4344);\
konst_4344.val.byte_array[0] = 37;\
bit_vector_clear(&konst_4344);\
konst_4344.val.byte_array[0] = 37;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4344)])), &(AND_u8_u8_4349));\
;

#define _sdhc_daemon_assign_stmt_4363_c_macro_ __declare_static_bit_vector(konst_4356,32);\
bit_vector_clear(&konst_4356);\
konst_4356.val.byte_array[0] = 12;\
__declare_static_bit_vector(konst_4358,8);\
bit_vector_clear(&konst_4358);\
konst_4358.val.byte_array[0] = 2;\
__declare_static_bit_vector(AND_u8_u8_4359,8);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4360,1);\
__declare_static_bit_vector(AND_u1_u1_4362,1);\
bit_vector_clear(&konst_4356);\
konst_4356.val.byte_array[0] = 12;\
bit_vector_clear(&konst_4358);\
konst_4358.val.byte_array[0] = 2;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4356)])), &(konst_4358), &(AND_u8_u8_4359));\
bit_vector_reduce_or( &(AND_u8_u8_4359), &(BITREDUCEOR_u8_u1_4360));\
bit_vector_and(&(BITREDUCEOR_u8_u1_4360), &(singleMultipleBlock), &(AND_u1_u1_4362));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountEnable), &(AND_u1_u1_4362));\
;

#define _sdhc_daemon_assign_stmt_4370_c_macro_ __declare_static_bit_vector(konst_4365,32);\
bit_vector_clear(&konst_4365);\
konst_4365.val.byte_array[0] = 7;\
__declare_static_bit_vector(konst_4367,32);\
bit_vector_clear(&konst_4367);\
konst_4367.val.byte_array[0] = 6;\
__declare_static_bit_vector(CONCAT_u8_u16_4369,16);\
bit_vector_clear(&konst_4365);\
konst_4365.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4367);\
konst_4367.val.byte_array[0] = 6;\
bit_vector_concatenate( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4365)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4367)])), &(CONCAT_u8_u16_4369));\
bit_vector_cast_to_bit_vector(0, &(readBlockCount), &(CONCAT_u8_u16_4369));\
;

#define _sdhc_daemon_assign_stmt_4375_c_macro_ __declare_static_bit_vector(konst_4373,16);\
bit_vector_clear(&konst_4373);\
konst_4373.val.byte_array[0] = 1;\
__declare_static_bit_vector(EQ_u16_u1_4374,1);\
bit_vector_clear(&konst_4373);\
konst_4373.val.byte_array[0] = 1;\
bit_vector_equal(0, &(readBlockCount), &(konst_4373), &(EQ_u16_u1_4374));\
bit_vector_cast_to_bit_vector(0, &(readBlockCountTrue), &(EQ_u16_u1_4374));\
;

#define _sdhc_daemon_assign_stmt_4380_c_macro_ __declare_static_bit_vector(AND_u1_u1_4379,1);\
bit_vector_and(&(readBlockCountEnable), &(readBlockCountTrue), &(AND_u1_u1_4379));\
bit_vector_cast_to_bit_vector(0, &(readLastBlock), &(AND_u1_u1_4379));\
;

#define _sdhc_daemon_assign_stmt_4389_c_macro_ __declare_static_bit_vector(konst_4387,16);\
bit_vector_clear(&konst_4387);\
konst_4387.val.byte_array[0] = 1;\
__declare_static_bit_vector(SUB_u16_u16_4388,16);\
bit_vector_clear(&konst_4387);\
konst_4387.val.byte_array[0] = 1;\
bit_vector_minus( &(readBlockCount), &(konst_4387), &(SUB_u16_u16_4388));\
bit_vector_cast_to_bit_vector(0, &(newReadBlockCount), &(SUB_u16_u16_4388));\
;

#define _sdhc_daemon_call_stmt_4392_c_macro_ _dataRx_( &(readLastBlock), &(dataErrorInterruptStatusVar));\
;

#define _sdhc_daemon_assign_stmt_4395_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty1), &(ZERO_1));\
;

#define _sdhc_daemon_assign_stmt_4398_c_macro_ bit_vector_cast_to_bit_vector(0, &(dataRxEnrty2), &(ONE_1));\
;

#define _sdhc_daemon_assign_stmt_4403_c_macro_ __declare_static_bit_vector(slice_4402,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_4402), 8);\
__declare_static_bit_vector(konst_4399,32);\
bit_vector_clear(&konst_4399);\
konst_4399.val.byte_array[0] = 7;\
bit_vector_clear(&konst_4399);\
konst_4399.val.byte_array[0] = 7;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4399)])), &(slice_4402));\
;

#define _sdhc_daemon_assign_stmt_4408_c_macro_ __declare_static_bit_vector(slice_4407,8);\
bit_vector_slice(&(newReadBlockCount), &(slice_4407), 0);\
__declare_static_bit_vector(konst_4404,32);\
bit_vector_clear(&konst_4404);\
konst_4404.val.byte_array[0] = 6;\
bit_vector_clear(&konst_4404);\
konst_4404.val.byte_array[0] = 6;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4404)])), &(slice_4407));\
;

#define _sdhc_daemon_assign_stmt_4415_c_macro_ __declare_static_bit_vector(konst_4411,8);\
bit_vector_clear(&konst_4411);\
konst_4411.val.byte_array[0] = 2;\
__declare_static_bit_vector(type_cast_4412,8);\
bit_vector_clear(&type_cast_4412);\
type_cast_4412.val.byte_array[0] = 2;\
__declare_static_bit_vector(MUX_4414,8);\
if (has_undefined_bit(&readLastBlock)) {fprintf(stderr, "Error: variable readLastBlock has undefined value (%s) at test point.\n", to_string(&readLastBlock));assert(0);} \
if(bit_vector_to_uint64(0, &readLastBlock)){bit_vector_clear(&konst_4411);\
konst_4411.val.byte_array[0] = 2;\
bit_vector_bitcast_to_bit_vector( &(type_cast_4412), &(konst_4411));\
bit_vector_cast_to_bit_vector(0, &(MUX_4414), &(type_cast_4412));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4414), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readDataTransferComplete), &(MUX_4414));\
;

#define _sdhc_daemon_assign_stmt_4420_c_macro_ __declare_static_bit_vector(konst_4418,8);\
bit_vector_clear(&konst_4418);\
konst_4418.val.byte_array[0] = 2;\
__declare_static_bit_vector(OR_u8_u8_4419,8);\
bit_vector_clear(&konst_4418);\
konst_4418.val.byte_array[0] = 2;\
bit_vector_or(&(normalInterruptFlag1), &(konst_4418), &(OR_u8_u8_4419));\
bit_vector_cast_to_bit_vector(0, &(normalInterruptFlag1), &(OR_u8_u8_4419));\
;

#define _sdhc_daemon_assign_stmt_4425_c_macro_ __declare_static_bit_vector(konst_4423,8);\
bit_vector_clear(&konst_4423);\
konst_4423.val.byte_array[0] = 96;\
__declare_static_bit_vector(OR_u8_u8_4424,8);\
bit_vector_clear(&konst_4423);\
konst_4423.val.byte_array[0] = 96;\
bit_vector_or(&(errorInterruptFlag1), &(konst_4423), &(OR_u8_u8_4424));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptFlag1), &(OR_u8_u8_4424));\
;

#define _sdhc_daemon_assign_stmt_4438_c_macro_ __declare_static_bit_vector(konst_4433,8);\
bit_vector_clear(&konst_4433);\
__declare_static_bit_vector(ADD_u8_u8_4434,8);\
__declare_static_bit_vector(MUX_4437,8);\
if (has_undefined_bit(&b3)) {fprintf(stderr, "Error: variable b3 has undefined value (%s) at test point.\n", to_string(&b3));assert(0);} \
if(bit_vector_to_uint64(0, &b3)){bit_vector_clear(&konst_4433);\
bit_vector_plus( &(address), &(konst_4433), &(ADD_u8_u8_4434));\
bit_vector_cast_to_bit_vector(0, &(MUX_4437), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4434)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4437), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata3), &(MUX_4437));\
;

#define _sdhc_daemon_assign_stmt_4447_c_macro_ __declare_static_bit_vector(konst_4442,8);\
bit_vector_clear(&konst_4442);\
konst_4442.val.byte_array[0] = 1;\
__declare_static_bit_vector(ADD_u8_u8_4443,8);\
__declare_static_bit_vector(MUX_4446,8);\
if (has_undefined_bit(&b2)) {fprintf(stderr, "Error: variable b2 has undefined value (%s) at test point.\n", to_string(&b2));assert(0);} \
if(bit_vector_to_uint64(0, &b2)){bit_vector_clear(&konst_4442);\
konst_4442.val.byte_array[0] = 1;\
bit_vector_plus( &(address), &(konst_4442), &(ADD_u8_u8_4443));\
bit_vector_cast_to_bit_vector(0, &(MUX_4446), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4443)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4446), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata2), &(MUX_4446));\
;

#define _sdhc_daemon_assign_stmt_4456_c_macro_ __declare_static_bit_vector(konst_4451,8);\
bit_vector_clear(&konst_4451);\
konst_4451.val.byte_array[0] = 2;\
__declare_static_bit_vector(ADD_u8_u8_4452,8);\
__declare_static_bit_vector(MUX_4455,8);\
if (has_undefined_bit(&b1)) {fprintf(stderr, "Error: variable b1 has undefined value (%s) at test point.\n", to_string(&b1));assert(0);} \
if(bit_vector_to_uint64(0, &b1)){bit_vector_clear(&konst_4451);\
konst_4451.val.byte_array[0] = 2;\
bit_vector_plus( &(address), &(konst_4451), &(ADD_u8_u8_4452));\
bit_vector_cast_to_bit_vector(0, &(MUX_4455), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4452)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4455), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata1), &(MUX_4455));\
;

#define _sdhc_daemon_assign_stmt_4465_c_macro_ __declare_static_bit_vector(konst_4460,8);\
bit_vector_clear(&konst_4460);\
konst_4460.val.byte_array[0] = 3;\
__declare_static_bit_vector(ADD_u8_u8_4461,8);\
__declare_static_bit_vector(MUX_4464,8);\
if (has_undefined_bit(&b0)) {fprintf(stderr, "Error: variable b0 has undefined value (%s) at test point.\n", to_string(&b0));assert(0);} \
if(bit_vector_to_uint64(0, &b0)){bit_vector_clear(&konst_4460);\
konst_4460.val.byte_array[0] = 3;\
bit_vector_plus( &(address), &(konst_4460), &(ADD_u8_u8_4461));\
bit_vector_cast_to_bit_vector(0, &(MUX_4464), &((sdhcRegisters[bit_vector_to_uint64(0, &ADD_u8_u8_4461)])));\
}else {bit_vector_cast_to_bit_vector(0, &(MUX_4464), &(ZERO_8));\
}bit_vector_cast_to_bit_vector(0, &(readdata0), &(MUX_4464));\
;

#define _sdhc_daemon_assign_stmt_4474_c_macro_ __declare_static_bit_vector(CONCAT_u8_u16_4469,16);\
__declare_static_bit_vector(CONCAT_u8_u16_4472,16);\
__declare_static_bit_vector(CONCAT_u16_u32_4473,32);\
bit_vector_concatenate( &(readdata3), &(readdata2), &(CONCAT_u8_u16_4469));\
bit_vector_concatenate( &(readdata1), &(readdata0), &(CONCAT_u8_u16_4472));\
bit_vector_concatenate( &(CONCAT_u8_u16_4469), &(CONCAT_u8_u16_4472), &(CONCAT_u16_u32_4473));\
write_bit_vector_to_pipe("sdhc_to_peripheral_bridge_response",&(CONCAT_u16_u32_4473));\
;

#define _sdhc_daemon_assign_stmt_4495_c_macro_ __declare_static_bit_vector(konst_4479,8);\
bit_vector_clear(&konst_4479);\
__declare_static_bit_vector(MUX_4480,8);\
__declare_static_bit_vector(konst_4483,8);\
bit_vector_clear(&konst_4483);\
__declare_static_bit_vector(MUX_4484,8);\
__declare_static_bit_vector(OR_u8_u8_4485,8);\
__declare_static_bit_vector(NOT_u1_u1_4487,1);\
__declare_static_bit_vector(NOT_u1_u1_4489,1);\
__declare_static_bit_vector(AND_u1_u1_4490,1);\
__declare_static_bit_vector(konst_4492,8);\
bit_vector_clear(&konst_4492);\
__declare_static_bit_vector(MUX_4493,8);\
__declare_static_bit_vector(OR_u8_u8_4494,8);\
if (has_undefined_bit(&dataRxEnrty1)) {fprintf(stderr, "Error: variable dataRxEnrty1 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty1));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty1)){bit_vector_cast_to_bit_vector(0, &(MUX_4480), &(dataErrorInterruptStatusVar1));\
}else {bit_vector_clear(&konst_4479);\
bit_vector_cast_to_bit_vector(0, &(MUX_4480), &(konst_4479));\
}if (has_undefined_bit(&dataRxEnrty2)) {fprintf(stderr, "Error: variable dataRxEnrty2 has undefined value (%s) at test point.\n", to_string(&dataRxEnrty2));assert(0);} \
if(bit_vector_to_uint64(0, &dataRxEnrty2)){bit_vector_cast_to_bit_vector(0, &(MUX_4484), &(dataErrorInterruptStatusVar));\
}else {bit_vector_clear(&konst_4483);\
bit_vector_cast_to_bit_vector(0, &(MUX_4484), &(konst_4483));\
}bit_vector_or(&(MUX_4480), &(MUX_4484), &(OR_u8_u8_4485));\
bit_vector_not( &(dataRxEnrty1), &(NOT_u1_u1_4487));\
bit_vector_not( &(dataRxEnrty2), &(NOT_u1_u1_4489));\
bit_vector_and(&(NOT_u1_u1_4487), &(NOT_u1_u1_4489), &(AND_u1_u1_4490));\
if (has_undefined_bit(&AND_u1_u1_4490)) {fprintf(stderr, "Error: variable AND_u1_u1_4490 has undefined value (%s) at test point.\n", to_string(&AND_u1_u1_4490));assert(0);} \
if(bit_vector_to_uint64(0, &AND_u1_u1_4490)){bit_vector_cast_to_bit_vector(0, &(MUX_4493), &(ZERO_8));\
}else {bit_vector_clear(&konst_4492);\
bit_vector_cast_to_bit_vector(0, &(MUX_4493), &(konst_4492));\
}bit_vector_or(&(OR_u8_u8_4485), &(MUX_4493), &(OR_u8_u8_4494));\
bit_vector_cast_to_bit_vector(0, &(dataErrorInterruptStatus), &(OR_u8_u8_4494));\
;

#define _sdhc_daemon_assign_stmt_4509_c_macro_ __declare_static_bit_vector(konst_4498,32);\
bit_vector_clear(&konst_4498);\
konst_4498.val.byte_array[0] = 50;\
__declare_static_bit_vector(OR_u8_u8_4502,8);\
__declare_static_bit_vector(OR_u8_u8_4503,8);\
__declare_static_bit_vector(AND_u8_u8_4505,8);\
__declare_static_bit_vector(konst_4506,32);\
bit_vector_clear(&konst_4506);\
konst_4506.val.byte_array[0] = 54;\
__declare_static_bit_vector(AND_u8_u8_4508,8);\
bit_vector_clear(&konst_4498);\
konst_4498.val.byte_array[0] = 50;\
bit_vector_or(&(dataErrorInterruptStatus), &(errorInterruptStatusVar1), &(OR_u8_u8_4502));\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4498)])), &(OR_u8_u8_4502), &(OR_u8_u8_4503));\
bit_vector_and(&(OR_u8_u8_4503), &(errorInterruptFlag1), &(AND_u8_u8_4505));\
bit_vector_clear(&konst_4506);\
konst_4506.val.byte_array[0] = 54;\
bit_vector_and(&(AND_u8_u8_4505), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4506)])), &(AND_u8_u8_4508));\
__declare_static_bit_vector(konst_4496,32);\
bit_vector_clear(&konst_4496);\
konst_4496.val.byte_array[0] = 50;\
bit_vector_clear(&konst_4496);\
konst_4496.val.byte_array[0] = 50;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4496)])), &(AND_u8_u8_4508));\
;

#define _sdhc_daemon_assign_stmt_4521_c_macro_ __declare_static_bit_vector(konst_4512,32);\
bit_vector_clear(&konst_4512);\
konst_4512.val.byte_array[0] = 51;\
__declare_static_bit_vector(OR_u8_u8_4515,8);\
__declare_static_bit_vector(AND_u8_u8_4517,8);\
__declare_static_bit_vector(konst_4518,32);\
bit_vector_clear(&konst_4518);\
konst_4518.val.byte_array[0] = 55;\
__declare_static_bit_vector(AND_u8_u8_4520,8);\
bit_vector_clear(&konst_4512);\
konst_4512.val.byte_array[0] = 51;\
bit_vector_or(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4512)])), &(errorInterruptStatusVar2), &(OR_u8_u8_4515));\
bit_vector_and(&(OR_u8_u8_4515), &(errorInterruptFlag2), &(AND_u8_u8_4517));\
bit_vector_clear(&konst_4518);\
konst_4518.val.byte_array[0] = 55;\
bit_vector_and(&(AND_u8_u8_4517), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4518)])), &(AND_u8_u8_4520));\
__declare_static_bit_vector(konst_4510,32);\
bit_vector_clear(&konst_4510);\
konst_4510.val.byte_array[0] = 51;\
bit_vector_clear(&konst_4510);\
konst_4510.val.byte_array[0] = 51;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4510)])), &(AND_u8_u8_4520));\
;

#define _sdhc_daemon_assign_stmt_4533_c_macro_ __declare_static_bit_vector(konst_4523,32);\
bit_vector_clear(&konst_4523);\
konst_4523.val.byte_array[0] = 50;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4525,1);\
__declare_static_bit_vector(konst_4526,32);\
bit_vector_clear(&konst_4526);\
konst_4526.val.byte_array[0] = 51;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4528,1);\
__declare_static_bit_vector(OR_u1_u1_4529,1);\
__declare_static_bit_vector(konst_4530,7);\
bit_vector_clear(&konst_4530);\
__declare_static_bit_vector(type_cast_4531,7);\
bit_vector_clear(&type_cast_4531);\
__declare_static_bit_vector(CONCAT_u1_u8_4532,8);\
bit_vector_clear(&konst_4523);\
konst_4523.val.byte_array[0] = 50;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4523)])), &(BITREDUCEOR_u8_u1_4525));\
bit_vector_clear(&konst_4526);\
konst_4526.val.byte_array[0] = 51;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4526)])), &(BITREDUCEOR_u8_u1_4528));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4525), &(BITREDUCEOR_u8_u1_4528), &(OR_u1_u1_4529));\
bit_vector_clear(&konst_4530);\
bit_vector_bitcast_to_bit_vector( &(type_cast_4531), &(konst_4530));\
bit_vector_concatenate( &(OR_u1_u1_4529), &(type_cast_4531), &(CONCAT_u1_u8_4532));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptBit), &(CONCAT_u1_u8_4532));\
;

#define _sdhc_daemon_assign_stmt_4542_c_macro_ __declare_static_bit_vector(konst_4535,32);\
bit_vector_clear(&konst_4535);\
konst_4535.val.byte_array[0] = 52;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4537,1);\
__declare_static_bit_vector(konst_4538,32);\
bit_vector_clear(&konst_4538);\
konst_4538.val.byte_array[0] = 53;\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4540,1);\
__declare_static_bit_vector(OR_u1_u1_4541,1);\
bit_vector_clear(&konst_4535);\
konst_4535.val.byte_array[0] = 52;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4535)])), &(BITREDUCEOR_u8_u1_4537));\
bit_vector_clear(&konst_4538);\
konst_4538.val.byte_array[0] = 53;\
bit_vector_reduce_or( &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4538)])), &(BITREDUCEOR_u8_u1_4540));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4537), &(BITREDUCEOR_u8_u1_4540), &(OR_u1_u1_4541));\
bit_vector_cast_to_bit_vector(0, &(checkInterruptEnable), &(OR_u1_u1_4541));\
;

#define _sdhc_daemon_assign_stmt_4564_c_macro_ __declare_static_bit_vector(OR_u8_u8_4550,8);\
__declare_static_bit_vector(OR_u8_u8_4552,8);\
__declare_static_bit_vector(OR_u8_u8_4555,8);\
bit_vector_clear(&OR_u8_u8_4555);\
OR_u8_u8_4555.val.byte_array[0] = 48;\
__declare_static_bit_vector(OR_u8_u8_4557,8);\
__declare_static_bit_vector(OR_u8_u8_4558,8);\
__declare_static_bit_vector(konst_4559,32);\
bit_vector_clear(&konst_4559);\
konst_4559.val.byte_array[0] = 52;\
__declare_static_bit_vector(AND_u8_u8_4561,8);\
__declare_static_bit_vector(AND_u8_u8_4563,8);\
bit_vector_or(&(readDataTransferComplete), &(dataTransferComplete), &(OR_u8_u8_4550));\
bit_vector_or(&(OR_u8_u8_4550), &(transferComplete), &(OR_u8_u8_4552));\
bit_vector_or(&(bufferReadReady), &(bufferWriteReady), &(OR_u8_u8_4555));\
bit_vector_or(&(OR_u8_u8_4555), &(normalInterruptStatusVar1), &(OR_u8_u8_4557));\
bit_vector_or(&(OR_u8_u8_4552), &(OR_u8_u8_4557), &(OR_u8_u8_4558));\
bit_vector_clear(&konst_4559);\
konst_4559.val.byte_array[0] = 52;\
bit_vector_and(&(OR_u8_u8_4558), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4559)])), &(AND_u8_u8_4561));\
bit_vector_and(&(AND_u8_u8_4561), &(normalInterruptFlag1), &(AND_u8_u8_4563));\
bit_vector_cast_to_bit_vector(0, &(interrupt), &(AND_u8_u8_4563));\
;

#define _sdhc_daemon_assign_stmt_4568_c_macro_ __declare_static_bit_vector(konst_4565,32);\
bit_vector_clear(&konst_4565);\
konst_4565.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4565);\
konst_4565.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4565)])), &(interrupt));\
;

#define _sdhc_daemon_assign_stmt_4572_c_macro_ __declare_static_bit_vector(konst_4569,32);\
bit_vector_clear(&konst_4569);\
konst_4569.val.byte_array[0] = 49;\
bit_vector_clear(&konst_4569);\
konst_4569.val.byte_array[0] = 49;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4569)])), &(errorInterruptBit));\
;

#define _sdhc_daemon_assign_stmt_4578_c_macro_ __declare_static_bit_vector(konst_4574,32);\
bit_vector_clear(&konst_4574);\
konst_4574.val.byte_array[0] = 56;\
__declare_static_bit_vector(AND_u8_u8_4577,8);\
bit_vector_clear(&konst_4574);\
konst_4574.val.byte_array[0] = 56;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4574)])), &(interrupt), &(AND_u8_u8_4577));\
bit_vector_cast_to_bit_vector(0, &(interruptLine), &(AND_u8_u8_4577));\
;

#define _sdhc_daemon_assign_stmt_4591_c_macro_ __declare_static_bit_vector(konst_4580,32);\
bit_vector_clear(&konst_4580);\
konst_4580.val.byte_array[0] = 50;\
__declare_static_bit_vector(konst_4582,32);\
bit_vector_clear(&konst_4582);\
konst_4582.val.byte_array[0] = 58;\
__declare_static_bit_vector(AND_u8_u8_4584,8);\
__declare_static_bit_vector(konst_4585,32);\
bit_vector_clear(&konst_4585);\
konst_4585.val.byte_array[0] = 51;\
__declare_static_bit_vector(konst_4587,32);\
bit_vector_clear(&konst_4587);\
konst_4587.val.byte_array[0] = 59;\
__declare_static_bit_vector(AND_u8_u8_4589,8);\
__declare_static_bit_vector(OR_u8_u8_4590,8);\
bit_vector_clear(&konst_4580);\
konst_4580.val.byte_array[0] = 50;\
bit_vector_clear(&konst_4582);\
konst_4582.val.byte_array[0] = 58;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4580)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4582)])), &(AND_u8_u8_4584));\
bit_vector_clear(&konst_4585);\
konst_4585.val.byte_array[0] = 51;\
bit_vector_clear(&konst_4587);\
konst_4587.val.byte_array[0] = 59;\
bit_vector_and(&((sdhcRegisters[bit_vector_to_uint64(0, &konst_4585)])), &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4587)])), &(AND_u8_u8_4589));\
bit_vector_or(&(AND_u8_u8_4584), &(AND_u8_u8_4589), &(OR_u8_u8_4590));\
bit_vector_cast_to_bit_vector(0, &(errorInterruptLine), &(OR_u8_u8_4590));\
;

#define _sdhc_daemon_assign_stmt_4598_c_macro_ __declare_static_bit_vector(BITREDUCEOR_u8_u1_4594,1);\
__declare_static_bit_vector(BITREDUCEOR_u8_u1_4596,1);\
__declare_static_bit_vector(OR_u1_u1_4597,1);\
bit_vector_reduce_or( &(interruptLine), &(BITREDUCEOR_u8_u1_4594));\
bit_vector_reduce_or( &(errorInterruptLine), &(BITREDUCEOR_u8_u1_4596));\
bit_vector_or(&(BITREDUCEOR_u8_u1_4594), &(BITREDUCEOR_u8_u1_4596), &(OR_u1_u1_4597));\
write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(OR_u1_u1_4597));\
;

#define _sdhc_daemon_assign_stmt_4603_c_macro_ __declare_static_bit_vector(konst_4600,32);\
bit_vector_clear(&konst_4600);\
konst_4600.val.byte_array[0] = 48;\
bit_vector_clear(&konst_4600);\
konst_4600.val.byte_array[0] = 48;\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &konst_4600)])), &(ZERO_8));\
;

#define _sdhc_daemon_assign_stmt_4606_c_macro_ write_bit_vector_to_pipe("SDHC_to_IRC_INT",&(ZERO_1));\
;

#define _sdhc_daemon_stmt_4611_c_macro_ uint32_t _sdhc_daemon_stmt_4611_c_macro___print_counter= get_file_print_lock(__report_log_file__);if(__report_log_file__ != NULL) fprintf(__report_log_file__,"[%u]int>\t%s\n",_sdhc_daemon_stmt_4611_c_macro___print_counter,"check");if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4611_c_macro___print_counter,"dataErrorInterruptStatus");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(dataErrorInterruptStatus)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4611_c_macro___print_counter,"errorInterruptStatusVar1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptStatusVar1)));fflush (__report_log_file__);}if(__report_log_file__ != NULL) {fprintf(__report_log_file__,"[%u]int>\t\t%s\t\t",_sdhc_daemon_stmt_4611_c_macro___print_counter,"errorInterruptFlag1");fprintf(__report_log_file__, ":= 0x%s\n",to_hex_string(&(errorInterruptFlag1)));fflush (__report_log_file__);}release_file_print_lock(__report_log_file__);;
;

#define _sdhc_daemon_branch_block_stmt_3966_c_export_apply_macro_ ;

#define _sdhc_daemon_inner_outarg_prep_macro__ ;

#define _sdhc_daemon_outer_arg_decl_macro__ ;

#define _sdhc_daemon_outer_op_xfer_macro__ ;

#define _sdhc_register_write_inner_inarg_prep_macro__ __declare_static_bit_vector(address,8);\
bit_vector_cast_to_bit_vector(0, &(address), &((*__paddress)));\
__declare_static_bit_vector(data,8);\
bit_vector_cast_to_bit_vector(0, &(data), &((*__pdata)));\

#define _sdhc_register_write_branch_block_stmt_3609_c_export_decl_macro_ 

#define _sdhc_register_write_assign_stmt_3618_c_macro_ __declare_static_bit_vector(konst_3616,8);\
bit_vector_clear(&konst_3616);\
konst_3616.val.byte_array[0] = 127;\
__declare_static_bit_vector(AND_u8_u8_3617,8);\
bit_vector_clear(&konst_3616);\
konst_3616.val.byte_array[0] = 127;\
bit_vector_and(&(data), &(konst_3616), &(AND_u8_u8_3617));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3617));\
;

#define _sdhc_register_write_assign_stmt_3626_c_macro_ __declare_static_bit_vector(konst_3624,8);\
bit_vector_clear(&konst_3624);\
konst_3624.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3625,8);\
bit_vector_clear(&konst_3624);\
konst_3624.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3624), &(AND_u8_u8_3625));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3625));\
;

#define _sdhc_register_write_assign_stmt_3632_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3640_c_macro_ __declare_static_bit_vector(konst_3638,8);\
bit_vector_clear(&konst_3638);\
konst_3638.val.byte_array[0] = 251;\
__declare_static_bit_vector(AND_u8_u8_3639,8);\
bit_vector_clear(&konst_3638);\
konst_3638.val.byte_array[0] = 251;\
bit_vector_and(&(data), &(konst_3638), &(AND_u8_u8_3639));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3639));\
;

#define _sdhc_register_write_assign_stmt_3648_c_macro_ __declare_static_bit_vector(konst_3646,8);\
bit_vector_clear(&konst_3646);\
konst_3646.val.byte_array[0] = 63;\
__declare_static_bit_vector(AND_u8_u8_3647,8);\
bit_vector_clear(&konst_3646);\
konst_3646.val.byte_array[0] = 63;\
bit_vector_and(&(data), &(konst_3646), &(AND_u8_u8_3647));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3647));\
;

#define _sdhc_register_write_assign_stmt_3716_c_macro_ __declare_static_bit_vector(konst_3714,8);\
bit_vector_clear(&konst_3714);\
konst_3714.val.byte_array[0] = 15;\
__declare_static_bit_vector(AND_u8_u8_3715,8);\
bit_vector_clear(&konst_3714);\
konst_3714.val.byte_array[0] = 15;\
bit_vector_and(&(data), &(konst_3714), &(AND_u8_u8_3715));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3715));\
;

#define _sdhc_register_write_assign_stmt_3724_c_macro_ __declare_static_bit_vector(konst_3722,8);\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 15;\
__declare_static_bit_vector(AND_u8_u8_3723,8);\
bit_vector_clear(&konst_3722);\
konst_3722.val.byte_array[0] = 15;\
bit_vector_and(&(data), &(konst_3722), &(AND_u8_u8_3723));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3723));\
;

#define _sdhc_register_write_assign_stmt_3732_c_macro_ __declare_static_bit_vector(konst_3730,8);\
bit_vector_clear(&konst_3730);\
konst_3730.val.byte_array[0] = 7;\
__declare_static_bit_vector(AND_u8_u8_3731,8);\
bit_vector_clear(&konst_3730);\
konst_3730.val.byte_array[0] = 7;\
bit_vector_and(&(data), &(konst_3730), &(AND_u8_u8_3731));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3731));\
;

#define _sdhc_register_write_call_stmt_3737_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3745_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_call_stmt_3750_c_macro_ _RW1C_( &(data),  &(address));\
;

#define _sdhc_register_write_assign_stmt_3758_c_macro_ __declare_static_bit_vector(konst_3756,8);\
bit_vector_clear(&konst_3756);\
konst_3756.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3757,8);\
bit_vector_clear(&konst_3756);\
konst_3756.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3756), &(AND_u8_u8_3757));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3757));\
;

#define _sdhc_register_write_assign_stmt_3766_c_macro_ __declare_static_bit_vector(konst_3764,8);\
bit_vector_clear(&konst_3764);\
konst_3764.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3765,8);\
bit_vector_clear(&konst_3764);\
konst_3764.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3764), &(AND_u8_u8_3765));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3765));\
;

#define _sdhc_register_write_assign_stmt_3774_c_macro_ __declare_static_bit_vector(konst_3772,8);\
bit_vector_clear(&konst_3772);\
konst_3772.val.byte_array[0] = 31;\
__declare_static_bit_vector(AND_u8_u8_3773,8);\
bit_vector_clear(&konst_3772);\
konst_3772.val.byte_array[0] = 31;\
bit_vector_and(&(data), &(konst_3772), &(AND_u8_u8_3773));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3773));\
;

#define _sdhc_register_write_assign_stmt_3782_c_macro_ __declare_static_bit_vector(konst_3780,8);\
bit_vector_clear(&konst_3780);\
konst_3780.val.byte_array[0] = 247;\
__declare_static_bit_vector(AND_u8_u8_3781,8);\
bit_vector_clear(&konst_3780);\
konst_3780.val.byte_array[0] = 247;\
bit_vector_and(&(data), &(konst_3780), &(AND_u8_u8_3781));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3781));\
;

#define _sdhc_register_write_assign_stmt_3791_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3799_c_macro_ __declare_static_bit_vector(konst_3797,8);\
bit_vector_clear(&konst_3797);\
konst_3797.val.byte_array[0] = 192;\
__declare_static_bit_vector(AND_u8_u8_3798,8);\
bit_vector_clear(&konst_3797);\
konst_3797.val.byte_array[0] = 192;\
bit_vector_and(&(data), &(konst_3797), &(AND_u8_u8_3798));\
bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(AND_u8_u8_3798));\
;

#define _sdhc_register_write_assign_stmt_3826_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3841_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3847_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3853_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3859_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3865_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(ZERO_8));\
;

#define _sdhc_register_write_assign_stmt_3924_c_macro_ bit_vector_cast_to_bit_vector(0, &((sdhcRegisters[bit_vector_to_uint64(0, &address)])), &(data));\
;
;

#define _sdhc_register_write_branch_block_stmt_3609_c_export_apply_macro_ ;

#define _sdhc_register_write_inner_outarg_prep_macro__ ;

#define _sdhc_register_write_outer_arg_decl_macro__ __declare_static_bit_vector(__address, 8);\
bit_vector_assign_uint64(0, &__address, address);\
__declare_static_bit_vector(__data, 8);\
bit_vector_assign_uint64(0, &__data, data);\
;

#define _sdhc_register_write_outer_op_xfer_macro__ ;
