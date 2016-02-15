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
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc6634268, __VMLINUX_SYMBOL_STR(of_clk_src_simple_get) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x26a1ac41, __VMLINUX_SYMBOL_STR(of_clk_add_provider) },
	{ 0x16c59855, __VMLINUX_SYMBOL_STR(devm_clk_register) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9b91256d, __VMLINUX_SYMBOL_STR(of_clk_del_provider) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("of:N*T*Chifiberry,dacpro-clk*");

MODULE_INFO(srcversion, "559965EDB400E5814EA2597");
