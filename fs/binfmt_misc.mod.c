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
	{ 0x9d73e35e, __VMLINUX_SYMBOL_STR(kill_litter_super) },
	{ 0x8288a96b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xc20bee20, __VMLINUX_SYMBOL_STR(default_llseek) },
	{ 0x454f7448, __VMLINUX_SYMBOL_STR(simple_statfs) },
	{ 0x28a6ece5, __VMLINUX_SYMBOL_STR(unregister_filesystem) },
	{ 0x894924b3, __VMLINUX_SYMBOL_STR(unregister_binfmt) },
	{ 0xba37b8b1, __VMLINUX_SYMBOL_STR(__register_binfmt) },
	{ 0x14f37280, __VMLINUX_SYMBOL_STR(register_filesystem) },
	{ 0x7f1ef61, __VMLINUX_SYMBOL_STR(iput) },
	{ 0xfa7ddd8a, __VMLINUX_SYMBOL_STR(d_instantiate) },
	{ 0x76be5adf, __VMLINUX_SYMBOL_STR(simple_pin_fs) },
	{ 0xeb46fb6b, __VMLINUX_SYMBOL_STR(current_fs_time) },
	{ 0xe953b21f, __VMLINUX_SYMBOL_STR(get_next_ino) },
	{ 0x5479224a, __VMLINUX_SYMBOL_STR(new_inode) },
	{ 0x255f7b9e, __VMLINUX_SYMBOL_STR(lookup_one_len) },
	{ 0xc8339e24, __VMLINUX_SYMBOL_STR(string_unescape) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdc49e19, __VMLINUX_SYMBOL_STR(lockref_get) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x4302d0eb, __VMLINUX_SYMBOL_STR(free_pages) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xdc1a78c, __VMLINUX_SYMBOL_STR(bin2hex) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x93fca811, __VMLINUX_SYMBOL_STR(__get_free_pages) },
	{ 0x528c709d, __VMLINUX_SYMBOL_STR(simple_read_from_buffer) },
	{ 0x164f5177, __VMLINUX_SYMBOL_STR(simple_release_fs) },
	{ 0xe225581b, __VMLINUX_SYMBOL_STR(dput) },
	{ 0x9c0d4159, __VMLINUX_SYMBOL_STR(d_drop) },
	{ 0x46398149, __VMLINUX_SYMBOL_STR(drop_nlink) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdd476dfe, __VMLINUX_SYMBOL_STR(clear_inode) },
	{ 0xa9b6a43, __VMLINUX_SYMBOL_STR(simple_fill_super) },
	{ 0x9f4c7165, __VMLINUX_SYMBOL_STR(mount_single) },
	{ 0xa92b128, __VMLINUX_SYMBOL_STR(prepare_binprm) },
	{ 0x8035b4d5, __VMLINUX_SYMBOL_STR(would_dump) },
	{ 0xf965519a, __VMLINUX_SYMBOL_STR(fd_install) },
	{ 0xa843805a, __VMLINUX_SYMBOL_STR(get_unused_fd_flags) },
	{ 0xdcb0349b, __VMLINUX_SYMBOL_STR(sys_close) },
	{ 0x293e6e19, __VMLINUX_SYMBOL_STR(search_binary_handler) },
	{ 0xf4a7b1, __VMLINUX_SYMBOL_STR(kernel_read) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbee4b4ef, __VMLINUX_SYMBOL_STR(open_exec) },
	{ 0xe13ba5fc, __VMLINUX_SYMBOL_STR(bprm_change_interp) },
	{ 0x3786a355, __VMLINUX_SYMBOL_STR(copy_strings_kernel) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x6ccb6f63, __VMLINUX_SYMBOL_STR(remove_arg_zero) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x9f984513, __VMLINUX_SYMBOL_STR(strrchr) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D2B5D202BA235ED4DE4D79C");
