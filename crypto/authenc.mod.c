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
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1fd2362d, __VMLINUX_SYMBOL_STR(crypto_init_ahash_spawn) },
	{ 0x1881ccde, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x6b8b5c3a, __VMLINUX_SYMBOL_STR(ahash_attr_alg) },
	{ 0x9a11a0fc, __VMLINUX_SYMBOL_STR(crypto_attr_alg_name) },
	{ 0xec99ed66, __VMLINUX_SYMBOL_STR(crypto_grab_skcipher) },
	{ 0xf739e389, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf6fe8ec4, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0xe075d073, __VMLINUX_SYMBOL_STR(crypto_aead_type) },
	{ 0x91dda801, __VMLINUX_SYMBOL_STR(scatterwalk_map_and_copy) },
	{ 0xf40b2297, __VMLINUX_SYMBOL_STR(__crypto_memneq) },
	{ 0x236f4e6f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0xec8a920, __VMLINUX_SYMBOL_STR(crypto_ahash_finup) },
	{ 0x200b5693, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xc25c59d2, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0x124f2056, __VMLINUX_SYMBOL_STR(crypto_get_attr_type) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfacc4833, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa0dc6833, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1AE7B13F59E60D42A01C4AB");
