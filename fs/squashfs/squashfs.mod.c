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
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0xe70164a5, __VMLINUX_SYMBOL_STR(iget_failed) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x9612dde8, __VMLINUX_SYMBOL_STR(sb_min_blocksize) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x655c9387, __VMLINUX_SYMBOL_STR(generic_getxattr) },
	{ 0x107e5878, __VMLINUX_SYMBOL_STR(zlib_inflateEnd) },
	{ 0xd2966647, __VMLINUX_SYMBOL_STR(make_bad_inode) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x527af331, __VMLINUX_SYMBOL_STR(pagecache_get_page) },
	{ 0x4681046f, __VMLINUX_SYMBOL_STR(ll_rw_block) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x8ba9972d, __VMLINUX_SYMBOL_STR(mount_bdev) },
	{ 0xfa380bfa, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xede24b01, __VMLINUX_SYMBOL_STR(__getblk_gfp) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xc9f09a2b, __VMLINUX_SYMBOL_STR(__insert_inode_hash) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc20bee20, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x7ae7ca53, __VMLINUX_SYMBOL_STR(__bread_gfp) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xfbf7cf0c, __VMLINUX_SYMBOL_STR(d_obtain_alias) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xce5ac24f, __VMLINUX_SYMBOL_STR(zlib_inflate_workspacesize) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfb991ac, __VMLINUX_SYMBOL_STR(set_nlink) },
	{ 0x763f9a85, __VMLINUX_SYMBOL_STR(__wait_on_buffer) },
	{ 0x65dccf13, __VMLINUX_SYMBOL_STR(xz_dec_end) },
	{ 0x748f50ac, __VMLINUX_SYMBOL_STR(generic_ro_fops) },
	{ 0x541ca562, __VMLINUX_SYMBOL_STR(unlock_page) },
	{ 0x581f98da, __VMLINUX_SYMBOL_STR(zlib_inflate) },
	{ 0x15817203, __VMLINUX_SYMBOL_STR(inode_init_once) },
	{ 0xed99bf78, __VMLINUX_SYMBOL_STR(page_follow_link_light) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xf9348cbc, __VMLINUX_SYMBOL_STR(xz_dec_run) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x8c2564fd, __VMLINUX_SYMBOL_STR(bdevname) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd7474240, __VMLINUX_SYMBOL_STR(unlock_new_inode) },
	{ 0x62dfd974, __VMLINUX_SYMBOL_STR(kill_block_super) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x35a88f28, __VMLINUX_SYMBOL_STR(zlib_inflateInit2) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xa07ed110, __VMLINUX_SYMBOL_STR(xz_dec_init) },
	{ 0x7f1ef61, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xe1f8b07e, __VMLINUX_SYMBOL_STR(d_splice_alias) },
	{ 0x666458e2, __VMLINUX_SYMBOL_STR(sync_filesystem) },
	{ 0x20d4aa7d, __VMLINUX_SYMBOL_STR(generic_readlink) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x827ace7d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0xf30fda27, __VMLINUX_SYMBOL_STR(lzo1x_decompress_safe) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x81db6ebb, __VMLINUX_SYMBOL_STR(xz_dec_reset) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xd2a1a1c9, __VMLINUX_SYMBOL_STR(init_special_inode) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x5479224a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0xa3db1a8b, __VMLINUX_SYMBOL_STR(page_put_link) },
	{ 0x88ed9630, __VMLINUX_SYMBOL_STR(flush_dcache_page) },
	{ 0xee89764f, __VMLINUX_SYMBOL_STR(iget_locked) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3F433C16E3F7D2F0E814920");
