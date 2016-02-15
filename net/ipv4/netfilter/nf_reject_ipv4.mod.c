#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x56f6790c, __VMLINUX_SYMBOL_STR(icmp_send) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0x2cea2b3f, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xb93d07c5, __VMLINUX_SYMBOL_STR(nf_ip_checksum) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf6388c56, __VMLINUX_SYMBOL_STR(sysctl_ip_default_ttl) },
	{ 0x4a73b54e, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xbff89af8, __VMLINUX_SYMBOL_STR(ip_local_out_sk) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8C6CF6AA14ED666FED91274");
