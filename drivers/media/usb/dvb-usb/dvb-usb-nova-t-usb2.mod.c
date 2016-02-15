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
	{ 0x650bef7f, __VMLINUX_SYMBOL_STR(dibusb_read_eeprom_byte) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x67b91d00, __VMLINUX_SYMBOL_STR(dvb_usb_device_exit) },
	{ 0x6c25dbcc, __VMLINUX_SYMBOL_STR(dvb_usb_device_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x4ac98553, __VMLINUX_SYMBOL_STR(dibusb_pid_filter) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xad067501, __VMLINUX_SYMBOL_STR(dibusb2_0_power_ctrl) },
	{ 0x3d034b39, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_frontend_attach) },
	{ 0xe224ae44, __VMLINUX_SYMBOL_STR(dvb_usb_generic_rw) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x8c03ea9f, __VMLINUX_SYMBOL_STR(dibusb_dib3000mc_tuner_attach) },
	{ 0x8a1ba570, __VMLINUX_SYMBOL_STR(dibusb2_0_streaming_ctrl) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x397d3628, __VMLINUX_SYMBOL_STR(dibusb_i2c_algo) },
	{ 0x42d53c15, __VMLINUX_SYMBOL_STR(dibusb_pid_filter_ctrl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-usb-dibusb-common,dvb-usb";

MODULE_ALIAS("usb:v2040p9300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p9301d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "DB8A5BFD66BFDCED2C327BD");
