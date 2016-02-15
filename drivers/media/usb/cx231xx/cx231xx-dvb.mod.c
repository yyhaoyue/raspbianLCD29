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
	{ 0x5a780eae, __VMLINUX_SYMBOL_STR(cx231xx_unregister_extension) },
	{ 0x4dc5d694, __VMLINUX_SYMBOL_STR(cx231xx_register_extension) },
	{ 0x17ea7c7, __VMLINUX_SYMBOL_STR(cx231xx_tuner_callback) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x47ee35b4, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x16edabc1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x9a0a2b58, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0x1d81ae98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x92cff9a8, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0xb18f53d7, __VMLINUX_SYMBOL_STR(i2c_new_device) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x36de8d6d, __VMLINUX_SYMBOL_STR(cx231xx_demod_reset) },
	{ 0x15008da2, __VMLINUX_SYMBOL_STR(cx231xx_get_i2c_adap) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xc0280824, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x1d1f7ac5, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x730b769d, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0x62a0ed6a, __VMLINUX_SYMBOL_STR(i2c_unregister_device) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0xd08e1b4f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0xe12a67d9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x651cd1c, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0xd21d216f, __VMLINUX_SYMBOL_STR(cx231xx_init_bulk) },
	{ 0xd79821d5, __VMLINUX_SYMBOL_STR(cx231xx_init_isoc) },
	{ 0xd326bc91, __VMLINUX_SYMBOL_STR(cx231xx_set_alt_setting) },
	{ 0x5a7bfcf9, __VMLINUX_SYMBOL_STR(cx231xx_uninit_isoc) },
	{ 0x3f331314, __VMLINUX_SYMBOL_STR(cx231xx_uninit_bulk) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xf7ac860f, __VMLINUX_SYMBOL_STR(cx231xx_set_mode) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xa5dc470c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=cx231xx,dvb-core";


MODULE_INFO(srcversion, "15F8A03DEE6A6E64E810B3D");
