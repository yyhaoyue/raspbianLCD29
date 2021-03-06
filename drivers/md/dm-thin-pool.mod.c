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
	{ 0x150c85ce, __VMLINUX_SYMBOL_STR(dm_tm_open_with_sm) },
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x40f7bd91, __VMLINUX_SYMBOL_STR(dm_tm_inc) },
	{ 0x3646e38f, __VMLINUX_SYMBOL_STR(dm_tm_issue_prefetches) },
	{ 0xde7148de, __VMLINUX_SYMBOL_STR(dm_cell_visit_release) },
	{ 0x7deff673, __VMLINUX_SYMBOL_STR(dm_consume_args) },
	{ 0xb7bad799, __VMLINUX_SYMBOL_STR(dm_bm_unlock) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0xed1e1f96, __VMLINUX_SYMBOL_STR(dm_btree_remove) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xdb1e60ff, __VMLINUX_SYMBOL_STR(dm_get_device) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0xd75f42b2, __VMLINUX_SYMBOL_STR(blk_limits_io_opt) },
	{ 0x43f23311, __VMLINUX_SYMBOL_STR(dm_table_get_md) },
	{ 0x6d0f1f89, __VMLINUX_SYMBOL_STR(dm_table_get_mode) },
	{ 0x1445176, __VMLINUX_SYMBOL_STR(dm_btree_find_highest_key) },
	{ 0x688d422d, __VMLINUX_SYMBOL_STR(dm_bm_block_size) },
	{ 0xd52efd57, __VMLINUX_SYMBOL_STR(dm_bio_prison_free_cell) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x154c6338, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_destroy) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x80c89b3d, __VMLINUX_SYMBOL_STR(dm_tm_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x974c1e3c, __VMLINUX_SYMBOL_STR(dm_register_target) },
	{ 0x1775db1f, __VMLINUX_SYMBOL_STR(dm_kcopyd_copy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x118a5e56, __VMLINUX_SYMBOL_STR(blk_limits_io_min) },
	{ 0xd163cade, __VMLINUX_SYMBOL_STR(dm_tm_commit) },
	{ 0x6791a44e, __VMLINUX_SYMBOL_STR(dm_deferred_entry_dec) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x33c03da6, __VMLINUX_SYMBOL_STR(dm_sm_disk_open) },
	{ 0x31c0c2d1, __VMLINUX_SYMBOL_STR(dm_put) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0xaee02382, __VMLINUX_SYMBOL_STR(dm_btree_empty) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xb70b342a, __VMLINUX_SYMBOL_STR(dm_bio_prison_destroy) },
	{ 0x36705204, __VMLINUX_SYMBOL_STR(dm_cell_release) },
	{ 0x183fa88b, __VMLINUX_SYMBOL_STR(mempool_alloc_slab) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xe04f7caa, __VMLINUX_SYMBOL_STR(dm_read_arg_group) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x60ea2d6, __VMLINUX_SYMBOL_STR(kstrtoull) },
	{ 0xad84bef8, __VMLINUX_SYMBOL_STR(dm_table_event) },
	{ 0x3cfa8a60, __VMLINUX_SYMBOL_STR(dm_kcopyd_zero) },
	{ 0x2f40da68, __VMLINUX_SYMBOL_STR(dm_bm_set_read_write) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x97e030ac, __VMLINUX_SYMBOL_STR(dm_set_target_max_io_len) },
	{ 0x2e730a21, __VMLINUX_SYMBOL_STR(dm_bm_checksum) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x796c2d48, __VMLINUX_SYMBOL_STR(dm_get_md) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x72289260, __VMLINUX_SYMBOL_STR(dm_block_manager_destroy) },
	{ 0x19f5809b, __VMLINUX_SYMBOL_STR(dm_ratelimit_state) },
	{ 0x30ceade4, __VMLINUX_SYMBOL_STR(dm_internal_resume) },
	{ 0xdcacdd7d, __VMLINUX_SYMBOL_STR(dm_unregister_target) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0xca2e3a88, __VMLINUX_SYMBOL_STR(dm_deferred_entry_inc) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x5eb24829, __VMLINUX_SYMBOL_STR(dm_shift_arg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x9b4b5b29, __VMLINUX_SYMBOL_STR(dm_bm_write_lock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x551868ef, __VMLINUX_SYMBOL_STR(dm_suspended) },
	{ 0xa115fb86, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x8a99a016, __VMLINUX_SYMBOL_STR(mempool_free_slab) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x9e798e22, __VMLINUX_SYMBOL_STR(dm_bm_set_read_only) },
	{ 0x4fbebe02, __VMLINUX_SYMBOL_STR(dm_bio_prison_alloc_cell) },
	{ 0x23e3c1bb, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0x7b047bd9, __VMLINUX_SYMBOL_STR(dm_tm_create_non_blocking_clone) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x7ade1071, __VMLINUX_SYMBOL_STR(dm_tm_destroy) },
	{ 0x966a8838, __VMLINUX_SYMBOL_STR(dm_btree_lookup) },
	{ 0xb9a6ecf8, __VMLINUX_SYMBOL_STR(dm_tm_dec) },
	{ 0xead1e727, __VMLINUX_SYMBOL_STR(dm_bm_write_lock_zero) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x4cfa7238, __VMLINUX_SYMBOL_STR(dm_cell_release_no_holder) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0x619701dc, __VMLINUX_SYMBOL_STR(dm_sm_disk_create) },
	{ 0x8c2564fd, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xbe0497aa, __VMLINUX_SYMBOL_STR(dm_tm_create_with_sm) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x11eab9fe, __VMLINUX_SYMBOL_STR(dm_bm_read_lock) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x89f1e1cc, __VMLINUX_SYMBOL_STR(dm_btree_insert_notify) },
	{ 0xd688716b, __VMLINUX_SYMBOL_STR(dm_kcopyd_client_create) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x2eb01e04, __VMLINUX_SYMBOL_STR(dm_deferred_set_destroy) },
	{ 0x16000a3c, __VMLINUX_SYMBOL_STR(dm_device_name) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x54f69d, __VMLINUX_SYMBOL_STR(dm_tm_pre_commit) },
	{ 0x4781a7e0, __VMLINUX_SYMBOL_STR(dm_cell_error) },
	{ 0x2c112836, __VMLINUX_SYMBOL_STR(dm_block_location) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa2507774, __VMLINUX_SYMBOL_STR(dm_tm_shadow_block) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb6d5c65d, __VMLINUX_SYMBOL_STR(dm_deferred_set_add_work) },
	{ 0xbee21107, __VMLINUX_SYMBOL_STR(dm_internal_suspend_noflush) },
	{ 0xbd50ebbb, __VMLINUX_SYMBOL_STR(dm_btree_del) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x753e20b2, __VMLINUX_SYMBOL_STR(dm_bio_prison_create) },
	{ 0x577be924, __VMLINUX_SYMBOL_STR(dm_block_manager_create) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x2c7c8f3a, __VMLINUX_SYMBOL_STR(dm_put_device) },
	{ 0xa7e7b916, __VMLINUX_SYMBOL_STR(dm_noflush_suspending) },
	{ 0x1e3f728d, __VMLINUX_SYMBOL_STR(dm_block_data) },
	{ 0xbcfdc290, __VMLINUX_SYMBOL_STR(dm_tm_read_lock) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xca40abd5, __VMLINUX_SYMBOL_STR(dm_btree_insert) },
	{ 0xb1425b32, __VMLINUX_SYMBOL_STR(dm_table_add_target_callbacks) },
	{ 0x558ebd03, __VMLINUX_SYMBOL_STR(zero_fill_bio) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x17dd39d6, __VMLINUX_SYMBOL_STR(dm_deferred_set_create) },
	{ 0xa5e934cb, __VMLINUX_SYMBOL_STR(dm_bio_detain) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dm-persistent-data,dm-bio-prison,dm-mod";


MODULE_INFO(srcversion, "2756B0C5E05B96CA54DCE74");
