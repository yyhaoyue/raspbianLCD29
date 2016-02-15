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
	{ 0x5c0322e8, __VMLINUX_SYMBOL_STR(xt_hook_unlink) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x14e9000c, __VMLINUX_SYMBOL_STR(xt_hook_link) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xb1262c3, __VMLINUX_SYMBOL_STR(ipt_register_table) },
	{ 0xb1ba8ab, __VMLINUX_SYMBOL_STR(ipt_alloc_initial_table) },
	{ 0xbc4e1b6c, __VMLINUX_SYMBOL_STR(ipt_unregister_table) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4a73b54e, __VMLINUX_SYMBOL_STR(ip_route_me_harder) },
	{ 0xd5de086, __VMLINUX_SYMBOL_STR(ipt_do_table) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_tables";


MODULE_INFO(srcversion, "80FB0C3A85C5767D44C696D");
