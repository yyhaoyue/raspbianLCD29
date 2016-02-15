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
	{ 0xb4c3e3f7, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x8e3b64d1, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0x17439f65, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9dfd65c3, __VMLINUX_SYMBOL_STR(ipv6_chk_addr) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x56f6790c, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x9a16fd25, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f683af1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xbc336d6, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x326eac35, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x3c5b39a4, __VMLINUX_SYMBOL_STR(ip6_local_out_sk) },
	{ 0x42e0aa46, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xa4eab0f, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x275ab9eb, __VMLINUX_SYMBOL_STR(ip6_route_output) },
	{ 0xd82e562c, __VMLINUX_SYMBOL_STR(ipv6_push_nfrag_opts) },
	{ 0x842e5b1c, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xe4b2daee, __VMLINUX_SYMBOL_STR(netdev_state_change) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3f1b4278, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xa8aa9d4b, __VMLINUX_SYMBOL_STR(rt6_lookup) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9c0fc3ae, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0xb0bfa2c4, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
	{ 0x7f0db9c0, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "F84815313FD77659FE66BAB");
