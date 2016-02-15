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
	{ 0xa8ed7cb5, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xafdce9a8, __VMLINUX_SYMBOL_STR(input_unregister_handler) },
	{ 0xd41c79fd, __VMLINUX_SYMBOL_STR(input_register_handler) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xb9acd3d9, __VMLINUX_SYMBOL_STR(__put_user_2) },
	{ 0xb4b6037c, __VMLINUX_SYMBOL_STR(input_ff_upload) },
	{ 0x38a9c2c7, __VMLINUX_SYMBOL_STR(input_ff_effect_from_user) },
	{ 0x42d7c10, __VMLINUX_SYMBOL_STR(input_release_device) },
	{ 0x18858b79, __VMLINUX_SYMBOL_STR(input_ff_erase) },
	{ 0xd691c7d4, __VMLINUX_SYMBOL_STR(input_grab_device) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6410e160, __VMLINUX_SYMBOL_STR(ktime_mono_to_any) },
	{ 0x8967ba9f, __VMLINUX_SYMBOL_STR(input_class) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb7abba95, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x22183e2a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x138622d0, __VMLINUX_SYMBOL_STR(cdev_init) },
	{ 0x1d53fd39, __VMLINUX_SYMBOL_STR(input_register_handle) },
	{ 0x9340ce53, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x89d322a, __VMLINUX_SYMBOL_STR(get_device) },
	{ 0x73190914, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf7f16b3f, __VMLINUX_SYMBOL_STR(input_get_new_minor) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x5d12e48f, __VMLINUX_SYMBOL_STR(input_event_to_user) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf751aea, __VMLINUX_SYMBOL_STR(input_event_from_user) },
	{ 0xfed47cc0, __VMLINUX_SYMBOL_STR(input_inject_event) },
	{ 0xa693d8b1, __VMLINUX_SYMBOL_STR(input_set_keycode) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x6bc36b82, __VMLINUX_SYMBOL_STR(input_get_keycode) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4de551d1, __VMLINUX_SYMBOL_STR(input_open_device) },
	{ 0x1807b059, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7aa1756e, __VMLINUX_SYMBOL_STR(kvfree) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x42ab4f80, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x68ee6c6, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xc944bff9, __VMLINUX_SYMBOL_STR(input_unregister_handle) },
	{ 0x5cf53ce2, __VMLINUX_SYMBOL_STR(input_free_minor) },
	{ 0xc231cb9b, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xd38ef237, __VMLINUX_SYMBOL_STR(input_close_device) },
	{ 0x43e84308, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xe322bf5b, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xcb6b22ae, __VMLINUX_SYMBOL_STR(input_flush_device) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("input:b*v*p*e*-e*k*r*a*m*l*s*f*w*");

MODULE_INFO(srcversion, "979C402108CDF925660FD23");
