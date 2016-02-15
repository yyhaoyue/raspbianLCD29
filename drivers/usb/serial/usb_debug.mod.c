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
	{ 0xd9c8cf4e, __VMLINUX_SYMBOL_STR(usb_serial_generic_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7709e80c, __VMLINUX_SYMBOL_STR(usb_serial_handle_break) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x1dfdfa02, __VMLINUX_SYMBOL_STR(usb_serial_generic_process_read_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbserial";

MODULE_ALIAS("usb:v0525p127Ad*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9C45B06EC87E48CC15C8FE6");
