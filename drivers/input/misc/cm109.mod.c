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
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaafdc258, __VMLINUX_SYMBOL_STR(strcasecmp) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe1ebcd78, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x160a429f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0x23214c12, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";

MODULE_ALIAS("usb:v0D8Cp000Ed*dc*dsc*dp*ic03isc00ip00in*");

MODULE_INFO(srcversion, "281165ABF22E8609F265734");
