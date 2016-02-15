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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x254311b1, __VMLINUX_SYMBOL_STR(go7007_read_interrupt) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x98748294, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xae3c64d3, __VMLINUX_SYMBOL_STR(go7007_update_board) },
	{ 0x4ff00997, __VMLINUX_SYMBOL_STR(go7007_read_addr) },
	{ 0xc9942fe3, __VMLINUX_SYMBOL_STR(i2c_smbus_xfer) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb02c3c, __VMLINUX_SYMBOL_STR(go7007_register_encoder) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd7237f96, __VMLINUX_SYMBOL_STR(go7007_boot_encoder) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x8d6b5f82, __VMLINUX_SYMBOL_STR(go7007_alloc) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xc1b9b0ca, __VMLINUX_SYMBOL_STR(go7007_parse_video_stream) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x17806391, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x3e220a9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xaeb361d5, __VMLINUX_SYMBOL_STR(go7007_snd_remove) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=go7007,videodev";

MODULE_ALIAS("usb:v0EB1p7007d0200dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0202dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0204dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0205dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0208dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0EB1p7007d0209dc*dsc*dp*icFFisc00ipFFin*");
MODULE_ALIAS("usb:v0EB1p7007d0210dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA102d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v093BpA104d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v10FDpDE00d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1943p2250d0001dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06E1p0709d0204dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1FBE54B195CE027F2647AA");
