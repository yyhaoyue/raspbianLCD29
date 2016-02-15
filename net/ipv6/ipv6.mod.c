#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.init = init_module,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x9c9ec2a0, __VMLINUX_SYMBOL_STR(proc_dointvec_minmax) },
	{ 0xcadafa5c, __VMLINUX_SYMBOL_STR(register_netdevice) },
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x10d3051e, __VMLINUX_SYMBOL_STR(secpath_dup) },
	{ 0xa651120d, __VMLINUX_SYMBOL_STR(inet_peer_base_init) },
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x3350acd6, __VMLINUX_SYMBOL_STR(xfrm_state_register_afinfo) },
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x845fa578, __VMLINUX_SYMBOL_STR(neigh_lookup) },
	{ 0x58d633c7, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec_jiffies) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x878ab3ce, __VMLINUX_SYMBOL_STR(sysctl_tcp_adv_win_scale) },
	{ 0xd38420ef, __VMLINUX_SYMBOL_STR(sk_prot_clear_portaddr_nulls) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xfe461998, __VMLINUX_SYMBOL_STR(tcp_v4_connect) },
	{ 0x7dd04b7f, __VMLINUX_SYMBOL_STR(sock_init_data) },
	{ 0xb4c3e3f7, __VMLINUX_SYMBOL_STR(icmpv6_send) },
	{ 0x26e76fb8, __VMLINUX_SYMBOL_STR(sysctl_udp_wmem_min) },
	{ 0x8d0a9fb4, __VMLINUX_SYMBOL_STR(tcp_splice_read) },
	{ 0x2f14bfc2, __VMLINUX_SYMBOL_STR(__kfree_skb) },
	{ 0xc2118587, __VMLINUX_SYMBOL_STR(put_pid) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x5b3f884e, __VMLINUX_SYMBOL_STR(ping_init_sock) },
	{ 0x4bc519f4, __VMLINUX_SYMBOL_STR(inet_frag_kill) },
	{ 0xb02c5a74, __VMLINUX_SYMBOL_STR(ping_rcv) },
	{ 0x9a153c65, __VMLINUX_SYMBOL_STR(tcp_fetch_timewait_stamp) },
	{ 0x925651d3, __VMLINUX_SYMBOL_STR(inet_listen) },
	{ 0x25ad5a16, __VMLINUX_SYMBOL_STR(sk_filter) },
	{ 0x3e80684a, __VMLINUX_SYMBOL_STR(__percpu_counter_add) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x9cdc84b2, __VMLINUX_SYMBOL_STR(udplite_prot) },
	{ 0x7f99dd35, __VMLINUX_SYMBOL_STR(xfrm_output) },
	{ 0xdd44f6ae, __VMLINUX_SYMBOL_STR(single_open) },
	{ 0xe96359ca, __VMLINUX_SYMBOL_STR(tcp_prot) },
	{ 0x4744735e, __VMLINUX_SYMBOL_STR(xfrm_policy_register_afinfo) },
	{ 0xb10c551f, __VMLINUX_SYMBOL_STR(percpu_counter_destroy) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x7b52e38, __VMLINUX_SYMBOL_STR(rtnl_unregister) },
	{ 0x91eb9b4, __VMLINUX_SYMBOL_STR(round_jiffies) },
	{ 0x79b28474, __VMLINUX_SYMBOL_STR(get_task_pid) },
	{ 0x65ccb6f0, __VMLINUX_SYMBOL_STR(call_netevent_notifiers) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xc996d097, __VMLINUX_SYMBOL_STR(del_timer) },
	{ 0x347682ce, __VMLINUX_SYMBOL_STR(snmp_fold_field64) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x23c0774e, __VMLINUX_SYMBOL_STR(tcp_poll) },
	{ 0xd97edd47, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec) },
	{ 0xa0ebd14c, __VMLINUX_SYMBOL_STR(sysctl_tcp_mem) },
	{ 0xd0a2847c, __VMLINUX_SYMBOL_STR(sha_init) },
	{ 0x18e7cddb, __VMLINUX_SYMBOL_STR(dev_get_flags) },
	{ 0xa0436e98, __VMLINUX_SYMBOL_STR(in6addr_linklocal_allnodes) },
	{ 0x3c6ce275, __VMLINUX_SYMBOL_STR(inet_unhash) },
	{ 0x1f26d240, __VMLINUX_SYMBOL_STR(neigh_sysctl_register) },
	{ 0x2ecf8e76, __VMLINUX_SYMBOL_STR(inet_twsk_put) },
	{ 0x3c2691f0, __VMLINUX_SYMBOL_STR(ping_close) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x69e1a96c, __VMLINUX_SYMBOL_STR(__dev_get_by_flags) },
	{ 0x5f098b2a, __VMLINUX_SYMBOL_STR(in6addr_interfacelocal_allrouters) },
	{ 0x8f9090f9, __VMLINUX_SYMBOL_STR(dev_disable_lro) },
	{ 0x64970459, __VMLINUX_SYMBOL_STR(inet6_add_protocol) },
	{ 0x22a6daa1, __VMLINUX_SYMBOL_STR(inet6_lookup_listener) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x4c59790f, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0x999f42ac, __VMLINUX_SYMBOL_STR(__skb_checksum_complete_head) },
	{ 0x9e472f5f, __VMLINUX_SYMBOL_STR(snmp_fold_field) },
	{ 0x2eee3413, __VMLINUX_SYMBOL_STR(__inet_hash) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0xfd99623a, __VMLINUX_SYMBOL_STR(ip_frag_ecn_table) },
	{ 0x76452740, __VMLINUX_SYMBOL_STR(sk_setup_caps) },
	{ 0xc2cd0b51, __VMLINUX_SYMBOL_STR(tcp_done) },
	{ 0x39991865, __VMLINUX_SYMBOL_STR(icmp_global_allow) },
	{ 0xed9d7bf9, __VMLINUX_SYMBOL_STR(flow_hash_from_keys) },
	{ 0xecac0a8e, __VMLINUX_SYMBOL_STR(rtnetlink_put_metrics) },
	{ 0x94418841, __VMLINUX_SYMBOL_STR(tcp_rcv_state_process) },
	{ 0xe7492901, __VMLINUX_SYMBOL_STR(single_release) },
	{ 0xc872fd85, __VMLINUX_SYMBOL_STR(in6addr_interfacelocal_allnodes) },
	{ 0xc68c0e70, __VMLINUX_SYMBOL_STR(udp_lib_rehash) },
	{ 0x4ece96fb, __VMLINUX_SYMBOL_STR(seq_puts) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x832b280d, __VMLINUX_SYMBOL_STR(inet_twsk_deschedule) },
	{ 0xa76afcbc, __VMLINUX_SYMBOL_STR(tcp_ca_openreq_child) },
	{ 0xc7a4fbed, __VMLINUX_SYMBOL_STR(rtnl_lock) },
	{ 0x6469a469, __VMLINUX_SYMBOL_STR(tcp_v4_conn_request) },
	{ 0x6c51a836, __VMLINUX_SYMBOL_STR(sysctl_tcp_notsent_lowat) },
	{ 0xa6ec7b34, __VMLINUX_SYMBOL_STR(xfrm_state_lookup_byaddr) },
	{ 0x4deb1a1e, __VMLINUX_SYMBOL_STR(tcp_sendpage) },
	{ 0xcf466bf8, __VMLINUX_SYMBOL_STR(pid_nr_ns) },
	{ 0xb5198b77, __VMLINUX_SYMBOL_STR(_raw_read_lock) },
	{ 0x7d7ea9ee, __VMLINUX_SYMBOL_STR(udp_push_pending_frames) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0x5e4a262f, __VMLINUX_SYMBOL_STR(ping_common_sendmsg) },
	{ 0xad8cec4e, __VMLINUX_SYMBOL_STR(nf_getsockopt) },
	{ 0xb5ea85cf, __VMLINUX_SYMBOL_STR(raw_seq_start) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x551fbb9, __VMLINUX_SYMBOL_STR(reqsk_queue_hash_req) },
	{ 0x7bed393, __VMLINUX_SYMBOL_STR(tcp_syn_ack_timeout) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x35f2501c, __VMLINUX_SYMBOL_STR(__rtnl_register) },
	{ 0xd3f57a2, __VMLINUX_SYMBOL_STR(_find_next_bit_le) },
	{ 0xbaf649a7, __VMLINUX_SYMBOL_STR(ping_get_port) },
	{ 0x2f1063f2, __VMLINUX_SYMBOL_STR(copy_from_iter) },
	{ 0x8bc6e51b, __VMLINUX_SYMBOL_STR(seq_printf) },
	{ 0xd2da1048, __VMLINUX_SYMBOL_STR(register_netdevice_notifier) },
	{ 0xfadf8058, __VMLINUX_SYMBOL_STR(rtnl_notify) },
	{ 0xd2170f1e, __VMLINUX_SYMBOL_STR(neigh_table_init) },
	{ 0x6db4da31, __VMLINUX_SYMBOL_STR(remove_proc_entry) },
	{ 0xb4385f8, __VMLINUX_SYMBOL_STR(sock_queue_rcv_skb) },
	{ 0x353e3fa5, __VMLINUX_SYMBOL_STR(__get_user_4) },
	{ 0x4d45d89e, __VMLINUX_SYMBOL_STR(udp_memory_allocated) },
	{ 0xc7910c45, __VMLINUX_SYMBOL_STR(inet_peer_xrlim_allow) },
	{ 0xe2fae716, __VMLINUX_SYMBOL_STR(kmemdup) },
	{ 0xd2a89dfa, __VMLINUX_SYMBOL_STR(pneigh_enqueue) },
	{ 0x10d7002a, __VMLINUX_SYMBOL_STR(tcp_v4_destroy_sock) },
	{ 0xde71313f, __VMLINUX_SYMBOL_STR(skb_recv_datagram) },
	{ 0x2cea2b3f, __VMLINUX_SYMBOL_STR(nf_ct_attach) },
	{ 0x50c89f23, __VMLINUX_SYMBOL_STR(__alloc_percpu) },
	{ 0x42fcc1b6, __VMLINUX_SYMBOL_STR(dev_set_allmulti) },
	{ 0xc4dd62e0, __VMLINUX_SYMBOL_STR(inet_csk_prepare_forced_close) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x2ff9d54e, __VMLINUX_SYMBOL_STR(pingv6_ops) },
	{ 0x3fbce3f4, __VMLINUX_SYMBOL_STR(init_user_ns) },
	{ 0xd1f32679, __VMLINUX_SYMBOL_STR(__percpu_counter_sum) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0xf45856c4, __VMLINUX_SYMBOL_STR(udp_lib_setsockopt) },
	{ 0xd48cb6b, __VMLINUX_SYMBOL_STR(xfrm_dst_ifdown) },
	{ 0x7a74f8ab, __VMLINUX_SYMBOL_STR(inet_sendmsg) },
	{ 0x1512f7c9, __VMLINUX_SYMBOL_STR(fib_default_rule_add) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x288bbbd4, __VMLINUX_SYMBOL_STR(__dst_destroy_metrics_generic) },
	{ 0x873eec8d, __VMLINUX_SYMBOL_STR(tcp_v4_mtu_reduced) },
	{ 0x7f2feea5, __VMLINUX_SYMBOL_STR(neigh_changeaddr) },
	{ 0x9a16fd25, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0x611f1c53, __VMLINUX_SYMBOL_STR(ping_seq_fops) },
	{ 0xb17af52e, __VMLINUX_SYMBOL_STR(inet_sk_rebuild_header) },
	{ 0xdc10e026, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0xd7e47ced, __VMLINUX_SYMBOL_STR(xfrm_state_unregister_afinfo) },
	{ 0xf7ee2aba, __VMLINUX_SYMBOL_STR(sock_rfree) },
	{ 0x4651e0af, __VMLINUX_SYMBOL_STR(raw_unhash_sk) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f683af1, __VMLINUX_SYMBOL_STR(skb_realloc_headroom) },
	{ 0x24dc91aa, __VMLINUX_SYMBOL_STR(ping_unhash) },
	{ 0x641af087, __VMLINUX_SYMBOL_STR(tcp_orphan_count) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x37e74642, __VMLINUX_SYMBOL_STR(get_jiffies_64) },
	{ 0xcc3d5b3c, __VMLINUX_SYMBOL_STR(seq_read) },
	{ 0xff6362e0, __VMLINUX_SYMBOL_STR(dst_alloc) },
	{ 0x23f1735c, __VMLINUX_SYMBOL_STR(tcp_check_req) },
	{ 0xefdc9e49, __VMLINUX_SYMBOL_STR(neigh_parms_release) },
	{ 0x22d7a172, __VMLINUX_SYMBOL_STR(__neigh_create) },
	{ 0x6840df6, __VMLINUX_SYMBOL_STR(tcp_release_cb) },
	{ 0xb7fb054f, __VMLINUX_SYMBOL_STR(kfree_skb_list) },
	{ 0xbc336d6, __VMLINUX_SYMBOL_STR(skb_scrub_packet) },
	{ 0x1bac8c88, __VMLINUX_SYMBOL_STR(sk_common_release) },
	{ 0xe5832a76, __VMLINUX_SYMBOL_STR(__dst_free) },
	{ 0x188a7a8e, __VMLINUX_SYMBOL_STR(sock_queue_err_skb) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xc9ec4e21, __VMLINUX_SYMBOL_STR(free_percpu) },
	{ 0x9d0d6206, __VMLINUX_SYMBOL_STR(unregister_netdevice_notifier) },
	{ 0x50b2323b, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xb50270a2, __VMLINUX_SYMBOL_STR(ping_bind) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x10dd1136, __VMLINUX_SYMBOL_STR(ipv6_select_ident) },
	{ 0x51c7ead4, __VMLINUX_SYMBOL_STR(proc_remove) },
	{ 0x3930880f, __VMLINUX_SYMBOL_STR(ping_err) },
	{ 0x557363ca, __VMLINUX_SYMBOL_STR(inet_dgram_connect) },
	{ 0xb6f77bfc, __VMLINUX_SYMBOL_STR(ping_seq_next) },
	{ 0x2e453a05, __VMLINUX_SYMBOL_STR(tcp_twsk_destructor) },
	{ 0x886ff395, __VMLINUX_SYMBOL_STR(ip_generic_getfrag) },
	{ 0xa951319e, __VMLINUX_SYMBOL_STR(sock_common_recvmsg) },
	{ 0xc9c319e5, __VMLINUX_SYMBOL_STR(nf_register_afinfo) },
	{ 0x6c8d38c4, __VMLINUX_SYMBOL_STR(inet_frag_find) },
	{ 0x416d821c, __VMLINUX_SYMBOL_STR(dev_mc_add) },
	{ 0x51dae51f, __VMLINUX_SYMBOL_STR(netif_rx) },
	{ 0x4f3bb0b6, __VMLINUX_SYMBOL_STR(sock_no_sendpage) },
	{ 0x39e79c65, __VMLINUX_SYMBOL_STR(nf_setsockopt) },
	{ 0xa764786f, __VMLINUX_SYMBOL_STR(xfrm_input_register_afinfo) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0x5d88e862, __VMLINUX_SYMBOL_STR(sock_get_timestamp) },
	{ 0xa46ccb59, __VMLINUX_SYMBOL_STR(tcp_sendmsg) },
	{ 0xebcf13df, __VMLINUX_SYMBOL_STR(tcp_hashinfo) },
	{ 0x4902ed36, __VMLINUX_SYMBOL_STR(sock_no_mmap) },
	{ 0x93059f10, __VMLINUX_SYMBOL_STR(tcp_twsk_unique) },
	{ 0x1909d40e, __VMLINUX_SYMBOL_STR(PDE_DATA) },
	{ 0xfe7c4287, __VMLINUX_SYMBOL_STR(nr_cpu_ids) },
	{ 0xf1db1704, __VMLINUX_SYMBOL_STR(nla_memcpy) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0x3382fd03, __VMLINUX_SYMBOL_STR(tcp_parse_options) },
	{ 0xa108eb4d, __VMLINUX_SYMBOL_STR(sysctl_optmem_max) },
	{ 0x34240d20, __VMLINUX_SYMBOL_STR(inetpeer_invalidate_tree) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xd5f2172f, __VMLINUX_SYMBOL_STR(del_timer_sync) },
	{ 0x7e60a82d, __VMLINUX_SYMBOL_STR(skb_queue_purge) },
	{ 0x40ad3abc, __VMLINUX_SYMBOL_STR(neigh_proc_dointvec_ms_jiffies) },
	{ 0x9318f78c, __VMLINUX_SYMBOL_STR(ping_proc_unregister) },
	{ 0x5d6bfce5, __VMLINUX_SYMBOL_STR(kfree_skb_partial) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x328f3d3b, __VMLINUX_SYMBOL_STR(neigh_direct_output) },
	{ 0x778f8e9b, __VMLINUX_SYMBOL_STR(neigh_app_ns) },
	{ 0x15608355, __VMLINUX_SYMBOL_STR(sock_no_socketpair) },
	{ 0x23601745, __VMLINUX_SYMBOL_STR(tcp_rtx_synack) },
	{ 0x64683324, __VMLINUX_SYMBOL_STR(skb_checksum) },
	{ 0xa0786de, __VMLINUX_SYMBOL_STR(udplite_table) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x8f045d1c, __VMLINUX_SYMBOL_STR(cancel_delayed_work) },
	{ 0x8799cba2, __VMLINUX_SYMBOL_STR(proc_mkdir) },
	{ 0x8d551bef, __VMLINUX_SYMBOL_STR(sysctl_tcp_rmem) },
	{ 0x936d53e4, __VMLINUX_SYMBOL_STR(__sock_recv_wifi_status) },
	{ 0x9fdecc31, __VMLINUX_SYMBOL_STR(unregister_netdevice_many) },
	{ 0x24843545, __VMLINUX_SYMBOL_STR(dev_loopback_xmit) },
	{ 0xc73147cd, __VMLINUX_SYMBOL_STR(tcp_create_openreq_child) },
	{ 0x284a05de, __VMLINUX_SYMBOL_STR(inet_sendpage) },
	{ 0xbf647f8a, __VMLINUX_SYMBOL_STR(__inet6_lookup_established) },
	{ 0xeced1769, __VMLINUX_SYMBOL_STR(sk_alloc) },
	{ 0xa3590246, __VMLINUX_SYMBOL_STR(udp_sendmsg) },
	{ 0xcff6b676, __VMLINUX_SYMBOL_STR(_raw_spin_trylock_bh) },
	{ 0x578107e9, __VMLINUX_SYMBOL_STR(tcp_make_synack) },
	{ 0xa27904bd, __VMLINUX_SYMBOL_STR(neigh_resolve_output) },
	{ 0x36d68add, __VMLINUX_SYMBOL_STR(single_open_net) },
	{ 0x27f28520, __VMLINUX_SYMBOL_STR(tcp_simple_retransmit) },
	{ 0x5f59a393, __VMLINUX_SYMBOL_STR(skb_append_datato_frags) },
	{ 0xf4663782, __VMLINUX_SYMBOL_STR(fib_rules_register) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x7510f832, __VMLINUX_SYMBOL_STR(udp_flush_pending_frames) },
	{ 0x9f1bcd4a, __VMLINUX_SYMBOL_STR(skb_copy_datagram_iter) },
	{ 0x6d294e43, __VMLINUX_SYMBOL_STR(clock_t_to_jiffies) },
	{ 0x5ff229dd, __VMLINUX_SYMBOL_STR(tcp_rcv_established) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x18bd76a4, __VMLINUX_SYMBOL_STR(_raw_spin_trylock) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x46cef5f4, __VMLINUX_SYMBOL_STR(inet_addr_type) },
	{ 0x4ef11b73, __VMLINUX_SYMBOL_STR(ping_seq_stop) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0xa824faff, __VMLINUX_SYMBOL_STR(__skb_recv_datagram) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xfc2ceb40, __VMLINUX_SYMBOL_STR(dst_discard_sk) },
	{ 0x99591a7a, __VMLINUX_SYMBOL_STR(ipv6_ext_hdr) },
	{ 0x5c54b7e6, __VMLINUX_SYMBOL_STR(ns_capable) },
	{ 0xd90d539a, __VMLINUX_SYMBOL_STR(__skb_warn_lro_forwarding) },
	{ 0x60d44749, __VMLINUX_SYMBOL_STR(tcp_connect) },
	{ 0xc68aa090, __VMLINUX_SYMBOL_STR(mod_delayed_work_on) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0xa4950a36, __VMLINUX_SYMBOL_STR(sock_prot_inuse_add) },
	{ 0xf95c4ae3, __VMLINUX_SYMBOL_STR(free_netdev) },
	{ 0xb67c64fd, __VMLINUX_SYMBOL_STR(__tracepoint_kfree_skb) },
	{ 0x8647debb, __VMLINUX_SYMBOL_STR(inet6_protos) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xf3a8ca7, __VMLINUX_SYMBOL_STR(skb_kill_datagram) },
	{ 0x8d00dbc3, __VMLINUX_SYMBOL_STR(dev_mc_del) },
	{ 0x8e65d85e, __VMLINUX_SYMBOL_STR(fib_default_rule_pref) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x9f7a71a8, __VMLINUX_SYMBOL_STR(seq_putc) },
	{ 0x279003f3, __VMLINUX_SYMBOL_STR(neigh_connected_output) },
	{ 0xc454a88e, __VMLINUX_SYMBOL_STR(inet_frags_fini) },
	{ 0xd9a3c38e, __VMLINUX_SYMBOL_STR(xfrm_input) },
	{ 0xab2a0370, __VMLINUX_SYMBOL_STR(sock_no_listen) },
	{ 0x2db87789, __VMLINUX_SYMBOL_STR(inet_frags_exit_net) },
	{ 0xc9634df9, __VMLINUX_SYMBOL_STR(in6addr_linklocal_allrouters) },
	{ 0x38a9f7c5, __VMLINUX_SYMBOL_STR(in6addr_loopback) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0xc2c13026, __VMLINUX_SYMBOL_STR(tcp_set_state) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xd100acbd, __VMLINUX_SYMBOL_STR(_raw_write_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x805b9dc0, __VMLINUX_SYMBOL_STR(__xfrm_route_forward) },
	{ 0xd453db9a, __VMLINUX_SYMBOL_STR(sock_no_accept) },
	{ 0x98532fe2, __VMLINUX_SYMBOL_STR(ping_getfrag) },
	{ 0x64705011, __VMLINUX_SYMBOL_STR(rtnl_register) },
	{ 0x42e0aa46, __VMLINUX_SYMBOL_STR(dev_get_by_index_rcu) },
	{ 0x87e1293b, __VMLINUX_SYMBOL_STR(skb_store_bits) },
	{ 0x3cd77a5d, __VMLINUX_SYMBOL_STR(__sock_tx_timestamp) },
	{ 0xf1961543, __VMLINUX_SYMBOL_STR(sk_free) },
	{ 0x9a55ba80, __VMLINUX_SYMBOL_STR(ipv4_specific) },
	{ 0xe5b7223c, __VMLINUX_SYMBOL_STR(tcp_ioctl) },
	{ 0x6f35520, __VMLINUX_SYMBOL_STR(dev_get_by_index) },
	{ 0xcd89a29c, __VMLINUX_SYMBOL_STR(inet_shutdown) },
	{ 0xb46685f4, __VMLINUX_SYMBOL_STR(raw_seq_open) },
	{ 0xad56c2ec, __VMLINUX_SYMBOL_STR(seq_release_net) },
	{ 0x20ca4f3a, __VMLINUX_SYMBOL_STR(tcp_death_row) },
	{ 0x557a0f01, __VMLINUX_SYMBOL_STR(dev_remove_pack) },
	{ 0x2bd82240, __VMLINUX_SYMBOL_STR(tcp_req_err) },
	{ 0xf4f14de6, __VMLINUX_SYMBOL_STR(rtnl_trylock) },
	{ 0x33dbfd93, __VMLINUX_SYMBOL_STR(tcp_memory_allocated) },
	{ 0x8834396c, __VMLINUX_SYMBOL_STR(mod_timer) },
	{ 0x4dd59d68, __VMLINUX_SYMBOL_STR(udp_prot) },
	{ 0x15f03d26, __VMLINUX_SYMBOL_STR(rtnl_af_unregister) },
	{ 0xa735db59, __VMLINUX_SYMBOL_STR(prandom_u32) },
	{ 0xaf6e651c, __VMLINUX_SYMBOL_STR(lock_sock_fast) },
	{ 0x92145f3, __VMLINUX_SYMBOL_STR(nla_reserve_nohdr) },
	{ 0x7fd9527b, __VMLINUX_SYMBOL_STR(inet6_unregister_icmp_sender) },
	{ 0x93fc73a9, __VMLINUX_SYMBOL_STR(tcp_timewait_state_process) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x26fb1c75, __VMLINUX_SYMBOL_STR(inet6_hash_connect) },
	{ 0x9b40cf33, __VMLINUX_SYMBOL_STR(tcp_v4_do_rcv) },
	{ 0xcc38e9cd, __VMLINUX_SYMBOL_STR(ipv6_stub) },
	{ 0x9e8624d7, __VMLINUX_SYMBOL_STR(sk_dst_check) },
	{ 0x7c95abd4, __VMLINUX_SYMBOL_STR(noop_qdisc) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0x3da8e8c3, __VMLINUX_SYMBOL_STR(inet_accept) },
	{ 0xa4eab0f, __VMLINUX_SYMBOL_STR(__skb_get_hash) },
	{ 0x8ebaad11, __VMLINUX_SYMBOL_STR(__get_page_tail) },
	{ 0x1ba470d7, __VMLINUX_SYMBOL_STR(raw_hash_sk) },
	{ 0x9be5369a, __VMLINUX_SYMBOL_STR(__dev_get_by_index) },
	{ 0xee2e93ad, __VMLINUX_SYMBOL_STR(sock_kfree_s) },
	{ 0xeed3635b, __VMLINUX_SYMBOL_STR(proc_dostring) },
	{ 0x3e983def, __VMLINUX_SYMBOL_STR(__sock_recv_timestamp) },
	{ 0x95a98ecd, __VMLINUX_SYMBOL_STR(inet_csk_get_port) },
	{ 0x40973662, __VMLINUX_SYMBOL_STR(sysctl_udp_mem) },
	{ 0x361d0ee6, __VMLINUX_SYMBOL_STR(udp_proc_register) },
	{ 0xc5d404bc, __VMLINUX_SYMBOL_STR(udp6_csum_init) },
	{ 0xae5e5240, __VMLINUX_SYMBOL_STR(dev_open) },
	{ 0x49a29c17, __VMLINUX_SYMBOL_STR(tcp_conn_request) },
	{ 0xc476d1d7, __VMLINUX_SYMBOL_STR(inet_ctl_sock_create) },
	{ 0xa5500f03, __VMLINUX_SYMBOL_STR(ip6_find_1stfragopt) },
	{ 0xfd6293c2, __VMLINUX_SYMBOL_STR(boot_tvec_bases) },
	{ 0x2e2ce9e0, __VMLINUX_SYMBOL_STR(sysctl_tcp_syncookies) },
	{ 0xa54d2e6c, __VMLINUX_SYMBOL_STR(inet_stream_ops) },
	{ 0x521a38bb, __VMLINUX_SYMBOL_STR(cookie_ecn_ok) },
	{ 0x4188d439, __VMLINUX_SYMBOL_STR(neigh_rand_reach_time) },
	{ 0x67540a99, __VMLINUX_SYMBOL_STR(dst_cow_metrics_generic) },
	{ 0x6403e338, __VMLINUX_SYMBOL_STR(tcp_memory_pressure) },
	{ 0x89903ea0, __VMLINUX_SYMBOL_STR(rtnl_unicast) },
	{ 0x60b9c079, __VMLINUX_SYMBOL_STR(__sock_recv_ts_and_drops) },
	{ 0x2650d835, __VMLINUX_SYMBOL_STR(sysctl_ip_early_demux) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5d4f8ca3, __VMLINUX_SYMBOL_STR(inet_hash) },
	{ 0xa646a922, __VMLINUX_SYMBOL_STR(ip_cmsg_recv_offset) },
	{ 0xdce16bd3, __VMLINUX_SYMBOL_STR(nf_unregister_afinfo) },
	{ 0x75ac96f9, __VMLINUX_SYMBOL_STR(skb_queue_tail) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0x7953371e, __VMLINUX_SYMBOL_STR(neigh_table_clear) },
	{ 0x54cfe8c3, __VMLINUX_SYMBOL_STR(__secpath_destroy) },
	{ 0x75e73648, __VMLINUX_SYMBOL_STR(put_pid_ns) },
	{ 0xba353a38, __VMLINUX_SYMBOL_STR(proto_register) },
	{ 0x728b89aa, __VMLINUX_SYMBOL_STR(rtnl_set_sk_err) },
	{ 0xc32d12ca, __VMLINUX_SYMBOL_STR(skb_try_coalesce) },
	{ 0x7ebcd3eb, __VMLINUX_SYMBOL_STR(inet_dgram_ops) },
	{ 0x964c6794, __VMLINUX_SYMBOL_STR(tcp_sockets_allocated) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x31f7d4cf, __VMLINUX_SYMBOL_STR(__sk_dst_check) },
	{ 0xa5a3cc1, __VMLINUX_SYMBOL_STR(dev_queue_xmit_sk) },
	{ 0x6c37a10d, __VMLINUX_SYMBOL_STR(udp_poll) },
	{ 0x37cb8b32, __VMLINUX_SYMBOL_STR(inet_release) },
	{ 0xbc10dd97, __VMLINUX_SYMBOL_STR(__put_user_4) },
	{ 0x95a8f363, __VMLINUX_SYMBOL_STR(nf_ipv6_ops) },
	{ 0xa3cc9eb9, __VMLINUX_SYMBOL_STR(udp_lib_getsockopt) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xf83ad417, __VMLINUX_SYMBOL_STR(inet_twsk_purge) },
	{ 0xb22e4b04, __VMLINUX_SYMBOL_STR(tcp_sync_mss) },
	{ 0x53663b7f, __VMLINUX_SYMBOL_STR(udp_lib_get_port) },
	{ 0x8d9a3059, __VMLINUX_SYMBOL_STR(sk_release_kernel) },
	{ 0xd56be6dc, __VMLINUX_SYMBOL_STR(ipv6_skip_exthdr) },
	{ 0xaa989a07, __VMLINUX_SYMBOL_STR(tcp_getsockopt) },
	{ 0x908911d5, __VMLINUX_SYMBOL_STR(ping_seq_start) },
	{ 0xa9fb7269, __VMLINUX_SYMBOL_STR(rtnl_af_register) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x606d0b09, __VMLINUX_SYMBOL_STR(secure_tcpv6_sequence_number) },
	{ 0x6b759b26, __VMLINUX_SYMBOL_STR(sock_get_timestampns) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xd3e6f60d, __VMLINUX_SYMBOL_STR(cpu_possible_mask) },
	{ 0x23839de2, __VMLINUX_SYMBOL_STR(datagram_poll) },
	{ 0x25be23cc, __VMLINUX_SYMBOL_STR(skb_checksum_help) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x66bbe013, __VMLINUX_SYMBOL_STR(__ip6_local_out) },
	{ 0xfe675bfd, __VMLINUX_SYMBOL_STR(sock_register) },
	{ 0xd6b7246e, __VMLINUX_SYMBOL_STR(inet_reqsk_alloc) },
	{ 0x22a54787, __VMLINUX_SYMBOL_STR(inet_frag_maybe_warn_overflow) },
	{ 0x6ca5b0f8, __VMLINUX_SYMBOL_STR(__net_get_random_once) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xc55aa484, __VMLINUX_SYMBOL_STR(proto_unregister) },
	{ 0xb78c6d69, __VMLINUX_SYMBOL_STR(pneigh_lookup) },
	{ 0xde92ec7b, __VMLINUX_SYMBOL_STR(tcp_init_sock) },
	{ 0x2c9711e6, __VMLINUX_SYMBOL_STR(tcp_proc_unregister) },
	{ 0x9dc48bb, __VMLINUX_SYMBOL_STR(inet_stream_connect) },
	{ 0xe6fc0995, __VMLINUX_SYMBOL_STR(inet_frag_destroy) },
	{ 0x9ddc24a9, __VMLINUX_SYMBOL_STR(tcp_v4_syn_recv_sock) },
	{ 0xbe0e5118, __VMLINUX_SYMBOL_STR(nla_memcmp) },
	{ 0x3dca7591, __VMLINUX_SYMBOL_STR(tcp_seq_open) },
	{ 0x6b2dc060, __VMLINUX_SYMBOL_STR(dump_stack) },
	{ 0xf430ff32, __VMLINUX_SYMBOL_STR(alloc_netdev_mqs) },
	{ 0x605f1083, __VMLINUX_SYMBOL_STR(inet6_del_protocol) },
	{ 0x7634d391, __VMLINUX_SYMBOL_STR(skb_gso_transport_seglen) },
	{ 0x493549a3, __VMLINUX_SYMBOL_STR(sock_kmalloc) },
	{ 0xf213513f, __VMLINUX_SYMBOL_STR(tcp_proc_register) },
	{ 0xc307f9a1, __VMLINUX_SYMBOL_STR(xfrm_policy_unregister_afinfo) },
	{ 0x450e7ace, __VMLINUX_SYMBOL_STR(sock_alloc_send_skb) },
	{ 0x50fad434, __VMLINUX_SYMBOL_STR(round_jiffies_up) },
	{ 0x461bb114, __VMLINUX_SYMBOL_STR(inet_sock_destruct) },
	{ 0x86094711, __VMLINUX_SYMBOL_STR(xfrm_policy_destroy) },
	{ 0x5b6116de, __VMLINUX_SYMBOL_STR(sock_edemux) },
	{ 0xfb8c987b, __VMLINUX_SYMBOL_STR(xfrm_lookup_route) },
	{ 0x86bdd783, __VMLINUX_SYMBOL_STR(tcp_disconnect) },
	{ 0x7186c184, __VMLINUX_SYMBOL_STR(put_cmsg) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xdffc3298, __VMLINUX_SYMBOL_STR(__rtnl_af_unregister) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0xe8c39d22, __VMLINUX_SYMBOL_STR(__percpu_counter_init) },
	{ 0x877823b0, __VMLINUX_SYMBOL_STR(tcp_initialize_rcv_mss) },
	{ 0xc7856a3d, __VMLINUX_SYMBOL_STR(inet6addr_notifier_call_chain) },
	{ 0xf313da4e, __VMLINUX_SYMBOL_STR(sha_transform) },
	{ 0xf83f5b93, __VMLINUX_SYMBOL_STR(__dev_get_by_name) },
	{ 0x17e2d44a, __VMLINUX_SYMBOL_STR(__pneigh_lookup) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xeab08cf9, __VMLINUX_SYMBOL_STR(udp_lib_unhash) },
	{ 0x341dbfa3, __VMLINUX_SYMBOL_STR(__per_cpu_offset) },
	{ 0x4e990d1f, __VMLINUX_SYMBOL_STR(neigh_parms_alloc) },
	{ 0x2a18c74, __VMLINUX_SYMBOL_STR(nf_conntrack_destroy) },
	{ 0xc7f2e4e6, __VMLINUX_SYMBOL_STR(__xfrm_state_destroy) },
	{ 0x62aa42d4, __VMLINUX_SYMBOL_STR(xfrm_input_unregister_afinfo) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x7b8ec75, __VMLINUX_SYMBOL_STR(unregister_netdevice_queue) },
	{ 0x6c702af7, __VMLINUX_SYMBOL_STR(sysctl_udp_rmem_min) },
	{ 0xfe22d83c, __VMLINUX_SYMBOL_STR(inet6_register_icmp_sender) },
	{ 0xf6ebc03b, __VMLINUX_SYMBOL_STR(net_ratelimit) },
	{ 0x3703ff89, __VMLINUX_SYMBOL_STR(xfrm_local_error) },
	{ 0x167f5cd9, __VMLINUX_SYMBOL_STR(init_pid_ns) },
	{ 0xfe8d843a, __VMLINUX_SYMBOL_STR(inet_frags_init_net) },
	{ 0xa73cbc2f, __VMLINUX_SYMBOL_STR(sock_common_setsockopt) },
	{ 0xa0ab8d59, __VMLINUX_SYMBOL_STR(neigh_sysctl_unregister) },
	{ 0xc0056be5, __VMLINUX_SYMBOL_STR(_raw_write_unlock_bh) },
	{ 0x767f58c0, __VMLINUX_SYMBOL_STR(neigh_update) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xd243260f, __VMLINUX_SYMBOL_STR(fib_rules_lookup) },
	{ 0x2a6820c3, __VMLINUX_SYMBOL_STR(proc_create_data) },
	{ 0x3f1b4278, __VMLINUX_SYMBOL_STR(__xfrm_policy_check) },
	{ 0x6f017b46, __VMLINUX_SYMBOL_STR(udp_seq_open) },
	{ 0x2ec86881, __VMLINUX_SYMBOL_STR(dst_destroy) },
	{ 0x271332ef, __VMLINUX_SYMBOL_STR(seq_lseek) },
	{ 0x44da5d0f, __VMLINUX_SYMBOL_STR(__csum_ipv6_magic) },
	{ 0x4c5fc58c, __VMLINUX_SYMBOL_STR(_raw_read_lock_bh) },
	{ 0xdfa7ff6b, __VMLINUX_SYMBOL_STR(in6_dev_finish_destroy) },
	{ 0x49b07aec, __VMLINUX_SYMBOL_STR(tcp_select_initial_window) },
	{ 0x640cb4e, __VMLINUX_SYMBOL_STR(sock_dequeue_err_skb) },
	{ 0x4c233a44, __VMLINUX_SYMBOL_STR(_raw_read_unlock_bh) },
	{ 0xd636cab1, __VMLINUX_SYMBOL_STR(udp_disconnect) },
	{ 0x4fffd10a, __VMLINUX_SYMBOL_STR(tcp_enter_memory_pressure) },
	{ 0x828cfb5e, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_bits) },
	{ 0x2f2f5ca7, __VMLINUX_SYMBOL_STR(sk_mc_loop) },
	{ 0x44a78aad, __VMLINUX_SYMBOL_STR(udp_ioctl) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x949ddc7a, __VMLINUX_SYMBOL_STR(dev_get_iflink) },
	{ 0x7342628b, __VMLINUX_SYMBOL_STR(ping_proc_register) },
	{ 0xfc38bb5a, __VMLINUX_SYMBOL_STR(tcp_prequeue) },
	{ 0x1229beb8, __VMLINUX_SYMBOL_STR(skb_copy_and_csum_datagram_msg) },
	{ 0x71702608, __VMLINUX_SYMBOL_STR(seq_open_net) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x996c4d30, __VMLINUX_SYMBOL_STR(proc_dointvec_ms_jiffies) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xe476bf66, __VMLINUX_SYMBOL_STR(tcp_setsockopt) },
	{ 0xb3bbbd66, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0x62737e1d, __VMLINUX_SYMBOL_STR(sock_unregister) },
	{ 0xf42252bd, __VMLINUX_SYMBOL_STR(neigh_ifdown) },
	{ 0xf19ca8cd, __VMLINUX_SYMBOL_STR(__fib6_flush_trees) },
	{ 0xa6f0719a, __VMLINUX_SYMBOL_STR(xfrm_state_check_expire) },
	{ 0x6cdc5c6b, __VMLINUX_SYMBOL_STR(nla_strlcpy) },
	{ 0x23d42b70, __VMLINUX_SYMBOL_STR(tcp_child_process) },
	{ 0x678c54fc, __VMLINUX_SYMBOL_STR(tcp_close) },
	{ 0x9d1b9633, __VMLINUX_SYMBOL_STR(__inet_inherit_port) },
	{ 0xeec56ce1, __VMLINUX_SYMBOL_STR(inet_sk_rx_dst_set) },
	{ 0xd6081c15, __VMLINUX_SYMBOL_STR(sock_common_getsockopt) },
	{ 0x579e0bf5, __VMLINUX_SYMBOL_STR(rtnl_unregister_all) },
	{ 0x677a8ced, __VMLINUX_SYMBOL_STR(raw_seq_stop) },
	{ 0xe57878a1, __VMLINUX_SYMBOL_STR(in6_pton) },
	{ 0x6acafd5b, __VMLINUX_SYMBOL_STR(cookie_timestamp_decode) },
	{ 0x6ec9ccdb, __VMLINUX_SYMBOL_STR(_raw_write_lock_bh) },
	{ 0xff72e092, __VMLINUX_SYMBOL_STR(__ip4_datagram_connect) },
	{ 0x237b320d, __VMLINUX_SYMBOL_STR(tcp_shutdown) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0xc5f945f0, __VMLINUX_SYMBOL_STR(ping_recvmsg) },
	{ 0x519f745a, __VMLINUX_SYMBOL_STR(tcp_v4_send_check) },
	{ 0xc7a4f20d, __VMLINUX_SYMBOL_STR(skb_dequeue) },
	{ 0x71683c8c, __VMLINUX_SYMBOL_STR(raw_seq_next) },
	{ 0xa5b2c6d, __VMLINUX_SYMBOL_STR(task_active_pid_ns) },
	{ 0xda226a93, __VMLINUX_SYMBOL_STR(sock_prot_inuse_get) },
	{ 0x6ccdd4af, __VMLINUX_SYMBOL_STR(inet_getpeer) },
	{ 0xa12c0c54, __VMLINUX_SYMBOL_STR(__xfrm_decode_session) },
	{ 0xae458094, __VMLINUX_SYMBOL_STR(rtnl_put_cacheinfo) },
	{ 0x5448b489, __VMLINUX_SYMBOL_STR(fib_rules_unregister) },
	{ 0x2d518c2f, __VMLINUX_SYMBOL_STR(inet_csk_accept) },
	{ 0xa9168676, __VMLINUX_SYMBOL_STR(xmit_recursion) },
	{ 0x7d0db45c, __VMLINUX_SYMBOL_STR(jiffies_to_clock_t) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x676f6d0e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x85d50e04, __VMLINUX_SYMBOL_STR(inet_frags_init) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xf40a7438, __VMLINUX_SYMBOL_STR(dev_add_pack) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x99bb8806, __VMLINUX_SYMBOL_STR(memmove) },
	{ 0x7945688e, __VMLINUX_SYMBOL_STR(sock_wmalloc) },
	{ 0xe113bbbc, __VMLINUX_SYMBOL_STR(csum_partial) },
	{ 0xc2e3d94d, __VMLINUX_SYMBOL_STR(udp_proc_unregister) },
	{ 0x72feb4fa, __VMLINUX_SYMBOL_STR(ip6_local_out) },
	{ 0x4e7b6925, __VMLINUX_SYMBOL_STR(consume_skb) },
	{ 0x63c7cf11, __VMLINUX_SYMBOL_STR(inet_putpeer) },
	{ 0x5ad5442f, __VMLINUX_SYMBOL_STR(ip6_dst_hoplimit) },
	{ 0x85670f1d, __VMLINUX_SYMBOL_STR(rtnl_is_locked) },
	{ 0xfc01e9f, __VMLINUX_SYMBOL_STR(static_key_slow_inc) },
	{ 0x8b4bc5b8, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
	{ 0xfc02b7ad, __VMLINUX_SYMBOL_STR(sysctl_tcp_wmem) },
	{ 0x438822a1, __VMLINUX_SYMBOL_STR(skb_put) },
	{ 0xfe6703a2, __VMLINUX_SYMBOL_STR(sk_page_frag_refill) },
	{ 0xec8c17be, __VMLINUX_SYMBOL_STR(ip_queue_xmit) },
	{ 0x23fe1dad, __VMLINUX_SYMBOL_STR(tcp_ca_get_key_by_name) },
	{ 0x9cf1b46, __VMLINUX_SYMBOL_STR(proc_dointvec_jiffies) },
	{ 0x9c0fc3ae, __VMLINUX_SYMBOL_STR(sock_wfree) },
	{ 0x7f0db9c0, __VMLINUX_SYMBOL_STR(xfrm_lookup) },
	{ 0x8b4ef8c6, __VMLINUX_SYMBOL_STR(tcp_recvmsg) },
	{ 0x4f4f1223, __VMLINUX_SYMBOL_STR(skb_copy_bits) },
	{ 0x2261dd86, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x3f1e3abe, __VMLINUX_SYMBOL_STR(xfrm_user_policy) },
	{ 0xc2ca7c4e, __VMLINUX_SYMBOL_STR(skb_morph) },
	{ 0xd542439, __VMLINUX_SYMBOL_STR(__ipv6_addr_type) },
	{ 0x598cd828, __VMLINUX_SYMBOL_STR(udp_table) },
	{ 0xde11b325, __VMLINUX_SYMBOL_STR(ping_hash) },
	{ 0x6e720ff2, __VMLINUX_SYMBOL_STR(rtnl_unlock) },
	{ 0x56aedab7, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xa235fd3d, __VMLINUX_SYMBOL_STR(ping_queue_rcv_skb) },
	{ 0x4411c503, __VMLINUX_SYMBOL_STR(prandom_seed) },
	{ 0x528302d9, __VMLINUX_SYMBOL_STR(skb_free_datagram_locked) },
	{ 0x13ea2e2e, __VMLINUX_SYMBOL_STR(xfrm_inner_extract_output) },
	{ 0xb9e8e2cc, __VMLINUX_SYMBOL_STR(in6addr_sitelocal_allrouters) },
	{ 0x31b31f5c, __VMLINUX_SYMBOL_STR(csum_partial_copy_nocheck) },
	{ 0x368b13e7, __VMLINUX_SYMBOL_STR(__skb_checksum_complete) },
	{ 0xe914e41e, __VMLINUX_SYMBOL_STR(strcpy) },
	{ 0x65679cc8, __VMLINUX_SYMBOL_STR(skb_free_datagram) },
	{ 0x938d582, __VMLINUX_SYMBOL_STR(single_release_net) },
	{ 0x200b2041, __VMLINUX_SYMBOL_STR(in6addr_any) },
	{ 0x93ab54bb, __VMLINUX_SYMBOL_STR(inet_recvmsg) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3E4752F3C02D553C67ACAD9");