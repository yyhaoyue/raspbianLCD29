cmd_drivers/md/dm-raid.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/md/dm-raid.ko drivers/md/dm-raid.o drivers/md/dm-raid.mod.o