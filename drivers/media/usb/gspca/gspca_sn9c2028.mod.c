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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x982f122f, __VMLINUX_SYMBOL_STR(gspca_dev_probe) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x804091f4, __VMLINUX_SYMBOL_STR(gspca_disconnect) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x9670af2c, __VMLINUX_SYMBOL_STR(gspca_debug) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2cdb2c88, __VMLINUX_SYMBOL_STR(gspca_frame_add) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gspca_main";

MODULE_ALIAS("usb:v0458p7005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p8008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C45p800Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8917669A53C137C8D87592D");
