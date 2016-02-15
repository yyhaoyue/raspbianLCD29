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
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xae31abcd, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_expectfn) },
	{ 0x6ea27f90, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_exp_gre) },
	{ 0x628d5916, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_inbound) },
	{ 0x239858f6, __VMLINUX_SYMBOL_STR(nf_nat_pptp_hook_outbound) },
	{ 0x636b12c8, __VMLINUX_SYMBOL_STR(nf_nat_need_gre) },
	{ 0x3c73696e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xe9132535, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0x91fa2e85, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0x19ac54d9, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x40fafc6, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_pptp,nf_nat_proto_gre,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "7E64A4CA9629AF14E700AB2");
