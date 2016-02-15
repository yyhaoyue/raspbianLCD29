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
	{ 0xd16712f3, __VMLINUX_SYMBOL_STR(crypto_check_attr_type) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1881ccde, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0xf739e389, __VMLINUX_SYMBOL_STR(crypto_unregister_template) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5126314e, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xf6fe8ec4, __VMLINUX_SYMBOL_STR(crypto_spawn_tfm) },
	{ 0x200b5693, __VMLINUX_SYMBOL_STR(crypto_register_template) },
	{ 0x56af0dbd, __VMLINUX_SYMBOL_STR(gf128mul_x_ble) },
	{ 0xc25c59d2, __VMLINUX_SYMBOL_STR(crypto_drop_spawn) },
	{ 0xfe82efdb, __VMLINUX_SYMBOL_STR(crypto_alloc_instance) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe2a2c90f, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0xe309b397, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=gf128mul";


MODULE_INFO(srcversion, "16E7060ED7F3AC899D60177");
