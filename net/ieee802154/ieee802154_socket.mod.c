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
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x46e9fa9c, __VMLINUX_SYMBOL_STR(dev_load) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3e2df16e, __VMLINUX_SYMBOL_STR(dev_getbyhwaddr_rcu) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf94ec5a3, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x44059587, __VMLINUX_SYMBOL_STR(sock_no_getname) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1bac8c88, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xa951319e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x5d88e862, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xc93d4263, __VMLINUX_SYMBOL_STR(ieee802154_hdr_pull) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf37a5060, __VMLINUX_SYMBOL_STR(sock_no_bind) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xa4950a36, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x6f35520, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x557a0f01, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x60b9c079, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x6b759b26, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xfe675bfd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0x8f95500f, __VMLINUX_SYMBOL_STR(dev_getfirstbyhwtype) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0x450e7ace, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa73cbc2f, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xd6081c15, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xf40a7438, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x65679cc8, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ieee802154";


MODULE_INFO(srcversion, "D6E9A67515BE7946A10F281");
