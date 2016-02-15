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
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x131f636c, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_in_range) },
	{ 0x69243ffe, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xea6022f4, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x1c97ff43, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0xab9f22d2, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x165f5b18, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unique_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat";


MODULE_INFO(srcversion, "990B6382A0D28FE30DEB9C9");
