#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8e913d, __VMLINUX_SYMBOL_STR(udp6_set_csum) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe7efe858, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x4a41ecb6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe01a74c1, __VMLINUX_SYMBOL_STR(kernel_connect) },
	{ 0x3c5b39a4, __VMLINUX_SYMBOL_STR(ip6_local_out_sk) },
	{ 0x32201889, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x8d9a3059, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xc6edb4bf, __VMLINUX_SYMBOL_STR(kernel_bind) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "88C77ED9A639569956E6711");
