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
	{ 0xa28edd1c, __VMLINUX_SYMBOL_STR(unregister_md_personality) },
	{ 0xac38b83, __VMLINUX_SYMBOL_STR(register_md_personality) },
	{ 0x2729bb78, __VMLINUX_SYMBOL_STR(fs_bio_set) },
	{ 0x8d172aba, __VMLINUX_SYMBOL_STR(md_flush_request) },
	{ 0x23e3c1bb, __VMLINUX_SYMBOL_STR(bio_endio) },
	{ 0xbf61888e, __VMLINUX_SYMBOL_STR(bio_chain) },
	{ 0x12f2377c, __VMLINUX_SYMBOL_STR(bio_split) },
	{ 0xa115fb86, __VMLINUX_SYMBOL_STR(generic_make_request) },
	{ 0x662d5786, __VMLINUX_SYMBOL_STR(md_integrity_register) },
	{ 0x7e01b0a, __VMLINUX_SYMBOL_STR(md_set_array_sectors) },
	{ 0x6fde4db1, __VMLINUX_SYMBOL_STR(disk_stack_limits) },
	{ 0xc394de29, __VMLINUX_SYMBOL_STR(blk_queue_io_opt) },
	{ 0xf2bae54b, __VMLINUX_SYMBOL_STR(blk_queue_io_min) },
	{ 0x2c3fdc64, __VMLINUX_SYMBOL_STR(blk_queue_max_discard_sectors) },
	{ 0x43f77295, __VMLINUX_SYMBOL_STR(blk_queue_max_write_same_sectors) },
	{ 0x53814c5e, __VMLINUX_SYMBOL_STR(blk_queue_max_hw_sectors) },
	{ 0x647b4384, __VMLINUX_SYMBOL_STR(md_check_no_bitmap) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x8c2564fd, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=md-mod";


MODULE_INFO(srcversion, "24D7BFB3CD0A81982FDBB18");
