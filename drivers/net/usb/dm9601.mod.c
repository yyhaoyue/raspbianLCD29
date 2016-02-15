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
	{ 0x39a18628, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x72a60767, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x7582ccf0, __VMLINUX_SYMBOL_STR(usbnet_disconnect) },
	{ 0x6abefde7, __VMLINUX_SYMBOL_STR(usbnet_probe) },
	{ 0xeeb33067, __VMLINUX_SYMBOL_STR(usbnet_nway_reset) },
	{ 0xd951a89a, __VMLINUX_SYMBOL_STR(usbnet_set_msglevel) },
	{ 0x172c9335, __VMLINUX_SYMBOL_STR(usbnet_get_msglevel) },
	{ 0xeb0b53a3, __VMLINUX_SYMBOL_STR(usbnet_set_settings) },
	{ 0x2806e981, __VMLINUX_SYMBOL_STR(usbnet_get_settings) },
	{ 0x4c77b30d, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x58881d73, __VMLINUX_SYMBOL_STR(usbnet_change_mtu) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x31b0441a, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x93abbdc0, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xdf5defcb, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xa6c90d52, __VMLINUX_SYMBOL_STR(mii_nway_restart) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3f923202, __VMLINUX_SYMBOL_STR(usbnet_get_endpoints) },
	{ 0xa75c06df, __VMLINUX_SYMBOL_STR(usbnet_link_change) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x98ec615f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5c98c4c, __VMLINUX_SYMBOL_STR(usbnet_write_cmd) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xbc1b9e5b, __VMLINUX_SYMBOL_STR(usbnet_write_cmd_async) },
	{ 0xcd539ba2, __VMLINUX_SYMBOL_STR(usbnet_read_cmd) },
	{ 0xc008ec83, __VMLINUX_SYMBOL_STR(generic_mii_ioctl) },
	{ 0x1782f06, __VMLINUX_SYMBOL_STR(usbnet_get_drvinfo) },
	{ 0x1d5e0d22, __VMLINUX_SYMBOL_STR(mii_link_ok) },
	{ 0xb268de82, __VMLINUX_SYMBOL_STR(mii_ethtool_gset) },
	{ 0x140a8f86, __VMLINUX_SYMBOL_STR(mii_check_media) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xfe6af570, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v07AAp9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p6688d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0268d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p8515d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A47p9601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p8101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE6p9700d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9621d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p9622d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p0269d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A46p1269d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "8B2420E93E78CEA9AB0E3DA");
