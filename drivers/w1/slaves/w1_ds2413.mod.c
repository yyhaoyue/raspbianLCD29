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
	{ 0x3bebee0c, __VMLINUX_SYMBOL_STR(w1_unregister_family) },
	{ 0x1b069984, __VMLINUX_SYMBOL_STR(w1_register_family) },
	{ 0x801d0d7f, __VMLINUX_SYMBOL_STR(w1_write_8) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xf2a9cbe1, __VMLINUX_SYMBOL_STR(w1_reset_resume_command) },
	{ 0x5ce74efe, __VMLINUX_SYMBOL_STR(w1_read_8) },
	{ 0xc840e728, __VMLINUX_SYMBOL_STR(w1_write_block) },
	{ 0x6e79a221, __VMLINUX_SYMBOL_STR(w1_reset_select_slave) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=wire";


MODULE_INFO(srcversion, "E0996193DB88B664F3DF520");
