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
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x446cb27f, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x9799baae, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x44059587, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x80b37cf4, __VMLINUX_SYMBOL_STR(sock_no_poll) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x4a4dd76, __VMLINUX_SYMBOL_STR(sock_no_recvmsg) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x2a2a6e7a, __VMLINUX_SYMBOL_STR(iov_iter_get_pages) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xfe675bfd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x493549a3, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xad7d3763, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xc9c88bc1, __VMLINUX_SYMBOL_STR(sock_no_sendmsg) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x11ab253b, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "6880F2AACDD4481D4A9D2F2");
