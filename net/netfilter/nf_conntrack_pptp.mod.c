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
	{ 0x19ac54d9, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x3a7deb13, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x71c0c00, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_add) },
	{ 0xa58a0f93, __VMLINUX_SYMBOL_STR(nf_conntrack_helper_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x10ada92f, __VMLINUX_SYMBOL_STR(nf_ct_expect_init) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x40fafc6, __VMLINUX_SYMBOL_STR(nf_ct_expect_find_get) },
	{ 0x91fa2e85, __VMLINUX_SYMBOL_STR(nf_ct_expect_put) },
	{ 0xb1a12fdc, __VMLINUX_SYMBOL_STR(nf_ct_expect_alloc) },
	{ 0x739cebee, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x8fe902af, __VMLINUX_SYMBOL_STR(nf_ct_gre_keymap_destroy) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x74247e1d, __VMLINUX_SYMBOL_STR(nf_conntrack_find_get) },
	{ 0x90ff6c9f, __VMLINUX_SYMBOL_STR(nf_ct_invert_tuplepr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack,nf_conntrack_proto_gre";


MODULE_INFO(srcversion, "3AC85D672E857AB44E8A7B1");
