rm -rf .Aa
mkdir .Aa
# preprocess.
#AaPreprocess -I src/  src/master.aa -o src/master.incl.aa
# link
AaLinkExtMem src/decls.aa src/command_generator.aa  src/dataRx.aa src/dataTx.aa src/generate_crc_7.aa src/sdhc_register_write.aa src/sdhc.aa | vcFormat > .Aa/sdhc.linked.aa 
# aa2c model.
TOPMODULES="-T sdhc_daemon"
rm -rf aa2c
mkdir aa2c
Aa2C $TOPMODULES .Aa/sdhc.linked.aa  -o aa2c/
#
# optimize
#
AaOpt -B .Aa/sdhc.linked.aa  | vcFormat > .Aa/sdhc.opt.aa
#
# to virtual circuit.
#
rm -rf .vC/
mkdir .vC/
Aa2VC -O -C .Aa/sdhc.opt.aa | vcFormat > .vC/sdhc.vc
#
# to VHDL
#
rm -rf vhdl/
mkdir vhdl/
vc2vhdl -U  -O -v -a -C -e ahir_system -w -s ghdl $TOPMODULES -f .vC/sdhc.vc
vhdlFormat < ahir_system_global_package.unformatted_vhdl > vhdl/ahir_system_global_package.vhdl
vhdlFormat < ahir_system.unformatted_vhdl > vhdl/ahir_system.vhdl
vhdlFormat < ahir_system_test_bench.unformatted_vhdl > vhdl/ahir_system_test_bench.vhdl
rm -f *.unformatted_vhdl


