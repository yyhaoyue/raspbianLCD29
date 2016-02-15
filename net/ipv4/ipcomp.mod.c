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
	{ 0xd9a3c38e, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xa5873612, __VMLINUX_SYMBOL_STR(xfrm4_rcv) },
	{ 0xfb427199, __VMLINUX_SYMBOL_STR(ipcomp_output) },
	{ 0x4d1f87ae, __VMLINUX_SYMBOL_STR(ipcomp_input) },
	{ 0x764fa8ee, __VMLINUX_SYMBOL_STR(ipcomp_destroy) },
	{ 0xc1c24529, __VMLINUX_SYMBOL_STR(xfrm4_protocol_deregister) },
	{ 0xd4993bf3, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xd6679778, __VMLINUX_SYMBOL_STR(xfrm4_protocol_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x68ef979d, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x648567ed, __VMLINUX_SYMBOL_STR(xfrm_state_insert) },
	{ 0xbc5fdf69, __VMLINUX_SYMBOL_STR(xfrm_init_state) },
	{ 0x43bce0a6, __VMLINUX_SYMBOL_STR(xfrm_state_alloc) },
	{ 0xd0cd42e2, __VMLINUX_SYMBOL_STR(ipcomp_init_state) },
	{ 0xf5e6820e, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xc7f2e4e6, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0xe232f98f, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0x31fedde5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=xfrm_ipcomp";


MODULE_INFO(srcversion, "9006F9B6DE7160554F07F6A");
