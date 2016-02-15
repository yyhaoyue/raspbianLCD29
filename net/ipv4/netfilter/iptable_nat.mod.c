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
	{ 0xe123aac3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x29d2dba3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1262c3, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xb1ba8ab, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xbc4e1b6c, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x14e6f814, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_in) },
	{ 0x9803b51e, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_out) },
	{ 0x1a9392, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_local_fn) },
	{ 0xd5de086, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x170e8083, __VMLINUX_SYMBOL_STR(nf_nat_ipv4_fn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ip_tables,nf_nat_ipv4";


MODULE_INFO(srcversion, "D897ACF6155386CD92A0451");
