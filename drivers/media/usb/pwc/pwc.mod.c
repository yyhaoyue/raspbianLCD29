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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xbf7fb373, __VMLINUX_SYMBOL_STR(v4l2_event_unsubscribe) },
	{ 0xf5ab43ed, __VMLINUX_SYMBOL_STR(v4l2_ctrl_cluster) },
	{ 0x22e46643, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xc4b4bd1f, __VMLINUX_SYMBOL_STR(usb_altnum_to_altsetting) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x33753cea, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0x981deb51, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xca31c7cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbe8b6535, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xdd959199, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe9491e08, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x977b7b12, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x17b51c2b, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc163635c, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xbbb91838, __VMLINUX_SYMBOL_STR(input_event) },
	{ 0x1e7a8d59, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xdd0a2ba2, __VMLINUX_SYMBOL_STR(strlcat) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3e220a9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdc86c004, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x5c78632e, __VMLINUX_SYMBOL_STR(usb_string) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9a0bdc5, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x786e23f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x17806391, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xe5b296c6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x55476f0f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xafd25325, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f1eb94b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0x1750095c, __VMLINUX_SYMBOL_STR(usb_free_coherent) },
	{ 0x4e8716ca, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0xab542dd3, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8183d808, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0x8f7845a9, __VMLINUX_SYMBOL_STR(input_register_device) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xe1ebcd78, __VMLINUX_SYMBOL_STR(input_free_device) },
	{ 0x495426ee, __VMLINUX_SYMBOL_STR(v4l2_ctrl_get_name) },
	{ 0xb2422723, __VMLINUX_SYMBOL_STR(v4l2_ctrl_auto_cluster) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dcddd18, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x77ddab50, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x23214c12, __VMLINUX_SYMBOL_STR(input_unregister_device) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x73d75106, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xea67214a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x2c15a635, __VMLINUX_SYMBOL_STR(usb_alloc_coherent) },
	{ 0x90d71a59, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x4fbde265, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x160a429f, __VMLINUX_SYMBOL_STR(input_allocate_device) },
	{ 0x999ce2ac, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,videobuf2-vmalloc,v4l2-common";

MODULE_ALIAS("usb:v0471p0302d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0303d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0304d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0307d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0308d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p030Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0313d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p0329d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v069Ap0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B0d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B2d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B3d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B4d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B5d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B6d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B7d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v046Dp08B8d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9000d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v055Dp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep400Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v041Ep4011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CCp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v06BEp8116d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1910d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0D81p1900d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "4248680FB70D0D62A10CB37");
