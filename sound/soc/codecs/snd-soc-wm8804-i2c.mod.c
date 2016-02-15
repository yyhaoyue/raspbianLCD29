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
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x64f66ced, __VMLINUX_SYMBOL_STR(wm8804_probe) },
	{ 0xf7011262, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0xf3932575, __VMLINUX_SYMBOL_STR(wm8804_regmap_config) },
	{ 0xd17a2ec0, __VMLINUX_SYMBOL_STR(wm8804_remove) },
	{ 0x75386bbe, __VMLINUX_SYMBOL_STR(wm8804_pm) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-wm8804,regmap-i2c";

MODULE_ALIAS("of:N*T*Cwlf,wm8804*");
MODULE_ALIAS("i2c:wm8804");

MODULE_INFO(srcversion, "E8E59F8CEFCDFB699E6C661");