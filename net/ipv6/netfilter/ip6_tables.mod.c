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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x34b111e7, __VMLINUX_SYMBOL_STR(xt_unregister_table) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x40728a63, __VMLINUX_SYMBOL_STR(xt_find_revision) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x679e4d9a, __VMLINUX_SYMBOL_STR(xt_check_target) },
	{ 0x5f240f95, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xf4a67f11, __VMLINUX_SYMBOL_STR(xt_proto_fini) },
	{ 0x6de145f4, __VMLINUX_SYMBOL_STR(xt_table_unlock) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x1675c282, __VMLINUX_SYMBOL_STR(xt_find_table_lock) },
	{ 0xff8a3c2b, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0xf07c9958, __VMLINUX_SYMBOL_STR(xt_replace_table) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x7ee73ec4, __VMLINUX_SYMBOL_STR(xt_proto_init) },
	{ 0x87e2636d, __VMLINUX_SYMBOL_STR(xt_register_table) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xc02b2c8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xcfe5cb57, __VMLINUX_SYMBOL_STR(nf_log_trace) },
	{ 0x807d2b2c, __VMLINUX_SYMBOL_STR(xt_recseq) },
	{ 0x68052608, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x32f3b429, __VMLINUX_SYMBOL_STR(nf_unregister_sockopt) },
	{ 0xc67af977, __VMLINUX_SYMBOL_STR(xt_request_find_match) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x33180f8c, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x9fd84606, __VMLINUX_SYMBOL_STR(xt_request_find_target) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x22b4b199, __VMLINUX_SYMBOL_STR(xt_check_match) },
	{ 0x74c134b9, __VMLINUX_SYMBOL_STR(__sw_hweight32) },
	{ 0xb5ba2bc9, __VMLINUX_SYMBOL_STR(nf_register_sockopt) },
	{ 0x8c473b7, __VMLINUX_SYMBOL_STR(xt_alloc_table_info) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xb28f5ef1, __VMLINUX_SYMBOL_STR(xt_free_table_info) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables";


MODULE_INFO(srcversion, "C3B923B35EB492B6A9F9D3C");
