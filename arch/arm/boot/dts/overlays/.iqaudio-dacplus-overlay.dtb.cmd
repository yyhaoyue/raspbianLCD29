cmd_arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb := mkdir -p arch/arm/boot/dts/overlays/ ; /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.d.pre.tmp -nostdinc -I./arch/arm/boot/dts -I./arch/arm/boot/dts/include -I./drivers/of/testcase-data -undef -D__DTS__ -x assembler-with-cpp -o arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.dts.tmp arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dts ; ./scripts/dtc/dtc -O dtb -o arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb -b 0 -i arch/arm/boot/dts/overlays/ -@ -d arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.d.dtc.tmp arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.dts.tmp ; cat arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.d.pre.tmp arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.d.dtc.tmp > arch/arm/boot/dts/overlays/.iqaudio-dacplus-overlay.dtb.d

source_arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb := arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dts

deps_arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb := \

arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb: $(deps_arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb)

$(deps_arch/arm/boot/dts/overlays/iqaudio-dacplus-overlay.dtb):
