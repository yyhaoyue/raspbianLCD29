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
	{ 0xe123aac3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x29d2dba3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x803205fc, __VMLINUX_SYMBOL_STR(ip6t_register_table) },
	{ 0xbbcad587, __VMLINUX_SYMBOL_STR(ip6t_alloc_initial_table) },
	{ 0xc6a36f18, __VMLINUX_SYMBOL_STR(ip6t_unregister_table) },
	{ 0xcaea179f, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_in) },
	{ 0x62f0772c, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_out) },
	{ 0xdaaf9591, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_local_fn) },
	{ 0xb687fe70, __VMLINUX_SYMBOL_STR(ip6t_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xba0aac4a, __VMLINUX_SYMBOL_STR(nf_nat_ipv6_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip6_tables,nf_nat_ipv6";


MODULE_INFO(srcversion, "6CA3DF3CE01117CB1CAD667");
