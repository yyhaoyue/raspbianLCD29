#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xd99c3639, __VMLINUX_SYMBOL_STR(blk_init_queue) },
	{ 0xfc103777, __VMLINUX_SYMBOL_STR(alloc_disk) },
	{ 0xc18b905, __VMLINUX_SYMBOL_STR(blk_cleanup_queue) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x9956344b, __VMLINUX_SYMBOL_STR(mtd_table_mutex) },
	{ 0x350f2c97, __VMLINUX_SYMBOL_STR(rq_flush_dcache_pages) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x710bb44e, __VMLINUX_SYMBOL_STR(__put_mtd_device) },
	{ 0xf1bd21ef, __VMLINUX_SYMBOL_STR(blk_queue_flush) },
	{ 0xe52ea577, __VMLINUX_SYMBOL_STR(blk_start_queue) },
	{ 0x7e75c8f2, __VMLINUX_SYMBOL_STR(__get_mtd_device) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xb18e9216, __VMLINUX_SYMBOL_STR(mutex_trylock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0x57a6c34f, __VMLINUX_SYMBOL_STR(del_gendisk) },
	{ 0x4a2645fd, __VMLINUX_SYMBOL_STR(register_mtd_user) },
	{ 0x3c81f918, __VMLINUX_SYMBOL_STR(__mtd_next_device) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x71a50dbc, __VMLINUX_SYMBOL_STR(register_blkdev) },
	{ 0xeb55b8c6, __VMLINUX_SYMBOL_STR(unregister_mtd_user) },
	{ 0xb5a459dc, __VMLINUX_SYMBOL_STR(unregister_blkdev) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5f413c97, __VMLINUX_SYMBOL_STR(put_disk) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xaa9ca58d, __VMLINUX_SYMBOL_STR(__blk_end_request_cur) },
	{ 0x46a03ac6, __VMLINUX_SYMBOL_STR(blk_fetch_request) },
	{ 0xa02a83d3, __VMLINUX_SYMBOL_STR(__blk_end_request_all) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6c2591be, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6048f45f, __VMLINUX_SYMBOL_STR(add_disk) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xeea29d86, __VMLINUX_SYMBOL_STR(blk_queue_logical_block_size) },
	{ 0x45710115, __VMLINUX_SYMBOL_STR(set_disk_ro) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mtd";


MODULE_INFO(srcversion, "79E56F5E60F9C4C333E97D7");
