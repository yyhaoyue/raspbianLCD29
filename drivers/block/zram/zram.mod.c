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
	{ 0xc341ae6d, __VMLINUX_SYMBOL_STR(zs_map_object) },
	{ 0xfc103777, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc18b905, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0xc394de29, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27864d57, __VMLINUX_SYMBOL_STR(memparse) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc69b7ee5, __VMLINUX_SYMBOL_STR(zs_destroy_pool) },
	{ 0xb6f0ae45, __VMLINUX_SYMBOL_STR(generic_end_io_acct) },
	{ 0xafd4610, __VMLINUX_SYMBOL_STR(zs_malloc) },
	{ 0xf2bae54b, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x9dfe7307, __VMLINUX_SYMBOL_STR(lz4_decompress_unknownoutputsize) },
	{ 0x5da67adc, __VMLINUX_SYMBOL_STR(zs_compact) },
	{ 0xa9b6da83, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xfec40996, __VMLINUX_SYMBOL_STR(fsync_bdev) },
	{ 0x958df3ac, __VMLINUX_SYMBOL_STR(zs_free) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x98ba5a6a, __VMLINUX_SYMBOL_STR(blk_alloc_queue) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x57a6c34f, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x9cee57a0, __VMLINUX_SYMBOL_STR(zs_create_pool) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcbc5d521, __VMLINUX_SYMBOL_STR(lz4_compress) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x601046f5, __VMLINUX_SYMBOL_STR(generic_start_io_acct) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x23e3c1bb, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x4d0d163d, __VMLINUX_SYMBOL_STR(copy_page) },
	{ 0x1037d98f, __VMLINUX_SYMBOL_STR(blk_queue_make_request) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x8f1d26a3, __VMLINUX_SYMBOL_STR(blk_queue_physical_block_size) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x5f413c97, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x5ac15bae, __VMLINUX_SYMBOL_STR(kstrtou16) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xcbe56bc2, __VMLINUX_SYMBOL_STR(zs_get_total_pages) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x6048f45f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0x56b63670, __VMLINUX_SYMBOL_STR(lzo1x_1_compress) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x222e7ce2, __VMLINUX_SYMBOL_STR(sysfs_streq) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xeea29d86, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x28e844ea, __VMLINUX_SYMBOL_STR(bdget_disk) },
	{ 0x16f10a00, __VMLINUX_SYMBOL_STR(bdput) },
	{ 0x924c46f8, __VMLINUX_SYMBOL_STR(zs_unmap_object) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x88ed9630, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x1fe5c1e5, __VMLINUX_SYMBOL_STR(page_endio) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=zsmalloc,lz4_compress";


MODULE_INFO(srcversion, "339C7FF5941E23A621E3100");
