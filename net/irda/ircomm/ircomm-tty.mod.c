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
	{ 0xbceab4b6, __VMLINUX_SYMBOL_STR(tty_port_tty_get) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9394173, __VMLINUX_SYMBOL_STR(irias_delete_value) },
	{ 0x91815586, __VMLINUX_SYMBOL_STR(irda_param_pack) },
	{ 0xdd44f6ae, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0xc1a4c450, __VMLINUX_SYMBOL_STR(tty_port_close_end) },
	{ 0x763e54a4, __VMLINUX_SYMBOL_STR(irlmp_unregister_client) },
	{ 0xe7492901, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0x34eb85fd, __VMLINUX_SYMBOL_STR(tty_hung_up_p) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0x8982c8d9, __VMLINUX_SYMBOL_STR(irias_delete_object) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x5383fa47, __VMLINUX_SYMBOL_STR(tty_register_driver) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x221f5fb9, __VMLINUX_SYMBOL_STR(tty_port_carrier_raised) },
	{ 0x5f90536f, __VMLINUX_SYMBOL_STR(put_tty_driver) },
	{ 0x6ef4f7cf, __VMLINUX_SYMBOL_STR(tty_port_close_start) },
	{ 0xc7a38ec0, __VMLINUX_SYMBOL_STR(ircomm_connect_response) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf199cba4, __VMLINUX_SYMBOL_STR(irias_insert_object) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xf90da68c, __VMLINUX_SYMBOL_STR(tty_set_operations) },
	{ 0xf932d135, __VMLINUX_SYMBOL_STR(iriap_getvaluebyclass_request) },
	{ 0x7042bc54, __VMLINUX_SYMBOL_STR(irlmp_register_client) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xae624e80, __VMLINUX_SYMBOL_STR(ircomm_disconnect_request) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x586ba3f7, __VMLINUX_SYMBOL_STR(tty_port_init) },
	{ 0x94a824db, __VMLINUX_SYMBOL_STR(irda_param_extract_all) },
	{ 0x8f9f7829, __VMLINUX_SYMBOL_STR(tty_insert_flip_string_fixed_flag) },
	{ 0x27ba2bbf, __VMLINUX_SYMBOL_STR(tty_port_destroy) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x7d3647c, __VMLINUX_SYMBOL_STR(irlmp_register_service) },
	{ 0xa821ab41, __VMLINUX_SYMBOL_STR(ircomm_connect_request) },
	{ 0x67b27ec1, __VMLINUX_SYMBOL_STR(tty_std_termios) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xb590d312, __VMLINUX_SYMBOL_STR(tty_driver_flush_buffer) },
	{ 0xb3c13d7f, __VMLINUX_SYMBOL_STR(irias_add_integer_attrib) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0x9f89081d, __VMLINUX_SYMBOL_STR(iriap_close) },
	{ 0xbe40ace9, __VMLINUX_SYMBOL_STR(irlmp_discovery_request) },
	{ 0x363c8da1, __VMLINUX_SYMBOL_STR(tty_port_install) },
	{ 0xf45fe60f, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x2075d4ab, __VMLINUX_SYMBOL_STR(tty_unregister_driver) },
	{ 0x17a491c5, __VMLINUX_SYMBOL_STR(irias_add_octseq_attrib) },
	{ 0x2a43c6b3, __VMLINUX_SYMBOL_STR(tty_hangup) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x1441ca00, __VMLINUX_SYMBOL_STR(tty_port_tty_hangup) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc3a4e6f4, __VMLINUX_SYMBOL_STR(__tty_alloc_driver) },
	{ 0xcaa434a6, __VMLINUX_SYMBOL_STR(ircomm_control_request) },
	{ 0x409873e3, __VMLINUX_SYMBOL_STR(tty_termios_baud_rate) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xd8305157, __VMLINUX_SYMBOL_STR(iriap_open) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xc53b51e3, __VMLINUX_SYMBOL_STR(ircomm_close) },
	{ 0x1bd15b65, __VMLINUX_SYMBOL_STR(tty_kref_put) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0x41c51833, __VMLINUX_SYMBOL_STR(ircomm_open) },
	{ 0x83300c08, __VMLINUX_SYMBOL_STR(tty_flip_buffer_push) },
	{ 0xbfa7c08d, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x46c1c4a2, __VMLINUX_SYMBOL_STR(irlmp_unregister_service) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7e67ca6e, __VMLINUX_SYMBOL_STR(irias_new_object) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x35d6d731, __VMLINUX_SYMBOL_STR(tty_port_tty_set) },
	{ 0x5dda5feb, __VMLINUX_SYMBOL_STR(ircomm_flow_request) },
	{ 0x2748e1b4, __VMLINUX_SYMBOL_STR(ircomm_data_request) },
	{ 0x7829d4d0, __VMLINUX_SYMBOL_STR(tty_port_raise_dtr_rts) },
	{ 0xde4c6b3c, __VMLINUX_SYMBOL_STR(irlmp_service_to_hint) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xaaa62dc1, __VMLINUX_SYMBOL_STR(tty_wakeup) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
	{ 0x7f52a8bf, __VMLINUX_SYMBOL_STR(irda_param_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,ircomm";


MODULE_INFO(srcversion, "F003F126F0CC70B2C980955");
