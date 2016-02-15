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
	{ 0xc0799fa3, __VMLINUX_SYMBOL_STR(hid_unregister_driver) },
	{ 0x577c3acc, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x99531472, __VMLINUX_SYMBOL_STR(__hid_register_driver) },
	{ 0x6e904dc6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xe18cb6c1, __VMLINUX_SYMBOL_STR(roccat_common2_send) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x996bdb64, __VMLINUX_SYMBOL_STR(_kstrtoul) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x73b1ed13, __VMLINUX_SYMBOL_STR(roccat_connect) },
	{ 0x3da9b67b, __VMLINUX_SYMBOL_STR(roccat_common2_receive) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x30d8a7a7, __VMLINUX_SYMBOL_STR(hid_connect) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x5fa6df6c, __VMLINUX_SYMBOL_STR(hid_open_report) },
	{ 0x2f622ea1, __VMLINUX_SYMBOL_STR(roccat_disconnect) },
	{ 0x169b1520, __VMLINUX_SYMBOL_STR(hid_disconnect) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8c4181ec, __VMLINUX_SYMBOL_STR(roccat_report_event) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hid-roccat-common,hid-roccat";

MODULE_ALIAS("hid:b0003g*v00001E7Dp000030D4");

MODULE_INFO(srcversion, "239CF982EA40FFADB2FB6E2");
