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
	{ 0x7be217a6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0xd1be578d, __VMLINUX_SYMBOL_STR(nat_q931_hook) },
	{ 0x7a44330a, __VMLINUX_SYMBOL_STR(nat_callforwarding_hook) },
	{ 0xd5319e76, __VMLINUX_SYMBOL_STR(nat_h245_hook) },
	{ 0xa399044, __VMLINUX_SYMBOL_STR(nat_t120_hook) },
	{ 0xfa50668e, __VMLINUX_SYMBOL_STR(nat_rtp_rtcp_hook) },
	{ 0xc28eec75, __VMLINUX_SYMBOL_STR(set_ras_addr_hook) },
	{ 0xf2ec75fb, __VMLINUX_SYMBOL_STR(set_sig_addr_hook) },
	{ 0xfd7cff12, __VMLINUX_SYMBOL_STR(set_h225_addr_hook) },
	{ 0xf89b74c6, __VMLINUX_SYMBOL_STR(set_h245_addr_hook) },
	{ 0xb774880b, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0x19ac54d9, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0xfcbed2fc, __VMLINUX_SYMBOL_STR(get_h225_addr) },
	{ 0x739cebee, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3c73696e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x2129c9e8, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x80dac1e4, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe9132535, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_h323,nf_nat";


MODULE_INFO(srcversion, "B50D0B221589CC8C4479864");
