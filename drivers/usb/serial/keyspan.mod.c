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
	{ 0xac5ac5ae, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3300ca85, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x29bb0993, __VMLINUX_SYMBOL_STR(ezusb_fx1_ihex_firmware_download) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xc06851f4, __VMLINUX_SYMBOL_STR(usb_serial_port_softint) },
	{ 0xbbffaf43, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_flags) },
	{ 0x83300c08, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8f9f7829, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x1441ca00, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9e95d16, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,ezusb";

MODULE_ALIAS("usb:v06CDp0105d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0103d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0106d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0101d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0114d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0113d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0112d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0107d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0119d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp011Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0110d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0115d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0135d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp010Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp012Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06CDp0131d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "35A719D4ED57409385E40E7");
