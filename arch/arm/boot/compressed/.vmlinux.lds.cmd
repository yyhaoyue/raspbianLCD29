cmd_arch/arm/boot/compressed/vmlinux.lds := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-gcc -E -Wp,-MD,arch/arm/boot/compressed/.vmlinux.lds.d  -nostdinc -isystem /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/../lib/gcc/arm-linux-gnueabihf/4.8.3/include -I./arch/arm/include -Iarch/arm/include/generated/uapi -Iarch/arm/include/generated  -Iinclude -I./arch/arm/include/uapi -Iarch/arm/include/generated/uapi -I./include/uapi -Iinclude/generated/uapi -include ./include/linux/kconfig.h -D__KERNEL__ -mlittle-endian -Iarch/arm/mach-bcm2709/include     -DTEXT_START="0" -DBSS_START="ALIGN(8)" -P -C -Uarm -D__ASSEMBLY__ -DLINKER_SCRIPT -o arch/arm/boot/compressed/vmlinux.lds arch/arm/boot/compressed/vmlinux.lds.S

source_arch/arm/boot/compressed/vmlinux.lds := arch/arm/boot/compressed/vmlinux.lds.S

deps_arch/arm/boot/compressed/vmlinux.lds := \
    $(wildcard include/config/cpu/endian/be8.h) \

arch/arm/boot/compressed/vmlinux.lds: $(deps_arch/arm/boot/compressed/vmlinux.lds)

$(deps_arch/arm/boot/compressed/vmlinux.lds):
