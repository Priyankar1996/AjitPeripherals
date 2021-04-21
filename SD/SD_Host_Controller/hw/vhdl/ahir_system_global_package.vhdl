-- VHDL global package produced by vc2vhdl from virtual circuit (vc) description 
library ieee;
use ieee.std_logic_1164.all;
package ahir_system_global_package is -- 
  constant CRC16_CONST : std_logic_vector(15 downto 0) := "0001000000100000";
  constant CRC_CONST : std_logic_vector(7 downto 0) := "10001001";
  constant ONE_1 : std_logic_vector(0 downto 0) := "1";
  constant ONE_2 : std_logic_vector(1 downto 0) := "01";
  constant ONE_8 : std_logic_vector(7 downto 0) := "00000001";
  constant ZERO_1 : std_logic_vector(0 downto 0) := "0";
  constant ZERO_16 : std_logic_vector(15 downto 0) := "0000000000000000";
  constant ZERO_2 : std_logic_vector(1 downto 0) := "00";
  constant ZERO_32 : std_logic_vector(31 downto 0) := "00000000000000000000000000000000";
  constant ZERO_8 : std_logic_vector(7 downto 0) := "00000000";
  constant dataErrorInterruptStatus_base_address : std_logic_vector(0 downto 0) := "0";
  constant dataRxEnrty1_base_address : std_logic_vector(0 downto 0) := "0";
  constant dataRxEnrty2_base_address : std_logic_vector(0 downto 0) := "0";
  constant dataRxEnrty_base_address : std_logic_vector(0 downto 0) := "0";
  constant errorInterruptFlag1_base_address : std_logic_vector(0 downto 0) := "0";
  constant errorInterruptFlag2_base_address : std_logic_vector(0 downto 0) := "0";
  constant normalInterruptFlag1_base_address : std_logic_vector(0 downto 0) := "0";
  constant normalInterruptFlag2_base_address : std_logic_vector(0 downto 0) := "0";
  constant rxBufferPointer_base_address : std_logic_vector(0 downto 0) := "0";
  constant sdhcRegisters_base_address : std_logic_vector(7 downto 0) := "00000000";
  constant txBufferPointer_base_address : std_logic_vector(0 downto 0) := "0";
  -- 
end package ahir_system_global_package;
