#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x5f65a6db, __VMLINUX_SYMBOL_STR(au8522_release_state) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x1a41377e, __VMLINUX_SYMBOL_STR(au8522_led_ctrl) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5b2af95, __VMLINUX_SYMBOL_STR(au8522_writereg) },
	{ 0x6a1748ab, __VMLINUX_SYMBOL_STR(au8522_readreg) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcc1d8f75, __VMLINUX_SYMBOL_STR(au8522_i2c_gate_ctrl) },
	{ 0x789eafdf, __VMLINUX_SYMBOL_STR(au8522_sleep) },
	{ 0x1995ba34, __VMLINUX_SYMBOL_STR(au8522_analog_i2c_gate_ctrl) },
	{ 0xdf183f0e, __VMLINUX_SYMBOL_STR(au8522_get_state) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x44787a62, __VMLINUX_SYMBOL_STR(au8522_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=au8522_common";


MODULE_INFO(srcversion, "7B0AEF829128A62DF547BA0");
