cmd_drivers/usb/host/dwc_common_port/dwc_dh.o := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-gcc -Wp,-MD,drivers/usb/host/dwc_common_port/.dwc_dh.o.d  -nostdinc -isystem /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-bcm2709/include -Wall -Wundef -Wstrict-prototypes -Wno-trigraphs -fno-strict-aliasing -fno-common -Werror-implicit-function-declaration -Wno-format-security -std=gnu89 -fno-dwarf2-cfi-asm -fno-omit-frame-pointer -mapcs -mno-sched-prolog -fno-ipa-sra -mabi=aapcs-linux -mno-thumb-interwork -mfpu=vfp -funwind-tables -marm -D__LINUX_ARM_ARCH__=7 -march=armv7-a -msoft-float -Uarm -fno-delete-null-pointer-checks -O2 --param=allow-store-data-races=0 -Wframe-larger-than=1024 -fno-stack-protector -Wno-unused-but-set-variable -fno-omit-frame-pointer -fno-optimize-sibling-calls -fno-var-tracking-assignments -pg -Wdeclaration-after-statement -Wno-pointer-sign -fno-strict-overflow -fconserve-stack -Werror=implicit-int -Werror=strict-prototypes -DCC_HAVE_ASM_GOTO -DDWC_LINUX -DDWC_LIBMODULE -DDWC_CCLIB -DDWC_NOTIFYLIB -DDWC_UTFLIB    -D"KBUILD_STR(s)=\#s" -D"KBUILD_BASENAME=KBUILD_STR(dwc_dh)"  -D"KBUILD_MODNAME=KBUILD_STR(dwc_common_port_lib)" -c -o drivers/usb/host/dwc_common_port/.tmp_dwc_dh.o drivers/usb/host/dwc_common_port/dwc_dh.c

source_drivers/usb/host/dwc_common_port/dwc_dh.o := drivers/usb/host/dwc_common_port/dwc_dh.c

deps_drivers/usb/host/dwc_common_port/dwc_dh.o := \
    $(wildcard include/config/mach/ipmate.h) \

drivers/usb/host/dwc_common_port/dwc_dh.o: $(deps_drivers/usb/host/dwc_common_port/dwc_dh.o)

$(deps_drivers/usb/host/dwc_common_port/dwc_dh.o):
