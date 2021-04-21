#include <stdlib.h>
#include <unistd.h>
#include <assert.h>
#include <stdio.h>
#include <BitVectors.h>
#include <pipeHandler.h>
void _set_trace_file(FILE* fp);
void __init_aa_globals__(); 
void RW1C(uint8_t, uint8_t);
void _RW1C_(bit_vector*, bit_vector*);
void _bigResponseWrite_(bit_vector*);
void command_generator(uint8_t* , uint8_t* , uint8_t* , uint8_t* , uint8_t* , uint8_t* );
void _command_generator_(bit_vector* , bit_vector* , bit_vector* , bit_vector* , bit_vector* , bit_vector* );
void _dataRx_(bit_vector*, bit_vector* );
void _dataTx_(bit_vector*, bit_vector*, bit_vector*, bit_vector* , bit_vector* );
void _generate_crc_7_(bit_vector*, bit_vector* );
void _generate_crc_7_120_(bit_vector*, bit_vector* );
void global_storage_initializer_();
void _global_storage_initializer__();
void _resetRegisters_(bit_vector*);
void sdhc_daemon();
void _sdhc_daemon_();
void sdhc_register_write(uint8_t, uint8_t);
void _sdhc_register_write_(bit_vector*, bit_vector*);
void start_daemons(FILE* fp, int trace_on);
void stop_daemons();
