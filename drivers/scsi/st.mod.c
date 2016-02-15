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
	{ 0x8288a96b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xf2318181, __VMLINUX_SYMBOL_STR(class_unregister) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xae2fd7cb, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0x85dabfc9, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0xbf7a1a14, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0x4caf4b7f, __VMLINUX_SYMBOL_STR(__class_register) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x2f473659, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x9acc8a20, __VMLINUX_SYMBOL_STR(scsi_cmd_ioctl) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xcf55d643, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x8fb21836, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0x1cd384b, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0xcc5005fe, __VMLINUX_SYMBOL_STR(msleep_interruptible) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x334da4e, __VMLINUX_SYMBOL_STR(scsi_command_size_tbl) },
	{ 0x7663ff1, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0x62d1aa18, __VMLINUX_SYMBOL_STR(blk_execute_rq_nowait) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2019bcd8, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xc4bd9230, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x6f65e887, __VMLINUX_SYMBOL_STR(blk_get_request) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x88ed9630, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x58caa46d, __VMLINUX_SYMBOL_STR(get_user_pages_unlocked) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0xda992c55, __VMLINUX_SYMBOL_STR(__blk_put_request) },
	{ 0x6930b449, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x2b0ba2b0, __VMLINUX_SYMBOL_STR(scsi_sense_desc_find) },
	{ 0x796fc5ce, __VMLINUX_SYMBOL_STR(scsi_get_sense_info_fld) },
	{ 0x41207b93, __VMLINUX_SYMBOL_STR(__scsi_print_sense) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x73b636aa, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0xf10be50d, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x990ce59b, __VMLINUX_SYMBOL_STR(blk_put_queue) },
	{ 0xfc906ab1, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x838f75ab, __VMLINUX_SYMBOL_STR(sysfs_create_link) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x14143510, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0x8142d1d7, __VMLINUX_SYMBOL_STR(blk_get_queue) },
	{ 0xfc103777, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6b36cb9, __VMLINUX_SYMBOL_STR(device_create) },
	{ 0x22183e2a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3f728273, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1d4792f8, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x43e84308, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0xf2e7ef0f, __VMLINUX_SYMBOL_STR(sysfs_remove_link) },
	{ 0x5f413c97, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7a084a57, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "BD28731429BA29158661D92");
