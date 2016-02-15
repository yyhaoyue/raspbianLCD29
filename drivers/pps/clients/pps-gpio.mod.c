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
	{ 0x5d59d800, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe6678b4b, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xac90c35f, __VMLINUX_SYMBOL_STR(pps_register_source) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xba8996e8, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x56c389fc, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x9ecc69ac, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xce81c0a7, __VMLINUX_SYMBOL_STR(pps_event) },
	{ 0x6f162fe5, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x157a1398, __VMLINUX_SYMBOL_STR(pps_unregister_source) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=pps_core";

MODULE_ALIAS("of:N*T*Cpps-gpio*");

MODULE_INFO(srcversion, "D2C22B0A465DA63746EFB59");
