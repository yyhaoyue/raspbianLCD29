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
	{ 0xf90d3b1a, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xc9a90b1e, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x89d55136, __VMLINUX_SYMBOL_STR(__skb_gso_segment) },
	{ 0x4d715233, __VMLINUX_SYMBOL_STR(netif_skb_features) },
	{ 0x7634d391, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x196b7e6b, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x471f5cd0, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x8b0255e8, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x781c268e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0x991dcfd6, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xa00a8ba8, __VMLINUX_SYMBOL_STR(bfifo_qdisc_ops) },
	{ 0x7c95abd4, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xfd2ff47b, __VMLINUX_SYMBOL_STR(fifo_create_dflt) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb35eef5, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0xc773db0e, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x6294420a, __VMLINUX_SYMBOL_STR(fifo_set_limit) },
	{ 0xb77131b1, __VMLINUX_SYMBOL_STR(psched_ratecfg_precompute) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "1EE89914E9BD166F07F09D2");
