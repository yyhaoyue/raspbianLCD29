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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xf90d3b1a, __VMLINUX_SYMBOL_STR(unregister_qdisc) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1b3c2ea9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0xc9a90b1e, __VMLINUX_SYMBOL_STR(register_qdisc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x781c268e, __VMLINUX_SYMBOL_STR(qdisc_reset) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x7c95abd4, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0x22d7a172, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9a16fd25, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x99b8130d, __VMLINUX_SYMBOL_STR(__neigh_event_send) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x845fa578, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "B3267DBA29B9DA1315609C1");
