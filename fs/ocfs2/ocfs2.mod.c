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
	{ 0x6d662533, __VMLINUX_SYMBOL_STR(_find_first_bit_le) },
	{ 0x4d3c153f, __VMLINUX_SYMBOL_STR(sigprocmask) },
	{ 0xf91861bd, __VMLINUX_SYMBOL_STR(blkdev_issue_discard) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x2d6507b5, __VMLINUX_SYMBOL_STR(_find_next_zero_bit_le) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4be85a03, __VMLINUX_SYMBOL_STR(memweight) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb9e6db28, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0xc6540b, __VMLINUX_SYMBOL_STR(jbd2_journal_flush) },
	{ 0x46398149, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x7e9efe8e, __VMLINUX_SYMBOL_STR(complete_and_exit) },
	{ 0x655c9387, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc004215, __VMLINUX_SYMBOL_STR(jbd2_journal_begin_ordered_truncate) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0xd2966647, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x172ada35, __VMLINUX_SYMBOL_STR(generic_file_llseek) },
	{ 0xe95c9a8b, __VMLINUX_SYMBOL_STR(__mark_inode_dirty) },
	{ 0x123cd6ac, __VMLINUX_SYMBOL_STR(debugfs_create_dir) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x5c317499, __VMLINUX_SYMBOL_STR(filemap_fault) },
	{ 0x2a36be4b, __VMLINUX_SYMBOL_STR(dquot_quotactl_sysfile_ops) },
	{ 0x4d3af7fa, __VMLINUX_SYMBOL_STR(ocfs2_cluster_hangup) },
	{ 0xbdaf1483, __VMLINUX_SYMBOL_STR(dqput) },
	{ 0xa2aa7584, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0x7c6441b0, __VMLINUX_SYMBOL_STR(dqget) },
	{ 0xf3cb9361, __VMLINUX_SYMBOL_STR(generic_write_checks) },
	{ 0x18d0053b, __VMLINUX_SYMBOL_STR(jbd2_journal_errno) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x517dbd7a, __VMLINUX_SYMBOL_STR(filemap_fdatawait) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x269d63fd, __VMLINUX_SYMBOL_STR(ocfs2_cluster_disconnect) },
	{ 0xa2d8d582, __VMLINUX_SYMBOL_STR(filemap_write_and_wait_range) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9a4c643e, __VMLINUX_SYMBOL_STR(jbd2_journal_lock_updates) },
	{ 0xcc81118e, __VMLINUX_SYMBOL_STR(__generic_file_write_iter) },
	{ 0xcd7b002a, __VMLINUX_SYMBOL_STR(iget5_locked) },
	{ 0xf3963af6, __VMLINUX_SYMBOL_STR(__cleancache_init_shared_fs) },
	{ 0x7d817727, __VMLINUX_SYMBOL_STR(end_buffer_write_sync) },
	{ 0x74193a7a, __VMLINUX_SYMBOL_STR(bdev_read_only) },
	{ 0xebf950ac, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0x2f017012, __VMLINUX_SYMBOL_STR(block_invalidatepage) },
	{ 0xf34440cf, __VMLINUX_SYMBOL_STR(done_path_create) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8936eb0, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x34184afe, __VMLINUX_SYMBOL_STR(current_kernel_time) },
	{ 0xfc30d2b3, __VMLINUX_SYMBOL_STR(block_is_partially_uptodate) },
	{ 0xeaf71aea, __VMLINUX_SYMBOL_STR(is_bad_inode) },
	{ 0x36fc6a9a, __VMLINUX_SYMBOL_STR(blkdev_issue_flush) },
	{ 0x527af331, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x97db3294, __VMLINUX_SYMBOL_STR(truncate_inode_pages_range) },
	{ 0x860794c2, __VMLINUX_SYMBOL_STR(posix_acl_access_xattr_handler) },
	{ 0x1847b01e, __VMLINUX_SYMBOL_STR(jbd2_log_wait_commit) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xe4d91b41, __VMLINUX_SYMBOL_STR(__lock_page) },
	{ 0x4681046f, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0x3c607648, __VMLINUX_SYMBOL_STR(filemap_write_and_wait) },
	{ 0x7e7f8992, __VMLINUX_SYMBOL_STR(jbd2_journal_get_undo_access) },
	{ 0x2ca2625b, __VMLINUX_SYMBOL_STR(__lock_buffer) },
	{ 0x5572131c, __VMLINUX_SYMBOL_STR(jbd2_journal_force_commit) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x76cf47f6, __VMLINUX_SYMBOL_STR(__aeabi_llsl) },
	{ 0xe225581b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0x728c4933, __VMLINUX_SYMBOL_STR(buffer_migrate_page) },
	{ 0x2b61ad21, __VMLINUX_SYMBOL_STR(inc_nlink) },
	{ 0x8bf11cc6, __VMLINUX_SYMBOL_STR(block_read_full_page) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3fbce3f4, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x738af964, __VMLINUX_SYMBOL_STR(jbd2_journal_check_used_features) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x424241c9, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb) },
	{ 0x1299b47a, __VMLINUX_SYMBOL_STR(filemap_fdatawait_range) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8ba9972d, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x80d6cbc4, __VMLINUX_SYMBOL_STR(__dquot_free_space) },
	{ 0xfa380bfa, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xede24b01, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0x2f5d297f, __VMLINUX_SYMBOL_STR(igrab) },
	{ 0xa4ca0617, __VMLINUX_SYMBOL_STR(debugfs_create_file) },
	{ 0xd80d57a2, __VMLINUX_SYMBOL_STR(unlock_buffer) },
	{ 0x1774d38f, __VMLINUX_SYMBOL_STR(generic_setxattr) },
	{ 0xb26a5c5b, __VMLINUX_SYMBOL_STR(flock_lock_inode_wait) },
	{ 0xc2053910, __VMLINUX_SYMBOL_STR(__dquot_alloc_space) },
	{ 0x899b8fd7, __VMLINUX_SYMBOL_STR(jbd2_journal_destroy) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x307c2fd0, __VMLINUX_SYMBOL_STR(generic_check_addressable) },
	{ 0xe546bc99, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xef227ca9, __VMLINUX_SYMBOL_STR(unregister_quota_format) },
	{ 0xb18e9216, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x570a0b19, __VMLINUX_SYMBOL_STR(down_write_trylock) },
	{ 0x2f273926, __VMLINUX_SYMBOL_STR(jbd2_journal_start) },
	{ 0x2a3a6f1d, __VMLINUX_SYMBOL_STR(simple_attr_read) },
	{ 0x7ad23830, __VMLINUX_SYMBOL_STR(d_delete) },
	{ 0x50279c2, __VMLINUX_SYMBOL_STR(jbd2_journal_wipe) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xbb0a4589, __VMLINUX_SYMBOL_STR(should_remove_suid) },
	{ 0x8bbcfd22, __VMLINUX_SYMBOL_STR(register_quota_format) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x7cc4a5d, __VMLINUX_SYMBOL_STR(printk_timed_ratelimit) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xc9f09a2b, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0x1b533fc5, __VMLINUX_SYMBOL_STR(inode_owner_or_capable) },
	{ 0x2a3aa965, __VMLINUX_SYMBOL_STR(mpage_readpages) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5763a894, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x8a89395, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_commit) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x5b083df7, __VMLINUX_SYMBOL_STR(jbd2_journal_dirty_metadata) },
	{ 0xf098f2f3, __VMLINUX_SYMBOL_STR(dquot_alloc_inode) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x8fd610ad, __VMLINUX_SYMBOL_STR(__seq_open_private) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcdc94296, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xda1fd10d, __VMLINUX_SYMBOL_STR(posix_acl_chmod) },
	{ 0xfbf7cf0c, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xaf86835d, __VMLINUX_SYMBOL_STR(jbd2_journal_extend) },
	{ 0x71e2c54b, __VMLINUX_SYMBOL_STR(jbd2_trans_will_send_data_barrier) },
	{ 0xfe31c04b, __VMLINUX_SYMBOL_STR(ocfs2_plock) },
	{ 0x7c1372e8, __VMLINUX_SYMBOL_STR(panic) },
	{ 0xf60dd1a2, __VMLINUX_SYMBOL_STR(jbd2_journal_ack_err) },
	{ 0x6f32ee22, __VMLINUX_SYMBOL_STR(blkdev_issue_zeroout) },
	{ 0xfd5683b9, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible) },
	{ 0xf3c831ea, __VMLINUX_SYMBOL_STR(jbd2_journal_start_commit) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xf395541a, __VMLINUX_SYMBOL_STR(qtree_read_dquot) },
	{ 0x5fee0af4, __VMLINUX_SYMBOL_STR(dquot_enable) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x9b33bf8a, __VMLINUX_SYMBOL_STR(d_move) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0xecf27fd2, __VMLINUX_SYMBOL_STR(debugfs_remove) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb991ac, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x763f9a85, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xdd0ca0a, __VMLINUX_SYMBOL_STR(jbd2_journal_release_jbd_inode) },
	{ 0xec9936af, __VMLINUX_SYMBOL_STR(setattr_copy) },
	{ 0xdaf372fb, __VMLINUX_SYMBOL_STR(dquot_resume) },
	{ 0x60df1e3b, __VMLINUX_SYMBOL_STR(posix_acl_equiv_mode) },
	{ 0x316904e1, __VMLINUX_SYMBOL_STR(ocfs2_dlm_unlock) },
	{ 0x5fbb6cbd, __VMLINUX_SYMBOL_STR(simple_attr_release) },
	{ 0xcfc48121, __VMLINUX_SYMBOL_STR(qtree_release_dquot) },
	{ 0x4e3567f7, __VMLINUX_SYMBOL_STR(match_int) },
	{ 0x27331b99, __VMLINUX_SYMBOL_STR(wait_on_page_bit) },
	{ 0x541ca562, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x703b20f, __VMLINUX_SYMBOL_STR(generic_file_read_iter) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x5f764941, __VMLINUX_SYMBOL_STR(jbd2_journal_init_inode) },
	{ 0x8ebaad11, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x8e674b7e, __VMLINUX_SYMBOL_STR(posix_acl_create) },
	{ 0xd2a2fa23, __VMLINUX_SYMBOL_STR(__brelse) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x50f56e64, __VMLINUX_SYMBOL_STR(jbd2_journal_clear_err) },
	{ 0x60f4bcef, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lvb_valid) },
	{ 0x36819137, __VMLINUX_SYMBOL_STR(generic_removexattr) },
	{ 0x6600d112, __VMLINUX_SYMBOL_STR(ilookup5) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x3d8fe471, __VMLINUX_SYMBOL_STR(mark_page_accessed) },
	{ 0x40718c92, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock) },
	{ 0x99846622, __VMLINUX_SYMBOL_STR(qtree_write_dquot) },
	{ 0x15817203, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0x12b68ac6, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0x9ccafa05, __VMLINUX_SYMBOL_STR(ocfs2_cluster_this_node) },
	{ 0xed99bf78, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0x818d371c, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x35bd5db1, __VMLINUX_SYMBOL_STR(block_commit_write) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xe40cffce, __VMLINUX_SYMBOL_STR(ocfs2_stack_glue_set_max_proto_version) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x4226705d, __VMLINUX_SYMBOL_STR(ocfs2_dlm_dump_lksb) },
	{ 0xcb4db758, __VMLINUX_SYMBOL_STR(dquot_initialize) },
	{ 0xee4960da, __VMLINUX_SYMBOL_STR(sync_mapping_buffers) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x6d4c67d7, __VMLINUX_SYMBOL_STR(wait_for_stable_page) },
	{ 0x1a6bfc54, __VMLINUX_SYMBOL_STR(block_write_full_page) },
	{ 0x935e895b, __VMLINUX_SYMBOL_STR(sync_blockdev) },
	{ 0xcae48f1b, __VMLINUX_SYMBOL_STR(truncate_inode_pages_final) },
	{ 0x59f42a33, __VMLINUX_SYMBOL_STR(create_empty_buffers) },
	{ 0x6236b375, __VMLINUX_SYMBOL_STR(try_to_free_buffers) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x28585630, __VMLINUX_SYMBOL_STR(jbd2_journal_get_write_access) },
	{ 0x872a0531, __VMLINUX_SYMBOL_STR(jbd2_journal_init_jbd_inode) },
	{ 0xfdfc0b3b, __VMLINUX_SYMBOL_STR(fiemap_fill_next_extent) },
	{ 0xd7474240, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0xf9ae1099, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0x8b8059bd, __VMLINUX_SYMBOL_STR(in_group_p) },
	{ 0x62dfd974, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x66d7fc5e, __VMLINUX_SYMBOL_STR(inode_newsize_ok) },
	{ 0xb21ffa8, __VMLINUX_SYMBOL_STR(qtree_entry_unused) },
	{ 0xb5f008fd, __VMLINUX_SYMBOL_STR(dquot_scan_active) },
	{ 0xa8cf76a6, __VMLINUX_SYMBOL_STR(unmap_underlying_metadata) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0xbf9068ab, __VMLINUX_SYMBOL_STR(ocfs2_cluster_connect) },
	{ 0xd829310e, __VMLINUX_SYMBOL_STR(user_path_at) },
	{ 0xd2ea5d5e, __VMLINUX_SYMBOL_STR(shrink_dcache_parent) },
	{ 0x1657f531, __VMLINUX_SYMBOL_STR(vfs_setpos) },
	{ 0xaa65541, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x774d0a4f, __VMLINUX_SYMBOL_STR(submit_bh) },
	{ 0x4c9de6f3, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x6354ab98, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x1cb231d0, __VMLINUX_SYMBOL_STR(mlog_not_bits) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa27c4ed3, __VMLINUX_SYMBOL_STR(dquot_drop) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x741ba340, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_reserve) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xedc7f4ec, __VMLINUX_SYMBOL_STR(dq_data_lock) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4101836d, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x58119abf, __VMLINUX_SYMBOL_STR(iter_file_splice_write) },
	{ 0xbbc4ef97, __VMLINUX_SYMBOL_STR(ocfs2_stack_supports_plocks) },
	{ 0x8d55bb8a, __VMLINUX_SYMBOL_STR(qid_eq) },
	{ 0x45b64b34, __VMLINUX_SYMBOL_STR(jbd2_journal_clear_features) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x7f1ef61, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xcd59058e, __VMLINUX_SYMBOL_STR(generic_permission) },
	{ 0xe2bfc21a, __VMLINUX_SYMBOL_STR(inode_dio_wait) },
	{ 0x8b85801c, __VMLINUX_SYMBOL_STR(ihold) },
	{ 0x605b90ee, __VMLINUX_SYMBOL_STR(unmap_mapping_range) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x978b9716, __VMLINUX_SYMBOL_STR(__sb_end_write) },
	{ 0xc8c0b8b5, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x2f90d642, __VMLINUX_SYMBOL_STR(jbd2_journal_file_inode) },
	{ 0xccd65a21, __VMLINUX_SYMBOL_STR(generic_error_remove_page) },
	{ 0x2b88a16e, __VMLINUX_SYMBOL_STR(jbd2_journal_unlock_updates) },
	{ 0xe1f8b07e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0xb0c5488d, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0x619d4b1e, __VMLINUX_SYMBOL_STR(end_buffer_read_sync) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0x3bcef5f3, __VMLINUX_SYMBOL_STR(ocfs2_dlm_lock_status) },
	{ 0x666458e2, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x7dadf146, __VMLINUX_SYMBOL_STR(sb_set_blocksize) },
	{ 0xbbc43cac, __VMLINUX_SYMBOL_STR(jbd2_journal_set_features) },
	{ 0xd3ce7533, __VMLINUX_SYMBOL_STR(__sb_start_write) },
	{ 0x20d4aa7d, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x827ace7d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x504b5c85, __VMLINUX_SYMBOL_STR(jbd2_journal_load) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xc07566f6, __VMLINUX_SYMBOL_STR(__blockdev_direct_IO) },
	{ 0x687f6251, __VMLINUX_SYMBOL_STR(mlog_and_bits) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xc49566a6, __VMLINUX_SYMBOL_STR(__block_write_begin) },
	{ 0xb1f36b23, __VMLINUX_SYMBOL_STR(jbd2_journal_set_triggers) },
	{ 0xac0e1a51, __VMLINUX_SYMBOL_STR(filemap_fdatawrite_range) },
	{ 0x8fd3ccce, __VMLINUX_SYMBOL_STR(posix_acl_default_xattr_handler) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0xf5ed58d5, __VMLINUX_SYMBOL_STR(mark_buffer_dirty) },
	{ 0x7ea190b3, __VMLINUX_SYMBOL_STR(jbd2_journal_restart) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xd2a1a1c9, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x55fecfe0, __VMLINUX_SYMBOL_STR(jbd2_journal_stop) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x871c0a7e, __VMLINUX_SYMBOL_STR(fiemap_check_flags) },
	{ 0x3a3df05e, __VMLINUX_SYMBOL_STR(user_path_create) },
	{ 0x7ce18c9f, __VMLINUX_SYMBOL_STR(from_kqid) },
	{ 0x5479224a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xb6a6dc7f, __VMLINUX_SYMBOL_STR(generic_file_splice_read) },
	{ 0x8a4fa83b, __VMLINUX_SYMBOL_STR(__aeabi_llsr) },
	{ 0x9b260e24, __VMLINUX_SYMBOL_STR(dquot_free_inode) },
	{ 0xdf2c2742, __VMLINUX_SYMBOL_STR(rb_last) },
	{ 0x31e9eeb6, __VMLINUX_SYMBOL_STR(dquot_disable) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x3b201c4b, __VMLINUX_SYMBOL_STR(dquot_commit_info) },
	{ 0xdd476dfe, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xe44c2db, __VMLINUX_SYMBOL_STR(simple_attr_open) },
	{ 0xa3db1a8b, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0xfa7ddd8a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xe6f6f038, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x2d1e8448, __VMLINUX_SYMBOL_STR(__dquot_transfer) },
	{ 0x88ed9630, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0x8744261c, __VMLINUX_SYMBOL_STR(jbd2_complete_transaction) },
	{ 0xa54f4768, __VMLINUX_SYMBOL_STR(clear_nlink) },
	{ 0xc69b5dbb, __VMLINUX_SYMBOL_STR(simple_attr_write) },
	{ 0x9c2edde6, __VMLINUX_SYMBOL_STR(generic_fillattr) },
	{ 0x64450eb4, __VMLINUX_SYMBOL_STR(filemap_fdatawrite) },
	{ 0xb93a6099, __VMLINUX_SYMBOL_STR(inode_init_owner) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x7d676ff1, __VMLINUX_SYMBOL_STR(truncate_inode_pages) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ocfs2_stackglue,quota_tree,ocfs2_nodemanager";


MODULE_INFO(srcversion, "D636DF50E455A11425D21FB");
