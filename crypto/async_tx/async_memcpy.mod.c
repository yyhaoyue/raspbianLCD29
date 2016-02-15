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
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1eda60c, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x908a2f90, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0x431ce280, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0xf1b8f042, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x640e88b6, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0xc96b5030, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=async_tx";


MODULE_INFO(srcversion, "0D355879031AC913002DA03");
