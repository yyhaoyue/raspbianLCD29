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
	{ 0x89c675aa, __VMLINUX_SYMBOL_STR(arizona_pm_ops) },
	{ 0x3dc526a9, __VMLINUX_SYMBOL_STR(arizona_of_match) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x6849f53f, __VMLINUX_SYMBOL_STR(wm5102_spi_regmap) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf93da440, __VMLINUX_SYMBOL_STR(arizona_dev_init) },
	{ 0xd91dc08b, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xb9e02ba1, __VMLINUX_SYMBOL_STR(arizona_of_get_type) },
	{ 0x6a673ff8, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x96b26481, __VMLINUX_SYMBOL_STR(arizona_dev_exit) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=regmap-spi";

MODULE_ALIAS("spi:wm5102");
MODULE_ALIAS("spi:wm5110");
MODULE_ALIAS("spi:wm8280");

MODULE_INFO(srcversion, "9AF11134320C63016D2AFFE");
