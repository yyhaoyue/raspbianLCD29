cmd_sound/core/snd.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o sound/core/snd.ko sound/core/snd.o sound/core/snd.mod.o