cmd_net/6lowpan/nhc_hop.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/6lowpan/nhc_hop.ko net/6lowpan/nhc_hop.o net/6lowpan/nhc_hop.mod.o