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
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0x28c305df, __VMLINUX_SYMBOL_STR(devm_snd_soc_register_card) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0xd64abfe7, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_card_name) },
	{ 0x5d177f36, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_simple_widgets) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x2f20ebce, __VMLINUX_SYMBOL_STR(snd_soc_of_get_dai_name) },
	{ 0x2c8cbd42, __VMLINUX_SYMBOL_STR(of_device_is_available) },
	{ 0xd2c106ba, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xf85695b9, __VMLINUX_SYMBOL_STR(of_get_child_by_name) },
	{ 0x3d387677, __VMLINUX_SYMBOL_STR(of_get_next_child) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x378f18f0, __VMLINUX_SYMBOL_STR(of_clk_get) },
	{ 0xe40004eb, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_sysclk) },
	{ 0x442cafa1, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_audio_routing) },
	{ 0xf3a1ea7, __VMLINUX_SYMBOL_STR(snd_soc_card_jack_new) },
	{ 0x1d775744, __VMLINUX_SYMBOL_STR(snd_soc_jack_add_gpios) },
	{ 0x713f04c0, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_daifmt) },
	{ 0x7f830be0, __VMLINUX_SYMBOL_STR(of_parse_phandle_with_args) },
	{ 0x3f60f3a6, __VMLINUX_SYMBOL_STR(snd_soc_dai_set_tdm_slot) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x359724cd, __VMLINUX_SYMBOL_STR(snd_soc_jack_free_gpios) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x23b9a244, __VMLINUX_SYMBOL_STR(snd_soc_of_parse_tdm_slot) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-soc-core";

MODULE_ALIAS("of:N*T*Csimple-audio-card*");

MODULE_INFO(srcversion, "B51F3F82AA729F3DE52536B");
