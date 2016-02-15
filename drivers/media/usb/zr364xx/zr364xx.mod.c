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
	{ 0x4fbde265, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0xbf7fb373, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xe5b296c6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x33753cea, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x22e46643, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x127a39ef, __VMLINUX_SYMBOL_STR(videobuf_read_one) },
	{ 0xed14032f, __VMLINUX_SYMBOL_STR(videobuf_streamon) },
	{ 0x23fd5d3b, __VMLINUX_SYMBOL_STR(videobuf_queue_is_busy) },
	{ 0x3f4f1226, __VMLINUX_SYMBOL_STR(v4l2_fh_release) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x7910a771, __VMLINUX_SYMBOL_STR(videobuf_mmap_mapper) },
	{ 0xfe53b0c5, __VMLINUX_SYMBOL_STR(videobuf_iolock) },
	{ 0x18b4c296, __VMLINUX_SYMBOL_STR(videobuf_vmalloc_free) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x977b7b12, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0xee263e66, __VMLINUX_SYMBOL_STR(videobuf_queue_vmalloc_init) },
	{ 0x8645fcb8, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_setup) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0xca31c7cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x17b51c2b, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x3792660d, __VMLINUX_SYMBOL_STR(videobuf_to_vmalloc) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x90df966e, __VMLINUX_SYMBOL_STR(videobuf_mmap_free) },
	{ 0x981deb51, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xcb0a83de, __VMLINUX_SYMBOL_STR(videobuf_poll_stream) },
	{ 0x800f7f76, __VMLINUX_SYMBOL_STR(v4l2_ctrl_poll) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x8dcddd18, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xd7ba461, __VMLINUX_SYMBOL_STR(videobuf_reqbufs) },
	{ 0xceb066c7, __VMLINUX_SYMBOL_STR(videobuf_querybuf) },
	{ 0x470e802e, __VMLINUX_SYMBOL_STR(videobuf_qbuf) },
	{ 0x31d8ad8a, __VMLINUX_SYMBOL_STR(videobuf_dqbuf) },
	{ 0xda7e6101, __VMLINUX_SYMBOL_STR(videobuf_streamoff) },
	{ 0x8183d808, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x3e220a9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x17806391, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videodev,videobuf-core,videobuf-vmalloc,v4l2-common";

MODULE_ALIAS("usb:v08CAp0109d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4024d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p0108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0546p3187d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D64p3108d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0595p4343d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0BB0p500Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FEBp2004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055FpB500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v052Bp1A18d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04C8p0729d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04F2pA208d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0784p0040d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p0034d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p0062d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0A17p004Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep405Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v08CAp2102d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06D6p003Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4F5B7CDDA092083FBD78D79");
