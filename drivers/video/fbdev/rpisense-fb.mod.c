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
	{ 0xa695109d, __VMLINUX_SYMBOL_STR(fb_sys_read) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xfe6f0480, __VMLINUX_SYMBOL_STR(fb_sys_write) },
	{ 0xb962102e, __VMLINUX_SYMBOL_STR(sys_fillrect) },
	{ 0x69f8b581, __VMLINUX_SYMBOL_STR(sys_copyarea) },
	{ 0xdf0f5654, __VMLINUX_SYMBOL_STR(sys_imageblit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd845edc4, __VMLINUX_SYMBOL_STR(register_framebuffer) },
	{ 0x9e51646b, __VMLINUX_SYMBOL_STR(fb_deferred_io_init) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xee9fc1bf, __VMLINUX_SYMBOL_STR(framebuffer_alloc) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xad635bf2, __VMLINUX_SYMBOL_STR(rpisense_get_dev) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3ffd825c, __VMLINUX_SYMBOL_STR(rpisense_block_write) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x696304ae, __VMLINUX_SYMBOL_STR(framebuffer_release) },
	{ 0xbc9e62d4, __VMLINUX_SYMBOL_STR(fb_deferred_io_cleanup) },
	{ 0xa410940f, __VMLINUX_SYMBOL_STR(unregister_framebuffer) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fb_sys_fops,sysfillrect,syscopyarea,sysimgblt,rpisense-core";

MODULE_ALIAS("platform:rpi-sense-fb");
MODULE_ALIAS("of:N*T*Crpi,rpi-sense-fb*");

MODULE_INFO(srcversion, "FC554BC5F2903919A643A1E");
