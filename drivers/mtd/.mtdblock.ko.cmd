cmd_drivers/mtd/mtdblock.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/mtd/mtdblock.ko drivers/mtd/mtdblock.o drivers/mtd/mtdblock.mod.o