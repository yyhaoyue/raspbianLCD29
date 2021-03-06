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
	{ 0xaba05fab, __VMLINUX_SYMBOL_STR(nf_nat_ftp_hook) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x80dac1e4, __VMLINUX_SYMBOL_STR(nf_nat_follow_master) },
	{ 0x19ac54d9, __VMLINUX_SYMBOL_STR(nf_ct_unexpect_related) },
	{ 0x3c73696e, __VMLINUX_SYMBOL_STR(__nf_nat_mangle_tcp_packet) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xa0fb7d92, __VMLINUX_SYMBOL_STR(nf_ct_helper_log) },
	{ 0x739cebee, __VMLINUX_SYMBOL_STR(nf_ct_expect_related_report) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nf_conntrack_ftp,nf_nat,nf_conntrack";


MODULE_INFO(srcversion, "3D826F2F8A7B24CD7D462EC");
