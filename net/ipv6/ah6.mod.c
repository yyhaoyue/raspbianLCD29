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
	{ 0x8aba881f, __VMLINUX_SYMBOL_STR(xfrm6_rcv) },
	{ 0x386786ec, __VMLINUX_SYMBOL_STR(xfrm6_find_1stfragopt) },
	{ 0xd9efcfbf, __VMLINUX_SYMBOL_STR(xfrm6_protocol_deregister) },
	{ 0xd4993bf3, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0x51f4b532, __VMLINUX_SYMBOL_STR(xfrm6_protocol_register) },
	{ 0x68ef979d, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe122af95, __VMLINUX_SYMBOL_STR(xfrm_aalg_get_byname) },
	{ 0xa0dc6833, __VMLINUX_SYMBOL_STR(crypto_ahash_setkey) },
	{ 0x82a61b87, __VMLINUX_SYMBOL_STR(crypto_alloc_ahash) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3c45554b, __VMLINUX_SYMBOL_STR(xfrm_input_resume) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x236f4e6f, __VMLINUX_SYMBOL_STR(crypto_ahash_digest) },
	{ 0x77d7239d, __VMLINUX_SYMBOL_STR(skb_to_sgvec_nomark) },
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x7567a98e, __VMLINUX_SYMBOL_STR(skb_cow_data) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x206abded, __VMLINUX_SYMBOL_STR(xfrm_output_resume) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x783a995d, __VMLINUX_SYMBOL_STR(ip6_redirect) },
	{ 0xc7f2e4e6, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x7f8d9de0, __VMLINUX_SYMBOL_STR(ip6_update_pmtu) },
	{ 0x31fedde5, __VMLINUX_SYMBOL_STR(xfrm_state_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "44EAC4051FCEBECF5BC9ED6");
