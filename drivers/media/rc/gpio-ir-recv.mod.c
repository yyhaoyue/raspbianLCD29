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
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xec09c3f4, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x1c132024, __VMLINUX_SYMBOL_STR(request_any_context_irq) },
	{ 0x5d5af958, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x56c389fc, __VMLINUX_SYMBOL_STR(gpiod_direction_input) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xf159c6ae, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5d59d800, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xbd3c5649, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x5c37e7cf, __VMLINUX_SYMBOL_STR(ir_raw_event_store_edge) },
	{ 0x50825588, __VMLINUX_SYMBOL_STR(gpiod_get_raw_value_cansleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x92b2dbfa, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0xba8996e8, __VMLINUX_SYMBOL_STR(gpiod_to_irq) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("of:N*T*Cgpio-ir-receiver*");

MODULE_INFO(srcversion, "3F04467E259C5B40C93456F");
