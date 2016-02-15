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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x4c77fa72, __VMLINUX_SYMBOL_STR(can_change_mtu) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0xcd0667b0, __VMLINUX_SYMBOL_STR(netif_device_attach) },
	{ 0x9dd579b7, __VMLINUX_SYMBOL_STR(can_get_echo_skb) },
	{ 0x651ab835, __VMLINUX_SYMBOL_STR(can_bus_off) },
	{ 0xfb3956b0, __VMLINUX_SYMBOL_STR(can_put_echo_skb) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8312348e, __VMLINUX_SYMBOL_STR(open_candev) },
	{ 0x6a673ff8, __VMLINUX_SYMBOL_STR(spi_get_device_id) },
	{ 0x4ced12e0, __VMLINUX_SYMBOL_STR(dmam_alloc_coherent) },
	{ 0x5f2ed066, __VMLINUX_SYMBOL_STR(register_candev) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x8797e1ed, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x815588a6, __VMLINUX_SYMBOL_STR(clk_enable) },
	{ 0x7c9a7371, __VMLINUX_SYMBOL_STR(clk_prepare) },
	{ 0x85470494, __VMLINUX_SYMBOL_STR(alloc_candev) },
	{ 0x556e4390, __VMLINUX_SYMBOL_STR(clk_get_rate) },
	{ 0x9eab7634, __VMLINUX_SYMBOL_STR(devm_clk_get) },
	{ 0xee57d7e4, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf6a42a8c, __VMLINUX_SYMBOL_STR(alloc_can_skb) },
	{ 0x98ec615f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x182cb442, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x6094a9bc, __VMLINUX_SYMBOL_STR(alloc_can_err_skb) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x83056bdf, __VMLINUX_SYMBOL_STR(close_candev) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x723f1e22, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x22629e6c, __VMLINUX_SYMBOL_STR(can_free_echo_skb) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xca1e6a, __VMLINUX_SYMBOL_STR(free_candev) },
	{ 0xb077e70a, __VMLINUX_SYMBOL_STR(clk_unprepare) },
	{ 0xb6e6d99d, __VMLINUX_SYMBOL_STR(clk_disable) },
	{ 0xc68bb06f, __VMLINUX_SYMBOL_STR(unregister_candev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can-dev";

MODULE_ALIAS("spi:mcp2510");
MODULE_ALIAS("spi:mcp2515");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2510*");
MODULE_ALIAS("of:N*T*Cmicrochip,mcp2515*");

MODULE_INFO(srcversion, "7BA7BFAF85E7F74DA1E4677");
