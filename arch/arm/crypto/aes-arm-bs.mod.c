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
	{ 0x6c62e582, __VMLINUX_SYMBOL_STR(AES_decrypt) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x85de4b63, __VMLINUX_SYMBOL_STR(crypto_unregister_algs) },
	{ 0x5a5fb27e, __VMLINUX_SYMBOL_STR(crypto_ablkcipher_type) },
	{ 0xbf049785, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt_block) },
	{ 0xa8a8110c, __VMLINUX_SYMBOL_STR(kernel_neon_end) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5126314e, __VMLINUX_SYMBOL_STR(crypto_blkcipher_type) },
	{ 0xc30fcbed, __VMLINUX_SYMBOL_STR(AES_encrypt) },
	{ 0x8810ad5e, __VMLINUX_SYMBOL_STR(crypto_xor) },
	{ 0xf772a1a0, __VMLINUX_SYMBOL_STR(__ablk_encrypt) },
	{ 0x5aa5d9d7, __VMLINUX_SYMBOL_STR(ablk_exit) },
	{ 0xcf024ae9, __VMLINUX_SYMBOL_STR(private_AES_set_decrypt_key) },
	{ 0x3fb41659, __VMLINUX_SYMBOL_STR(ablk_encrypt) },
	{ 0xac11c152, __VMLINUX_SYMBOL_STR(ablk_init) },
	{ 0x45e6c42c, __VMLINUX_SYMBOL_STR(ablk_set_key) },
	{ 0x3d3c540f, __VMLINUX_SYMBOL_STR(elf_hwcap) },
	{ 0x38e32f54, __VMLINUX_SYMBOL_STR(crypto_register_algs) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x276b2f72, __VMLINUX_SYMBOL_STR(private_AES_set_encrypt_key) },
	{ 0xe2a2c90f, __VMLINUX_SYMBOL_STR(blkcipher_walk_virt) },
	{ 0x8fd180e7, __VMLINUX_SYMBOL_STR(kernel_neon_begin) },
	{ 0xe309b397, __VMLINUX_SYMBOL_STR(blkcipher_walk_done) },
	{ 0x920fcee1, __VMLINUX_SYMBOL_STR(ablk_decrypt) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=aes-arm,ablk_helper";


MODULE_INFO(srcversion, "026313FDFB94B3715F5D431");
