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
	{ 0x6bdcfd99, __VMLINUX_SYMBOL_STR(qdisc_class_hash_remove) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6a3b731f, __VMLINUX_SYMBOL_STR(qdisc_class_hash_grow) },
	{ 0xc6de77b4, __VMLINUX_SYMBOL_STR(gen_new_estimator) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbd17c6de, __VMLINUX_SYMBOL_STR(gen_replace_estimator) },
	{ 0x7c95abd4, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xab02b2c0, __VMLINUX_SYMBOL_STR(hrtimer_init) },
	{ 0x8b0255e8, __VMLINUX_SYMBOL_STR(qdisc_watchdog_init) },
	{ 0x117093be, __VMLINUX_SYMBOL_STR(qdisc_class_hash_init) },
	{ 0xed597524, __VMLINUX_SYMBOL_STR(qdisc_get_rtab) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2cf0b2c, __VMLINUX_SYMBOL_STR(hrtimer_start_range_ns) },
	{ 0x3eae5d00, __VMLINUX_SYMBOL_STR(hrtimer_try_to_cancel) },
	{ 0xc18d9055, __VMLINUX_SYMBOL_STR(pfifo_qdisc_ops) },
	{ 0xb9436da, __VMLINUX_SYMBOL_STR(qdisc_create_dflt) },
	{ 0xc773db0e, __VMLINUX_SYMBOL_STR(qdisc_tree_decrease_qlen) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x1c6384b3, __VMLINUX_SYMBOL_STR(gnet_stats_copy_queue) },
	{ 0x5edb7085, __VMLINUX_SYMBOL_STR(gnet_stats_copy_rate_est) },
	{ 0x24cd2cb1, __VMLINUX_SYMBOL_STR(gnet_stats_copy_basic) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x66a4bfdb, __VMLINUX_SYMBOL_STR(tc_classify_compat) },
	{ 0x196b7e6b, __VMLINUX_SYMBOL_STR(__qdisc_calculate_pkt_len) },
	{ 0x471f5cd0, __VMLINUX_SYMBOL_STR(qdisc_watchdog_schedule_ns) },
	{ 0xa04a01bd, __VMLINUX_SYMBOL_STR(qdisc_class_hash_insert) },
	{ 0xe4576f05, __VMLINUX_SYMBOL_STR(__netif_schedule) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xfe69074e, __VMLINUX_SYMBOL_STR(hrtimer_start) },
	{ 0x781c268e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xb90c0df5, __VMLINUX_SYMBOL_STR(hrtimer_cancel) },
	{ 0x991dcfd6, __VMLINUX_SYMBOL_STR(qdisc_watchdog_cancel) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0xf53d4c26, __VMLINUX_SYMBOL_STR(qdisc_class_hash_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x17b1125d, __VMLINUX_SYMBOL_STR(gen_kill_estimator) },
	{ 0x521b36b5, __VMLINUX_SYMBOL_STR(qdisc_put_rtab) },
	{ 0xb35eef5, __VMLINUX_SYMBOL_STR(qdisc_destroy) },
	{ 0x68f337f, __VMLINUX_SYMBOL_STR(tcf_destroy_chain) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x173d46bf, __VMLINUX_SYMBOL_STR(gnet_stats_copy_app) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "AC812260988598078E13DDF");
