cmd_arch/arm/boot/zImage := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-objcopy -O binary -R .comment -S  arch/arm/boot/compressed/vmlinux arch/arm/boot/zImage