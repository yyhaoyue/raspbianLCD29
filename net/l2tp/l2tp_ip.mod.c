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
	{ 0x3c6ce275, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x5d4f8ca3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0x86a7160c, __VMLINUX_SYMBOL_STR(ip_getsockopt) },
	{ 0x76cdc51a, __VMLINUX_SYMBOL_STR(ip_setsockopt) },
	{ 0x44a78aad, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa951319e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x7a74f8ab, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0xd6081c15, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0xa73cbc2f, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xcd89a29c, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd297d0bd, __VMLINUX_SYMBOL_STR(inet_ioctl) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x557363ca, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0x106a83fa, __VMLINUX_SYMBOL_STR(inet_bind) },
	{ 0x37cb8b32, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xb0387590, __VMLINUX_SYMBOL_STR(inet_del_protocol) },
	{ 0xc99e4b22, __VMLINUX_SYMBOL_STR(inet_unregister_protosw) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xa04045e8, __VMLINUX_SYMBOL_STR(inet_register_protosw) },
	{ 0xcbefec7a, __VMLINUX_SYMBOL_STR(inet_add_protocol) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x1bac8c88, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0x543dbd14, __VMLINUX_SYMBOL_STR(ip4_datagram_connect) },
	{ 0xd636cab1, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0xf3f6e9f2, __VMLINUX_SYMBOL_STR(l2tp_tunnel_closeall) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x76452740, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xec8c17be, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x31f7d4cf, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7945688e, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xa646a922, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0x936d53e4, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x3e983def, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x65679cc8, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x46cef5f4, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x4266b290, __VMLINUX_SYMBOL_STR(sk_receive_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x3f1b4278, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0xa2fd311d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0xfb1f63d3, __VMLINUX_SYMBOL_STR(l2tp_recv_common) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x2e69f5d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "2A432D7F7840B41070D8C38");
