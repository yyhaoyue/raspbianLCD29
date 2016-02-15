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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xc766a08d, __VMLINUX_SYMBOL_STR(ethtool_op_get_ts_info) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xbaa75d9e, __VMLINUX_SYMBOL_STR(iov_iter_npages) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x2f5f2a57, __VMLINUX_SYMBOL_STR(rps_sock_flow_table) },
	{ 0x25ad5a16, __VMLINUX_SYMBOL_STR(sk_filter) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x39461d6a, __VMLINUX_SYMBOL_STR(in_egroup_p) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x51ffae8d, __VMLINUX_SYMBOL_STR(__skb_flow_dissect) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc123bf6a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_from_iter) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xa8ed7cb5, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x28a77468, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x18d75cc0, __VMLINUX_SYMBOL_STR(sock_alloc_send_pskb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xbdad4534, __VMLINUX_SYMBOL_STR(sk_detach_filter) },
	{ 0x1fd4260f, __VMLINUX_SYMBOL_STR(skb_tx_error) },
	{ 0xf2aef7d4, __VMLINUX_SYMBOL_STR(skb_partial_csum_set) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x4a41ecb6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3cc705e8, __VMLINUX_SYMBOL_STR(skb_copy_ubufs) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xbc648472, __VMLINUX_SYMBOL_STR(__f_setown) },
	{ 0x70cf7661, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x182cb442, __VMLINUX_SYMBOL_STR(netif_rx_ni) },
	{ 0x3e73b50f, __VMLINUX_SYMBOL_STR(dev_set_mac_address) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0xa824faff, __VMLINUX_SYMBOL_STR(__skb_recv_datagram) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0x90db0fb9, __VMLINUX_SYMBOL_STR(sock_recv_errqueue) },
	{ 0xe2f425e7, __VMLINUX_SYMBOL_STR(rps_cpu_mask) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x42ab4f80, __VMLINUX_SYMBOL_STR(fasync_helper) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x3cd77a5d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xa1783054, __VMLINUX_SYMBOL_STR(netif_set_real_num_rx_queues) },
	{ 0x263dcafc, __VMLINUX_SYMBOL_STR(sk_attach_filter) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4e706d98, __VMLINUX_SYMBOL_STR(netif_set_real_num_tx_queues) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa4eab0f, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x2babe81f, __VMLINUX_SYMBOL_STR(__wake_up_sync_key) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x8d9a3059, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x4f873f32, __VMLINUX_SYMBOL_STR(eth_type_trans) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0xf83f5b93, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6c2591be, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x38f20aa3, __VMLINUX_SYMBOL_STR(eth_validate_addr) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xe322bf5b, __VMLINUX_SYMBOL_STR(kill_fasync) },
	{ 0xd127e72, __VMLINUX_SYMBOL_STR(iov_iter_advance) },
	{ 0x4962391b, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x858bfef9, __VMLINUX_SYMBOL_STR(netdev_update_features) },
	{ 0x84818376, __VMLINUX_SYMBOL_STR(skb_tstamp_tx) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7e85db91, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x9b809271, __VMLINUX_SYMBOL_STR(zerocopy_sg_from_iter) },
	{ 0x337d72cc, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "76BFC5D81936F6868C08BB1");
