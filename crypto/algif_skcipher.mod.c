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
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x446cb27f, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0xd01727b8, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x9799baae, __VMLINUX_SYMBOL_STR(sock_no_ioctl) },
	{ 0x44059587, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xad7d3763, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xf37a5060, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x19a549d8, __VMLINUX_SYMBOL_STR(af_alg_release) },
	{ 0xbfc7da96, __VMLINUX_SYMBOL_STR(af_alg_unregister_type) },
	{ 0x3bc60716, __VMLINUX_SYMBOL_STR(af_alg_register_type) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xffc5fdb0, __VMLINUX_SYMBOL_STR(af_alg_link_sg) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd127e72, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0xd954ef95, __VMLINUX_SYMBOL_STR(af_alg_wait_for_completion) },
	{ 0x1bcb5cef, __VMLINUX_SYMBOL_STR(af_alg_make_sg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7a084a57, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x5f06d094, __VMLINUX_SYMBOL_STR(af_alg_cmsg_send) },
	{ 0x8ebaad11, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0xfcbffa88, __VMLINUX_SYMBOL_STR(sock_wake_async) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0x65d4fe77, __VMLINUX_SYMBOL_STR(crypto_alloc_ablkcipher) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xb7f1ea4e, __VMLINUX_SYMBOL_STR(af_alg_complete) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x11ab253b, __VMLINUX_SYMBOL_STR(sock_kzfree_s) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xfe33c6c3, __VMLINUX_SYMBOL_STR(sg_nents) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xba4b6e94, __VMLINUX_SYMBOL_STR(af_alg_free_sg) },
	{ 0xee2e93ad, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x493549a3, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xc8b57c27, __VMLINUX_SYMBOL_STR(autoremove_wake_function) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x499cb58c, __VMLINUX_SYMBOL_STR(prepare_to_wait) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=af_alg";


MODULE_INFO(srcversion, "A700CF0A5ED8DA0294D5098");
