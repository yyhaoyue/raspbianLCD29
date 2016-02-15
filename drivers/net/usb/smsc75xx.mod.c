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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x7582ccf0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x6abefde7, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x9fbb270b, __VMLINUX_SYMBOL_STR(usbnet_get_link) },
	{ 0xeeb33067, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xd951a89a, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x172c9335, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x1782f06, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0xeb0b53a3, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x2806e981, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x4c77b30d, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x7e85db91, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x31b0441a, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x93abbdc0, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xdf5defcb, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3f923202, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa6c90d52, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x53ba75b7, __VMLINUX_SYMBOL_STR(usbnet_defer_kevent) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x39a18628, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xbeff8ab9, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x72a60767, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x58881d73, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0xb268de82, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x140a8f86, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xcd539ba2, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc357f46d, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x5c98c4c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xd915971d, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x1f2f6e9a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x7c258a23, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0xc008ec83, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfe6af570, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0424p7500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0424p7505d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "43248B6352DA082331AB39B");
