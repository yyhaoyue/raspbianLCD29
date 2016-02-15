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
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x49369297, __VMLINUX_SYMBOL_STR(irlmp_data_request) },
	{ 0x4a6c696, __VMLINUX_SYMBOL_STR(irlmp_open_lsap) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xaab866ab, __VMLINUX_SYMBOL_STR(seq_open) },
	{ 0x33cbe2c6, __VMLINUX_SYMBOL_STR(proc_irda) },
	{ 0xfd53307e, __VMLINUX_SYMBOL_STR(irttp_close_tsap) },
	{ 0x7ac50d68, __VMLINUX_SYMBOL_STR(irlmp_close_lsap) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xa0c008d2, __VMLINUX_SYMBOL_STR(irttp_connect_request) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0x6e4d80be, __VMLINUX_SYMBOL_STR(irttp_data_request) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xd4dc236, __VMLINUX_SYMBOL_STR(irlmp_connect_response) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0xabe4f236, __VMLINUX_SYMBOL_STR(irlmp_disconnect_request) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x68e1ecb6, __VMLINUX_SYMBOL_STR(irttp_disconnect_request) },
	{ 0x8a44dd5e, __VMLINUX_SYMBOL_STR(hashbin_new) },
	{ 0x6b76aa70, __VMLINUX_SYMBOL_STR(hashbin_delete) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x90ddb6bd, __VMLINUX_SYMBOL_STR(hashbin_remove) },
	{ 0x6492e28c, __VMLINUX_SYMBOL_STR(hashbin_get_next) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xc9916b82, __VMLINUX_SYMBOL_STR(irttp_connect_response) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x37791344, __VMLINUX_SYMBOL_STR(hashbin_get_first) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0xf45fe60f, __VMLINUX_SYMBOL_STR(irda_notify_init) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x2eb8fd95, __VMLINUX_SYMBOL_STR(irlmp_connect_request) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x55abdcd8, __VMLINUX_SYMBOL_STR(irttp_open_tsap) },
	{ 0xbfa7c08d, __VMLINUX_SYMBOL_STR(hashbin_lock_find) },
	{ 0xc5084bee, __VMLINUX_SYMBOL_STR(seq_release) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x9b044797, __VMLINUX_SYMBOL_STR(irttp_flow_request) },
	{ 0x731cec71, __VMLINUX_SYMBOL_STR(hashbin_insert) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=irda";


MODULE_INFO(srcversion, "2393236B8EC50AEE6CC225A");
