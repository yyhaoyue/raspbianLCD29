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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x89d55136, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xfa599bb2, __VMLINUX_SYMBOL_STR(netlink_register_notifier) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x5f12b4f6, __VMLINUX_SYMBOL_STR(skb_zerocopy) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x36d61ccc, __VMLINUX_SYMBOL_STR(nf_reinject) },
	{ 0xdf54a8f7, __VMLINUX_SYMBOL_STR(netlink_unregister_notifier) },
	{ 0x1fd4260f, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xa7fccb01, __VMLINUX_SYMBOL_STR(skb_zerocopy_headlen) },
	{ 0xd52afa87, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_unregister) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd7ea7094, __VMLINUX_SYMBOL_STR(nf_unregister_queue_handler) },
	{ 0xea349bd8, __VMLINUX_SYMBOL_STR(nfnetlink_unicast) },
	{ 0xad56c2ec, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xfe6af570, __VMLINUX_SYMBOL_STR(skb_copy_expand) },
	{ 0x7171121c, __VMLINUX_SYMBOL_STR(overflowgid) },
	{ 0xed248918, __VMLINUX_SYMBOL_STR(__nla_reserve) },
	{ 0x6be78856, __VMLINUX_SYMBOL_STR(nf_register_queue_handler) },
	{ 0x9fa78e00, __VMLINUX_SYMBOL_STR(nf_queue_entry_get_refs) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x25be23cc, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x52c12b11, __VMLINUX_SYMBOL_STR(nfnetlink_alloc_skb) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xe49f8fb1, __VMLINUX_SYMBOL_STR(nf_queue_entry_release_refs) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x3c0f736d, __VMLINUX_SYMBOL_STR(nfnetlink_subsys_register) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71702608, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xb3bbbd66, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xab9f22d2, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x2261dd86, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x4cdb3178, __VMLINUX_SYMBOL_STR(ns_to_timeval) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfnetlink";


MODULE_INFO(srcversion, "954E38E8FEA38A79965BBA7");
