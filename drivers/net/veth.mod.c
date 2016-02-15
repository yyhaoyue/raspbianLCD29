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
	{ 0x8c35034b, __VMLINUX_SYMBOL_STR(ethtool_op_get_link) },
	{ 0x7e85db91, __VMLINUX_SYMBOL_STR(eth_mac_addr) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0xcc6d75e3, __VMLINUX_SYMBOL_STR(netif_carrier_on) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xefad9fe1, __VMLINUX_SYMBOL_STR(dev_forward_skb) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x98779c56, __VMLINUX_SYMBOL_STR(ether_setup) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0x4a41ecb6, __VMLINUX_SYMBOL_STR(__put_net) },
	{ 0xc67a9380, __VMLINUX_SYMBOL_STR(rtnl_configure_link) },
	{ 0xcadafa5c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0xf4161ef7, __VMLINUX_SYMBOL_STR(rtnl_create_link) },
	{ 0x2a39696e, __VMLINUX_SYMBOL_STR(rtnl_link_get_net) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0xc1e50c0b, __VMLINUX_SYMBOL_STR(rtnl_nla_parse_ifla) },
	{ 0x28a77468, __VMLINUX_SYMBOL_STR(netif_carrier_off) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "0B1635B12A4D1BC1634C44C");
