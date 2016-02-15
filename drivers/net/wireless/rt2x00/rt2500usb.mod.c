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
	{ 0xc3b10fe2, __VMLINUX_SYMBOL_STR(rt2x00usb_disconnect) },
	{ 0xc6c4ed38, __VMLINUX_SYMBOL_STR(rt2x00mac_tx_frames_pending) },
	{ 0xf24626c9, __VMLINUX_SYMBOL_STR(rt2x00mac_get_ringparam) },
	{ 0x7f3a3b6a, __VMLINUX_SYMBOL_STR(rt2x00mac_get_antenna) },
	{ 0x5f5b182b, __VMLINUX_SYMBOL_STR(rt2x00mac_set_antenna) },
	{ 0xe2bf25a4, __VMLINUX_SYMBOL_STR(rt2x00mac_flush) },
	{ 0xaaa03fa1, __VMLINUX_SYMBOL_STR(rt2x00mac_rfkill_poll) },
	{ 0x534f604f, __VMLINUX_SYMBOL_STR(rt2x00mac_conf_tx) },
	{ 0xeeebc702, __VMLINUX_SYMBOL_STR(rt2x00mac_get_stats) },
	{ 0x9ffcfeb6, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_complete) },
	{ 0x86539319, __VMLINUX_SYMBOL_STR(rt2x00mac_sw_scan_start) },
	{ 0x71a3b07, __VMLINUX_SYMBOL_STR(rt2x00mac_set_key) },
	{ 0x296bfe6c, __VMLINUX_SYMBOL_STR(rt2x00mac_set_tim) },
	{ 0xaea508c3, __VMLINUX_SYMBOL_STR(rt2x00mac_configure_filter) },
	{ 0xa87b9b09, __VMLINUX_SYMBOL_STR(rt2x00mac_bss_info_changed) },
	{ 0x5962bdd5, __VMLINUX_SYMBOL_STR(rt2x00mac_config) },
	{ 0x259cdcfc, __VMLINUX_SYMBOL_STR(rt2x00mac_remove_interface) },
	{ 0xd6bb0464, __VMLINUX_SYMBOL_STR(rt2x00mac_add_interface) },
	{ 0xfac02013, __VMLINUX_SYMBOL_STR(rt2x00mac_stop) },
	{ 0xdcfdbb64, __VMLINUX_SYMBOL_STR(rt2x00mac_start) },
	{ 0x400ab518, __VMLINUX_SYMBOL_STR(rt2x00mac_tx) },
	{ 0x1e2e81af, __VMLINUX_SYMBOL_STR(rt2x00usb_flush_queue) },
	{ 0x7ba3763e, __VMLINUX_SYMBOL_STR(rt2x00usb_kick_queue) },
	{ 0x64d2476a, __VMLINUX_SYMBOL_STR(rt2x00usb_watchdog) },
	{ 0xe10d15f2, __VMLINUX_SYMBOL_STR(rt2x00usb_clear_entry) },
	{ 0x86a0a793, __VMLINUX_SYMBOL_STR(rt2x00usb_uninitialize) },
	{ 0x45ff8501, __VMLINUX_SYMBOL_STR(rt2x00usb_initialize) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4f121e5e, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request) },
	{ 0x6f4474b7, __VMLINUX_SYMBOL_STR(rt2x00usb_disable_radio) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x4fbd098f, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_req_buff_lock) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x546280e0, __VMLINUX_SYMBOL_STR(rt2x00usb_vendor_request_buff) },
	{ 0xac5bc0b5, __VMLINUX_SYMBOL_STR(rt2x00usb_probe) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rt2x00usb,rt2x00lib";

MODULE_ALIAS("usb:v0B05p1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0B05p1707d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7051d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v14B2p3C02d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3C00d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1044p8007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06F8pE000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p005Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0067d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p008Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0097d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6861d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6865d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6869d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp1706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp2570d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v148Fp9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v079Bp004Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0681p3C06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v114Bp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0769p11F3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB0p9020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0F88p3012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5A57p0260d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "1824E4EBCD8350CD29C6528");
