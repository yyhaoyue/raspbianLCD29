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
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe93e49c3, __VMLINUX_SYMBOL_STR(devres_free) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xbff03163, __VMLINUX_SYMBOL_STR(snd_pcm_hw_constraint_list) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xecf812dd, __VMLINUX_SYMBOL_STR(snd_ctl_notify) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x79f255e0, __VMLINUX_SYMBOL_STR(devres_alloc) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x76a6a825, __VMLINUX_SYMBOL_STR(snd_ctl_new1) },
	{ 0x89ae3c55, __VMLINUX_SYMBOL_STR(devres_add) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x510aa42a, __VMLINUX_SYMBOL_STR(snd_ctl_add) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=snd-pcm,snd";


MODULE_INFO(srcversion, "04FA7FE410971A1B475F8B8");
