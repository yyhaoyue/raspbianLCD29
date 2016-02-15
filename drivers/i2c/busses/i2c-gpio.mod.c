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
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xdf6b4afe, __VMLINUX_SYMBOL_STR(i2c_bit_add_numbered_bus) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9a1145fa, __VMLINUX_SYMBOL_STR(gpiod_direction_output_raw) },
	{ 0x56c389fc, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0xd2c106ba, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x9ecc69ac, __VMLINUX_SYMBOL_STR(devm_gpio_request) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xfdf03e87, __VMLINUX_SYMBOL_STR(of_count_phandle_with_args) },
	{ 0x5768f469, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x6f162fe5, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x710cd23c, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=i2c-algo-bit";

MODULE_ALIAS("of:N*T*Ci2c-gpio*");

MODULE_INFO(srcversion, "3AB6AD091C116F4F8EAE6C4");
