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
	{ 0xc5084bee, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x557a0f01, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xf40a7438, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xd7648c9f, __VMLINUX_SYMBOL_STR(ax25_ip_xmit) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x40f66519, __VMLINUX_SYMBOL_STR(netif_tx_wake_queue) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xaab866ab, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x4aad1a74, __VMLINUX_SYMBOL_STR(dev_close) },
	{ 0xcadafa5c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x9626b3ce, __VMLINUX_SYMBOL_STR(ax25_header_ops) },
	{ 0xaeb7451e, __VMLINUX_SYMBOL_STR(ax25_defaddr) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xac93ae05, __VMLINUX_SYMBOL_STR(ax25_bcast) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ax25";


MODULE_INFO(srcversion, "16D055734344E2C2707839A");
