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
	{ 0x7e85db91, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x326eac35, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0x337f2432, __VMLINUX_SYMBOL_STR(l2tp_nl_unregister_ops) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17439f65, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0xf9843987, __VMLINUX_SYMBOL_STR(l2tp_nl_register_ops) },
	{ 0x1c652fcd, __VMLINUX_SYMBOL_STR(l2tp_session_delete) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6c2591be, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x1692f385, __VMLINUX_SYMBOL_STR(register_netdev) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0xa7fd5ac1, __VMLINUX_SYMBOL_STR(l2tp_session_create) },
	{ 0xf94ec5a3, __VMLINUX_SYMBOL_STR(dev_get_by_name) },
	{ 0x2e69f5d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xa2fd311d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xda9846dd, __VMLINUX_SYMBOL_STR(l2tp_xmit_skb) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x54cfe8c3, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xefad9fe1, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x1b3c2ea9, __VMLINUX_SYMBOL_STR(unregister_netdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_netlink,l2tp_core";


MODULE_INFO(srcversion, "DC774629CC0EE8B965B96F2");
