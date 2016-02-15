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
	{ 0x4b40130b, __VMLINUX_SYMBOL_STR(ip_tunnel_get_link_net) },
	{ 0xeaca4cc6, __VMLINUX_SYMBOL_STR(ip_tunnel_dellink) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xc6d829e0, __VMLINUX_SYMBOL_STR(ip_tunnel_get_iflink) },
	{ 0x10ae3956, __VMLINUX_SYMBOL_STR(ip_tunnel_get_stats64) },
	{ 0xd5d921e9, __VMLINUX_SYMBOL_STR(ip_tunnel_change_mtu) },
	{ 0x6b0afed3, __VMLINUX_SYMBOL_STR(ip_tunnel_uninit) },
	{ 0x1a6f62e3, __VMLINUX_SYMBOL_STR(rtnl_link_unregister) },
	{ 0x326eac35, __VMLINUX_SYMBOL_STR(unregister_pernet_device) },
	{ 0xc4d7bef, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_deregister) },
	{ 0x55084d16, __VMLINUX_SYMBOL_STR(rtnl_link_register) },
	{ 0xfe7bf813, __VMLINUX_SYMBOL_STR(xfrm4_tunnel_register) },
	{ 0x17439f65, __VMLINUX_SYMBOL_STR(register_pernet_device) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x715743f6, __VMLINUX_SYMBOL_STR(ip_tunnel_init_net) },
	{ 0xde16cd41, __VMLINUX_SYMBOL_STR(ip_tunnel_delete_net) },
	{ 0xda3e8416, __VMLINUX_SYMBOL_STR(ip_tunnel_rcv) },
	{ 0x3f1b4278, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x2796c02, __VMLINUX_SYMBOL_STR(iptunnel_pull_header) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe232f98f, __VMLINUX_SYMBOL_STR(ipv4_redirect) },
	{ 0xf5e6820e, __VMLINUX_SYMBOL_STR(ipv4_update_pmtu) },
	{ 0xe9e20cc3, __VMLINUX_SYMBOL_STR(ip_tunnel_lookup) },
	{ 0x3ce48e23, __VMLINUX_SYMBOL_STR(ip_tunnel_init) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa02d1add, __VMLINUX_SYMBOL_STR(ip_tunnel_xmit) },
	{ 0x73d58c37, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xda2edeb2, __VMLINUX_SYMBOL_STR(ip_tunnel_ioctl) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfb572f68, __VMLINUX_SYMBOL_STR(ip_tunnel_setup) },
	{ 0xae932d12, __VMLINUX_SYMBOL_STR(ip_tunnel_newlink) },
	{ 0x2a7f00ee, __VMLINUX_SYMBOL_STR(ip_tunnel_changelink) },
	{ 0xeedb0367, __VMLINUX_SYMBOL_STR(ip_tunnel_encap_setup) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tunnel,tunnel4";


MODULE_INFO(srcversion, "822DD91E893840CB8DCC9F9");
