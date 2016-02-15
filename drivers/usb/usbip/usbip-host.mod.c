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
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x833cc0a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x1be95d00, __VMLINUX_SYMBOL_STR(usbip_event_happened) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xd02753dc, __VMLINUX_SYMBOL_STR(usbip_header_correct_endian) },
	{ 0x35bc2d6b, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0xd5a39607, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x7e3e91ad, __VMLINUX_SYMBOL_STR(usb_set_configuration) },
	{ 0x65e6a2d0, __VMLINUX_SYMBOL_STR(usbip_alloc_iso_desc_pdu) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x323b5d4e, __VMLINUX_SYMBOL_STR(usb_hub_claim_port) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xe546bc99, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x49c119e2, __VMLINUX_SYMBOL_STR(usbip_event_add) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe1ea0586, __VMLINUX_SYMBOL_STR(usbip_dump_header) },
	{ 0xc025e7b4, __VMLINUX_SYMBOL_STR(usb_lock_device_for_reset) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xcdc94296, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0x61a3c9cd, __VMLINUX_SYMBOL_STR(usb_set_interface) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0xb950cc97, __VMLINUX_SYMBOL_STR(usb_register_device_driver) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x32201889, __VMLINUX_SYMBOL_STR(kernel_sock_shutdown) },
	{ 0x70eea281, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0x36b4f7d9, __VMLINUX_SYMBOL_STR(usbip_stop_eh) },
	{ 0x46f0eede, __VMLINUX_SYMBOL_STR(dev_attr_usbip_debug) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0x5c27c4af, __VMLINUX_SYMBOL_STR(usbip_recv_iso) },
	{ 0x2c0f2f46, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xf3137e96, __VMLINUX_SYMBOL_STR(usbip_dump_urb) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x85dabfc9, __VMLINUX_SYMBOL_STR(driver_create_file) },
	{ 0x80453ff1, __VMLINUX_SYMBOL_STR(usbip_recv) },
	{ 0x3817b15e, __VMLINUX_SYMBOL_STR(usb_reset_device) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf22d6516, __VMLINUX_SYMBOL_STR(usb_clear_halt) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x6b4c5aa6, __VMLINUX_SYMBOL_STR(usb_deregister_device_driver) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa1e2b016, __VMLINUX_SYMBOL_STR(usbip_recv_xbuff) },
	{ 0x7686210e, __VMLINUX_SYMBOL_STR(usb_hub_release_port) },
	{ 0xd149e2d0, __VMLINUX_SYMBOL_STR(__put_task_struct) },
	{ 0x78b72f44, __VMLINUX_SYMBOL_STR(usbip_debug_flag) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xae2fd7cb, __VMLINUX_SYMBOL_STR(driver_remove_file) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x65b9ad1d, __VMLINUX_SYMBOL_STR(usbip_start_eh) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xbc5e9b63, __VMLINUX_SYMBOL_STR(usbip_pack_pdu) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=usbip-core";


MODULE_INFO(srcversion, "C33D0A5866D74305ADDA7C8");
