cmd_drivers/input/joystick/xpad.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o drivers/input/joystick/xpad.ko drivers/input/joystick/xpad.o drivers/input/joystick/xpad.mod.o