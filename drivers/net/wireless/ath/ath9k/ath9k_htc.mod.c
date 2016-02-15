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
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xadefc951, __VMLINUX_SYMBOL_STR(ath9k_hw_set_txq_props) },
	{ 0x27874735, __VMLINUX_SYMBOL_STR(ath9k_hw_init) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x2872e5b7, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_channel) },
	{ 0x9d50d1c5, __VMLINUX_SYMBOL_STR(ath9k_hw_deinit) },
	{ 0xd636330a, __VMLINUX_SYMBOL_STR(ath9k_hw_cfg_output) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x139396b, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x9c8e8331, __VMLINUX_SYMBOL_STR(ath9k_hw_set_gpio) },
	{ 0x3cf0dcc6, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_crypto) },
	{ 0x5839077a, __VMLINUX_SYMBOL_STR(ieee80211_queue_work) },
	{ 0x9e0ac5fc, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rate) },
	{ 0x14b1acdf, __VMLINUX_SYMBOL_STR(led_classdev_register) },
	{ 0xd3dbfbc4, __VMLINUX_SYMBOL_STR(_find_first_zero_bit_le) },
	{ 0x1e656246, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_enable) },
	{ 0x219f9cf8, __VMLINUX_SYMBOL_STR(ath9k_hw_wait) },
	{ 0xdbaac49c, __VMLINUX_SYMBOL_STR(ath9k_cmn_get_hw_crypto_keytype) },
	{ 0xd2a9a534, __VMLINUX_SYMBOL_STR(ath9k_hw_stopdmarecv) },
	{ 0x96790fc6, __VMLINUX_SYMBOL_STR(ath_key_delete) },
	{ 0x4b862b22, __VMLINUX_SYMBOL_STR(ath9k_cmn_update_txpow) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x7ef39823, __VMLINUX_SYMBOL_STR(ieee80211_hdrlen) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x82fae2e7, __VMLINUX_SYMBOL_STR(ieee80211_beacon_get_tim) },
	{ 0x2007a07c, __VMLINUX_SYMBOL_STR(ath9k_hw_gpio_get) },
	{ 0x70374404, __VMLINUX_SYMBOL_STR(ath_regd_init) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0x184666e6, __VMLINUX_SYMBOL_STR(usb_kill_urb) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0x79e5a995, __VMLINUX_SYMBOL_STR(ieee80211_unregister_hw) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe9480261, __VMLINUX_SYMBOL_STR(__dev_kfree_skb_any) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x84b60a8a, __VMLINUX_SYMBOL_STR(ieee80211_iterate_active_interfaces_atomic) },
	{ 0xa6f39bce, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxfilter) },
	{ 0x72a3acac, __VMLINUX_SYMBOL_STR(ath9k_hw_get_txq_props) },
	{ 0x6dc50219, __VMLINUX_SYMBOL_STR(ath9k_hw_releasetxqueue) },
	{ 0xd7592afc, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_tsf) },
	{ 0x2eeb0b36, __VMLINUX_SYMBOL_STR(wiphy_rfkill_start_polling) },
	{ 0xbfaf1fba, __VMLINUX_SYMBOL_STR(ath9k_cmn_reload_chainmask) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xbecf6f3b, __VMLINUX_SYMBOL_STR(ath9k_cmn_init_channels_rates) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x4d4512e0, __VMLINUX_SYMBOL_STR(ieee80211_stop_queues) },
	{ 0xc3d14610, __VMLINUX_SYMBOL_STR(usb_unanchor_urb) },
	{ 0x81f3afb, __VMLINUX_SYMBOL_STR(complete_all) },
	{ 0x3b38ff48, __VMLINUX_SYMBOL_STR(__netdev_alloc_skb) },
	{ 0x46f9a4b2, __VMLINUX_SYMBOL_STR(ieee80211_tx_status) },
	{ 0xb1c0d325, __VMLINUX_SYMBOL_STR(ath_printk) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0x25daea86, __VMLINUX_SYMBOL_STR(ath9k_hw_setopmode) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x7fb6f13a, __VMLINUX_SYMBOL_STR(ath9k_hw_disable) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x2ffd3119, __VMLINUX_SYMBOL_STR(ath9k_hw_resettxqueue) },
	{ 0xcf5414d9, __VMLINUX_SYMBOL_STR(ath9k_hw_gettsf64) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x2eff535b, __VMLINUX_SYMBOL_STR(ath_cmn_process_fft) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x92570fbd, __VMLINUX_SYMBOL_STR(usb_deregister) },
	{ 0x22f16a5c, __VMLINUX_SYMBOL_STR(ieee80211_alloc_hw_nm) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x9107a8ed, __VMLINUX_SYMBOL_STR(ath9k_hw_set_sta_beacon_timers) },
	{ 0xe6c93d68, __VMLINUX_SYMBOL_STR(ath9k_hw_set_tsfadjust) },
	{ 0x54692b91, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_ap) },
	{ 0x85d6fc56, __VMLINUX_SYMBOL_STR(ieee80211_wake_queues) },
	{ 0xfaef0ed, __VMLINUX_SYMBOL_STR(__tasklet_schedule) },
	{ 0x87b50a00, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_disable) },
	{ 0x36e576ff, __VMLINUX_SYMBOL_STR(ath9k_hw_getrxfilter) },
	{ 0xff30eadc, __VMLINUX_SYMBOL_STR(ath9k_hw_ani_monitor) },
	{ 0xbb44d20c, __VMLINUX_SYMBOL_STR(ath_is_mybeacon) },
	{ 0x4ccdf30b, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_adhoc) },
	{ 0x32c4ebf1, __VMLINUX_SYMBOL_STR(usb_control_msg) },
	{ 0x8dfe8691, __VMLINUX_SYMBOL_STR(ath9k_cmn_process_rssi) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xaafdb617, __VMLINUX_SYMBOL_STR(ath_is_world_regd) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xc7b8764c, __VMLINUX_SYMBOL_STR(ieee80211_rx) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x9545af6d, __VMLINUX_SYMBOL_STR(tasklet_init) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x8384ca61, __VMLINUX_SYMBOL_STR(wiphy_rfkill_stop_polling) },
	{ 0x988c2a58, __VMLINUX_SYMBOL_STR(request_firmware_nowait) },
	{ 0x156e43a2, __VMLINUX_SYMBOL_STR(ath9k_hw_write_associd) },
	{ 0x21a20414, __VMLINUX_SYMBOL_STR(ieee80211_queue_delayed_work) },
	{ 0x394c0e0, __VMLINUX_SYMBOL_STR(ath_reg_notifier_apply) },
	{ 0x5b5b6410, __VMLINUX_SYMBOL_STR(wiphy_to_ieee80211_hw) },
	{ 0x82072614, __VMLINUX_SYMBOL_STR(tasklet_kill) },
	{ 0x82064cbd, __VMLINUX_SYMBOL_STR(ath9k_hw_init_btcoex_hw) },
	{ 0xc1de51d0, __VMLINUX_SYMBOL_STR(ieee80211_stop_tx_ba_cb_irqsafe) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0x5b77d033, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconq_setup) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xd383ca26, __VMLINUX_SYMBOL_STR(usb_submit_urb) },
	{ 0x4a0f4710, __VMLINUX_SYMBOL_STR(ath9k_hw_name) },
	{ 0x999e9b33, __VMLINUX_SYMBOL_STR(ath9k_cmn_spectral_scan_trigger) },
	{ 0x2a31ef70, __VMLINUX_SYMBOL_STR(ath9k_hw_init_global_settings) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x6d9f2942, __VMLINUX_SYMBOL_STR(usb_get_dev) },
	{ 0xd1f0a011, __VMLINUX_SYMBOL_STR(usb_kill_anchored_urbs) },
	{ 0xf3a24add, __VMLINUX_SYMBOL_STR(ath9k_hw_settsf64) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb05bd507, __VMLINUX_SYMBOL_STR(wiphy_rfkill_set_hw_state) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0xa3abaca9, __VMLINUX_SYMBOL_STR(usb_bulk_msg) },
	{ 0x9fe9dd5b, __VMLINUX_SYMBOL_STR(usb_put_dev) },
	{ 0x86a4889a, __VMLINUX_SYMBOL_STR(kmalloc_order_trace) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x2785ed10, __VMLINUX_SYMBOL_STR(ath9k_hw_beaconinit) },
	{ 0x8750c971, __VMLINUX_SYMBOL_STR(ieee80211_find_sta) },
	{ 0xedca3f0f, __VMLINUX_SYMBOL_STR(ieee80211_get_buffered_bc) },
	{ 0x65911363, __VMLINUX_SYMBOL_STR(usb_interrupt_msg) },
	{ 0xfea63bb8, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_bt_stomp) },
	{ 0xde3f1aa7, __VMLINUX_SYMBOL_STR(ath9k_hw_setrxabort) },
	{ 0x100640bc, __VMLINUX_SYMBOL_STR(ath9k_cmn_beacon_config_sta) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0x795d5876, __VMLINUX_SYMBOL_STR(ath_hw_setbssidmask) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x975e725d, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_skb_postprocess) },
	{ 0x5e5167f8, __VMLINUX_SYMBOL_STR(ath9k_hw_phy_disable) },
	{ 0x669cbbbd, __VMLINUX_SYMBOL_STR(__ieee80211_get_radio_led_name) },
	{ 0xfda359bc, __VMLINUX_SYMBOL_STR(ieee80211_get_hdrlen_from_skb) },
	{ 0x159a760b, __VMLINUX_SYMBOL_STR(ath9k_hw_setpower) },
	{ 0xc13f30ce, __VMLINUX_SYMBOL_STR(__ieee80211_create_tpt_led_trigger) },
	{ 0x9c698a21, __VMLINUX_SYMBOL_STR(ieee80211_register_hw) },
	{ 0x8466fe04, __VMLINUX_SYMBOL_STR(led_classdev_unregister) },
	{ 0x4a0c1148, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_set_weight) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x1dba8aa2, __VMLINUX_SYMBOL_STR(regulatory_hint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb9ebf44, __VMLINUX_SYMBOL_STR(ath9k_hw_setmcastfilter) },
	{ 0xa291e867, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_session) },
	{ 0xfb8c1a9f, __VMLINUX_SYMBOL_STR(ath9k_hw_startpcureceive) },
	{ 0xf96d7c74, __VMLINUX_SYMBOL_STR(ath9k_hw_setuptxqueue) },
	{ 0x295d20f4, __VMLINUX_SYMBOL_STR(usb_register_driver) },
	{ 0x599000fb, __VMLINUX_SYMBOL_STR(ath9k_hw_reset) },
	{ 0xd7bbc000, __VMLINUX_SYMBOL_STR(ieee80211_free_hw) },
	{ 0x365f6ded, __VMLINUX_SYMBOL_STR(ath9k_cmn_rx_accept) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0xea67214a, __VMLINUX_SYMBOL_STR(usb_ifnum_to_if) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x9c932925, __VMLINUX_SYMBOL_STR(ath9k_hw_btcoex_init_3wire) },
	{ 0xbf755413, __VMLINUX_SYMBOL_STR(ath_key_config) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x7cf9099, __VMLINUX_SYMBOL_STR(wait_for_completion_timeout) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0xd9ff4612, __VMLINUX_SYMBOL_STR(ath9k_hw_reset_calvalid) },
	{ 0x55cad11e, __VMLINUX_SYMBOL_STR(usb_free_urb) },
	{ 0xdb96f58e, __VMLINUX_SYMBOL_STR(release_firmware) },
	{ 0xc5ea3aa1, __VMLINUX_SYMBOL_STR(ieee80211_start_tx_ba_cb_irqsafe) },
	{ 0x65c7cbf6, __VMLINUX_SYMBOL_STR(usb_anchor_urb) },
	{ 0x1279664d, __VMLINUX_SYMBOL_STR(usb_alloc_urb) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=ath9k_hw,ath9k_common,mac80211,ath,cfg80211";

MODULE_ALIAS("usb:v0CF3p9271d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p1006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9030d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07D1p3A10d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3327d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3328d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3346d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3348d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3349d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v13D3p3350d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04CAp4605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v040Dp3801d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3pB002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v057Cp8403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0471p209Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7015d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1668p1200d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p7010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0846p9018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v083ApA704d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p017Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0411p0197d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04DAp3904d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0CF3p20FFd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "441559A8B66DEAADEC51028");
