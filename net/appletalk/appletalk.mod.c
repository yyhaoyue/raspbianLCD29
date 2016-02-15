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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8818a6c8, __VMLINUX_SYMBOL_STR(seq_open_private) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaab866ab, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xebf950ac, __VMLINUX_SYMBOL_STR(seq_release_private) },
	{ 0xd01727b8, __VMLINUX_SYMBOL_STR(sock_no_setsockopt) },
	{ 0x4c59790f, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x446cb27f, __VMLINUX_SYMBOL_STR(sock_no_getsockopt) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0xed063f62, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x75bda77a, __VMLINUX_SYMBOL_STR(seq_hlist_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f683af1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5d88e862, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x8799cba2, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x3dfc897c, __VMLINUX_SYMBOL_STR(seq_hlist_start_head) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x557a0f01, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1b295e75, __VMLINUX_SYMBOL_STR(register_snap_client) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6b759b26, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xfe675bfd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x450e7ace, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xf83f5b93, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0x2953a87f, __VMLINUX_SYMBOL_STR(unregister_snap_client) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xf40a7438, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xc5084bee, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8b4bc5b8, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x56aedab7, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xc320e026, __VMLINUX_SYMBOL_STR(dev_mc_add_global) },
	{ 0x65679cc8, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=psnap";


MODULE_INFO(srcversion, "71E18C27C3AE7AEE2C115A5");
