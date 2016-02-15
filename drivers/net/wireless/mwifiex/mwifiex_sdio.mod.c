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
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x65baa6b5, __VMLINUX_SYMBOL_STR(mwifiex_cancel_hs) },
	{ 0x39cd9ac2, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x4f458e1, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x6f42accd, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x1afae5e7, __VMLINUX_SYMBOL_STR(down_interruptible) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xec84b825, __VMLINUX_SYMBOL_STR(mwifiex_disable_auto_ds) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0xce9305c8, __VMLINUX_SYMBOL_STR(mwifiex_process_sleep_confirm_resp) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xc12149b5, __VMLINUX_SYMBOL_STR(mwifiex_main_process) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xc9016aea, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0x97e8455f, __VMLINUX_SYMBOL_STR(mwifiex_dump_drv_info) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x3aee3ec8, __VMLINUX_SYMBOL_STR(mwifiex_add_card) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x31bd9748, __VMLINUX_SYMBOL_STR(mwifiex_alloc_dma_align_buf) },
	{ 0x14e45b90, __VMLINUX_SYMBOL_STR(kobject_uevent_env) },
	{ 0x28cc52a4, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x6f58c32c, __VMLINUX_SYMBOL_STR(dev_notice) },
	{ 0x207545c6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0x57b7999f, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x62879c8f, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0x5a91895a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0xf9c2f265, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xf91d0f4b, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x4be7fb63, __VMLINUX_SYMBOL_STR(up) },
	{ 0xf5617f22, __VMLINUX_SYMBOL_STR(mwifiex_handle_rx_packet) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xf1c3766c, __VMLINUX_SYMBOL_STR(mwifiex_deauthenticate_all) },
	{ 0xe0140619, __VMLINUX_SYMBOL_STR(mwifiex_remove_card) },
	{ 0xc6a08cd, __VMLINUX_SYMBOL_STR(mwifiex_enable_hs) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0xc2e72d3e, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0xa88b3ad, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x1907887d, __VMLINUX_SYMBOL_STR(mwifiex_init_shutdown_fw) },
	{ 0xbefa0926, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0xf2532d74, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0xc927c0cc, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mwifiex";

MODULE_ALIAS("sdio:c*v02DFd9116*");
MODULE_ALIAS("sdio:c*v02DFd9119*");
MODULE_ALIAS("sdio:c*v02DFd9129*");
MODULE_ALIAS("sdio:c*v02DFd912D*");
MODULE_ALIAS("sdio:c*v02DFd9135*");
MODULE_ALIAS("sdio:c*v02DFd9139*");

MODULE_INFO(srcversion, "6DF2C69102255FCF58E47FB");
