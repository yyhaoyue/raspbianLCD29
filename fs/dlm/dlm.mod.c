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
	{ 0x68abb700, __VMLINUX_SYMBOL_STR(kobject_put) },
	{ 0x9752f8e2, __VMLINUX_SYMBOL_STR(kset_create_and_add) },
	{ 0xb6d847cb, __VMLINUX_SYMBOL_STR(release_sock) },
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x37e1bbb7, __VMLINUX_SYMBOL_STR(locks_copy_lock) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x12da5bb2, __VMLINUX_SYMBOL_STR(__kmalloc) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0xfbc74f64, __VMLINUX_SYMBOL_STR(__copy_from_user) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x35bc2d6b, __VMLINUX_SYMBOL_STR(kernel_sendmsg) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xd6ee688f, __VMLINUX_SYMBOL_STR(vmalloc) },
	{ 0x60556834, __VMLINUX_SYMBOL_STR(sctp_do_peeloff) },
	{ 0x67c2fa54, __VMLINUX_SYMBOL_STR(__copy_to_user) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x1b5c754c, __VMLINUX_SYMBOL_STR(posix_lock_inode_wait) },
	{ 0x43a53735, __VMLINUX_SYMBOL_STR(__alloc_workqueue_key) },
	{ 0x36810f1a, __VMLINUX_SYMBOL_STR(genl_unregister_family) },
	{ 0x79aa04a2, __VMLINUX_SYMBOL_STR(get_random_bytes) },
	{ 0x4c86184b, __VMLINUX_SYMBOL_STR(remove_wait_queue) },
	{ 0xe5260cef, __VMLINUX_SYMBOL_STR(sock_release) },
	{ 0x106070d, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x2a3aa678, __VMLINUX_SYMBOL_STR(_test_and_clear_bit) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xc87c1f84, __VMLINUX_SYMBOL_STR(ktime_get) },
	{ 0x32bb4ebc, __VMLINUX_SYMBOL_STR(config_item_put) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0xe7efe858, __VMLINUX_SYMBOL_STR(sock_create_kern) },
	{ 0x313ec00a, __VMLINUX_SYMBOL_STR(config_item_init_type_name) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x240112f8, __VMLINUX_SYMBOL_STR(__genl_register_family) },
	{ 0x999e8297, __VMLINUX_SYMBOL_STR(vfree) },
	{ 0xa192813b, __VMLINUX_SYMBOL_STR(idr_for_each) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xe546bc99, __VMLINUX_SYMBOL_STR(kthread_create_on_node) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0xece784c2, __VMLINUX_SYMBOL_STR(rb_first) },
	{ 0x275ef902, __VMLINUX_SYMBOL_STR(__init_waitqueue_head) },
	{ 0xffd5a395, __VMLINUX_SYMBOL_STR(default_wake_function) },
	{ 0x1fab5905, __VMLINUX_SYMBOL_STR(wait_for_completion) },
	{ 0x70cf7661, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x5c17b537, __VMLINUX_SYMBOL_STR(kernel_setsockopt) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0xff8cbb1f, __VMLINUX_SYMBOL_STR(idr_destroy) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x34908c14, __VMLINUX_SYMBOL_STR(print_hex_dump_bytes) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xcdc94296, __VMLINUX_SYMBOL_STR(kthread_stop) },
	{ 0xf6b53e88, __VMLINUX_SYMBOL_STR(lock_sock_nested) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xa13f2b11, __VMLINUX_SYMBOL_STR(kobject_init_and_add) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0x4d9b652b, __VMLINUX_SYMBOL_STR(rb_erase) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0x73e20c1c, __VMLINUX_SYMBOL_STR(strlcpy) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x8c03d20c, __VMLINUX_SYMBOL_STR(destroy_workqueue) },
	{ 0x84ffea8b, __VMLINUX_SYMBOL_STR(idr_preload) },
	{ 0x77e92e7b, __VMLINUX_SYMBOL_STR(config_group_init_type_name) },
	{ 0x8288a96b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x373db350, __VMLINUX_SYMBOL_STR(kstrtoint) },
	{ 0xbfbcddf8, __VMLINUX_SYMBOL_STR(idr_alloc) },
	{ 0xab980223, __VMLINUX_SYMBOL_STR(configfs_register_subsystem) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x42160169, __VMLINUX_SYMBOL_STR(flush_workqueue) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x61651be, __VMLINUX_SYMBOL_STR(strcat) },
	{ 0x32907b91, __VMLINUX_SYMBOL_STR(idr_remove) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x5a6c5c8e, __VMLINUX_SYMBOL_STR(kernel_getsockopt) },
	{ 0xc6cbbc89, __VMLINUX_SYMBOL_STR(capable) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0x7a084a57, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xb5684e29, __VMLINUX_SYMBOL_STR(idr_find_slowpath) },
	{ 0x3316845e, __VMLINUX_SYMBOL_STR(idr_get_next) },
	{ 0xa8f17046, __VMLINUX_SYMBOL_STR(kernel_sendpage) },
	{ 0x3aea0ac4, __VMLINUX_SYMBOL_STR(locks_init_lock) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0xd62c833f, __VMLINUX_SYMBOL_STR(schedule_timeout) },
	{ 0x72350130, __VMLINUX_SYMBOL_STR(___ratelimit) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x7f24de73, __VMLINUX_SYMBOL_STR(jiffies_to_usecs) },
	{ 0x782a98d4, __VMLINUX_SYMBOL_STR(wake_up_process) },
	{ 0x1194c25a, __VMLINUX_SYMBOL_STR(configfs_unregister_subsystem) },
	{ 0x4c9de6f3, __VMLINUX_SYMBOL_STR(down_read_trylock) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x9c0bd51f, __VMLINUX_SYMBOL_STR(_raw_spin_lock) },
	{ 0xa5526619, __VMLINUX_SYMBOL_STR(rb_insert_color) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0x34e3af01, __VMLINUX_SYMBOL_STR(kernel_recvmsg) },
	{ 0xd85cd67e, __VMLINUX_SYMBOL_STR(__wake_up) },
	{ 0xb3f7646e, __VMLINUX_SYMBOL_STR(kthread_should_stop) },
	{ 0x344b7739, __VMLINUX_SYMBOL_STR(prepare_to_wait_event) },
	{ 0xc7bcbc8d, __VMLINUX_SYMBOL_STR(add_wait_queue) },
	{ 0xb7382c92, __VMLINUX_SYMBOL_STR(kernel_kobj) },
	{ 0x31683780, __VMLINUX_SYMBOL_STR(kset_unregister) },
	{ 0x9c55cec, __VMLINUX_SYMBOL_STR(schedule_timeout_interruptible) },
	{ 0x6fe0c5b1, __VMLINUX_SYMBOL_STR(posix_lock_file) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xa46f2f1b, __VMLINUX_SYMBOL_STR(kstrtouint) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xa0495f5, __VMLINUX_SYMBOL_STR(genlmsg_put) },
	{ 0xc6edb4bf, __VMLINUX_SYMBOL_STR(kernel_bind) },
	{ 0x48b7caed, __VMLINUX_SYMBOL_STR(config_item_get) },
	{ 0x1cfb04fa, __VMLINUX_SYMBOL_STR(finish_wait) },
	{ 0xca9360b5, __VMLINUX_SYMBOL_STR(rb_next) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x676f6d0e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0xd4669fad, __VMLINUX_SYMBOL_STR(complete) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0xca54fee, __VMLINUX_SYMBOL_STR(_test_and_set_bit) },
	{ 0x528d0c14, __VMLINUX_SYMBOL_STR(idr_init) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0xd94f7644, __VMLINUX_SYMBOL_STR(config_group_find_item) },
	{ 0x6080784b, __VMLINUX_SYMBOL_STR(config_group_init) },
	{ 0x337d72cc, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x986a0f5c, __VMLINUX_SYMBOL_STR(__init_rwsem) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=sctp";


MODULE_INFO(srcversion, "670E4BA007D065C1CBD12EE");
