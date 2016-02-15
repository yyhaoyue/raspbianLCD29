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
	{ 0xa67f9881, __VMLINUX_SYMBOL_STR(skb_queue_head) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x426c42fa, __VMLINUX_SYMBOL_STR(ssb_dma_translation) },
	{ 0x833cc0a3, __VMLINUX_SYMBOL_STR(device_remove_file) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xff178f6, __VMLINUX_SYMBOL_STR(__aeabi_idivmod) },
	{ 0x365aeece, __VMLINUX_SYMBOL_STR(bcma_pmu_spuravoid_pllupdate) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x5839077a, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x14b1acdf, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xb1eda60c, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x4212edf, __VMLINUX_SYMBOL_STR(ieee80211_rts_get) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0xefae6522, __VMLINUX_SYMBOL_STR(ssb_commit_settings) },
	{ 0x82fae2e7, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x79e5a995, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xa1425906, __VMLINUX_SYMBOL_STR(ieee80211_channel_to_frequency) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xa0a61db, __VMLINUX_SYMBOL_STR(ssb_bus_powerup) },
	{ 0x2eeb0b36, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0x1198f8a7, __VMLINUX_SYMBOL_STR(__ieee80211_get_assoc_led_name) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x8441544e, __VMLINUX_SYMBOL_STR(__ssb_driver_register) },
	{ 0xb71871f6, __VMLINUX_SYMBOL_STR(param_ops_string) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0xde1f2b13, __VMLINUX_SYMBOL_STR(ieee80211_stop_queue) },
	{ 0x46f9a4b2, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4fe2e97, __VMLINUX_SYMBOL_STR(ssb_driver_unregister) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x22f16a5c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x95bf32e, __VMLINUX_SYMBOL_STR(bcma_core_dma_translation) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xeb6a9f00, __VMLINUX_SYMBOL_STR(ieee80211_free_txskb) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x85d6fc56, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0xea147920, __VMLINUX_SYMBOL_STR(ssb_device_enable) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc7b8764c, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xfca9ff40, __VMLINUX_SYMBOL_STR(bcma_core_set_clockmode) },
	{ 0xd6b8e852, __VMLINUX_SYMBOL_STR(request_threaded_irq) },
	{ 0x8e865d3c, __VMLINUX_SYMBOL_STR(arm_delay_ops) },
	{ 0x4f767724, __VMLINUX_SYMBOL_STR(__bcma_driver_register) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x619334c3, __VMLINUX_SYMBOL_STR(ieee80211_ctstoself_get) },
	{ 0x988c2a58, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x21a20414, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x2196324, __VMLINUX_SYMBOL_STR(__aeabi_idiv) },
	{ 0xe523ad75, __VMLINUX_SYMBOL_STR(synchronize_irq) },
	{ 0x2c0f2f46, __VMLINUX_SYMBOL_STR(device_create_file) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xea3c19e1, __VMLINUX_SYMBOL_STR(bcma_chipco_gpio_control) },
	{ 0x7f6ce182, __VMLINUX_SYMBOL_STR(__ieee80211_get_rx_led_name) },
	{ 0x35bb3da5, __VMLINUX_SYMBOL_STR(bcma_core_is_enabled) },
	{ 0x55c9239b, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_voltage) },
	{ 0x12a38747, __VMLINUX_SYMBOL_STR(usleep_range) },
	{ 0x198d36ef, __VMLINUX_SYMBOL_STR(ssb_device_disable) },
	{ 0x75f3b4c2, __VMLINUX_SYMBOL_STR(bcma_core_enable) },
	{ 0xb05bd507, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0xf123a4bf, __VMLINUX_SYMBOL_STR(bcma_driver_unregister) },
	{ 0x30d202d7, __VMLINUX_SYMBOL_STR(bcma_core_pll_ctl) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xb678366f, __VMLINUX_SYMBOL_STR(int_sqrt) },
	{ 0x2fc7b541, __VMLINUX_SYMBOL_STR(hwrng_register) },
	{ 0xbce0fa50, __VMLINUX_SYMBOL_STR(__ieee80211_get_tx_led_name) },
	{ 0x6b69272f, __VMLINUX_SYMBOL_STR(ssb_set_devtypedata) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x8b4ebb43, __VMLINUX_SYMBOL_STR(ieee80211_wake_queue) },
	{ 0x4b0410c4, __VMLINUX_SYMBOL_STR(ieee80211_generic_frame_duration) },
	{ 0x669cbbbd, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x9c698a21, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x8466fe04, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x1e047854, __VMLINUX_SYMBOL_STR(warn_slowpath_fmt) },
	{ 0x1eb9516e, __VMLINUX_SYMBOL_STR(round_jiffies_relative) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xd782a791, __VMLINUX_SYMBOL_STR(dma_supported) },
	{ 0xf584fd60, __VMLINUX_SYMBOL_STR(request_firmware) },
	{ 0xd7bbc000, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x3d59ee35, __VMLINUX_SYMBOL_STR(ssb_bus_may_powerdown) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xb742fd7, __VMLINUX_SYMBOL_STR(simple_strtol) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0xcd66bb6a, __VMLINUX_SYMBOL_STR(ssb_pmu_set_ldo_paref) },
	{ 0x32375b0, __VMLINUX_SYMBOL_STR(hwrng_unregister) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xf7e51804, __VMLINUX_SYMBOL_STR(ssb_device_is_enabled) },
	{ 0x3b414945, __VMLINUX_SYMBOL_STR(bcma_core_disable) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0x5c28cca5, __VMLINUX_SYMBOL_STR(ieee80211_get_tkip_p1k_iv) },
	{ 0x8492a430, __VMLINUX_SYMBOL_STR(ieee80211_get_response_rate) },
	{ 0xf20dabd8, __VMLINUX_SYMBOL_STR(free_irq) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ssb,bcma,mac80211,cfg80211";

MODULE_ALIAS("bcma:m04BFid0812rev11cl*");
MODULE_ALIAS("bcma:m04BFid0812rev17cl*");
MODULE_ALIAS("bcma:m04BFid0812rev18cl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ccl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Dcl*");
MODULE_ALIAS("bcma:m04BFid0812rev1Ecl*");
MODULE_ALIAS("bcma:m04BFid0812rev28cl*");
MODULE_ALIAS("bcma:m04BFid0812rev2Acl*");
MODULE_ALIAS("ssb:v4243id0812rev05*");
MODULE_ALIAS("ssb:v4243id0812rev06*");
MODULE_ALIAS("ssb:v4243id0812rev07*");
MODULE_ALIAS("ssb:v4243id0812rev09*");
MODULE_ALIAS("ssb:v4243id0812rev0A*");
MODULE_ALIAS("ssb:v4243id0812rev0B*");
MODULE_ALIAS("ssb:v4243id0812rev0C*");
MODULE_ALIAS("ssb:v4243id0812rev0D*");
MODULE_ALIAS("ssb:v4243id0812rev0F*");
MODULE_ALIAS("ssb:v4243id0812rev10*");

MODULE_INFO(srcversion, "9CC390554B31FC2D4B2D029");
