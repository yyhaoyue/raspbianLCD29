cmd_net/8021q/8021q.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/8021q/8021q.ko net/8021q/8021q.o net/8021q/8021q.mod.o