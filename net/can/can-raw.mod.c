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
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x11ca912, __VMLINUX_SYMBOL_STR(can_rx_register) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3d1b29eb, __VMLINUX_SYMBOL_STR(can_proto_unregister) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x3cd77a5d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x6f35520, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xa8cf4685, __VMLINUX_SYMBOL_STR(sock_no_shutdown) },
	{ 0xce92e70d, __VMLINUX_SYMBOL_STR(can_ioctl) },
	{ 0x3ab7ef7e, __VMLINUX_SYMBOL_STR(can_send) },
	{ 0x60b9c079, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xd654aade, __VMLINUX_SYMBOL_STR(can_proto_register) },
	{ 0x450e7ace, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0xad7d3763, __VMLINUX_SYMBOL_STR(sock_no_connect) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x4962391b, __VMLINUX_SYMBOL_STR(copy_to_iter) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0xfbc50f98, __VMLINUX_SYMBOL_STR(can_rx_unregister) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x65679cc8, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=can";


MODULE_INFO(srcversion, "53B9D1F6922AA33BA46B0C1");
