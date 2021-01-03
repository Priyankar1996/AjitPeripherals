/*
  This file holds the declarations of the SD card registers 
  and the function prototypes for emulation the SD card 
*/
#include<stdio.h>
#include<stdint.h>
#include<stdbool.h>
//Physical layer specifications v 3.01 page 104
uint32_t OCR;

typedef struct cid_reg
{
uint8_t MID;      //127:120
uint16_t OID;     //119:104
char PNM[5];      //103:64
uint8_t PRV;      //63:56
uint32_t PSN;     //55:24
bool reserved[4]; //23:20
uint8_t MDT_y;    //19:12
bool MDT_m[4];    //11:8
bool crc[7];      //7:1
bool unused;      //0
}cid_reg;

typedef struct csd{
	uint8_t  csd_structure;
	uint8_t  spec_vers;
	uint8_t  taac;
	uint8_t  nsac;
	uint8_t  tran_speed;
	uint16_t ccc;
	uint8_t  read_bl_len;
	uint8_t  read_bl_partial;
	uint8_t  write_blk_misalign;
	uint8_t  read_blk_misalign;
	uint8_t  dsr_imp;
	uint16_t c_size;
	uint8_t  vdd_r_curr_min;
	uint8_t  vdd_r_curr_max;
	uint8_t  vdd_w_curr_min;
	uint8_t  vdd_w_curr_max;
	uint8_t  c_size_mult;
	union {
		struct { /* MMC system specification version 3.1 */
			uint8_t  erase_grp_size;
			uint8_t  erase_grp_mult;
		} v31;
		struct { /* MMC system specification version 2.2 */
			uint8_t  sector_size;
			uint8_t  erase_grp_size;
		} v22;
	} erase;
	uint8_t  wp_grp_size;
	uint8_t  wp_grp_enable;
	uint8_t  default_ecc;
	uint8_t  r2w_factor;
	uint8_t  write_bl_len;
	uint8_t  write_bl_partial;
	uint8_t  file_format_grp;
	uint8_t  copy;
	uint8_t  perm_write_protect;
	uint8_t  tmp_write_protect;
	uint8_t  file_format;
	uint8_t  ecc;
}csd;

uint16_t RCA;
uint16_t DSR;

typedef struct scr{
bool SCR_structure[4];
bool SD_spec[4];
bool DATA_STAT_AFTER_ERASE;
bool SD_security[3];
bool SD_buswidth[4];
bool SD_spec3;
bool ex_security[4];
bool cmd_support[2];
}scr;