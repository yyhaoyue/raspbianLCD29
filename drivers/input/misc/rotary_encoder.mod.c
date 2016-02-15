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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x5d59d800, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xee57d7e4, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x1919212a, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xba8996e8, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0xe1ebcd78, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x403f9529, __VMLINUX_SYMBOL_STR(gpio_request_one) },
	{ 0x160a429f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x6f162fe5, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x23214c12, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Crotary-encoder*");

MODULE_INFO(srcversion, "0C96FDDB9B866B39BED01C0");
