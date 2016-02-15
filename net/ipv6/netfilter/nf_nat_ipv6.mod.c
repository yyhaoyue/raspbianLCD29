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
	{ 0x465cab34, __VMLINUX_SYMBOL_STR(secure_ipv6_port_ephemeral) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9467c48c, __VMLINUX_SYMBOL_STR(nf_ct_nat_ext_add) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x14a384cf, __VMLINUX_SYMBOL_STR(nf_nat_used_tuple) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xea6022f4, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_register) },
	{ 0x1c97ff43, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x10e758a1, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace16) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x78154fc, __VMLINUX_SYMBOL_STR(__nf_ct_kill_acct) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xd9bae4b, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_nlattr_to_range) },
	{ 0x69243ffe, __VMLINUX_SYMBOL_STR(nf_nat_l4proto_unregister) },
	{ 0xd298883b, __VMLINUX_SYMBOL_STR(nf_xfrm_me_harder) },
	{ 0xd56be6dc, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0x3cf9a5da, __VMLINUX_SYMBOL_STR(nf_nat_packet) },
	{ 0x788f0ba9, __VMLINUX_SYMBOL_STR(ip6_route_me_harder) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0xab9f22d2, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x43d18905, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_unregister) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x53fd342b, __VMLINUX_SYMBOL_STR(nf_nat_l3proto_register) },
	{ 0x3b924398, __VMLINUX_SYMBOL_STR(__nf_nat_l4proto_find) },
	{ 0x745ada79, __VMLINUX_SYMBOL_STR(nf_nat_alloc_null_binding) },
	{ 0x48fda349, __VMLINUX_SYMBOL_STR(nf_ip6_checksum) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_nat,nf_conntrack,ipv6";


MODULE_INFO(srcversion, "DA7DF918E94FD2359062786");
