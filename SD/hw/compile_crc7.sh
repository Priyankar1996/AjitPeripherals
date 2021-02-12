rm -rf .Aa
mkdir .Aa
# link
AaLinkExtMem generate_crc_7.aa | vcFormat > .Aa/generate_crc_7.linked.aa 
# aa2c model.
TOPMODULES="-T generate_crc_7"
rm -rf aa2c
mkdir aa2c
Aa2C $TOPMODULES .Aa/generate_crc_7.linked.aa  -o aa2c/
#
# optimize
#
AaOpt -B .Aa/generate_crc_7.linked.aa  | vcFormat > .Aa/generate_crc_7.opt.aa
#
# to virtual circuit.
#
rm -rf .vC/
mkdir .vC/
Aa2VC -O -C .Aa/generate_crc_7.opt.aa | vcFormat > .vC/generate_crc_7.vc
#
# to VHDL
#
rm -rf vhdl/
mkdir vhdl/
vc2vhdl -U  -O -v -a -C -e ahir_system -w -s ghdl $TOPMODULES -f .vC/generate_crc_7.vc
vhdlFormat < ahir_system_global_package.unformatted_vhdl > vhdl/ahir_system_global_package.vhdl
vhdlFormat < ahir_system.unformatted_vhdl > vhdl/ahir_system.vhdl
vhdlFormat < ahir_system_test_bench.unformatted_vhdl > vhdl/ahir_system_test_bench.vhdl
rm -f *.unformatted_vhdl

