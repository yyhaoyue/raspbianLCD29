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
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x23214c12, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x25934787, __VMLINUX_SYMBOL_STR(input_ff_destroy) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe1ebcd78, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x9b4bc92c, __VMLINUX_SYMBOL_STR(input_ff_create_memless) },
	{ 0xdc84652d, __VMLINUX_SYMBOL_STR(input_set_capability) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x160a429f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x1919212a, __VMLINUX_SYMBOL_STR(input_set_abs_params) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ff-memless";

MODULE_ALIAS("usb:v*p*d*dc*dsc*dp*ic58isc42ip00in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v044Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v045Ep*d*dc*dsc*dp*icFFisc47ipD0in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v046Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0738p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0738p4540d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0E6Fp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v12ABp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1430p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v146Bp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1BADp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v0F0Dp*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1689p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v24C6p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v1532p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v15E4p*d*dc*dsc*dp*icFFisc5Dip81in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip01in*");
MODULE_ALIAS("usb:v162Ep*d*dc*dsc*dp*icFFisc5Dip81in*");

MODULE_INFO(srcversion, "FF35FBB9EEDDFB4906866D1");
