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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9c1aba51, __VMLINUX_SYMBOL_STR(sha1_update_arm) },
	{ 0xa8a8110c, __VMLINUX_SYMBOL_STR(kernel_neon_end) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xf03ebe78, __VMLINUX_SYMBOL_STR(sha1_finup_arm) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf86dee2a, __VMLINUX_SYMBOL_STR(crypto_unregister_shash) },
	{ 0x15c6917d, __VMLINUX_SYMBOL_STR(crypto_register_shash) },
	{ 0x3d3c540f, __VMLINUX_SYMBOL_STR(elf_hwcap) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x8fd180e7, __VMLINUX_SYMBOL_STR(kernel_neon_begin) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sha1-arm";


MODULE_INFO(srcversion, "8F0E3BBD140BEFA6EBEC609");
