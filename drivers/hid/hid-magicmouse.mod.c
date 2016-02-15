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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7bd7229e, __VMLINUX_SYMBOL_STR(param_get_uint) },
	{ 0xc0799fa3, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x99531472, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x169b1520, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0xad79fb5b, __VMLINUX_SYMBOL_STR(hid_register_report) },
	{ 0x30d8a7a7, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0x5fa6df6c, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xabe656a6, __VMLINUX_SYMBOL_STR(input_mt_report_pointer_emulation) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x6a8a0c4c, __VMLINUX_SYMBOL_STR(input_mt_report_slot_state) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x555e0c71, __VMLINUX_SYMBOL_STR(input_alloc_absinfo) },
	{ 0x1919212a, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x967e7239, __VMLINUX_SYMBOL_STR(input_mt_init_slots) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("hid:b0005g*v000005ACp0000030D");
MODULE_ALIAS("hid:b0005g*v000005ACp0000030E");

MODULE_INFO(srcversion, "EDFDFFA75DBC10824380C22");
