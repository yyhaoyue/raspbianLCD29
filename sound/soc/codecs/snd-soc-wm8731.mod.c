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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4f6ad396, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x2457085a, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_volsw) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x41ca4810, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0xb5686ba6, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0xfe1a7d31, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0xcdcf88e8, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbff03163, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53ab00fc, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xd91dc08b, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe170f767, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_volsw) },
	{ 0x9a6a6238, __VMLINUX_SYMBOL_STR(snd_ctl_boolean_mono_info) },
	{ 0xa674cc49, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xf7011262, __VMLINUX_SYMBOL_STR(devm_regmap_init_i2c) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x851b1e1c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0x9eab7634, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0x343a9086, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0x76d9b876, __VMLINUX_SYMBOL_STR(clk_set_rate) },
	{ 0xb63aab8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xda828e20, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x19e2e339, __VMLINUX_SYMBOL_STR(regcache_sync) },
	{ 0xaa678679, __VMLINUX_SYMBOL_STR(snd_soc_write) },
	{ 0x976bc345, __VMLINUX_SYMBOL_STR(snd_soc_dapm_put_enum_double) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core,regmap-spi,snd,regmap-i2c";

MODULE_ALIAS("of:N*T*Cwlf,wm8731*");
MODULE_ALIAS("i2c:wm8731");

MODULE_INFO(srcversion, "C3BD330D6A2D4C3366C9C0D");
