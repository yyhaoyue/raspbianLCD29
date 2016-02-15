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
	{ 0xf10be50d, __VMLINUX_SYMBOL_STR(scsi_set_medium_removal) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x14143510, __VMLINUX_SYMBOL_STR(blk_queue_rq_timeout) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfc103777, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xb7488905, __VMLINUX_SYMBOL_STR(scsi_normalize_sense) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa9b27631, __VMLINUX_SYMBOL_STR(cdrom_number_of_slots) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x38d373d1, __VMLINUX_SYMBOL_STR(scsi_execute_req_flags) },
	{ 0xcf55d643, __VMLINUX_SYMBOL_STR(scsi_ioctl_block_when_processing_errors) },
	{ 0x497ed8cb, __VMLINUX_SYMBOL_STR(unregister_cdrom) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x3420311b, __VMLINUX_SYMBOL_STR(blk_dump_rq_flags) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x26850145, __VMLINUX_SYMBOL_STR(scmd_printk) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7288c3f3, __VMLINUX_SYMBOL_STR(cdrom_open) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x955dd274, __VMLINUX_SYMBOL_STR(scsi_execute) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf572c1db, __VMLINUX_SYMBOL_STR(cdrom_release) },
	{ 0x57a6c34f, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0xfc906ab1, __VMLINUX_SYMBOL_STR(sdev_prefix_printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x41436064, __VMLINUX_SYMBOL_STR(cdrom_get_media_event) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0x8b934755, __VMLINUX_SYMBOL_STR(cdrom_check_events) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0x8df0e0e5, __VMLINUX_SYMBOL_STR(cdrom_get_last_written) },
	{ 0x73b636aa, __VMLINUX_SYMBOL_STR(scsi_device_put) },
	{ 0x2f473659, __VMLINUX_SYMBOL_STR(scsi_ioctl) },
	{ 0x5f413c97, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0xbf7a1a14, __VMLINUX_SYMBOL_STR(scsi_register_driver) },
	{ 0x8fb21836, __VMLINUX_SYMBOL_STR(scsi_block_when_processing_errors) },
	{ 0xe76b3d07, __VMLINUX_SYMBOL_STR(scsi_test_unit_ready) },
	{ 0x671a3fc1, __VMLINUX_SYMBOL_STR(scsi_init_io) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6048f45f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xd240716e, __VMLINUX_SYMBOL_STR(cdrom_ioctl) },
	{ 0xd7d8e260, __VMLINUX_SYMBOL_STR(register_cdrom) },
	{ 0x1cd384b, __VMLINUX_SYMBOL_STR(scsi_device_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xeea29d86, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x2a45d780, __VMLINUX_SYMBOL_STR(scsi_mode_sense) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cdrom";


MODULE_INFO(srcversion, "C04FE78DA2D5E88EB8D3AFA");
