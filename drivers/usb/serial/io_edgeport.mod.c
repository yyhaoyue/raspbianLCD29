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
	{ 0xf564f64a, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x14d5b4d, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0xac5ac5ae, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3300ca85, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x5c78632e, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x1bd15b65, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xbceab4b6, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x9e95d16, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x83300c08, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8f9f7829, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x1c3e0a8, __VMLINUX_SYMBOL_STR(tty_port_tty_wakeup) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1608p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA758d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA794d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA225d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BAFCD35C3719698CD6F28E6");
