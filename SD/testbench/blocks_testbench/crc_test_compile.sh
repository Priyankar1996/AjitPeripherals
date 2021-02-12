# only to check if the tb compiles ok.
gcc -o tb_compile_crc_test -I $AHIR_RELEASE/include crc_testbench.c -L $AHIR_RELEASE/lib -lPipeHandler -lBitVectors -lpthread -DAA2C
