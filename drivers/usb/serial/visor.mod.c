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
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6287fa75, __VMLINUX_SYMBOL_STR(usb_serial_generic_open) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x5d9b0ab5, __VMLINUX_SYMBOL_STR(usb_serial_generic_close) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v082Dp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v082Dp0200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v082Dp0300d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v115EpF100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0080d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0060d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0061d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0031d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0830p0070d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0038d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0066d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0095d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp009Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp00DAd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp00E9d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0144d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp0169d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E8p6601d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v12EFp0100d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v091Ep0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v4766p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0C88p0021d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E67p0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "555DFE3D9E84E2378547C32");
