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
	{ 0x8fdb63c3, __VMLINUX_SYMBOL_STR(dev_mc_sync_multiple) },
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0xbeff8ab9, __VMLINUX_SYMBOL_STR(netdev_info) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x4c17257, __VMLINUX_SYMBOL_STR(rtmsg_ifinfo) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x40521425, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x8f9090f9, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0xaab866ab, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x4c2d123a, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x51ffae8d, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x13985b96, __VMLINUX_SYMBOL_STR(netdev_rx_handler_register) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xdf1c5485, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x28a77468, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x48aba034, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_get) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x42fcc1b6, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xf8990777, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xdb847ec4, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0xacf77d87, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xce07ab6d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x187418f9, __VMLINUX_SYMBOL_STR(vlan_vids_del_by_dev) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x13560719, __VMLINUX_SYMBOL_STR(vlan_vids_add_by_dev) },
	{ 0x416d821c, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xbe8d1c2, __VMLINUX_SYMBOL_STR(netdev_lower_get_next_private_rcu) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x91fe4fe3, __VMLINUX_SYMBOL_STR(netdev_change_features) },
	{ 0x98cd2356, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x1909d40e, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0x9982868b, __VMLINUX_SYMBOL_STR(netdev_has_upper_dev) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x3e73b50f, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x8799cba2, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0xe9bff861, __VMLINUX_SYMBOL_STR(down_trylock) },
	{ 0xf2516cc9, __VMLINUX_SYMBOL_STR(arp_create) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x9e763530, __VMLINUX_SYMBOL_STR(reciprocal_value) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xa13f2b11, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0x332fe69a, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x62849ac7, __VMLINUX_SYMBOL_STR(dev_valid_name) },
	{ 0x1dc4778c, __VMLINUX_SYMBOL_STR(netdev_class_remove_file_ns) },
	{ 0x867fb8f, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x8d00dbc3, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd9b434ae, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x4aad1a74, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0x1a73a961, __VMLINUX_SYMBOL_STR(netdev_bonding_info_change) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0xdf5fda05, __VMLINUX_SYMBOL_STR(dev_mc_flush) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0x7b45b742, __VMLINUX_SYMBOL_STR(inet_confirm_addr) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9be5369a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x9827f361, __VMLINUX_SYMBOL_STR(netdev_lower_dev_get_private) },
	{ 0xae5e5240, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0xc3a497ca, __VMLINUX_SYMBOL_STR(netdev_master_upper_dev_link_private) },
	{ 0x6994131f, __VMLINUX_SYMBOL_STR(dev_uc_flush) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x171b549, __VMLINUX_SYMBOL_STR(netdev_upper_get_next_dev_rcu) },
	{ 0xf6c63c33, __VMLINUX_SYMBOL_STR(sysfs_remove_file_ns) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x2da1057b, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_proto) },
	{ 0xee44999f, __VMLINUX_SYMBOL_STR(netdev_rx_handler_unregister) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xaccabc6a, __VMLINUX_SYMBOL_STR(in4_pton) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x1f153d55, __VMLINUX_SYMBOL_STR(passthru_features_check) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe1302151, __VMLINUX_SYMBOL_STR(arp_xmit) },
	{ 0x283e7782, __VMLINUX_SYMBOL_STR(netdev_lower_get_next_private) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x98ec615f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa915f7e, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xf83f5b93, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1f2f6e9a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x7effb588, __VMLINUX_SYMBOL_STR(__skb_flow_get_ports) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xca39390e, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x918a0e73, __VMLINUX_SYMBOL_STR(dev_uc_sync_multiple) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x2d541394, __VMLINUX_SYMBOL_STR(dev_trans_start) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x5df25478, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xdfb71e90, __VMLINUX_SYMBOL_STR(netdev_lower_get_first_private_rcu) },
	{ 0xa0dad88e, __VMLINUX_SYMBOL_STR(netdev_adjacent_get_private) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xc5084bee, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xfc9b4a3e, __VMLINUX_SYMBOL_STR(netdev_all_upper_get_next_dev_rcu) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xe282209c, __VMLINUX_SYMBOL_STR(sysfs_create_file_ns) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xdf895229, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc58a8cd, __VMLINUX_SYMBOL_STR(netdev_increment_features) },
	{ 0x652af5b1, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0x523745aa, __VMLINUX_SYMBOL_STR(netdev_class_create_file_ns) },
	{ 0xc61035d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "D04CA6B4FEAABBCCE8E18F2");
