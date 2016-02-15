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
	{ 0xb2c8749b, __VMLINUX_SYMBOL_STR(param_ops_ulong) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x160a429f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0xe1ebcd78, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xec09c3f4, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0x5d5af958, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0xf159c6ae, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x92b2dbfa, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0x23214c12, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x7a987774, __VMLINUX_SYMBOL_STR(rc_g_keycode_from_table) },
	{ 0x3df2a791, __VMLINUX_SYMBOL_STR(rc_keyup) },
	{ 0xe1d8c548, __VMLINUX_SYMBOL_STR(rc_keydown_notimeout) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=rc-core";

MODULE_ALIAS("usb:v0BC7p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BC7p0008d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "D1EB4EDCFB4B6FD2C903059");
