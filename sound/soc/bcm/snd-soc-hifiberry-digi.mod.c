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
	{ 0x8b379312, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x7aed43f9, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_pll) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x53ab00fc, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0x816b278b, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xa95b7468, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0xaf1c04a5, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_clkdiv) },
	{ 0xe40004eb, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2b721fc, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Chifiberry,hifiberry-digi*");

MODULE_INFO(srcversion, "17B5A4E805FAC0996383478");
