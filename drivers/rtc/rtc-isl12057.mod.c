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
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x98f1ee99, __VMLINUX_SYMBOL_STR(devm_rtc_device_register) },
	{ 0xe6678b4b, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xf7011262, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x6d3612eb, __VMLINUX_SYMBOL_STR(rtc_update_irq) },
	{ 0x4f2250ba, __VMLINUX_SYMBOL_STR(rtc_tm_to_time64) },
	{ 0x5838f6c9, __VMLINUX_SYMBOL_STR(rtc_valid_tm) },
	{ 0xb6936ffe, __VMLINUX_SYMBOL_STR(_bcd2bin) },
	{ 0xbdf75cbb, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x35736b1a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0x100d99c6, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x80ca5026, __VMLINUX_SYMBOL_STR(_bin2bcd) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd2c106ba, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-i2c";

MODULE_ALIAS("i2c:isl12057");

MODULE_INFO(srcversion, "5E4A2115A2ABA3D6D7DE725");
