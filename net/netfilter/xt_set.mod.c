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
	{ 0x33180f8c, __VMLINUX_SYMBOL_STR(xt_unregister_matches) },
	{ 0xc02b2c8, __VMLINUX_SYMBOL_STR(xt_register_targets) },
	{ 0x5f240f95, __VMLINUX_SYMBOL_STR(xt_register_matches) },
	{ 0xf1ab19f1, __VMLINUX_SYMBOL_STR(ip_set_test) },
	{ 0x94647212, __VMLINUX_SYMBOL_STR(ip_set_del) },
	{ 0x2b63e86f, __VMLINUX_SYMBOL_STR(ip_set_add) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x21b9c088, __VMLINUX_SYMBOL_STR(ip_set_nfnl_get_byindex) },
	{ 0x5ca80181, __VMLINUX_SYMBOL_STR(ip_set_nfnl_put) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=x_tables,ip_set";


MODULE_INFO(srcversion, "5DA5568503BB91C915B3E61");
