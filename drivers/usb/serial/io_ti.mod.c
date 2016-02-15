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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf564f64a, __VMLINUX_SYMBOL_STR(usb_serial_generic_get_icount) },
	{ 0x14d5b4d, __VMLINUX_SYMBOL_STR(usb_serial_generic_tiocmiwait) },
	{ 0xac5ac5ae, __VMLINUX_SYMBOL_STR(usb_serial_deregister_drivers) },
	{ 0x3300ca85, __VMLINUX_SYMBOL_STR(usb_serial_register_drivers) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x2c0f2f46, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x833cc0a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x9e95d16, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x83300c08, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0x8f9f7829, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x1bd15b65, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0xbceab4b6, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0xaaa62dc1, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v1608p0215d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0241d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0301d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0306d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0309d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p030Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0205d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0207d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p020Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0206d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p021Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0242d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0244d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0243d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0212d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0247d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EE1F3A7C8900E5CF3366515");
