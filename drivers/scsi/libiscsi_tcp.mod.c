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
	{ 0xf88c3301, __VMLINUX_SYMBOL_STR(sg_init_table) },
	{ 0x176903a0, __VMLINUX_SYMBOL_STR(skb_seq_read) },
	{ 0x13d0adf7, __VMLINUX_SYMBOL_STR(__kfifo_out) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc068440e, __VMLINUX_SYMBOL_STR(__kfifo_alloc) },
	{ 0xc116d9b2, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xd5152710, __VMLINUX_SYMBOL_STR(sg_next) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xefdc3847, __VMLINUX_SYMBOL_STR(iscsi_requeue_task) },
	{ 0x3bef2f73, __VMLINUX_SYMBOL_STR(iscsi_pool_init) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x17312e, __VMLINUX_SYMBOL_STR(iscsi_itt_to_ctask) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xe253c3b8, __VMLINUX_SYMBOL_STR(skb_abort_seq_read) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xbd44a1a0, __VMLINUX_SYMBOL_STR(skb_prepare_seq_read) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xbe122bc2, __VMLINUX_SYMBOL_STR(iscsi_conn_teardown) },
	{ 0x4cf89a5d, __VMLINUX_SYMBOL_STR(iscsi_put_task) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x3b41eddb, __VMLINUX_SYMBOL_STR(iscsi_prep_data_out_pdu) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xdf8776be, __VMLINUX_SYMBOL_STR(iscsi_complete_pdu) },
	{ 0x53e2c5cf, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0xdb760f52, __VMLINUX_SYMBOL_STR(__kfifo_free) },
	{ 0xefdd2345, __VMLINUX_SYMBOL_STR(sg_init_one) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x258a6f2b, __VMLINUX_SYMBOL_STR(__iscsi_complete_pdu) },
	{ 0xf23fcb99, __VMLINUX_SYMBOL_STR(__kfifo_in) },
	{ 0x8d303b1b, __VMLINUX_SYMBOL_STR(iscsi_pool_free) },
	{ 0x79866201, __VMLINUX_SYMBOL_STR(iscsi_verify_itt) },
	{ 0x277815b5, __VMLINUX_SYMBOL_STR(iscsi_conn_setup) },
	{ 0xae1019a4, __VMLINUX_SYMBOL_STR(iscsi_update_cmdsn) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi";


MODULE_INFO(srcversion, "7B75064F760C2C39C5A4976");
