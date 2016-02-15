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
	{ 0x1bfb425f, __VMLINUX_SYMBOL_STR(vb2_ioctl_reqbufs) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbf7fb373, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0x92b2dbfa, __VMLINUX_SYMBOL_STR(rc_unregister_device) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0xafe8ca55, __VMLINUX_SYMBOL_STR(_vb2_fop_release) },
	{ 0x22e46643, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x9a0a2b58, __VMLINUX_SYMBOL_STR(dvb_dmx_init) },
	{ 0xc0280824, __VMLINUX_SYMBOL_STR(dvb_unregister_adapter) },
	{ 0x2aca4871, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev) },
	{ 0x33753cea, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xa34fc303, __VMLINUX_SYMBOL_STR(tveeprom_hauppauge_analog) },
	{ 0x7f9f98e3, __VMLINUX_SYMBOL_STR(dvb_frontend_suspend) },
	{ 0x1d81ae98, __VMLINUX_SYMBOL_STR(dvb_register_frontend) },
	{ 0x981deb51, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x78bdb0ce, __VMLINUX_SYMBOL_STR(dvb_frontend_resume) },
	{ 0xd4477e61, __VMLINUX_SYMBOL_STR(i2c_transfer) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbe8b6535, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xdd959199, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe9491e08, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0x730b769d, __VMLINUX_SYMBOL_STR(dvb_unregister_frontend) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x977b7b12, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xf159c6ae, __VMLINUX_SYMBOL_STR(rc_allocate_device) },
	{ 0x651cd1c, __VMLINUX_SYMBOL_STR(dvb_net_release) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x98748294, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x1d1f7ac5, __VMLINUX_SYMBOL_STR(dvb_frontend_detach) },
	{ 0x17b51c2b, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc163635c, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x3e220a9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdc86c004, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0xec09c3f4, __VMLINUX_SYMBOL_STR(rc_free_device) },
	{ 0xe5c22ac0, __VMLINUX_SYMBOL_STR(param_ops_short) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9a0bdc5, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x786e23f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xe12a67d9, __VMLINUX_SYMBOL_STR(dvb_dmxdev_release) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17806391, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x47ee35b4, __VMLINUX_SYMBOL_STR(dvb_net_init) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xe5b296c6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x55476f0f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xafd25325, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x5d5af958, __VMLINUX_SYMBOL_STR(rc_register_device) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc60fc859, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x49d4ebe8, __VMLINUX_SYMBOL_STR(tveeprom_read) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x9053595a, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0xd08e1b4f, __VMLINUX_SYMBOL_STR(dvb_dmx_release) },
	{ 0x4e8716ca, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x868784cb, __VMLINUX_SYMBOL_STR(__symbol_get) },
	{ 0x710cd23c, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x2b50b103, __VMLINUX_SYMBOL_STR(dvb_dmx_swfilter_packets) },
	{ 0x8183d808, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x92cff9a8, __VMLINUX_SYMBOL_STR(dvb_register_adapter) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x3067aeda, __VMLINUX_SYMBOL_STR(i2c_master_recv) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dcddd18, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x77ddab50, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x73d75106, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0x62c7585, __VMLINUX_SYMBOL_STR(ir_raw_event_store) },
	{ 0xbff4f0c9, __VMLINUX_SYMBOL_STR(i2c_probe_func_quick_read) },
	{ 0x6e9dd606, __VMLINUX_SYMBOL_STR(__symbol_put) },
	{ 0xea67214a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x12933cb7, __VMLINUX_SYMBOL_STR(vb2_ioctl_expbuf) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x90d71a59, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x42f373d1, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0xbd3c5649, __VMLINUX_SYMBOL_STR(ir_raw_event_handle) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x4fbde265, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x16edabc1, __VMLINUX_SYMBOL_STR(dvb_dmxdev_init) },
	{ 0x999ce2ac, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,rc-core,dvb-core,v4l2-common,tveeprom,videobuf2-vmalloc";

MODULE_ALIAS("usb:v2040p7200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7240d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FE9pD620d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7210d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7217d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p721Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7280d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0FD9p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7201d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7211d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7281d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05E1p0480d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p8200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7260d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7213d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2040p7270d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "CA71603BA8936666D6506A2");
