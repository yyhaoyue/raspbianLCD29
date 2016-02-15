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
	{ 0x53f2c981, __VMLINUX_SYMBOL_STR(crypto_attr_alg2) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa5db7950, __VMLINUX_SYMBOL_STR(ahash_register_instance) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe208f1e7, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0x1881ccde, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x5a5fb27e, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0x4ca63387, __VMLINUX_SYMBOL_STR(crypto_dequeue_request) },
	{ 0x451e241, __VMLINUX_SYMBOL_STR(shash_ahash_digest) },
	{ 0xf739e389, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xc6427d39, __VMLINUX_SYMBOL_STR(crypto_init_spawn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x747c1989, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xf6fe8ec4, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xff33e0fc, __VMLINUX_SYMBOL_STR(shash_ahash_finup) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x200b5693, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x16212cdd, __VMLINUX_SYMBOL_STR(crypto_register_instance) },
	{ 0xfc580761, __VMLINUX_SYMBOL_STR(crypto_shash_setkey) },
	{ 0x499043d3, __VMLINUX_SYMBOL_STR(crypto_init_queue) },
	{ 0xc25c59d2, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0xeab219ef, __VMLINUX_SYMBOL_STR(crypto_enqueue_request) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x2ce98559, __VMLINUX_SYMBOL_STR(kcrypto_wq) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7e75b9c0, __VMLINUX_SYMBOL_STR(crypto_alloc_aead) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xfacc4833, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x6352e460, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xdd198bb0, __VMLINUX_SYMBOL_STR(shash_ahash_update) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x4aceda91, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x82a61b87, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "876EBCD34940B19576F8612");
