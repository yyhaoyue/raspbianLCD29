cmd_drivers/md/dm-mod.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-mod.ko drivers/md/dm-mod.o drivers/md/dm-mod.mod.o