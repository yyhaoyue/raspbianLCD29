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
	{ 0xb774880b, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xfe71aa98, __VMLINUX_SYMBOL_STR(nf_nat_sip_hooks) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x7be217a6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x21b5fd08, __VMLINUX_SYMBOL_STR(ct_sip_parse_numerical_param) },
	{ 0x60d3502e, __VMLINUX_SYMBOL_STR(ct_sip_parse_address_param) },
	{ 0xab9f22d2, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xc33d1d28, __VMLINUX_SYMBOL_STR(ct_sip_parse_request) },
	{ 0x2aa0e4fc, __VMLINUX_SYMBOL_STR(strncasecmp) },
	{ 0x4de4e8f4, __VMLINUX_SYMBOL_STR(ct_sip_parse_header_uri) },
	{ 0x4b7ff47b, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0xa0fb7d92, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x19ac54d9, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x739cebee, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x649d2056, __VMLINUX_SYMBOL_STR(ct_sip_get_header) },
	{ 0x29fa0de5, __VMLINUX_SYMBOL_STR(ct_sip_get_sdp_header) },
	{ 0x3c73696e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0x2129c9e8, __VMLINUX_SYMBOL_STR(nf_nat_mangle_udp_packet) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe9132535, __VMLINUX_SYMBOL_STR(nf_nat_setup_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_sip,nf_nat";


MODULE_INFO(srcversion, "8C61F213AB567EC6236370A");