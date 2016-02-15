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
	{ 0xe56a9336, __VMLINUX_SYMBOL_STR(snd_pcm_format_width) },
	{ 0xe01d9c3b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0xd4477e61, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x1cf7d670, __VMLINUX_SYMBOL_STR(devm_sigmadsp_init_i2c) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x41ca4810, __VMLINUX_SYMBOL_STR(snd_soc_put_volsw) },
	{ 0x35736b1a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xb5686ba6, __VMLINUX_SYMBOL_STR(snd_soc_get_volsw) },
	{ 0x6ce972fc, __VMLINUX_SYMBOL_STR(sigmadsp_attach) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x40ccea28, __VMLINUX_SYMBOL_STR(sigmadsp_reset) },
	{ 0x25735c1c, __VMLINUX_SYMBOL_STR(sigmadsp_setup) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8745a59a, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0xa674cc49, __VMLINUX_SYMBOL_STR(snd_soc_info_volsw) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5ec83f35, __VMLINUX_SYMBOL_STR(sigmadsp_restrict_params) },
	{ 0xa595022, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x343a9086, __VMLINUX_SYMBOL_STR(snd_soc_unregister_codec) },
	{ 0xb63aab8c, __VMLINUX_SYMBOL_STR(regcache_mark_dirty) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x754a43d9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x26539a61, __VMLINUX_SYMBOL_STR(devm_regmap_init) },
	{ 0xda828e20, __VMLINUX_SYMBOL_STR(snd_soc_register_codec) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x16f1a570, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x19e2e339, __VMLINUX_SYMBOL_STR(regcache_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd-soc-sigmadsp-i2c,snd-soc-core,snd-soc-sigmadsp";

MODULE_ALIAS("of:N*T*Cadi,adau1701*");
MODULE_ALIAS("i2c:adau1401");
MODULE_ALIAS("i2c:adau1401a");
MODULE_ALIAS("i2c:adau1701");
MODULE_ALIAS("i2c:adau1702");

MODULE_INFO(srcversion, "3873DACAAEFFBD72ED4C7FA");
