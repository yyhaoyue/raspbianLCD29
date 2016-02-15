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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xeb711ae7, __VMLINUX_SYMBOL_STR(snd_soc_params_to_bclk) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xea124bd1, __VMLINUX_SYMBOL_STR(gcd) },
	{ 0x1875ec3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_ratnums) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0x503bd137, __VMLINUX_SYMBOL_STR(snd_interval_ranges) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x41ca4810, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xb5686ba6, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0xfe1a7d31, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbff03163, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xa674cc49, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xae8c1be3, __VMLINUX_SYMBOL_STR(snd_pcm_hw_rule_add) },
	{ 0xe56627eb, __VMLINUX_SYMBOL_STR(snd_soc_get_enum_double) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x9eab7634, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x343a9086, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xc8269f94, __VMLINUX_SYMBOL_STR(snd_soc_params_to_frame_size) },
	{ 0xb63aab8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0xfa3b88d5, __VMLINUX_SYMBOL_STR(snd_soc_put_enum_double) },
	{ 0x68a24153, __VMLINUX_SYMBOL_STR(snd_pcm_format_physical_width) },
	{ 0xda828e20, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x16f1a570, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x621a9506, __VMLINUX_SYMBOL_STR(regcache_cache_only) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "E6CB53BE57693851243D885");
