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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x4bc519f4, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x3e80684a, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c59790f, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xed063f62, __VMLINUX_SYMBOL_STR(skb_copy) },
	{ 0x2c948624, __VMLINUX_SYMBOL_STR(lowpan_header_compress) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3fbce3f4, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x6c8d38c4, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5d6bfce5, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xc454a88e, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x2db87789, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xfe45405b, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6f35520, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0x557a0f01, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x66f4d67c, __VMLINUX_SYMBOL_STR(lowpan_header_decompress) },
	{ 0xc32d12ca, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x22a54787, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x6ca5b0f8, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe6fc0995, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x20a868e8, __VMLINUX_SYMBOL_STR(ieee802154_hdr_peek_addrs) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfe8d843a, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x85d50e04, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xf40a7438, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0x8b4bc5b8, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0xc2ca7c4e, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0x4d7aef69, __VMLINUX_SYMBOL_STR(ieee802154_max_payload) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=6lowpan,ieee802154";


MODULE_INFO(srcversion, "3D19FDDE07D272209308199");
