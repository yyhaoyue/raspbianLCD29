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
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x27bbf221, __VMLINUX_SYMBOL_STR(disable_irq_nosync) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x6edda838, __VMLINUX_SYMBOL_STR(ieee802154_register_hw) },
	{ 0xe6678b4b, __VMLINUX_SYMBOL_STR(devm_request_threaded_irq) },
	{ 0xf0c9e4c9, __VMLINUX_SYMBOL_STR(irq_get_irq_data) },
	{ 0x5768f469, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8745a59a, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x35736b1a, __VMLINUX_SYMBOL_STR(regmap_read) },
	{ 0xab02b2c0, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd91dc08b, __VMLINUX_SYMBOL_STR(devm_regmap_init_spi) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfefab0e2, __VMLINUX_SYMBOL_STR(ieee802154_alloc_hw) },
	{ 0xa595022, __VMLINUX_SYMBOL_STR(of_property_read_u8_array) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x477762f2, __VMLINUX_SYMBOL_STR(ieee802154_wake_queue) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xdf1f6891, __VMLINUX_SYMBOL_STR(spi_async) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x16f1a570, __VMLINUX_SYMBOL_STR(regmap_write) },
	{ 0xfe69074e, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0xc5d34494, __VMLINUX_SYMBOL_STR(ieee802154_xmit_complete) },
	{ 0x61896d66, __VMLINUX_SYMBOL_STR(ieee802154_rx_irqsafe) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xfcec0987, __VMLINUX_SYMBOL_STR(enable_irq) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x18dab066, __VMLINUX_SYMBOL_STR(ieee802154_free_hw) },
	{ 0x3e6fa40e, __VMLINUX_SYMBOL_STR(ieee802154_unregister_hw) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac802154,regmap-spi";

MODULE_ALIAS("spi:at86rf230");
MODULE_ALIAS("spi:at86rf231");
MODULE_ALIAS("spi:at86rf233");
MODULE_ALIAS("spi:at86rf212");
MODULE_ALIAS("of:N*T*Catmel,at86rf230*");
MODULE_ALIAS("of:N*T*Catmel,at86rf231*");
MODULE_ALIAS("of:N*T*Catmel,at86rf233*");
MODULE_ALIAS("of:N*T*Catmel,at86rf212*");

MODULE_INFO(srcversion, "E01D033910DA10335EF663A");
