cmd_net/can/can-bcm.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/can/can-bcm.ko net/can/can-bcm.o net/can/can-bcm.mod.o
