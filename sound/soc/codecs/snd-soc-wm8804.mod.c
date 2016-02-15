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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0x69c3b2ef, __VMLINUX_SYMBOL_STR(snd_soc_test_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4f6ad396, __VMLINUX_SYMBOL_STR(snd_soc_dapm_get_enum_double) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x35736b1a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xc242bdcd, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0xfe1a7d31, __VMLINUX_SYMBOL_STR(snd_soc_info_enum_double) },
	{ 0x225ea746, __VMLINUX_SYMBOL_STR(snd_soc_dapm_kcontrol_dapm) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xcdcf88e8, __VMLINUX_SYMBOL_STR(snd_soc_read) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x53ab00fc, __VMLINUX_SYMBOL_STR(snd_soc_update_bits) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x343a9086, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xb63aab8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x87eda8d1, __VMLINUX_SYMBOL_STR(__devm_gpiod_get_optional) },
	{ 0xa6f98b78, __VMLINUX_SYMBOL_STR(gpiod_set_value_cansleep) },
	{ 0xda828e20, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16f1a570, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xaa678679, __VMLINUX_SYMBOL_STR(snd_soc_write) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-core";


MODULE_INFO(srcversion, "6C19050EB12C4BFABEE8F73");
