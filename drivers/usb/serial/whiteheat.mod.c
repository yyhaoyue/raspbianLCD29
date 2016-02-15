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
	{ 0x795c8712, __VMLINUX_SYMBOL_STR(usb_serial_generic_unthrottle) },
	{ 0xbc93f657, __VMLINUX_SYMBOL_STR(usb_serial_generic_throttle) },
	{ 0xac5ac5ae, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3300ca85, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0x6287fa75, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0x29bb0993, __VMLINUX_SYMBOL_STR(ezusb_fx1_ihex_firmware_download) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x5d9b0ab5, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9e95d16, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial,ezusb";

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "472C38FF3E20F67DCFAC260");
