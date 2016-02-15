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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x2e4f846a, __VMLINUX_SYMBOL_STR(nf_conntrack_in) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9e747d9d, __VMLINUX_SYMBOL_STR(__nf_ct_refresh_acct) },
	{ 0xb8c16342, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_register) },
	{ 0xd63f3ade, __VMLINUX_SYMBOL_STR(nf_ct_get_tuplepr) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc3ce7244, __VMLINUX_SYMBOL_STR(nf_ct_deliver_cached_events) },
	{ 0xea054b22, __VMLINUX_SYMBOL_STR(nla_policy_len) },
	{ 0xd09dc797, __VMLINUX_SYMBOL_STR(nf_log_packet) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xc8dcf1e7, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_unregister) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xcd978133, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuple) },
	{ 0x5539c506, __VMLINUX_SYMBOL_STR(__nf_conntrack_confirm) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc4b5f2d9, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_pernet_unregister) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xc607c079, __VMLINUX_SYMBOL_STR(nf_ct_l4proto_register) },
	{ 0x5c0404c1, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_unregister) },
	{ 0xe123aac3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0xd56be6dc, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x6e224a7a, __VMLINUX_SYMBOL_STR(need_conntrack) },
	{ 0x32f3b429, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xb8b302c7, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_tcp6) },
	{ 0x12a7df98, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_register) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xf8a2b0b8, __VMLINUX_SYMBOL_STR(nf_ct_seq_adjust) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2516f365, __VMLINUX_SYMBOL_STR(nf_conntrack_untracked) },
	{ 0x29d2dba3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xf9fe830f, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_pernet_unregister) },
	{ 0xb5ba2bc9, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0xd8f1bf13, __VMLINUX_SYMBOL_STR(nf_conntrack_l4proto_udp6) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x48fda349, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x55a8577b, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_register) },
	{ 0x74247e1d, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0xc87be5c1, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_defrag_ipv6,ipv6";


MODULE_INFO(srcversion, "8E305CD9A02C3D2403B9F38");
