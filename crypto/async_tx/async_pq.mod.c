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
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb0d904b7, __VMLINUX_SYMBOL_STR(raid6_empty_zero_page) },
	{ 0xb1eda60c, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0x908a2f90, __VMLINUX_SYMBOL_STR(dmaengine_unmap_put) },
	{ 0xd4cb6873, __VMLINUX_SYMBOL_STR(raid6_call) },
	{ 0x431ce280, __VMLINUX_SYMBOL_STR(async_tx_submit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf1b8f042, __VMLINUX_SYMBOL_STR(dmaengine_get_unmap_data) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x640e88b6, __VMLINUX_SYMBOL_STR(__async_tx_find_channel) },
	{ 0x5390f807, __VMLINUX_SYMBOL_STR(async_xor) },
	{ 0xc96b5030, __VMLINUX_SYMBOL_STR(async_tx_quiesce) },
	{ 0x15fe0cd3, __VMLINUX_SYMBOL_STR(raid6_gfexp) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=raid6_pq,async_tx,async_xor";


MODULE_INFO(srcversion, "3AC91CC90EF0496B332E3F2");
