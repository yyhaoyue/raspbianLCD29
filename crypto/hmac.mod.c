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
	{ 0xf739e389, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0x200b5693, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0xe0dc0d3d, __VMLINUX_SYMBOL_STR(shash_register_instance) },
	{ 0x1881ccde, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x6271f6b5, __VMLINUX_SYMBOL_STR(shash_free_instance) },
	{ 0x6352e460, __VMLINUX_SYMBOL_STR(crypto_init_shash_spawn) },
	{ 0x3877d13, __VMLINUX_SYMBOL_STR(crypto_alloc_instance2) },
	{ 0xe208f1e7, __VMLINUX_SYMBOL_STR(shash_attr_alg) },
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0xfacc4833, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm2) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x747c1989, __VMLINUX_SYMBOL_STR(crypto_shash_final) },
	{ 0xef1d0615, __VMLINUX_SYMBOL_STR(crypto_shash_finup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4ee78018, __VMLINUX_SYMBOL_STR(crypto_shash_digest) },
	{ 0x9c19a5f, __VMLINUX_SYMBOL_STR(crypto_shash_update) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "04D771B63F4B9EE976928B2");
