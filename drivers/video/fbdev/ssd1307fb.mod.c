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
	{ 0xa695109d, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd845edc4, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x5768f469, __VMLINUX_SYMBOL_STR(gpiod_set_raw_value) },
	{ 0x7435ab52, __VMLINUX_SYMBOL_STR(gpio_to_desc) },
	{ 0x8745a59a, __VMLINUX_SYMBOL_STR(devm_gpio_request_one) },
	{ 0x9e51646b, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xde6fb46c, __VMLINUX_SYMBOL_STR(of_get_named_gpio_flags) },
	{ 0xee57d7e4, __VMLINUX_SYMBOL_STR(of_match_device) },
	{ 0xee9fc1bf, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xb962102e, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x69f8b581, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xdf0f5654, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x696304ae, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xbc9e62d4, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xa410940f, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x85754bf1, __VMLINUX_SYMBOL_STR(pwm_enable) },
	{ 0xcc5f4616, __VMLINUX_SYMBOL_STR(pwm_config) },
	{ 0xaeedec6d, __VMLINUX_SYMBOL_STR(pwm_get) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xe01d9c3b, __VMLINUX_SYMBOL_STR(i2c_master_send) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xe6894340, __VMLINUX_SYMBOL_STR(pwm_put) },
	{ 0x680b8b63, __VMLINUX_SYMBOL_STR(pwm_disable) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt";

MODULE_ALIAS("i2c:ssd1306fb");
MODULE_ALIAS("i2c:ssd1307fb");
MODULE_ALIAS("of:N*T*Csolomon,ssd1306fb-i2c*");
MODULE_ALIAS("of:N*T*Csolomon,ssd1307fb-i2c*");

MODULE_INFO(srcversion, "80370A0D25BE938FBEDF8E5");
