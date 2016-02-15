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
	{ 0x4b40130b, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xc6d829e0, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x10ae3956, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xfe7bf813, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x17439f65, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x60a13e90, __VMLINUX_SYMBOL_STR(rcu_barrier) },
	{ 0x326eac35, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc4d7bef, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xeedb0367, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xcadafa5c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x49254796, __VMLINUX_SYMBOL_STR(ipv6_chk_prefix) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb237c89d, __VMLINUX_SYMBOL_STR(ipv6_chk_custom_prefix) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xbc336d6, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x9c0fc3ae, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x8c4ce85b, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x90751465, __VMLINUX_SYMBOL_STR(ip_tunnel_encap) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x6f683af1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x9a16fd25, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xa02d1add, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x73d58c37, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xda3e8416, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x3f1b4278, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x2796c02, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe232f98f, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb4c3e3f7, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0xa8aa9d4b, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf5e6820e, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe4b2daee, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x5d7c806, __VMLINUX_SYMBOL_STR(ip_tunnel_dst_reset_all) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x9be5369a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4,ipv6";


MODULE_INFO(srcversion, "BFC2743FEC2FEFFDA219D8E");
