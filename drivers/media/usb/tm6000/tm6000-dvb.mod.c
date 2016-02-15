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
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xc6491080, __VMLINUX_SYMBOL_STR(tm6000_unregister_extension) },
	{ 0xa47922e3, __VMLINUX_SYMBOL_STR(tm6000_register_extension) },
	{ 0xdff8e89d, __VMLINUX_SYMBOL_STR(tm6000_tuner_callback) },
	{ 0x2309a6d6, __VMLINUX_SYMBOL_STR(tm6000_xc5000_callback) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x16edabc1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x9a0a2b58, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x1d81ae98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x92cff9a8, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0280824, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xd08e1b4f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe12a67d9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x1d1f7ac5, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x730b769d, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x89b611dd, __VMLINUX_SYMBOL_STR(tm6000_debug) },
	{ 0xa5dc470c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x63172ef8, __VMLINUX_SYMBOL_STR(tm6000_init_digital_mode) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tm6000,dvb-core";


MODULE_INFO(srcversion, "E190D9F3DB3740615F1F4E2");
