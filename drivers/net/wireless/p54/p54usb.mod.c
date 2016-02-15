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
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x65911363, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x6220b4a2, __VMLINUX_SYMBOL_STR(crc32_le) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x40af3dff, __VMLINUX_SYMBOL_STR(p54_register_common) },
	{ 0x91bb8dfb, __VMLINUX_SYMBOL_STR(p54_read_eeprom) },
	{ 0x139396b, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x17a51309, __VMLINUX_SYMBOL_STR(p54_parse_firmware) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x988c2a58, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xc025e7b4, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0x3817b15e, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x927cbb51, __VMLINUX_SYMBOL_STR(p54_init_common) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x3cd00221, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_irq) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xb92c8f90, __VMLINUX_SYMBOL_STR(p54_rx) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xa0a821d6, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xea67214a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xc3d14610, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0xb69c3147, __VMLINUX_SYMBOL_STR(p54_free_skb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x65c7cbf6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0xa482fcc0, __VMLINUX_SYMBOL_STR(p54_free_common) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0xf71a476a, __VMLINUX_SYMBOL_STR(p54_unregister_common) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0x3ce25796, __VMLINUX_SYMBOL_STR(ieee80211_restart_hw) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=p54common,mac80211";

MODULE_ALIAS("usb:v0411p0050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v045Ep00C2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0506p0A11d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0675p0530d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0120d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE06d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp001Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4502d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap5501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4220d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v09AAp1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0DB0p6826d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v107Bp55F2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4023d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v15A9p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1630p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v182Dp096Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1915p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3701d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3703d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2234d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v5041p2235d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p1230d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v050Dp7050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0572p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06A9p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06B9p0121d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0707pEE13d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07AAp0020d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0803p4310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4521d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083Ap4531d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApC501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApF503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p4240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0915p2002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BAFp0118d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BF8p1009d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CDEp0015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D8Ep3762d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v124Ap4025d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1260pEE22d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13B1p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1413p5400d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1435p0427d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1050d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1740p1000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2001p3705d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp5513d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v413Cp8104d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "E377F6059A9D72EEC9E6A61");
