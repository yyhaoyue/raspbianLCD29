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
	{ 0x68052608, __VMLINUX_SYMBOL_STR(xt_unregister_targets) },
	{ 0xc02b2c8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x6eb85693, __VMLINUX_SYMBOL_STR(nf_defrag_ipv6_enable) },
	{ 0x6b6c3d10, __VMLINUX_SYMBOL_STR(nf_defrag_ipv4_enable) },
	{ 0xb94da53e, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x56acc001, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
	{ 0xc48ffa25, __VMLINUX_SYMBOL_STR(udp4_lib_lookup) },
	{ 0xebcf13df, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x832b280d, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0x22a6daa1, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x2ecf8e76, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0xbf647f8a, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xb72b08c, __VMLINUX_SYMBOL_STR(udp6_lib_lookup) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0xff8a3c2b, __VMLINUX_SYMBOL_STR(ipv6_find_hdr) },
	{ 0x5b6116de, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0x5873b95a, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,nf_defrag_ipv6,nf_defrag_ipv4,ipv6";


MODULE_INFO(srcversion, "DB01E0DFFE15183240C980E");
