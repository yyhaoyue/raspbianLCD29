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
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x448b8aaa, __VMLINUX_SYMBOL_STR(irda_qos_bits_to_value) },
	{ 0x6b043eba, __VMLINUX_SYMBOL_STR(irda_init_max_qos_capabilies) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x2c051df0, __VMLINUX_SYMBOL_STR(usb_reset_configuration) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xbf2347aa, __VMLINUX_SYMBOL_STR(alloc_irdadev) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xcef5aff2, __VMLINUX_SYMBOL_STR(irlap_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xdca8ae3a, __VMLINUX_SYMBOL_STR(irlap_close) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xfcee3f38, __VMLINUX_SYMBOL_STR(irda_device_set_media_busy) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1b3c2ea9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";

MODULE_ALIAS("usb:v09C4p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4428p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Fp0180d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08E9p0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Fp4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Fp4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v066Fp4116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*icFEisc02ip*in*");

MODULE_INFO(srcversion, "0BE376C29A9331B8120F99E");
