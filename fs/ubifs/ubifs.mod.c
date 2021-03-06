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
	{ 0xe70164a5, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x46398149, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xbf4f8e3, __VMLINUX_SYMBOL_STR(set_anon_super) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xd2966647, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x172ada35, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xe95c9a8b, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x123cd6ac, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x4aa9dd97, __VMLINUX_SYMBOL_STR(__set_page_dirty_nobuffers) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x5c317499, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x188a3dfb, __VMLINUX_SYMBOL_STR(timespec_trunc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xa2d8d582, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0xeb843533, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x4e68e9be, __VMLINUX_SYMBOL_STR(rb_next_postorder) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xeaf71aea, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x527af331, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0xb90c0df5, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x7ab88a45, __VMLINUX_SYMBOL_STR(system_freezing_cnt) },
	{ 0xa8ed7cb5, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xe4d91b41, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x5e866d85, __VMLINUX_SYMBOL_STR(prandom_bytes) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x465856b7, __VMLINUX_SYMBOL_STR(deactivate_locked_super) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ea4eb, __VMLINUX_SYMBOL_STR(ubi_open_volume) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xee91879b, __VMLINUX_SYMBOL_STR(rb_first_postorder) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x2b61ad21, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0xf0ef15b4, __VMLINUX_SYMBOL_STR(list_sort) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0xfa380bfa, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa4ca0617, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbfa8d033, __VMLINUX_SYMBOL_STR(debugfs_remove_recursive) },
	{ 0xe546bc99, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x1807b059, __VMLINUX_SYMBOL_STR(nonseekable_open) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xa741497, __VMLINUX_SYMBOL_STR(truncate_setsize) },
	{ 0xb18e9216, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x570a0b19, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x25b8be5a, __VMLINUX_SYMBOL_STR(end_page_writeback) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xc9f09a2b, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x1b533fc5, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2cf0b2c, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8db51db6, __VMLINUX_SYMBOL_STR(ubi_leb_map) },
	{ 0x63a85953, __VMLINUX_SYMBOL_STR(ubi_open_volume_nm) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x7e665f0e, __VMLINUX_SYMBOL_STR(freezing_slow_path) },
	{ 0xeb46fb6b, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcdc94296, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xf5e16a71, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x90a0fc95, __VMLINUX_SYMBOL_STR(write_inode_now) },
	{ 0xd1792fa0, __VMLINUX_SYMBOL_STR(ubi_leb_change) },
	{ 0xc3437467, __VMLINUX_SYMBOL_STR(sget) },
	{ 0xf0f04904, __VMLINUX_SYMBOL_STR(ubi_leb_write) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x8ffdb3b8, __VMLINUX_SYMBOL_STR(crc16) },
	{ 0xf64f22df, __VMLINUX_SYMBOL_STR(bdi_init) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb991ac, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x5cfdd22d, __VMLINUX_SYMBOL_STR(ubi_get_device_info) },
	{ 0xa681fe88, __VMLINUX_SYMBOL_STR(generate_random_uuid) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x7b305224, __VMLINUX_SYMBOL_STR(ubi_leb_read) },
	{ 0x541ca562, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x703b20f, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x69c53bc2, __VMLINUX_SYMBOL_STR(nd_set_link) },
	{ 0x58931e2f, __VMLINUX_SYMBOL_STR(ubi_leb_unmap) },
	{ 0x15817203, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0x818d371c, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xd63b4891, __VMLINUX_SYMBOL_STR(ubi_close_volume) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xde4a1854, __VMLINUX_SYMBOL_STR(ilookup) },
	{ 0x1a555549, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x5d4b8977, __VMLINUX_SYMBOL_STR(generic_file_mmap) },
	{ 0x6d4c67d7, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0xcae48f1b, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xd7474240, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xf9ae1099, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x4482cdb, __VMLINUX_SYMBOL_STR(__refrigerator) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x72c8bcfb, __VMLINUX_SYMBOL_STR(ubi_get_volume_info) },
	{ 0xbf283f13, __VMLINUX_SYMBOL_STR(clear_page_dirty_for_io) },
	{ 0xaa65541, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4149d61a, __VMLINUX_SYMBOL_STR(ubi_open_volume_path) },
	{ 0x3646e2b8, __VMLINUX_SYMBOL_STR(generic_file_write_iter) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x42801d20, __VMLINUX_SYMBOL_STR(ubi_sync) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xd1dbd746, __VMLINUX_SYMBOL_STR(__test_set_page_writeback) },
	{ 0x58119abf, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0x7f1ef61, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x28d6861d, __VMLINUX_SYMBOL_STR(__vmalloc) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8b85801c, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0x5fe5589f, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xab02b2c0, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0xe7166010, __VMLINUX_SYMBOL_STR(ubi_is_mapped) },
	{ 0x666458e2, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x20d4aa7d, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x827ace7d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x7cb22387, __VMLINUX_SYMBOL_STR(bdi_destroy) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xd2a1a1c9, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x304a6ed7, __VMLINUX_SYMBOL_STR(bdi_register) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x3ceb706c, __VMLINUX_SYMBOL_STR(writeback_inodes_sb) },
	{ 0x58435baa, __VMLINUX_SYMBOL_STR(filemap_map_pages) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5479224a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb6a6dc7f, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8757c84e, __VMLINUX_SYMBOL_STR(empty_aops) },
	{ 0x4aceda91, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x13aea4d8, __VMLINUX_SYMBOL_STR(grab_cache_page_write_begin) },
	{ 0xdd476dfe, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xfa7ddd8a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x88ed9630, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xa54f4768, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xee89764f, __VMLINUX_SYMBOL_STR(iget_locked) },
	{ 0x9c2edde6, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0xb93a6099, __VMLINUX_SYMBOL_STR(inode_init_owner) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ubi";


MODULE_INFO(srcversion, "2AF8D5FD401F69CC694AD57");
