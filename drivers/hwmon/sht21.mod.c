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
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xb8537f11, __VMLINUX_SYMBOL_STR(devm_hwmon_device_register_with_groups) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xaf3c59b0, __VMLINUX_SYMBOL_STR(i2c_smbus_read_word_data) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=hwmon";

MODULE_ALIAS("i2c:sht21");

MODULE_INFO(srcversion, "4054E483941EFE9EBE517C8");
