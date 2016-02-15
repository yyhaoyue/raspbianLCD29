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
	{ 0x7582ccf0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x6abefde7, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xeeb33067, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xd951a89a, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x172c9335, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0x4c77b30d, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x31b0441a, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x93abbdc0, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xdf5defcb, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8bf227b3, __VMLINUX_SYMBOL_STR(usbnet_update_max_qlen) },
	{ 0x3f923202, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa6c90d52, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbc1b9e5b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xbeff8ab9, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x72a60767, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x39a18628, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xa75c06df, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x5c98c4c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xd915971d, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_nopm) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xcd539ba2, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc357f46d, __VMLINUX_SYMBOL_STR(usbnet_read_cmd_nopm) },
	{ 0x1f2f6e9a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0xc008ec83, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x39716c18, __VMLINUX_SYMBOL_STR(mii_ethtool_sset) },
	{ 0xb268de82, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7c258a23, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0B95p1790d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B95p178Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p4A00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DF6p0072d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8pA100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17EFp304Bd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4C676DD260D26D648107038");
