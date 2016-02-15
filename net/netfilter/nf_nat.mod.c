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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x289c3714, __VMLINUX_SYMBOL_STR(nf_ct_alloc_hashtable) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x78f9b710, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_try_module_get) },
	{ 0x37386cac, __VMLINUX_SYMBOL_STR(nf_conntrack_hash_rnd) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2124474, __VMLINUX_SYMBOL_STR(ip_send_check) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x1c97ff43, __VMLINUX_SYMBOL_STR(inet_proto_csum_replace4) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xab3d1f95, __VMLINUX_SYMBOL_STR(nf_ct_untracked_status_or) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc4dd1f1c, __VMLINUX_SYMBOL_STR(__nf_ct_ext_add_length) },
	{ 0x6d2fc5a6, __VMLINUX_SYMBOL_STR(net_namespace_list) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xad1bb027, __VMLINUX_SYMBOL_STR(nf_ct_free_hashtable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x6a0a194, __VMLINUX_SYMBOL_STR(nf_conntrack_alter_reply) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x93111293, __VMLINUX_SYMBOL_STR(nf_ct_iterate_cleanup) },
	{ 0xbe2c0274, __VMLINUX_SYMBOL_STR(add_timer) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xa0f01094, __VMLINUX_SYMBOL_STR(nf_conntrack_tuple_taken) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xb602c57e, __VMLINUX_SYMBOL_STR(nf_ct_l3proto_module_put) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa851146e, __VMLINUX_SYMBOL_STR(nf_ct_extend_unregister) },
	{ 0xb774880b, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_register) },
	{ 0xab9f22d2, __VMLINUX_SYMBOL_STR(skb_make_writable) },
	{ 0xf7691092, __VMLINUX_SYMBOL_STR(nf_ct_extend_register) },
	{ 0xa12c0c54, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0x5521ac23, __VMLINUX_SYMBOL_STR(nfnetlink_parse_nat_setup_hook) },
	{ 0x7be217a6, __VMLINUX_SYMBOL_STR(nf_ct_helper_expectfn_unregister) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x4b7ff47b, __VMLINUX_SYMBOL_STR(nf_ct_seqadj_set) },
	{ 0x7f0db9c0, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x7959dee5, __VMLINUX_SYMBOL_STR(nf_nat_decode_session_hook) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack";


MODULE_INFO(srcversion, "B7E876EAB0C66641816AE20");
