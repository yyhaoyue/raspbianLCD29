cmd_drivers/pps/pps_core.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/pps/pps_core.ko drivers/pps/pps_core.o drivers/pps/pps_core.mod.o