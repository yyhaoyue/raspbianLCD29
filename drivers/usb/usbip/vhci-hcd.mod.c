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
	{ 0x1be95d00, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x35bc2d6b, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xd5a39607, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xdd6301f0, __VMLINUX_SYMBOL_STR(usb_add_hcd) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x8417cd5f, __VMLINUX_SYMBOL_STR(usb_remove_hcd) },
	{ 0x2a5bdc7e, __VMLINUX_SYMBOL_STR(usb_create_hcd) },
	{ 0x44fd1ae4, __VMLINUX_SYMBOL_STR(usb_hcd_poll_rh_status) },
	{ 0x65e6a2d0, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x92b2ab25, __VMLINUX_SYMBOL_STR(usb_hcd_giveback_urb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x382aef34, __VMLINUX_SYMBOL_STR(sysfs_remove_group) },
	{ 0xe546bc99, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x512a9966, __VMLINUX_SYMBOL_STR(usb_put_hcd) },
	{ 0x49c119e2, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0xe384a102, __VMLINUX_SYMBOL_STR(usb_speed_string) },
	{ 0xfa7dbe0a, __VMLINUX_SYMBOL_STR(usb_hcd_link_urb_to_ep) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xcdc94296, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xdd7ab7ec, __VMLINUX_SYMBOL_STR(sysfs_create_group) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x32201889, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x36b4f7d9, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x46f0eede, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0xb2d76914, __VMLINUX_SYMBOL_STR(platform_device_unregister) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5c27c4af, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x56b2dde4, __VMLINUX_SYMBOL_STR(usbip_pad_iso) },
	{ 0xfe5e4f3e, __VMLINUX_SYMBOL_STR(usb_hcd_check_unlink_urb) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf3137e96, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0xe24a2e24, __VMLINUX_SYMBOL_STR(platform_device_register) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0x80453ff1, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x19a304ba, __VMLINUX_SYMBOL_STR(usb_disabled) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa1e2b016, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0xd149e2d0, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xa028b439, __VMLINUX_SYMBOL_STR(usb_hcd_unlink_urb_from_ep) },
	{ 0x65b9ad1d, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0xbc5e9b63, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "E0C475E0AA548A74DF8A3D5");
