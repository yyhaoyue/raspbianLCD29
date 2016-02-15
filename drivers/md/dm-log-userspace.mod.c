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
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x61cf07d5, __VMLINUX_SYMBOL_STR(cn_add_callback) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdb1e60ff, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6f989c8a, __VMLINUX_SYMBOL_STR(dm_dirty_log_type_unregister) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xff5a8cfe, __VMLINUX_SYMBOL_STR(cn_del_callback) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0xc8de802f, __VMLINUX_SYMBOL_STR(cn_netlink_send) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x6cc8c078, __VMLINUX_SYMBOL_STR(dm_dirty_log_type_register) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x2c7c8f3a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cn,dm-mod,dm-log";


MODULE_INFO(srcversion, "2156CD98F1B83A9459008F5");
