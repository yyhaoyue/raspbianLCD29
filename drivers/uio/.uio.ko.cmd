cmd_drivers/uio/uio.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/uio/uio.ko drivers/uio/uio.o drivers/uio/uio.mod.o
