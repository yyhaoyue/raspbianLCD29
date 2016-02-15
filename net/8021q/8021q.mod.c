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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8b391c5c, __VMLINUX_SYMBOL_STR(dev_change_flags) },
	{ 0x40521425, __VMLINUX_SYMBOL_STR(dev_mc_unsync) },
	{ 0xdd44f6ae, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x18e7cddb, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0xe9e015ae, __VMLINUX_SYMBOL_STR(dev_get_nest_level) },
	{ 0x1d85fd60, __VMLINUX_SYMBOL_STR(garp_uninit_applicant) },
	{ 0x4c2d123a, __VMLINUX_SYMBOL_STR(vlan_dev_vlan_id) },
	{ 0x5d839878, __VMLINUX_SYMBOL_STR(dev_uc_add) },
	{ 0xe7492901, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xc8b2a2d5, __VMLINUX_SYMBOL_STR(garp_request_join) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xdf1c5485, __VMLINUX_SYMBOL_STR(vlan_uses_dev) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x28a77468, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x42fcc1b6, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xf8990777, __VMLINUX_SYMBOL_STR(vlan_vid_del) },
	{ 0xdb847ec4, __VMLINUX_SYMBOL_STR(call_netdevice_notifiers) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3fe66c1f, __VMLINUX_SYMBOL_STR(linkwatch_fire_event) },
	{ 0xacf77d87, __VMLINUX_SYMBOL_STR(vlan_vid_add) },
	{ 0xce07ab6d, __VMLINUX_SYMBOL_STR(__netpoll_setup) },
	{ 0x1754f207, __VMLINUX_SYMBOL_STR(garp_init_applicant) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x51c7ead4, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x8f857483, __VMLINUX_SYMBOL_STR(vlan_ioctl_set) },
	{ 0x98cd2356, __VMLINUX_SYMBOL_STR(netpoll_send_skb_on_dev) },
	{ 0x1909d40e, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x332fe69a, __VMLINUX_SYMBOL_STR(__netpoll_free_async) },
	{ 0x867fb8f, __VMLINUX_SYMBOL_STR(__ethtool_get_settings) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xe0869ef0, __VMLINUX_SYMBOL_STR(garp_register_application) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0xd9b434ae, __VMLINUX_SYMBOL_STR(netdev_upper_dev_unlink) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x4bef98c8, __VMLINUX_SYMBOL_STR(proc_mkdir_data) },
	{ 0xad56c2ec, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x8367e6c2, __VMLINUX_SYMBOL_STR(netif_stacked_transfer_operstate) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x9be5369a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x28692cfa, __VMLINUX_SYMBOL_STR(garp_request_leave) },
	{ 0x347013de, __VMLINUX_SYMBOL_STR(nla_validate) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x5e3ccbe6, __VMLINUX_SYMBOL_STR(eth_header_parse) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xf099191f, __VMLINUX_SYMBOL_STR(netdev_upper_dev_link) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xa915f7e, __VMLINUX_SYMBOL_STR(dev_uc_unsync) },
	{ 0xf83f5b93, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3d1d0193, __VMLINUX_SYMBOL_STR(garp_unregister_application) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x1f2f6e9a, __VMLINUX_SYMBOL_STR(netdev_warn) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xca39390e, __VMLINUX_SYMBOL_STR(dev_set_promiscuity) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x71702608, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x49f71442, __VMLINUX_SYMBOL_STR(dev_close_many) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x91eec1a7, __VMLINUX_SYMBOL_STR(dev_uc_del) },
	{ 0x5df25478, __VMLINUX_SYMBOL_STR(dev_uc_sync) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x858bfef9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xec3d2e1b, __VMLINUX_SYMBOL_STR(trace_hardirqs_off) },
	{ 0xdf895229, __VMLINUX_SYMBOL_STR(dev_mc_sync) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x652af5b1, __VMLINUX_SYMBOL_STR(dev_get_stats) },
	{ 0xc61035d, __VMLINUX_SYMBOL_STR(dev_set_mtu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=garp";


MODULE_INFO(srcversion, "04C1833EC8DF633BBE141AF");
