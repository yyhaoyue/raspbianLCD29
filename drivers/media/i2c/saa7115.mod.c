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
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0xfe508b06, __VMLINUX_SYMBOL_STR(v4l2_subdev_querymenu) },
	{ 0xfa642a25, __VMLINUX_SYMBOL_STR(v4l2_subdev_try_ext_ctrls) },
	{ 0xfd4f8854, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ext_ctrls) },
	{ 0x8a4c70cf, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ext_ctrls) },
	{ 0xf2f91086, __VMLINUX_SYMBOL_STR(v4l2_subdev_s_ctrl) },
	{ 0x24decf32, __VMLINUX_SYMBOL_STR(v4l2_subdev_g_ctrl) },
	{ 0x9bf123e1, __VMLINUX_SYMBOL_STR(v4l2_subdev_queryctrl) },
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x8645fcb8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0xb2422723, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0xca31c7cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb6b75e80, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3c6c6323, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x82d67351, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x88a3201d, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xd2d60368, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:saa7115_auto");
MODULE_ALIAS("i2c:saa7111");
MODULE_ALIAS("i2c:saa7113");
MODULE_ALIAS("i2c:saa7114");
MODULE_ALIAS("i2c:saa7115");
MODULE_ALIAS("i2c:saa7118");
MODULE_ALIAS("i2c:gm7113c");

MODULE_INFO(srcversion, "DB6D5632798FFBE68B730ED");
