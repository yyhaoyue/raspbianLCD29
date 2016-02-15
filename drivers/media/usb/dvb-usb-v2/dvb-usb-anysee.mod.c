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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd4477e61, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xc22b6946, __VMLINUX_SYMBOL_STR(dvb_usbv2_resume) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x6af79a1c, __VMLINUX_SYMBOL_STR(dvb_usbv2_generic_rw_locked) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x43ade9f7, __VMLINUX_SYMBOL_STR(dvb_usbv2_probe) },
	{ 0xc54bd442, __VMLINUX_SYMBOL_STR(rc_keydown) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a0d19e3, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_release) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x62a0ed6a, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xed047e83, __VMLINUX_SYMBOL_STR(dvb_usbv2_disconnect) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x272e7b7f, __VMLINUX_SYMBOL_STR(dvb_usbv2_suspend) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x4fbd2d0b, __VMLINUX_SYMBOL_STR(dvb_ca_en50221_init) },
	{ 0xb18f53d7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x17c11dfe, __VMLINUX_SYMBOL_STR(dvb_usbv2_reset_resume) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb_usb_v2,rc-core,dvb-core";

MODULE_ALIAS("usb:v04B4p861Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1C73p861Fd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "90869FF2A9C27F40B4751B7");
