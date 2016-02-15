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
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2420db99, __VMLINUX_SYMBOL_STR(nfc_tm_data_received) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x210488e3, __VMLINUX_SYMBOL_STR(nfc_get_local_general_bytes) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xd0d03a2, __VMLINUX_SYMBOL_STR(nfc_register_device) },
	{ 0xf5614fa8, __VMLINUX_SYMBOL_STR(nfc_allocate_device) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xb59e64d2, __VMLINUX_SYMBOL_STR(nfc_alloc_recv_skb) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5e7edbba, __VMLINUX_SYMBOL_STR(usb_unlink_urb) },
	{ 0x2e21f5f7, __VMLINUX_SYMBOL_STR(nfc_tm_deactivated) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x9b794306, __VMLINUX_SYMBOL_STR(nfc_tm_activated) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x71af985f, __VMLINUX_SYMBOL_STR(nfc_dep_link_is_up) },
	{ 0xa1c988f2, __VMLINUX_SYMBOL_STR(nfc_set_remote_general_bytes) },
	{ 0xb491afcb, __VMLINUX_SYMBOL_STR(nfc_targets_found) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4059792f, __VMLINUX_SYMBOL_STR(print_hex_dump) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x74ce05b8, __VMLINUX_SYMBOL_STR(flush_delayed_work) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0x68ee6c6, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0xd070429e, __VMLINUX_SYMBOL_STR(nfc_unregister_device) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=nfc";

MODULE_ALIAS("usb:v04CCp2533d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04E6p5591d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v054Cp02E1d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v072Fp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A99582BF364283E0D82BAFA");
