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
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc4b4bd1f, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0xc9ad97b0, __VMLINUX_SYMBOL_STR(alloc_etherdev_mqs) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f873f32, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x3cd00221, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x28a77468, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1b3c2ea9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v05ACp1290d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1292d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1294d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp1297d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Ad*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A2d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A6d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12ABd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp129Cd*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A0d*dc*dsc*dp*icFFiscFDip01in*");
MODULE_ALIAS("usb:v05ACp12A8d*dc*dsc*dp*icFFiscFDip01in*");

MODULE_INFO(srcversion, "9099C50CFE3F6C89A7FC9C7");
