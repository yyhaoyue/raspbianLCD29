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
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xc8b8a7f6, __VMLINUX_SYMBOL_STR(mtd_device_parse_register) },
	{ 0xdb972697, __VMLINUX_SYMBOL_STR(nand_scan_tail) },
	{ 0x2aac9217, __VMLINUX_SYMBOL_STR(nand_scan_ident) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xab7a4d1d, __VMLINUX_SYMBOL_STR(bcm2835_smi_set_regs_from_settings) },
	{ 0xf6720336, __VMLINUX_SYMBOL_STR(bcm2835_smi_get_settings_from_regs) },
	{ 0x12ac5cce, __VMLINUX_SYMBOL_STR(bcm2835_smi_get) },
	{ 0x8b379312, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x45c256d6, __VMLINUX_SYMBOL_STR(nand_release) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb33bd6cb, __VMLINUX_SYMBOL_STR(bcm2835_smi_read_buf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa00dc18f, __VMLINUX_SYMBOL_STR(bcm2835_smi_write_buf) },
	{ 0x72db83c4, __VMLINUX_SYMBOL_STR(bcm2835_smi_set_address) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd,nand,bcm2835_smi";

MODULE_ALIAS("of:N*T*Cbrcm,bcm2835-smi-nand*");

MODULE_INFO(srcversion, "83E70CEB2ACB23B75D3B0A4");
