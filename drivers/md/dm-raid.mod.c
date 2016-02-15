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
	{ 0xdcacdd7d, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0x974c1e3c, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf8954e9b, __VMLINUX_SYMBOL_STR(md_run) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x6371bcfd, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x399a8959, __VMLINUX_SYMBOL_STR(raid5_set_cache_size) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xdb1e60ff, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x97e030ac, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x76e3c840, __VMLINUX_SYMBOL_STR(md_rdev_init) },
	{ 0x481bdd64, __VMLINUX_SYMBOL_STR(mddev_init) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0xa1475a74, __VMLINUX_SYMBOL_STR(mddev_congested) },
	{ 0xd773e694, __VMLINUX_SYMBOL_STR(md_stop) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x294e0ce8, __VMLINUX_SYMBOL_STR(md_rdev_clear) },
	{ 0x2c7c8f3a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xb7950e47, __VMLINUX_SYMBOL_STR(md_stop_writes) },
	{ 0xdd1f7845, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0xd9ab833c, __VMLINUX_SYMBOL_STR(bitmap_load) },
	{ 0x71f48bd8, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x9af1de05, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x1b58a3e8, __VMLINUX_SYMBOL_STR(md_reap_sync_thread) },
	{ 0xd204ab8c, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-mod,md-mod,raid456";


MODULE_INFO(srcversion, "FDE1B253B77F31667DCF1B4");
