#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
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
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x22e46643, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x191a2ff4, __VMLINUX_SYMBOL_STR(v4l2_event_queue) },
	{ 0x33753cea, __VMLINUX_SYMBOL_STR(v4l2_ctrl_log_status) },
	{ 0xed971682, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x981deb51, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0x3adeeb99, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_free) },
	{ 0xbbf53214, __VMLINUX_SYMBOL_STR(v4l2_ctrl_g_ctrl) },
	{ 0xca31c7cf, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std) },
	{ 0xbe8b6535, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xdd959199, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xe9491e08, __VMLINUX_SYMBOL_STR(vb2_ops_wait_prepare) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x977b7b12, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x5a7e582a, __VMLINUX_SYMBOL_STR(snd_card_disconnect) },
	{ 0x98748294, __VMLINUX_SYMBOL_STR(i2c_add_adapter) },
	{ 0x17b51c2b, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc163635c, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x1e7a8d59, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_std_menu) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xdc86c004, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x4e0bf2d2, __VMLINUX_SYMBOL_STR(snd_device_new) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9a0bdc5, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x786e23f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0xd51b3c15, __VMLINUX_SYMBOL_STR(v4l2_event_subscribe) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xf8f99488, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0xe5b296c6, __VMLINUX_SYMBOL_STR(v4l2_ctrl_subscribe_event) },
	{ 0x55476f0f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xafd25325, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0xf0995f85, __VMLINUX_SYMBOL_STR(snd_card_free_when_closed) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x1f1eb94b, __VMLINUX_SYMBOL_STR(v4l2_ctrl_new_custom) },
	{ 0xa6555ce7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x4e8716ca, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xa7fd53ca, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0x710cd23c, __VMLINUX_SYMBOL_STR(i2c_del_adapter) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xab542dd3, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8183d808, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x7a6c77f5, __VMLINUX_SYMBOL_STR(v4l2_ctrl_grab) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dcddd18, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x77ddab50, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0xfca2da22, __VMLINUX_SYMBOL_STR(v4l2_ctrl_handler_init_class) },
	{ 0x73d75106, __VMLINUX_SYMBOL_STR(vb2_ops_wait_finish) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x1c65f966, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0xc36aa4d, __VMLINUX_SYMBOL_STR(v4l2_i2c_new_subdev_board) },
	{ 0x98fd3fe4, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x93037f86, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xbe61a6c2, __VMLINUX_SYMBOL_STR(vmalloc_to_page) },
	{ 0x90d71a59, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x4fbde265, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x999ce2ac, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,snd-pcm,snd,videobuf2-vmalloc,v4l2-common";


MODULE_INFO(srcversion, "FBD79D8C0414FF2B372D0E2");
