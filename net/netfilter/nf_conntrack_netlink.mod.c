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
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0xd52afa87, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3c0f736d, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0xdb468134, __VMLINUX_SYMBOL_STR(nf_ct_remove_expectations) },
	{ 0xc4dd1f1c, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x8ca93e6c, __VMLINUX_SYMBOL_STR(nf_conntrack_free) },
	{ 0x9aecf2c3, __VMLINUX_SYMBOL_STR(__nf_ct_try_assign_helper) },
	{ 0x69578563, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_check_insert) },
	{ 0xe4689576, __VMLINUX_SYMBOL_STR(ktime_get_with_offset) },
	{ 0xc221c726, __VMLINUX_SYMBOL_STR(nf_ct_helper_ext_add) },
	{ 0x78669f9, __VMLINUX_SYMBOL_STR(nf_conntrack_alloc) },
	{ 0x5521ac23, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x5ce3b588, __VMLINUX_SYMBOL_STR(nfnl_lock) },
	{ 0xdb065657, __VMLINUX_SYMBOL_STR(nfnl_unlock) },
	{ 0x2dced2e1, __VMLINUX_SYMBOL_STR(nf_connlabels_replace) },
	{ 0x7cfd8c0, __VMLINUX_SYMBOL_STR(nf_conntrack_locks) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x93111293, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xfc53f1b9, __VMLINUX_SYMBOL_STR(nf_ct_delete) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xbfbec8cf, __VMLINUX_SYMBOL_STR(__nf_ct_expect_find) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x739cebee, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x9be35868, __VMLINUX_SYMBOL_STR(__nf_conntrack_helper_find) },
	{ 0x9b8b0e2c, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_name) },
	{ 0xb1a12fdc, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x74247e1d, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xc18ac88d, __VMLINUX_SYMBOL_STR(nf_ct_expect_hsize) },
	{ 0xc2abd2fd, __VMLINUX_SYMBOL_STR(nf_conntrack_expect_lock) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x86ade807, __VMLINUX_SYMBOL_STR(nf_ct_unlink_expect_report) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x40fafc6, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0x91fa2e85, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xb96e8fad, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x204fc89e, __VMLINUX_SYMBOL_STR(nf_ct_expect_register_notifier) },
	{ 0xfd7d4954, __VMLINUX_SYMBOL_STR(nf_conntrack_register_notifier) },
	{ 0xce71a4af, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_find_by_symbol) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0xe0f57cfd, __VMLINUX_SYMBOL_STR(nfnetlink_send) },
	{ 0xa1171da4, __VMLINUX_SYMBOL_STR(nfnetlink_has_listeners) },
	{ 0xe0c78f91, __VMLINUX_SYMBOL_STR(nfnetlink_set_err) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2261dd86, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xe9ee90e6, __VMLINUX_SYMBOL_STR(nf_conntrack_l3proto_generic) },
	{ 0x3255f93f, __VMLINUX_SYMBOL_STR(nf_ct_l3protos) },
	{ 0xc87be5c1, __VMLINUX_SYMBOL_STR(__nf_ct_l4proto_find) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x51200b9d, __VMLINUX_SYMBOL_STR(nf_conntrack_unregister_notifier) },
	{ 0x9bc6c05f, __VMLINUX_SYMBOL_STR(nf_ct_expect_unregister_notifier) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink,nf_conntrack";


MODULE_INFO(srcversion, "1C969673537BE9E167D7792");
