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
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0x4bc519f4, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0x3e80684a, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb71bf15a, __VMLINUX_SYMBOL_STR(ip6_expire_frag_queue) },
	{ 0x4c59790f, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x50b2323b, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0x6c8d38c4, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0xc454a88e, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0x2db87789, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe123aac3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x22a54787, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x6ca5b0f8, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xe6fc0995, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x9a1a1aac, __VMLINUX_SYMBOL_STR(ip6_frag_init) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xfe8d843a, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb3bbbd66, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x29d2dba3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x85d50e04, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x8b4bc5b8, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x7124b2ab, __VMLINUX_SYMBOL_STR(ip6_frag_match) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ipv6";


MODULE_INFO(srcversion, "A176675D5E47376FF8F7292");
