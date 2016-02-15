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
	{ 0x1c652fcd, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0xad56c2ec, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x753fc98a, __VMLINUX_SYMBOL_STR(pppox_ioctl) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xf37a5060, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x326eac35, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xe0ff7a18, __VMLINUX_SYMBOL_STR(unregister_pppox_proto) },
	{ 0xf9843987, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0xe2879cfd, __VMLINUX_SYMBOL_STR(register_pppox_proto) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x17439f65, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x307fc0a7, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x16e47fb1, __VMLINUX_SYMBOL_STR(ppp_dev_name) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xcd89a29c, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0x91fbd4d4, __VMLINUX_SYMBOL_STR(l2tp_session_free) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xb436f77c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x71702608, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x594e629, __VMLINUX_SYMBOL_STR(l2tp_session_queue_purge) },
	{ 0x50cc403d, __VMLINUX_SYMBOL_STR(__l2tp_session_unhash) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x74c9bfb7, __VMLINUX_SYMBOL_STR(pppox_unbind_sock) },
	{ 0xa65b11b9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0x7ed244bd, __VMLINUX_SYMBOL_STR(ppp_register_net_channel) },
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x54cfe8c3, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd7a4dd0c, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3fbd4d3, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0xda9846dd, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7945688e, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd39f1581, __VMLINUX_SYMBOL_STR(l2tp_udp_encap_recv) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa7fd5ac1, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0x2e69f5d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xa2fd311d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core,pppox,l2tp_netlink,ppp_generic";


MODULE_INFO(srcversion, "D519E9AEBBE9B22C8A31417");
