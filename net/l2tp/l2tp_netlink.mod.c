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
	{ 0xa2fd311d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find) },
	{ 0x2b9da7a4, __VMLINUX_SYMBOL_STR(genl_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x36810f1a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x2e69f5d1, __VMLINUX_SYMBOL_STR(l2tp_session_find) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x240112f8, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x9988891, __VMLINUX_SYMBOL_STR(l2tp_session_find_by_ifname) },
	{ 0x307fc0a7, __VMLINUX_SYMBOL_STR(l2tp_session_find_nth) },
	{ 0xa65b11b9, __VMLINUX_SYMBOL_STR(l2tp_tunnel_create) },
	{ 0xb436f77c, __VMLINUX_SYMBOL_STR(l2tp_tunnel_find_nth) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x2d140a58, __VMLINUX_SYMBOL_STR(genl_unlock) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9d00f69c, __VMLINUX_SYMBOL_STR(genlmsg_multicast_allns) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa0495f5, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xba1a3a0d, __VMLINUX_SYMBOL_STR(l2tp_tunnel_delete) },
	{ 0x3fbd4d3, __VMLINUX_SYMBOL_STR(l2tp_session_set_header_len) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=l2tp_core";


MODULE_INFO(srcversion, "31F0D0C4367CB46FD2433DA");
