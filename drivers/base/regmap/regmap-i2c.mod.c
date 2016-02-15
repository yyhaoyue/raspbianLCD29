#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0xe01d9c3b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x82d67351, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf3ad6125, __VMLINUX_SYMBOL_STR(i2c_smbus_write_word_data) },
	{ 0x88a3201d, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x29ea8cb6, __VMLINUX_SYMBOL_STR(regmap_init) },
	{ 0xd4477e61, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xaf3c59b0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0x36b5889c, __VMLINUX_SYMBOL_STR(regmap_get_val_endian) },
	{ 0x26539a61, __VMLINUX_SYMBOL_STR(devm_regmap_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0F5CAE7B366D11AC594BCF7");
