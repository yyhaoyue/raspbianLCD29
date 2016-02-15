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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x5ab64d92, __VMLINUX_SYMBOL_STR(lirc_dev_fop_close) },
	{ 0x936a5d57, __VMLINUX_SYMBOL_STR(lirc_dev_fop_open) },
	{ 0x39dd64c1, __VMLINUX_SYMBOL_STR(lirc_dev_fop_poll) },
	{ 0x965da445, __VMLINUX_SYMBOL_STR(lirc_dev_fop_read) },
	{ 0xa8ed7cb5, __VMLINUX_SYMBOL_STR(no_llseek) },
	{ 0x4dca738, __VMLINUX_SYMBOL_STR(lirc_unregister_driver) },
	{ 0xc0f42183, __VMLINUX_SYMBOL_STR(lirc_register_driver) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x6265bdd7, __VMLINUX_SYMBOL_STR(bcm2708_gpio_setpull) },
	{ 0xfe990052, __VMLINUX_SYMBOL_STR(gpio_free) },
	{ 0x47229b5c, __VMLINUX_SYMBOL_STR(gpio_request) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xf00da495, __VMLINUX_SYMBOL_STR(of_property_read_u32_index) },
	{ 0x8b379312, __VMLINUX_SYMBOL_STR(of_parse_phandle) },
	{ 0x6cf7097c, __VMLINUX_SYMBOL_STR(gpiochip_find) },
	{ 0x6dfbbf6, __VMLINUX_SYMBOL_STR(platform_device_put) },
	{ 0xcc659a47, __VMLINUX_SYMBOL_STR(platform_device_add) },
	{ 0x6e4e7da1, __VMLINUX_SYMBOL_STR(platform_device_alloc) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc61bd311, __VMLINUX_SYMBOL_STR(of_find_device_by_node) },
	{ 0x453da117, __VMLINUX_SYMBOL_STR(of_find_compatible_node) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xb2d76914, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
	{ 0x3ce4ca6f, __VMLINUX_SYMBOL_STR(disable_irq) },
	{ 0xbc477a2, __VMLINUX_SYMBOL_STR(irq_set_irq_type) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x4f68e5c9, __VMLINUX_SYMBOL_STR(do_gettimeofday) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xe2e8065e, __VMLINUX_SYMBOL_STR(memdup_user) },
	{ 0x94eea794, __VMLINUX_SYMBOL_STR(getnstimeofday64) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x63db733d, __VMLINUX_SYMBOL_STR(lirc_dev_fop_ioctl) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=lirc_dev";

MODULE_ALIAS("of:N*T*Crpi,lirc-rpi*");

MODULE_INFO(srcversion, "77EA672C6FB28A891341C77");
