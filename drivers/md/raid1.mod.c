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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xa28edd1c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xac38b83, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x524dcf52, __VMLINUX_SYMBOL_STR(md_wait_for_blocked_rdev) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xd17b868e, __VMLINUX_SYMBOL_STR(flush_signals) },
	{ 0xd27b25dd, __VMLINUX_SYMBOL_STR(blk_check_plugged) },
	{ 0x8eb068bf, __VMLINUX_SYMBOL_STR(bitmap_startwrite) },
	{ 0xa8e741a9, __VMLINUX_SYMBOL_STR(md_write_start) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x7376cd8d, __VMLINUX_SYMBOL_STR(bio_copy_data) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbd9074b1, __VMLINUX_SYMBOL_STR(blk_finish_plug) },
	{ 0xb5db70d4, __VMLINUX_SYMBOL_STR(submit_bio_wait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x91f8f033, __VMLINUX_SYMBOL_STR(bio_alloc_mddev) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x49e5b91b, __VMLINUX_SYMBOL_STR(rdev_clear_badblocks) },
	{ 0x7d705738, __VMLINUX_SYMBOL_STR(blk_start_plug) },
	{ 0x6b9b1856, __VMLINUX_SYMBOL_STR(md_check_recovery) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xef33ff6, __VMLINUX_SYMBOL_STR(bio_trim) },
	{ 0x7aac02e0, __VMLINUX_SYMBOL_STR(bio_clone_mddev) },
	{ 0x6371bcfd, __VMLINUX_SYMBOL_STR(md_error) },
	{ 0x9af1de05, __VMLINUX_SYMBOL_STR(sync_page_io) },
	{ 0x74694d3f, __VMLINUX_SYMBOL_STR(md_done_sync) },
	{ 0x9c77a82c, __VMLINUX_SYMBOL_STR(md_unregister_thread) },
	{ 0x43f77295, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x6fde4db1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xbbb661c6, __VMLINUX_SYMBOL_STR(md_integrity_add_rdev) },
	{ 0x662d5786, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x3069c533, __VMLINUX_SYMBOL_STR(kernfs_notify) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x7a084a57, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x115b9e99, __VMLINUX_SYMBOL_STR(bio_alloc_pages) },
	{ 0x8c8da825, __VMLINUX_SYMBOL_STR(bio_alloc_bioset) },
	{ 0x4170c6a, __VMLINUX_SYMBOL_STR(rdev_set_badblocks) },
	{ 0x46397306, __VMLINUX_SYMBOL_STR(bitmap_end_sync) },
	{ 0x710c9bce, __VMLINUX_SYMBOL_STR(bio_add_page) },
	{ 0x6e035a6b, __VMLINUX_SYMBOL_STR(bio_reset) },
	{ 0x3026722, __VMLINUX_SYMBOL_STR(mempool_alloc) },
	{ 0xda59f4cf, __VMLINUX_SYMBOL_STR(bitmap_cond_end_sync) },
	{ 0x2dbaa0b1, __VMLINUX_SYMBOL_STR(bitmap_start_sync) },
	{ 0xba49ef0d, __VMLINUX_SYMBOL_STR(bitmap_close_sync) },
	{ 0xa9b6da83, __VMLINUX_SYMBOL_STR(revalidate_disk) },
	{ 0x7e01b0a, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x962b7f5, __VMLINUX_SYMBOL_STR(bitmap_resize) },
	{ 0x838f75ab, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0xf2e7ef0f, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xea95e534, __VMLINUX_SYMBOL_STR(md_allow_write) },
	{ 0x67bfbf5, __VMLINUX_SYMBOL_STR(md_write_end) },
	{ 0x98bec010, __VMLINUX_SYMBOL_STR(bitmap_endwrite) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xa58fea9d, __VMLINUX_SYMBOL_STR(mempool_destroy) },
	{ 0x30b015e, __VMLINUX_SYMBOL_STR(md_register_thread) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x2b4e956e, __VMLINUX_SYMBOL_STR(mempool_create) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xc84b9aa2, __VMLINUX_SYMBOL_STR(bio_put) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8c2564fd, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x70651908, __VMLINUX_SYMBOL_STR(md_cluster_ops) },
	{ 0xd2260e3, __VMLINUX_SYMBOL_STR(md_is_badblock) },
	{ 0x2232a8a5, __VMLINUX_SYMBOL_STR(mempool_free) },
	{ 0xd204ab8c, __VMLINUX_SYMBOL_STR(md_wakeup_thread) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x23e3c1bb, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xa115fb86, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x3365b271, __VMLINUX_SYMBOL_STR(bitmap_unplug) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "3D60FEA5D0AA255D561B504");
