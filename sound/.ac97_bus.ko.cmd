cmd_sound/ac97_bus.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/ac97_bus.ko sound/ac97_bus.o sound/ac97_bus.mod.o