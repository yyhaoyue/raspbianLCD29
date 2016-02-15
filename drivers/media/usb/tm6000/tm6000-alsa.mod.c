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
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xa6555ce7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0xc6491080, __VMLINUX_SYMBOL_STR(tm6000_unregister_extension) },
	{ 0xa47922e3, __VMLINUX_SYMBOL_STR(tm6000_register_extension) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x98fd3fe4, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xf8f99488, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x93037f86, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x98c16e3b, __VMLINUX_SYMBOL_STR(snd_component_add) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xa7fd53ca, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x41508ae9, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_integer) },
	{ 0xee84d7c6, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_pow2) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xbe61a6c2, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x28cb683e, __VMLINUX_SYMBOL_STR(tm6000_set_audio_bitrate) },
	{ 0xbe5c31d, __VMLINUX_SYMBOL_STR(tm6000_set_reg_mask) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1c65f966, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xed971682, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0xfafd096d, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0xd6fb0db0, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,tm6000,snd";


MODULE_INFO(srcversion, "D458FCA1CCCDEF34324FA9C");
