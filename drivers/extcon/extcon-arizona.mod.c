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
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x6a4c7a36, __VMLINUX_SYMBOL_STR(arizona_clk32k_enable) },
	{ 0x16a8b697, __VMLINUX_SYMBOL_STR(arizona_request_irq) },
	{ 0xdc84652d, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x8745a59a, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x23e71ef8, __VMLINUX_SYMBOL_STR(devm_input_allocate_device) },
	{ 0x7da31bea, __VMLINUX_SYMBOL_STR(devm_extcon_dev_register) },
	{ 0x9b54930d, __VMLINUX_SYMBOL_STR(devm_extcon_dev_allocate) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x47884890, __VMLINUX_SYMBOL_STR(system_power_efficient_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9c7fdf1a, __VMLINUX_SYMBOL_STR(extcon_update_state) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x35736b1a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xa479705e, __VMLINUX_SYMBOL_STR(extcon_get_cable_state_) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc242bdcd, __VMLINUX_SYMBOL_STR(regmap_update_bits_check) },
	{ 0x16f1a570, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0x89418eb0, __VMLINUX_SYMBOL_STR(snd_soc_dapm_disable_pin) },
	{ 0x851b1e1c, __VMLINUX_SYMBOL_STR(snd_soc_dapm_sync) },
	{ 0xaff82a67, __VMLINUX_SYMBOL_STR(snd_soc_dapm_force_enable_pin) },
	{ 0x98aa5016, __VMLINUX_SYMBOL_STR(extcon_set_cable_state_) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x754a43d9, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value_cansleep) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe0a6d746, __VMLINUX_SYMBOL_STR(arizona_clk32k_disable) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xf96b48c0, __VMLINUX_SYMBOL_STR(arizona_free_irq) },
	{ 0x39880509, __VMLINUX_SYMBOL_STR(arizona_set_irq_wake) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=extcon,snd-soc-core";


MODULE_INFO(srcversion, "4FCD6937EB9D10DD0471293");
