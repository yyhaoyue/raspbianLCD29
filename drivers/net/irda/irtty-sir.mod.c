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
	{ 0xa120d33c, __VMLINUX_SYMBOL_STR(tty_unregister_ldisc) },
	{ 0xe27bc241, __VMLINUX_SYMBOL_STR(tty_register_ldisc) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0xb089ffe9, __VMLINUX_SYMBOL_STR(sirdev_receive) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x7925e020, __VMLINUX_SYMBOL_STR(sirdev_get_instance) },
	{ 0xb590d312, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0x33c1dc78, __VMLINUX_SYMBOL_STR(tty_chars_in_buffer) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9e95d16, __VMLINUX_SYMBOL_STR(tty_encode_baud_rate) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x95aefba6, __VMLINUX_SYMBOL_STR(tty_write_room) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xea83316, __VMLINUX_SYMBOL_STR(sirdev_put_instance) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x54b3bd4, __VMLINUX_SYMBOL_STR(sirdev_set_dongle) },
	{ 0xd13abb09, __VMLINUX_SYMBOL_STR(tty_mode_ioctl) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf56790ec, __VMLINUX_SYMBOL_STR(sirdev_write_complete) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sir-dev";


MODULE_INFO(srcversion, "F2B50C6A0DB9B8CEBE41D6E");
