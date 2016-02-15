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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x808cb85c, __VMLINUX_SYMBOL_STR(smscore_register_hotplug) },
	{ 0x12008aeb, __VMLINUX_SYMBOL_STR(smscore_get_board_id) },
	{ 0xdbf62cae, __VMLINUX_SYMBOL_STR(sms_board_setup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9a0a2b58, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xc0280824, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0xcf061fff, __VMLINUX_SYMBOL_STR(sms_board_event) },
	{ 0x1d81ae98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0xbbdb5c42, __VMLINUX_SYMBOL_STR(smscore_unregister_client) },
	{ 0x730b769d, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x63222b29, __VMLINUX_SYMBOL_STR(smsclient_sendrequest) },
	{ 0xe12a67d9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x485a1541, __VMLINUX_SYMBOL_STR(sms_board_lna_control) },
	{ 0xa5dc470c, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd08e1b4f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0x59b7fdab, __VMLINUX_SYMBOL_STR(smscore_putbuffer) },
	{ 0xfcb2c75f, __VMLINUX_SYMBOL_STR(smscore_unregister_hotplug) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x844539ae, __VMLINUX_SYMBOL_STR(sms_get_board) },
	{ 0x92cff9a8, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0xbd281c73, __VMLINUX_SYMBOL_STR(sms_board_power) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xcd300e29, __VMLINUX_SYMBOL_STR(sms_board_led_feedback) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xc44f01be, __VMLINUX_SYMBOL_STR(smscore_register_client) },
	{ 0xb63a5a15, __VMLINUX_SYMBOL_STR(smscore_get_device_mode) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x16edabc1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=smsmdtv,dvb-core";


MODULE_INFO(srcversion, "B20D383E964F194D2EF4A82");
