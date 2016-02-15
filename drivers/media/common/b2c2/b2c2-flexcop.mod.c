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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xc6ae474b, __VMLINUX_SYMBOL_STR(s5h1420_get_tuner_i2c_adapter) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9a0a2b58, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xc0280824, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x20aceb06, __VMLINUX_SYMBOL_STR(cx24113_agc_callback) },
	{ 0x1d81ae98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x6f4f0ad6, __VMLINUX_SYMBOL_STR(cx24123_get_tuner_i2c_adapter) },
	{ 0x730b769d, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x651cd1c, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x98748294, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x1d1f7ac5, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0xe12a67d9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xa5dc470c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0x47ee35b4, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xd08e1b4f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x710cd23c, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0x2b50b103, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x92cff9a8, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0x16edabc1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=s5h1420,dvb-core,cx24113,cx24123";


MODULE_INFO(srcversion, "C97F4F10969B5A566604E41");
