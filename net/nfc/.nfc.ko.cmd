cmd_net/nfc/nfc.ko := /home/user/tools/arm-bcm2708/gcc-linaro-arm-linux-gnueabihf-raspbian/bin/arm-linux-gnueabihf-ld -EL -r  -T ./scripts/module-common.lds --build-id  -o net/nfc/nfc.ko net/nfc/nfc.o net/nfc/nfc.mod.o