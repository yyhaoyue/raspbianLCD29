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
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x7a60ac48, __VMLINUX_SYMBOL_STR(async_raid6_datap_recov) },
	{ 0xc394de29, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0x4170c6a, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd0ee38b8, __VMLINUX_SYMBOL_STR(schedule_timeout_uninterruptible) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0xc7a1840e, __VMLINUX_SYMBOL_STR(llist_add_batch) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x7aac02e0, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0xf19e9355, __VMLINUX_SYMBOL_STR(cpu_online_mask) },
	{ 0xdd1f7845, __VMLINUX_SYMBOL_STR(mddev_suspend) },
	{ 0x52212010, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_remap) },
	{ 0x6b9b1856, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0xf2bae54b, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x67bfbf5, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0xa1bd7822, __VMLINUX_SYMBOL_STR(__tracepoint_block_bio_complete) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xacf7679, __VMLINUX_SYMBOL_STR(dma_issue_pending_all) },
	{ 0x98bec010, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0x3365b271, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x65ebadfc, __VMLINUX_SYMBOL_STR(async_syndrome_val) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb0cc388e, __VMLINUX_SYMBOL_STR(md_new_event) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa28edd1c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa9b6da83, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xb18e9216, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x962b7f5, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0xd4d7a32, __VMLINUX_SYMBOL_STR(_atomic_dec_and_lock) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x6e035a6b, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x2dbaa0b1, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd4cb6873, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x30b015e, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x89080fdf, __VMLINUX_SYMBOL_STR(bio_init) },
	{ 0x8d172aba, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xab9982cf, __VMLINUX_SYMBOL_STR(md_do_sync) },
	{ 0xfe5ec6c3, __VMLINUX_SYMBOL_STR(async_raid6_2data_recov) },
	{ 0x7f383d68, __VMLINUX_SYMBOL_STR(async_trigger_callback) },
	{ 0x6fde4db1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xba49ef0d, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x6c749afe, __VMLINUX_SYMBOL_STR(__tracepoint_block_unplug) },
	{ 0xfbbcc76f, __VMLINUX_SYMBOL_STR(mddev_unlock) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x465757c3, __VMLINUX_SYMBOL_STR(cpu_present_mask) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xd85a8064, __VMLINUX_SYMBOL_STR(async_memcpy) },
	{ 0xb5bf51a7, __VMLINUX_SYMBOL_STR(blk_recount_segments) },
	{ 0xa115fb86, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x524dcf52, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0xa37e78b6, __VMLINUX_SYMBOL_STR(flex_array_get) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x23e3c1bb, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xc84b9aa2, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xd17b868e, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0x74694d3f, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x838f75ab, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0x87726c5, __VMLINUX_SYMBOL_STR(async_xor_val) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xda59f4cf, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x5390f807, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0x1a555549, __VMLINUX_SYMBOL_STR(unregister_shrinker) },
	{ 0xddb1cd7, __VMLINUX_SYMBOL_STR(llist_reverse_order) },
	{ 0xa8e741a9, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x8c2564fd, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0xf427dc29, __VMLINUX_SYMBOL_STR(__trace_note_message) },
	{ 0xc96b5030, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x49e5b91b, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xea95e534, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x7e01b0a, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0xc96af760, __VMLINUX_SYMBOL_STR(sysfs_notify) },
	{ 0xd204ab8c, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x3069c533, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x7a4b576, __VMLINUX_SYMBOL_STR(flex_array_free) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x9c77a82c, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x4318d9bb, __VMLINUX_SYMBOL_STR(async_gen_syndrome) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x8eb068bf, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0x5fe5589f, __VMLINUX_SYMBOL_STR(register_shrinker) },
	{ 0x6371bcfd, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x13315729, __VMLINUX_SYMBOL_STR(flex_array_alloc) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x71f48bd8, __VMLINUX_SYMBOL_STR(mddev_resume) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x43f77295, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0xac38b83, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x9fd7cda1, __VMLINUX_SYMBOL_STR(flex_array_prealloc) },
	{ 0x46397306, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_raid6_recov,md-mod,async_pq,raid6_pq,async_tx,async_memcpy,async_xor";


MODULE_INFO(srcversion, "EC31A94230986F4C9F17E2C");
