cmd_drivers/net/can/vcan.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/net/can/vcan.ko drivers/net/can/vcan.o drivers/net/can/vcan.mod.o