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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x22e46643, __VMLINUX_SYMBOL_STR(video_device_release_empty) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xed971682, __VMLINUX_SYMBOL_STR(snd_pcm_period_elapsed) },
	{ 0x981deb51, __VMLINUX_SYMBOL_STR(v4l2_device_unregister) },
	{ 0xbe8b6535, __VMLINUX_SYMBOL_STR(vb2_fop_poll) },
	{ 0xdd959199, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamon) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x977b7b12, __VMLINUX_SYMBOL_STR(__video_register_device) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xd6fb0db0, __VMLINUX_SYMBOL_STR(snd_pcm_stream_lock) },
	{ 0x17b51c2b, __VMLINUX_SYMBOL_STR(v4l2_device_register) },
	{ 0xc163635c, __VMLINUX_SYMBOL_STR(vb2_fop_read) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3e220a9f, __VMLINUX_SYMBOL_STR(v4l2_device_disconnect) },
	{ 0xdc86c004, __VMLINUX_SYMBOL_STR(vb2_vmalloc_memops) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xe9a0bdc5, __VMLINUX_SYMBOL_STR(vb2_fop_mmap) },
	{ 0x786e23f2, __VMLINUX_SYMBOL_STR(vb2_ioctl_qbuf) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x17806391, __VMLINUX_SYMBOL_STR(video_unregister_device) },
	{ 0xf8f99488, __VMLINUX_SYMBOL_STR(snd_pcm_set_ops) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0x55476f0f, __VMLINUX_SYMBOL_STR(vb2_plane_vaddr) },
	{ 0xafd25325, __VMLINUX_SYMBOL_STR(vb2_buffer_done) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc60fc859, __VMLINUX_SYMBOL_STR(vb2_ioctl_prepare_buf) },
	{ 0xd46681eb, __VMLINUX_SYMBOL_STR(snd_pcm_lib_free_pages) },
	{ 0xa6555ce7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_ioctl) },
	{ 0x9053595a, __VMLINUX_SYMBOL_STR(vb2_ioctl_create_bufs) },
	{ 0x4e8716ca, __VMLINUX_SYMBOL_STR(vb2_ioctl_dqbuf) },
	{ 0xbd67e1c6, __VMLINUX_SYMBOL_STR(snd_pcm_lib_malloc_pages) },
	{ 0xa7fd53ca, __VMLINUX_SYMBOL_STR(snd_card_new) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xab542dd3, __VMLINUX_SYMBOL_STR(vb2_fop_release) },
	{ 0x8183d808, __VMLINUX_SYMBOL_STR(video_devdata) },
	{ 0xfafd096d, __VMLINUX_SYMBOL_STR(snd_pcm_stream_unlock) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8dcddd18, __VMLINUX_SYMBOL_STR(v4l2_fh_open) },
	{ 0x77ddab50, __VMLINUX_SYMBOL_STR(vb2_ioctl_querybuf) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x483cd1a7, __VMLINUX_SYMBOL_STR(snd_pcm_lib_preallocate_pages_for_all) },
	{ 0x1c65f966, __VMLINUX_SYMBOL_STR(snd_card_free) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x98fd3fe4, __VMLINUX_SYMBOL_STR(snd_card_register) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x93037f86, __VMLINUX_SYMBOL_STR(snd_pcm_new) },
	{ 0x90d71a59, __VMLINUX_SYMBOL_STR(vb2_ioctl_streamoff) },
	{ 0x42f373d1, __VMLINUX_SYMBOL_STR(vb2_queue_release) },
	{ 0xc891f2dd, __VMLINUX_SYMBOL_STR(v4l2_device_put) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x1c483a9, __VMLINUX_SYMBOL_STR(v4l2_get_timestamp) },
	{ 0x4fbde265, __VMLINUX_SYMBOL_STR(video_ioctl2) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x999ce2ac, __VMLINUX_SYMBOL_STR(vb2_queue_init) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=videobuf2-core,videodev,snd-pcm,videobuf2-vmalloc,snd,v4l2-common";

MODULE_ALIAS("usb:v1B71p3002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "B6DA60C9B61F92C96600B2E");
