cmd_drivers/block/pktcdvd.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/block/pktcdvd.ko drivers/block/pktcdvd.o drivers/block/pktcdvd.mod.o