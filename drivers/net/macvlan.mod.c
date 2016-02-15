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
	{ 0xcadafa5c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xefad9fe1, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x40521425, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe9e015ae, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x5d839878, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xc32eaba2, __VMLINUX_SYMBOL_STR(__dev_forward_skb) },
	{ 0x8465c5bb, __VMLINUX_SYMBOL_STR(dev_mc_add_excl) },
	{ 0x13985b96, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0x9278033a, __VMLINUX_SYMBOL_STR(dev_uc_add_excl) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x42fcc1b6, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xf8990777, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xdb847ec4, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xacf77d87, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xce07ab6d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x98cd2356, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x182cb442, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x3e73b50f, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x3fc7cfb3, __VMLINUX_SYMBOL_STR(ip_check_defrag) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x332fe69a, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x867fb8f, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x8d00dbc3, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd9b434ae, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0xcbfe2069, __VMLINUX_SYMBOL_STR(ndo_dflt_fdb_dump) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x8367e6c2, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9be5369a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x34e5a252, __VMLINUX_SYMBOL_STR(eth_header_cache_update) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xee44999f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x5e3ccbe6, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf099191f, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa915f7e, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0xca39390e, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x183d9b38, __VMLINUX_SYMBOL_STR(eth_header_cache) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x91eec1a7, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5df25478, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x858bfef9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0xee05383d, __VMLINUX_SYMBOL_STR(dev_queue_xmit_accel) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xdf895229, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0xc61035d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "033FB8487648FC8579F6D11");
