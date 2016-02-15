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
	{ 0xf4d9786c, __VMLINUX_SYMBOL_STR(vfs_create) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xeb843533, __VMLINUX_SYMBOL_STR(kill_anon_super) },
	{ 0x5ca90b12, __VMLINUX_SYMBOL_STR(dget_parent) },
	{ 0x3a3926b5, __VMLINUX_SYMBOL_STR(vfs_link) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x8936eb0, __VMLINUX_SYMBOL_STR(seq_escape) },
	{ 0xacf4d843, __VMLINUX_SYMBOL_STR(match_strdup) },
	{ 0x42a156d9, __VMLINUX_SYMBOL_STR(vfs_llseek) },
	{ 0x4e8a366b, __VMLINUX_SYMBOL_STR(touch_atime) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0xe225581b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x44e9a829, __VMLINUX_SYMBOL_STR(match_token) },
	{ 0xe7d31d49, __VMLINUX_SYMBOL_STR(dentry_open) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5b169662, __VMLINUX_SYMBOL_STR(vfs_mknod) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa380bfa, __VMLINUX_SYMBOL_STR(generic_read_dir) },
	{ 0xc0c626c4, __VMLINUX_SYMBOL_STR(vfs_symlink) },
	{ 0x3f24a53, __VMLINUX_SYMBOL_STR(mount_nodev) },
	{ 0x3d896b7f, __VMLINUX_SYMBOL_STR(override_creds) },
	{ 0xc499ae1e, __VMLINUX_SYMBOL_STR(kstrdup) },
	{ 0x494ebac8, __VMLINUX_SYMBOL_STR(mnt_drop_write) },
	{ 0xce2acf26, __VMLINUX_SYMBOL_STR(mutex_lock_killable) },
	{ 0x82753db6, __VMLINUX_SYMBOL_STR(vfs_rmdir) },
	{ 0x22a95459, __VMLINUX_SYMBOL_STR(unlock_rename) },
	{ 0xdb2bea4c, __VMLINUX_SYMBOL_STR(kern_path) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf5e16a71, __VMLINUX_SYMBOL_STR(d_rehash) },
	{ 0x7cf7320e, __VMLINUX_SYMBOL_STR(vfs_getxattr) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xc92b08d3, __VMLINUX_SYMBOL_STR(lock_rename) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xdfdbbeb0, __VMLINUX_SYMBOL_STR(vfs_whiteout) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xee1ea9df, __VMLINUX_SYMBOL_STR(prepare_creds) },
	{ 0xf110d208, __VMLINUX_SYMBOL_STR(mntput) },
	{ 0x6fe2d1c, __VMLINUX_SYMBOL_STR(__check_sticky) },
	{ 0x6da09d80, __VMLINUX_SYMBOL_STR(mnt_want_write) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x9c0d4159, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x529ab486, __VMLINUX_SYMBOL_STR(vfs_statfs) },
	{ 0xa4b91958, __VMLINUX_SYMBOL_STR(vfs_mkdir) },
	{ 0xb75a04c1, __VMLINUX_SYMBOL_STR(__put_cred) },
	{ 0x6354ab98, __VMLINUX_SYMBOL_STR(path_put) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xef8d40e2, __VMLINUX_SYMBOL_STR(vfs_unlink) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x141003b4, __VMLINUX_SYMBOL_STR(do_splice_direct) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x7f1ef61, __VMLINUX_SYMBOL_STR(iput) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2961826, __VMLINUX_SYMBOL_STR(d_find_any_alias) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4741d882, __VMLINUX_SYMBOL_STR(__inode_permission) },
	{ 0x827ace7d, __VMLINUX_SYMBOL_STR(d_make_root) },
	{ 0x34c042f1, __VMLINUX_SYMBOL_STR(iterate_dir) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x5479224a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x255f7b9e, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0x32472605, __VMLINUX_SYMBOL_STR(clone_private_mount) },
	{ 0x28702c73, __VMLINUX_SYMBOL_STR(vfs_rename) },
	{ 0xe0ffa160, __VMLINUX_SYMBOL_STR(vfs_getattr) },
	{ 0x45a7f03f, __VMLINUX_SYMBOL_STR(notify_change) },
	{ 0x9b32711, __VMLINUX_SYMBOL_STR(vfs_setxattr) },
	{ 0xfa7ddd8a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0xae0f09a, __VMLINUX_SYMBOL_STR(revert_creds) },
	{ 0xe92c694d, __VMLINUX_SYMBOL_STR(vfs_listxattr) },
	{ 0x5cd7b9dd, __VMLINUX_SYMBOL_STR(vfs_removexattr) },
	{ 0x983e2233, __VMLINUX_SYMBOL_STR(vfs_fsync_range) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0821282FE9556F57D6A4998");
