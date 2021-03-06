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
	{ 0x755cfb19, __VMLINUX_SYMBOL_STR(get_acl) },
	{ 0xf4d9786c, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0xbfd72aae, __VMLINUX_SYMBOL_STR(svcauth_gss_flavor) },
	{ 0x205e89ba, __VMLINUX_SYMBOL_STR(d_path) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x11945208, __VMLINUX_SYMBOL_STR(auth_domain_put) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x80a8fb9a, __VMLINUX_SYMBOL_STR(rpc_destroy_wait_queue) },
	{ 0x1aa9686b, __VMLINUX_SYMBOL_STR(set_groups) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xb9e6db28, __VMLINUX_SYMBOL_STR(perf_tp_event) },
	{ 0x405c1144, __VMLINUX_SYMBOL_STR(get_seconds) },
	{ 0x6240980e, __VMLINUX_SYMBOL_STR(locks_free_lock) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x4d881d1c, __VMLINUX_SYMBOL_STR(xdr_truncate_encode) },
	{ 0xde79f78a, __VMLINUX_SYMBOL_STR(sunrpc_cache_update) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xc7e10b0f, __VMLINUX_SYMBOL_STR(vfs_setlease) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x32c26fde, __VMLINUX_SYMBOL_STR(__mnt_is_readonly) },
	{ 0x4c9ad909, __VMLINUX_SYMBOL_STR(lease_get_mtime) },
	{ 0xdd44f6ae, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xab8d328f, __VMLINUX_SYMBOL_STR(mntget) },
	{ 0xa2aa7584, __VMLINUX_SYMBOL_STR(inode_permission) },
	{ 0xffab8fff, __VMLINUX_SYMBOL_STR(locks_start_grace) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa0fbac79, __VMLINUX_SYMBOL_STR(wake_up_bit) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x761bab36, __VMLINUX_SYMBOL_STR(cache_destroy_net) },
	{ 0x1b17e06c, __VMLINUX_SYMBOL_STR(kstrtoll) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xa3e3a692, __VMLINUX_SYMBOL_STR(rpc_call_async) },
	{ 0x1fe3f8a0, __VMLINUX_SYMBOL_STR(write_bytes_to_xdr_buf) },
	{ 0x5ca90b12, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0xaab866ab, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xe1e0eade, __VMLINUX_SYMBOL_STR(svc_pool_stats_open) },
	{ 0x3a3926b5, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x5ab9ef34, __VMLINUX_SYMBOL_STR(svc_print_addr) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8936eb0, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xe7492901, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc781817d, __VMLINUX_SYMBOL_STR(rpc_unlink) },
	{ 0x42a156d9, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0xd4659d84, __VMLINUX_SYMBOL_STR(gss_mech_get) },
	{ 0xf8335759, __VMLINUX_SYMBOL_STR(svc_addsock) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0xcd2f38a7, __VMLINUX_SYMBOL_STR(put_rpccred) },
	{ 0x4e8a366b, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xce4b8bac, __VMLINUX_SYMBOL_STR(gss_mech_put) },
	{ 0x1cb447f3, __VMLINUX_SYMBOL_STR(rpc_init_wait_queue) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe225581b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x1a6b2744, __VMLINUX_SYMBOL_STR(svc_proc_unregister) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x9dc932fd, __VMLINUX_SYMBOL_STR(svc_find_xprt) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x348ef8ac, __VMLINUX_SYMBOL_STR(filp_close) },
	{ 0xe7d31d49, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0x61ba5ac3, __VMLINUX_SYMBOL_STR(nlmsvc_ops) },
	{ 0x9b465eaf, __VMLINUX_SYMBOL_STR(rpc_uaddr2sockaddr) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6dbdfbc4, __VMLINUX_SYMBOL_STR(cache_register_net) },
	{ 0x5b169662, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0xeef161aa, __VMLINUX_SYMBOL_STR(groups_free) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x71fa908a, __VMLINUX_SYMBOL_STR(cache_flush) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xeb187c25, __VMLINUX_SYMBOL_STR(vfs_fsync) },
	{ 0xeb23f9d0, __VMLINUX_SYMBOL_STR(svc_seq_show) },
	{ 0xc0c626c4, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x259fccb2, __VMLINUX_SYMBOL_STR(rpc_mkpipe_data) },
	{ 0xe832b9d5, __VMLINUX_SYMBOL_STR(path_get) },
	{ 0x7ef32888, __VMLINUX_SYMBOL_STR(rpc_mkpipe_dentry) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4a41ecb6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x3d896b7f, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0x40c7247c, __VMLINUX_SYMBOL_STR(si_meminfo) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x494ebac8, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xaa26e14c, __VMLINUX_SYMBOL_STR(xdr_reserve_space) },
	{ 0x62276e3a, __VMLINUX_SYMBOL_STR(rpc_wake_up_next) },
	{ 0x83a10598, __VMLINUX_SYMBOL_STR(svc_set_client) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xce2acf26, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0xa4b45ea5, __VMLINUX_SYMBOL_STR(out_of_line_wait_on_bit_lock) },
	{ 0x82753db6, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x22a95459, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0xde9360ba, __VMLINUX_SYMBOL_STR(totalram_pages) },
	{ 0xc62941d4, __VMLINUX_SYMBOL_STR(gss_pseudoflavor_to_service) },
	{ 0x6a48186d, __VMLINUX_SYMBOL_STR(splice_direct_to_actor) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0xe62dbdd0, __VMLINUX_SYMBOL_STR(rpc_get_sb_net) },
	{ 0x6690691, __VMLINUX_SYMBOL_STR(svc_xprt_names) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x72f66c77, __VMLINUX_SYMBOL_STR(rpc_delay) },
	{ 0xc5c09b05, __VMLINUX_SYMBOL_STR(cache_check) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5763a894, __VMLINUX_SYMBOL_STR(trace_define_field) },
	{ 0x9be7dcd7, __VMLINUX_SYMBOL_STR(vfs_lock_file) },
	{ 0x8a89395, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_commit) },
	{ 0xdb2bea4c, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0xcca4bfe8, __VMLINUX_SYMBOL_STR(vfs_readv) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37f9cdc, __VMLINUX_SYMBOL_STR(rpc_queue_upcall) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x8799cba2, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xaffcb1fd, __VMLINUX_SYMBOL_STR(locks_alloc_lock) },
	{ 0x9d73e35e, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0xc20bee20, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x37958d36, __VMLINUX_SYMBOL_STR(svcauth_unix_purge) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0xb07abe2, __VMLINUX_SYMBOL_STR(unshare_fs_struct) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xed2028bf, __VMLINUX_SYMBOL_STR(rpc_call_start) },
	{ 0xf0de96d1, __VMLINUX_SYMBOL_STR(svc_destroy) },
	{ 0xe7075b97, __VMLINUX_SYMBOL_STR(idr_alloc_cyclic) },
	{ 0xf1a6cb0c, __VMLINUX_SYMBOL_STR(rpc_create) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x85d9f7bd, __VMLINUX_SYMBOL_STR(sunrpc_cache_lookup) },
	{ 0x8395de12, __VMLINUX_SYMBOL_STR(xdr_restrict_buflen) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x86b395b, __VMLINUX_SYMBOL_STR(simple_transaction_read) },
	{ 0xd2db6548, __VMLINUX_SYMBOL_STR(svc_alien_sock) },
	{ 0x80951b28, __VMLINUX_SYMBOL_STR(rpcauth_get_gssinfo) },
	{ 0xc68aa090, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0x7cf7320e, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x68b83ac6, __VMLINUX_SYMBOL_STR(posix_acl_alloc) },
	{ 0x66226420, __VMLINUX_SYMBOL_STR(mount_ns) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc92b08d3, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x9fb4ed4f, __VMLINUX_SYMBOL_STR(svc_create_pooled) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0xd97ffb20, __VMLINUX_SYMBOL_STR(rpc_lookup_machine_cred) },
	{ 0x6119d64b, __VMLINUX_SYMBOL_STR(rpc_d_lookup_sb) },
	{ 0xe97f4ce5, __VMLINUX_SYMBOL_STR(qword_get) },
	{ 0xc5fdef94, __VMLINUX_SYMBOL_STR(call_usermodehelper) },
	{ 0xc8e96dea, __VMLINUX_SYMBOL_STR(qword_addhex) },
	{ 0xe87124d3, __VMLINUX_SYMBOL_STR(__splice_from_pipe) },
	{ 0x92627723, __VMLINUX_SYMBOL_STR(unix_domain_find) },
	{ 0xb62b404e, __VMLINUX_SYMBOL_STR(svc_process) },
	{ 0xabb048f1, __VMLINUX_SYMBOL_STR(svc_rpcb_cleanup) },
	{ 0x9bc07e2, __VMLINUX_SYMBOL_STR(svc_set_num_threads) },
	{ 0x7da3d83, __VMLINUX_SYMBOL_STR(exportfs_encode_fh) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x8ebaad11, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xcdd7e915, __VMLINUX_SYMBOL_STR(lease_modify) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xee1ea9df, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0x5b68d58a, __VMLINUX_SYMBOL_STR(nfsacl_encode) },
	{ 0xedcf6be4, __VMLINUX_SYMBOL_STR(qword_add) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0xd17b868e, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xda759533, __VMLINUX_SYMBOL_STR(cache_unregister_net) },
	{ 0xce1b8271, __VMLINUX_SYMBOL_STR(__fsnotify_parent) },
	{ 0x817a744d, __VMLINUX_SYMBOL_STR(svc_xprt_put) },
	{ 0x12b68ac6, __VMLINUX_SYMBOL_STR(ftrace_event_reg) },
	{ 0xe0cbb8fc, __VMLINUX_SYMBOL_STR(simple_transaction_release) },
	{ 0x90b9cb1, __VMLINUX_SYMBOL_STR(svc_create_xprt) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xc69b8e83, __VMLINUX_SYMBOL_STR(rpc_pipe_generic_upcall) },
	{ 0x818d371c, __VMLINUX_SYMBOL_STR(mnt_drop_write_file) },
	{ 0xbbd76e57, __VMLINUX_SYMBOL_STR(bit_wait) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x387e1639, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_register) },
	{ 0x104dbd67, __VMLINUX_SYMBOL_STR(rpc_destroy_pipe_data) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x1a555549, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0x6da09d80, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xe16f31d9, __VMLINUX_SYMBOL_STR(vfs_fallocate) },
	{ 0xf9ae1099, __VMLINUX_SYMBOL_STR(mnt_want_write_file) },
	{ 0xedef0d8, __VMLINUX_SYMBOL_STR(exportfs_decode_fh) },
	{ 0xead64fda, __VMLINUX_SYMBOL_STR(cache_purge) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x529ab486, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x49374909, __VMLINUX_SYMBOL_STR(__module_put_and_exit) },
	{ 0x261a1cc5, __VMLINUX_SYMBOL_STR(svc_proc_register) },
	{ 0xa4b91958, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x50774b39, __VMLINUX_SYMBOL_STR(locks_in_grace) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xb75a04c1, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x95042ed7, __VMLINUX_SYMBOL_STR(rpc_put_sb_net) },
	{ 0xaa65541, __VMLINUX_SYMBOL_STR(inode_change_ok) },
	{ 0x9b53d771, __VMLINUX_SYMBOL_STR(rpc_sleep_on) },
	{ 0x6354ab98, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc83b4d5b, __VMLINUX_SYMBOL_STR(posix_acl_from_mode) },
	{ 0x31c58ba2, __VMLINUX_SYMBOL_STR(nfsacl_decode) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x65994f1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque_fixed) },
	{ 0xd354ed7b, __VMLINUX_SYMBOL_STR(simple_transaction_set) },
	{ 0x52e4a6a2, __VMLINUX_SYMBOL_STR(sync_inode_metadata) },
	{ 0x741ba340, __VMLINUX_SYMBOL_STR(ftrace_event_buffer_reserve) },
	{ 0x73a4c554, __VMLINUX_SYMBOL_STR(vfs_writev) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xef8d40e2, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0xe5919cb1, __VMLINUX_SYMBOL_STR(xdr_encode_opaque) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x4101836d, __VMLINUX_SYMBOL_STR(event_triggers_call) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf002facf, __VMLINUX_SYMBOL_STR(rpc_restart_call_prepare) },
	{ 0xe791da02, __VMLINUX_SYMBOL_STR(svc_shutdown_net) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x2f8ebbe0, __VMLINUX_SYMBOL_STR(rpc_ntop) },
	{ 0x42d0c1b, __VMLINUX_SYMBOL_STR(rpc_wake_up_queued_task) },
	{ 0x36bd681b, __VMLINUX_SYMBOL_STR(groups_alloc) },
	{ 0x390b3b05, __VMLINUX_SYMBOL_STR(rpc_pton) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x4acca4a, __VMLINUX_SYMBOL_STR(follow_down) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0xc48b6573, __VMLINUX_SYMBOL_STR(xdr_commit_encode) },
	{ 0xba6182ab, __VMLINUX_SYMBOL_STR(svc_exit_thread) },
	{ 0x85eca4f7, __VMLINUX_SYMBOL_STR(vfs_test_lock) },
	{ 0x6439b9f7, __VMLINUX_SYMBOL_STR(svc_max_payload) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x915539c8, __VMLINUX_SYMBOL_STR(simple_transaction_get) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x1fccfec8, __VMLINUX_SYMBOL_STR(follow_up) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc8c0b8b5, __VMLINUX_SYMBOL_STR(trace_event_raw_init) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x6df1aaf1, __VMLINUX_SYMBOL_STR(kernel_sigaction) },
	{ 0x9e61bb05, __VMLINUX_SYMBOL_STR(set_freezable) },
	{ 0xb0c5488d, __VMLINUX_SYMBOL_STR(fsnotify) },
	{ 0x5fe5589f, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0xc5e1dc88, __VMLINUX_SYMBOL_STR(svc_reserve) },
	{ 0x1ff6c8b8, __VMLINUX_SYMBOL_STR(perf_trace_buf_prepare) },
	{ 0xa9b6a43, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0xa9dc889d, __VMLINUX_SYMBOL_STR(abort_creds) },
	{ 0xbef19b17, __VMLINUX_SYMBOL_STR(lockd_up) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0xbc970f8a, __VMLINUX_SYMBOL_STR(lockd_down) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x986e1b56, __VMLINUX_SYMBOL_STR(read_bytes_from_xdr_buf) },
	{ 0x34c042f1, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x17ce645d, __VMLINUX_SYMBOL_STR(locks_end_grace) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xf4ebe4a8, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_sb) },
	{ 0xb51a3724, __VMLINUX_SYMBOL_STR(rpc_pipefs_notifier_unregister) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x93508da8, __VMLINUX_SYMBOL_STR(cache_create_net) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x26861c3a, __VMLINUX_SYMBOL_STR(xdr_inline_decode) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc5084bee, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xb74b34cd, __VMLINUX_SYMBOL_STR(svc_recv) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x3c93ea25, __VMLINUX_SYMBOL_STR(trace_seq_printf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x1782c049, __VMLINUX_SYMBOL_STR(__break_lease) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x317b4707, __VMLINUX_SYMBOL_STR(auth_domain_find) },
	{ 0x255f7b9e, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xd3611eab, __VMLINUX_SYMBOL_STR(svc_bind) },
	{ 0x28702c73, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0x52270511, __VMLINUX_SYMBOL_STR(rpc_shutdown_client) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xe0ffa160, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x4aceda91, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x2919b156, __VMLINUX_SYMBOL_STR(xdr_decode_string_inplace) },
	{ 0x27fa66e1, __VMLINUX_SYMBOL_STR(nr_free_buffer_pages) },
	{ 0x45a7f03f, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0xe6f6f038, __VMLINUX_SYMBOL_STR(ftrace_raw_output_prep) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x69f123ee, __VMLINUX_SYMBOL_STR(svc_close_xprt) },
	{ 0xae0f09a, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x532892f4, __VMLINUX_SYMBOL_STR(rpc_create_xprt) },
	{ 0x983e2233, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
	{ 0xb859f38b, __VMLINUX_SYMBOL_STR(krealloc) },
	{ 0x815fce5f, __VMLINUX_SYMBOL_STR(seq_path) },
	{ 0x77e35ccc, __VMLINUX_SYMBOL_STR(nlmsvc_unlock_all_by_ip) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x943b88f9, __VMLINUX_SYMBOL_STR(locks_mandatory_area) },
	{ 0xa61dd302, __VMLINUX_SYMBOL_STR(filp_open) },
	{ 0xef464c28, __VMLINUX_SYMBOL_STR(getboottime64) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1666DEBA16902B1B020BDA0");
