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
	{ 0xd721ba10, __VMLINUX_SYMBOL_STR(ovs_vport_ops_unregister) },
	{ 0x3430f6d6, __VMLINUX_SYMBOL_STR(ovs_vport_ops_register) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x6b442309, __VMLINUX_SYMBOL_STR(ovs_vport_alloc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1e92886c, __VMLINUX_SYMBOL_STR(gre_cisco_register) },
	{ 0xf6a26611, __VMLINUX_SYMBOL_STR(ovs_vport_receive) },
	{ 0xd745da9b, __VMLINUX_SYMBOL_STR(ovs_vport_deferred_free) },
	{ 0x7147baba, __VMLINUX_SYMBOL_STR(gre_cisco_unregister) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x8c4ce85b, __VMLINUX_SYMBOL_STR(iptunnel_xmit) },
	{ 0x5ecad2fb, __VMLINUX_SYMBOL_STR(gre_build_header) },
	{ 0x73d58c37, __VMLINUX_SYMBOL_STR(iptunnel_handle_offloads) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xda83411d, __VMLINUX_SYMBOL_STR(ovs_net_id) },
	{ 0xa9eced21, __VMLINUX_SYMBOL_STR(ovs_tunnel_get_egress_info) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=openvswitch,gre";


MODULE_INFO(srcversion, "60BEC47709D7FD5B3CB6D68");
