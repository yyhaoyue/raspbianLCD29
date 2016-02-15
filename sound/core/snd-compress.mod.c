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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x1a90401e, __VMLINUX_SYMBOL_STR(snd_register_device) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1deabf2, __VMLINUX_SYMBOL_STR(div64_u64) },
	{ 0xaacf46f4, __VMLINUX_SYMBOL_STR(snd_device_initialize) },
	{ 0xb2e5ae4a, __VMLINUX_SYMBOL_STR(snd_lookup_minor_data) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4e0bf2d2, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x35df0c7c, __VMLINUX_SYMBOL_STR(snd_unregister_device) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8f595b11, __VMLINUX_SYMBOL_STR(snd_major) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x68ee6c6, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1c65f966, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x98fd3fe4, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x73190914, __VMLINUX_SYMBOL_STR(dev_set_name) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd";


MODULE_INFO(srcversion, "FCF80B2F253B95F089F991F");
