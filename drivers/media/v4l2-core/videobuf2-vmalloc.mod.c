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
	{ 0x6c58d5aa, __VMLINUX_SYMBOL_STR(vb2_put_vma) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x3fd2571, __VMLINUX_SYMBOL_STR(vm_unmap_ram) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4118afd5, __VMLINUX_SYMBOL_STR(remap_vmalloc_range) },
	{ 0xb1eda60c, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0xcfe56e17, __VMLINUX_SYMBOL_STR(set_page_dirty_lock) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x6460fa45, __VMLINUX_SYMBOL_STR(dma_buf_vunmap) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x76e730e3, __VMLINUX_SYMBOL_STR(vm_map_ram) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xcdd158d, __VMLINUX_SYMBOL_STR(sg_alloc_table) },
	{ 0x6094e6de, __VMLINUX_SYMBOL_STR(find_vma) },
	{ 0xa8dd4cf4, __VMLINUX_SYMBOL_STR(dma_buf_export) },
	{ 0x5635a60a, __VMLINUX_SYMBOL_STR(vmalloc_user) },
	{ 0xabae97c6, __VMLINUX_SYMBOL_STR(get_user_pages) },
	{ 0xc2165d85, __VMLINUX_SYMBOL_STR(__arm_iounmap) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xe5743bcc, __VMLINUX_SYMBOL_STR(vb2_common_vm_ops) },
	{ 0xaca1a344, __VMLINUX_SYMBOL_STR(put_page) },
	{ 0x1db7dc40, __VMLINUX_SYMBOL_STR(pgprot_kernel) },
	{ 0xfb961d14, __VMLINUX_SYMBOL_STR(__arm_ioremap) },
	{ 0x9cd60539, __VMLINUX_SYMBOL_STR(sg_free_table) },
	{ 0xbe61a6c2, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x5fb2a908, __VMLINUX_SYMBOL_STR(dma_buf_vmap) },
	{ 0xe3816b2, __VMLINUX_SYMBOL_STR(vb2_get_contig_userptr) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-memops";


MODULE_INFO(srcversion, "522DF5BB9A5C78CE1EE5150");
