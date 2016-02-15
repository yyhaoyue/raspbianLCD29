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
	{ 0x207545c6, __VMLINUX_SYMBOL_STR(sdio_unregister_driver) },
	{ 0xc2e72d3e, __VMLINUX_SYMBOL_STR(sdio_register_driver) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xbefa0926, __VMLINUX_SYMBOL_STR(sdio_set_block_size) },
	{ 0x6f42accd, __VMLINUX_SYMBOL_STR(sdio_claim_irq) },
	{ 0x1b5ffaef, __VMLINUX_SYMBOL_STR(btmrvl_register_hdev) },
	{ 0xebe048af, __VMLINUX_SYMBOL_STR(btmrvl_add_card) },
	{ 0x4f458e1, __VMLINUX_SYMBOL_STR(sdio_enable_func) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0x3f54b7b5, __VMLINUX_SYMBOL_STR(btmrvl_send_module_cfg_cmd) },
	{ 0x1a390adc, __VMLINUX_SYMBOL_STR(btmrvl_remove_card) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2ed26f05, __VMLINUX_SYMBOL_STR(btmrvl_interrupt) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x39cd9ac2, __VMLINUX_SYMBOL_STR(sdio_writesb) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0x850b8b2b, __VMLINUX_SYMBOL_STR(btmrvl_check_evtpkt) },
	{ 0x678693f1, __VMLINUX_SYMBOL_STR(hci_recv_frame) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x3db93e67, __VMLINUX_SYMBOL_STR(btmrvl_process_event) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x28cc52a4, __VMLINUX_SYMBOL_STR(sdio_readsb) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0xabee7110, __VMLINUX_SYMBOL_STR(dev_coredumpv) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x40a9b349, __VMLINUX_SYMBOL_STR(vzalloc) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0xd7442057, __VMLINUX_SYMBOL_STR(bt_info) },
	{ 0x1cb3690c, __VMLINUX_SYMBOL_STR(sdio_readb) },
	{ 0x5a91895a, __VMLINUX_SYMBOL_STR(sdio_f0_readb) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xf2532d74, __VMLINUX_SYMBOL_STR(sdio_disable_func) },
	{ 0x62879c8f, __VMLINUX_SYMBOL_STR(sdio_release_irq) },
	{ 0xc927c0cc, __VMLINUX_SYMBOL_STR(sdio_release_host) },
	{ 0x8b3dbdb4, __VMLINUX_SYMBOL_STR(sdio_writeb) },
	{ 0xa88b3ad, __VMLINUX_SYMBOL_STR(sdio_claim_host) },
	{ 0x57b7999f, __VMLINUX_SYMBOL_STR(sdio_set_host_pm_flags) },
	{ 0x7591d637, __VMLINUX_SYMBOL_STR(btmrvl_enable_hs) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x4117a259, __VMLINUX_SYMBOL_STR(hci_suspend_dev) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x47022514, __VMLINUX_SYMBOL_STR(bt_err) },
	{ 0x15fba25e, __VMLINUX_SYMBOL_STR(hci_resume_dev) },
	{ 0xc9016aea, __VMLINUX_SYMBOL_STR(sdio_get_host_pm_caps) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=btmrvl,bluetooth";

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");

MODULE_INFO(srcversion, "78353A78FA402F02A7E8B98");
