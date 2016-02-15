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
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x53ab00fc, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xb1778d2c, __VMLINUX_SYMBOL_STR(tpa6130a2_stereo_enable) },
	{ 0x816b278b, __VMLINUX_SYMBOL_STR(snd_soc_unregister_card) },
	{ 0xa95b7468, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_bclk_ratio) },
	{ 0xfd73c471, __VMLINUX_SYMBOL_STR(tpa6130a2_add_controls) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5342a0b9, __VMLINUX_SYMBOL_STR(snd_soc_limit_volume) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x2b721fc, __VMLINUX_SYMBOL_STR(snd_soc_register_card) },
	{ 0x48d301c0, __VMLINUX_SYMBOL_STR(snd_soc_card_get_kcontrol) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core,snd-soc-tpa6130a2,snd-pcm";

MODULE_ALIAS("of:N*T*Cjg,raspidacv3*");

MODULE_INFO(srcversion, "63F14701C1F5A079C39F501");
