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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc4bd9230, __VMLINUX_SYMBOL_STR(blk_rq_set_block_pc) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x3fab3ca9, __VMLINUX_SYMBOL_STR(register_sysctl_table) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x7663ff1, __VMLINUX_SYMBOL_STR(blk_put_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd9638337, __VMLINUX_SYMBOL_STR(scsi_cmd_blk_ioctl) },
	{ 0x6930b449, __VMLINUX_SYMBOL_STR(blk_rq_unmap_user) },
	{ 0xcc82ddfe, __VMLINUX_SYMBOL_STR(invalidate_bdev) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x20557a3e, __VMLINUX_SYMBOL_STR(check_disk_change) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2019bcd8, __VMLINUX_SYMBOL_STR(blk_rq_map_user) },
	{ 0xeed3635b, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xe912da6b, __VMLINUX_SYMBOL_STR(unregister_sysctl_table) },
	{ 0x8cc84d7c, __VMLINUX_SYMBOL_STR(blk_execute_rq) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf9e73082, __VMLINUX_SYMBOL_STR(scnprintf) },
	{ 0x6f65e887, __VMLINUX_SYMBOL_STR(blk_get_request) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "643D8D190B2C19E45D6BDE6");
