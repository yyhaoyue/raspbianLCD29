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
	{ 0x8b3dbdb4, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0x1cb3690c, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x5355bffa, __VMLINUX_SYMBOL_STR(lbs_resume) },
	{ 0x39cd9ac2, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x4f458e1, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x6f42accd, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xef6729be, __VMLINUX_SYMBOL_STR(lbs_stop_card) },
	{ 0x62df03fc, __VMLINUX_SYMBOL_STR(netdev_alert) },
	{ 0x656c09d1, __VMLINUX_SYMBOL_STR(__lbs_cmd) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9016aea, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x95d98b74, __VMLINUX_SYMBOL_STR(lbs_start_card) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbea52042, __VMLINUX_SYMBOL_STR(lbs_queue_event) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0xfe5f3a43, __VMLINUX_SYMBOL_STR(lbs_get_firmware_async) },
	{ 0xd94c4cad, __VMLINUX_SYMBOL_STR(lbs_cmd_copyback) },
	{ 0xb205816f, __VMLINUX_SYMBOL_STR(lbs_suspend) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0x28cc52a4, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x207545c6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x41167a6a, __VMLINUX_SYMBOL_STR(lbs_remove_card) },
	{ 0x4254b260, __VMLINUX_SYMBOL_STR(sdio_f0_writeb) },
	{ 0x57b7999f, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x7b1c2d11, __VMLINUX_SYMBOL_STR(lbs_process_rxed_packet) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x62879c8f, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xe7226f9e, __VMLINUX_SYMBOL_STR(lbs_host_to_card_done) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x394dc82e, __VMLINUX_SYMBOL_STR(sdio_align_size) },
	{ 0x313d161c, __VMLINUX_SYMBOL_STR(lbs_add_card) },
	{ 0x5a91895a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xf9c2f265, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x98ec615f, __VMLINUX_SYMBOL_STR(netdev_err) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xf91d0f4b, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xc2e72d3e, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xa88b3ad, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xbefa0926, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xf2532d74, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc927c0cc, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x74e32a01, __VMLINUX_SYMBOL_STR(lbs_notify_command_response) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libertas";

MODULE_ALIAS("sdio:c*v02DFd9103*");
MODULE_ALIAS("sdio:c*v02DFd9104*");

MODULE_INFO(srcversion, "2E438C6B7372480A3BC4B58");
