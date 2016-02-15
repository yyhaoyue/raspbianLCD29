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
	{ 0x67b91d00, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x6c25dbcc, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xc3e4c127, __VMLINUX_SYMBOL_STR(ttpci_eeprom_decode_mac) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xc54bd442, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a0d19e3, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0x3df2a791, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xe224ae44, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x4fbd2d0b, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb,ttpci-eeprom,rc-core,dvb-core";

MODULE_ALIAS("usb:v2304p021Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p3007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B48p300Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "6B4E24444AB844A2967EF5A");
