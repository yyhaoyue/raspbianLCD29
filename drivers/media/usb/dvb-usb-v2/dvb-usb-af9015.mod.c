#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc22b6946, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5c78632e, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x6af79a1c, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw_locked) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x43ade9f7, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0xc54bd442, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xed047e83, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0x272e7b7f, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x390b322d, __VMLINUX_SYMBOL_STR(rc_repeat) },
	{ 0x17c11dfe, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,rc-core";

MODULE_ALIAS("usb:v15A4p9015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6029d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2304p022Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE399d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3226d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3237d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0069d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC160d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1AE7p0381d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp8150d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10B9p8000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1462p8807d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE396d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE395d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A4p901Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CApA805d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE397d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC810d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0458p4012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pC161d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE402d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0413p6A04d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE383d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE39Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp815Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CCDp0099d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07CAp850Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1F4Dp9016d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1B80pE401d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1B8556FD3B0DF03B96816E");
