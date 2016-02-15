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
	{ 0xedd521c2, __VMLINUX_SYMBOL_STR(irlmp_get_discoveries) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xb9394173, __VMLINUX_SYMBOL_STR(irias_delete_value) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x349cba85, __VMLINUX_SYMBOL_STR(strchr) },
	{ 0xdd44f6ae, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7b6ec6c5, __VMLINUX_SYMBOL_STR(ppp_unit_number) },
	{ 0x763e54a4, __VMLINUX_SYMBOL_STR(irlmp_unregister_client) },
	{ 0xe7492901, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xfd53307e, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x20000329, __VMLINUX_SYMBOL_STR(simple_strtoul) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa0c008d2, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x6e4d80be, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0x8982c8d9, __VMLINUX_SYMBOL_STR(irias_delete_object) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x7cbc5f72, __VMLINUX_SYMBOL_STR(ppp_unregister_channel) },
	{ 0x6f683af1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xf199cba4, __VMLINUX_SYMBOL_STR(irias_insert_object) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xf932d135, __VMLINUX_SYMBOL_STR(iriap_getvaluebyclass_request) },
	{ 0x7042bc54, __VMLINUX_SYMBOL_STR(irlmp_register_client) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0xd27b93bf, __VMLINUX_SYMBOL_STR(ppp_output_wakeup) },
	{ 0x70cf7661, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xbf7dd554, __VMLINUX_SYMBOL_STR(hashbin_find) },
	{ 0x68e1ecb6, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x11089ac7, __VMLINUX_SYMBOL_STR(_ctype) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x8288a96b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x7d3647c, __VMLINUX_SYMBOL_STR(irlmp_register_service) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xc9916b82, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0x4f76e6b8, __VMLINUX_SYMBOL_STR(irttp_dup) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xb3c13d7f, __VMLINUX_SYMBOL_STR(irias_add_integer_attrib) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0x9f89081d, __VMLINUX_SYMBOL_STR(iriap_close) },
	{ 0x925d2d38, __VMLINUX_SYMBOL_STR(ppp_input_error) },
	{ 0xf45fe60f, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0xd8305157, __VMLINUX_SYMBOL_STR(iriap_open) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x55abdcd8, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0x7957f728, __VMLINUX_SYMBOL_STR(irlmp_update_client) },
	{ 0x721b1851, __VMLINUX_SYMBOL_STR(skip_spaces) },
	{ 0xd7a4dd0c, __VMLINUX_SYMBOL_STR(ppp_input) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x46c1c4a2, __VMLINUX_SYMBOL_STR(irlmp_unregister_service) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x3e001175, __VMLINUX_SYMBOL_STR(ppp_register_channel) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x7e67ca6e, __VMLINUX_SYMBOL_STR(irias_new_object) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x594f7e1f, __VMLINUX_SYMBOL_STR(ppp_channel_index) },
	{ 0x36cad55b, __VMLINUX_SYMBOL_STR(hashbin_remove_this) },
	{ 0xde4c6b3c, __VMLINUX_SYMBOL_STR(irlmp_service_to_hint) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x337d72cc, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda,ppp_generic";


MODULE_INFO(srcversion, "2883ED607A4D54A94830F37");
