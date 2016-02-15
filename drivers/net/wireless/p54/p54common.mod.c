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
	{ 0xa67f9881, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x8f070248, __VMLINUX_SYMBOL_STR(ieee80211_rx_irqsafe) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x14b1acdf, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0x9c64fbd, __VMLINUX_SYMBOL_STR(ieee80211_frequency_to_channel) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xc116d9b2, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x82fae2e7, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x79e5a995, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x63a7c28c, __VMLINUX_SYMBOL_STR(bitmap_find_free_region) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x1198f8a7, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0xa0a821d6, __VMLINUX_SYMBOL_STR(skb_unlink) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xde1f2b13, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x22f16a5c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb6a9f00, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x310917fe, __VMLINUX_SYMBOL_STR(sort) },
	{ 0x21a20414, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x7f6ce182, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0xb05bd507, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x113856b7, __VMLINUX_SYMBOL_STR(ieee80211_tx_status_irqsafe) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0x574c2e74, __VMLINUX_SYMBOL_STR(bitmap_release_region) },
	{ 0x6c6cdd4d, __VMLINUX_SYMBOL_STR(wait_for_completion_interruptible_timeout) },
	{ 0xbce0fa50, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8b4ebb43, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x3771b461, __VMLINUX_SYMBOL_STR(crc_ccitt) },
	{ 0x669cbbbd, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xfda359bc, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x9c698a21, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x8466fe04, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1dba8aa2, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0xcb26d922, __VMLINUX_SYMBOL_STR(ieee80211_beacon_loss) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd7bbc000, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=mac80211,cfg80211,crc-ccitt";


MODULE_INFO(srcversion, "360E285C2B54BA1D0DE4BED");
