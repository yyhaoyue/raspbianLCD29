cmd_crypto/arc4.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o crypto/arc4.ko crypto/arc4.o crypto/arc4.mod.o