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
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xca31c7cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0xb6b75e80, __VMLINUX_SYMBOL_STR(v4l2_i2c_subdev_init) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x3c6c6323, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_log_status) },
	{ 0x82d67351, __VMLINUX_SYMBOL_STR(i2c_smbus_read_byte_data) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x88a3201d, __VMLINUX_SYMBOL_STR(i2c_smbus_write_byte_data) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xd2d60368, __VMLINUX_SYMBOL_STR(v4l2_device_unregister_subdev) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,v4l2-common";

MODULE_ALIAS("i2c:cs53l32a");

MODULE_INFO(srcversion, "A3241C8E47E7F9E5E27E36A");
