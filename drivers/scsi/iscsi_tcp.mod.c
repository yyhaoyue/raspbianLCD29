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
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x3af4c96f, __VMLINUX_SYMBOL_STR(iscsi_session_recovery_timedout) },
	{ 0xcffca03c, __VMLINUX_SYMBOL_STR(iscsi_tcp_cleanup_task) },
	{ 0x3bc0da8f, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_xmit) },
	{ 0xecc37997, __VMLINUX_SYMBOL_STR(iscsi_tcp_task_init) },
	{ 0x421a6742, __VMLINUX_SYMBOL_STR(iscsi_conn_send_pdu) },
	{ 0x235bff0c, __VMLINUX_SYMBOL_STR(iscsi_host_set_param) },
	{ 0x97a28b63, __VMLINUX_SYMBOL_STR(iscsi_session_get_param) },
	{ 0xffc02d7d, __VMLINUX_SYMBOL_STR(iscsi_conn_start) },
	{ 0xcb1f6951, __VMLINUX_SYMBOL_STR(scsi_change_queue_depth) },
	{ 0x9087d8f9, __VMLINUX_SYMBOL_STR(iscsi_target_alloc) },
	{ 0x2d1a2f4a, __VMLINUX_SYMBOL_STR(iscsi_eh_recover_target) },
	{ 0xd52ee667, __VMLINUX_SYMBOL_STR(iscsi_eh_device_reset) },
	{ 0xe1fa7ddf, __VMLINUX_SYMBOL_STR(iscsi_eh_abort) },
	{ 0x3e1b937b, __VMLINUX_SYMBOL_STR(iscsi_queuecommand) },
	{ 0xf6a6fc0e, __VMLINUX_SYMBOL_STR(iscsi_unregister_transport) },
	{ 0xc0cf6528, __VMLINUX_SYMBOL_STR(iscsi_register_transport) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xa0f5f9bb, __VMLINUX_SYMBOL_STR(blk_queue_dma_alignment) },
	{ 0xf59646f2, __VMLINUX_SYMBOL_STR(blk_queue_bounce_limit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x5d30e7ad, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_alloc) },
	{ 0x7f60ff1f, __VMLINUX_SYMBOL_STR(iscsi_session_setup) },
	{ 0xf1a26262, __VMLINUX_SYMBOL_STR(iscsi_host_add) },
	{ 0x9e612a73, __VMLINUX_SYMBOL_STR(iscsi_host_alloc) },
	{ 0x4a8b1387, __VMLINUX_SYMBOL_STR(iscsi_host_free) },
	{ 0x5c7f00fd, __VMLINUX_SYMBOL_STR(iscsi_host_remove) },
	{ 0xcb058a8e, __VMLINUX_SYMBOL_STR(iscsi_session_teardown) },
	{ 0x32d36a11, __VMLINUX_SYMBOL_STR(iscsi_tcp_r2tpool_free) },
	{ 0x8ce12519, __VMLINUX_SYMBOL_STR(scsi_is_host_device) },
	{ 0x4aceda91, __VMLINUX_SYMBOL_STR(crypto_alloc_base) },
	{ 0x66504476, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_setup) },
	{ 0x10975bab, __VMLINUX_SYMBOL_STR(iscsi_tcp_recv_skb) },
	{ 0xf48e63f7, __VMLINUX_SYMBOL_STR(tcp_read_sock) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x46b4afae, __VMLINUX_SYMBOL_STR(iscsi_conn_queue_work) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0x18b85848, __VMLINUX_SYMBOL_STR(iscsi_tcp_hdr_recv_prep) },
	{ 0xb2212941, __VMLINUX_SYMBOL_STR(sk_set_memalloc) },
	{ 0xf5269e17, __VMLINUX_SYMBOL_STR(iscsi_conn_bind) },
	{ 0xd5a39607, __VMLINUX_SYMBOL_STR(sockfd_lookup) },
	{ 0xe8a43d2f, __VMLINUX_SYMBOL_STR(iscsi_conn_stop) },
	{ 0xc2ad366a, __VMLINUX_SYMBOL_STR(iscsi_suspend_tx) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0x22820932, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_teardown) },
	{ 0x53c223d9, __VMLINUX_SYMBOL_STR(crypto_destroy_tfm) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x21c77c84, __VMLINUX_SYMBOL_STR(fput) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x3ed29b49, __VMLINUX_SYMBOL_STR(iscsi_tcp_set_max_r2t) },
	{ 0x4d096d90, __VMLINUX_SYMBOL_STR(iscsi_set_param) },
	{ 0x84fdca68, __VMLINUX_SYMBOL_STR(kernel_getpeername) },
	{ 0xccab36e2, __VMLINUX_SYMBOL_STR(iscsi_conn_get_param) },
	{ 0x6381b2d3, __VMLINUX_SYMBOL_STR(iscsi_host_get_param) },
	{ 0xbf8c9136, __VMLINUX_SYMBOL_STR(iscsi_conn_get_addr_param) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0xd71b2a69, __VMLINUX_SYMBOL_STR(kernel_getsockname) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xf47f4187, __VMLINUX_SYMBOL_STR(iscsi_tcp_conn_get_stats) },
	{ 0x53e2c5cf, __VMLINUX_SYMBOL_STR(iscsi_conn_failure) },
	{ 0x358c9f50, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_unmap) },
	{ 0x42733933, __VMLINUX_SYMBOL_STR(iscsi_tcp_segment_done) },
	{ 0x35bc2d6b, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x297b735c, __VMLINUX_SYMBOL_STR(iscsi_segment_seek_sg) },
	{ 0x2c5b9018, __VMLINUX_SYMBOL_STR(iscsi_segment_init_linear) },
	{ 0x45f010f, __VMLINUX_SYMBOL_STR(iscsi_tcp_dgst_header) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xc116d9b2, __VMLINUX_SYMBOL_STR(dev_printk) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libiscsi,libiscsi_tcp";


MODULE_INFO(srcversion, "0A7D191587D7867DCD7816A");
