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
	{ 0x4c77b30d, __VMLINUX_SYMBOL_STR(usbnet_tx_timeout) },
	{ 0x4af3ad1d, __VMLINUX_SYMBOL_STR(cdc_ncm_change_mtu) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x7e85db91, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x31b0441a, __VMLINUX_SYMBOL_STR(usbnet_start_xmit) },
	{ 0x93abbdc0, __VMLINUX_SYMBOL_STR(usbnet_stop) },
	{ 0xdf5defcb, __VMLINUX_SYMBOL_STR(usbnet_open) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xe68f8cb4, __VMLINUX_SYMBOL_STR(usb_match_id) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x36e3a8eb, __VMLINUX_SYMBOL_STR(usb_cdc_wdm_register) },
	{ 0x66431db4, __VMLINUX_SYMBOL_STR(cdc_ncm_bind_common) },
	{ 0x37795d29, __VMLINUX_SYMBOL_STR(cdc_ncm_select_altsetting) },
	{ 0x72a60767, __VMLINUX_SYMBOL_STR(usbnet_suspend) },
	{ 0x39a18628, __VMLINUX_SYMBOL_STR(usbnet_resume) },
	{ 0x25a769c8, __VMLINUX_SYMBOL_STR(cdc_ncm_unbind) },
	{ 0xcc38e9cd, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0xdfa7ff6b, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x4e6a3755, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x7c258a23, __VMLINUX_SYMBOL_STR(usbnet_skb_return) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x94a71920, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_ndp16) },
	{ 0xfda61044, __VMLINUX_SYMBOL_STR(cdc_ncm_rx_verify_nth16) },
	{ 0x98ec615f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3307e0e8, __VMLINUX_SYMBOL_STR(cdc_ncm_fill_tx_frame) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdc_ncm,cdc-wdm";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Dip00in*");
MODULE_ALIAS("usb:v0BDBp*d*dc*dsc*dp*ic02isc0Eip00in*");
MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic02isc0Eip00in*");

MODULE_INFO(srcversion, "18AF0BB9DDCD06603964E5E");
