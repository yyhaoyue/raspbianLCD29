cmd_arch/arm/crypto/aes-arm-bs.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o arch/arm/crypto/aes-arm-bs.ko arch/arm/crypto/aes-arm-bs.o arch/arm/crypto/aes-arm-bs.mod.o