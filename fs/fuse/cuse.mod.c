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
	{ 0xc84f6d38, __VMLINUX_SYMBOL_STR(fuse_file_poll) },
	{ 0x8288a96b, __VMLINUX_SYMBOL_STR(noop_llseek) },
	{ 0x337d72cc, __VMLINUX_SYMBOL_STR(misc_deregister) },
	{ 0x38e21711, __VMLINUX_SYMBOL_STR(fuse_dev_operations) },
	{ 0x577c3acc, __VMLINUX_SYMBOL_STR(class_destroy) },
	{ 0x70cf7661, __VMLINUX_SYMBOL_STR(misc_register) },
	{ 0x6e904dc6, __VMLINUX_SYMBOL_STR(__class_create) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xaec995d0, __VMLINUX_SYMBOL_STR(contig_page_data) },
	{ 0x68b53b7c, __VMLINUX_SYMBOL_STR(fuse_put_request) },
	{ 0xdcb49228, __VMLINUX_SYMBOL_STR(fuse_request_send_background) },
	{ 0x6f13de5e, __VMLINUX_SYMBOL_STR(__alloc_pages_nodemask) },
	{ 0xff36fb12, __VMLINUX_SYMBOL_STR(fuse_get_req_for_background) },
	{ 0x4925126, __VMLINUX_SYMBOL_STR(fuse_conn_init) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x106070d, __VMLINUX_SYMBOL_STR(kobject_uevent) },
	{ 0x22183e2a, __VMLINUX_SYMBOL_STR(cdev_add) },
	{ 0x3f728273, __VMLINUX_SYMBOL_STR(cdev_alloc) },
	{ 0xb7abba95, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x29537c9e, __VMLINUX_SYMBOL_STR(alloc_chrdev_region) },
	{ 0x68ee6c6, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x73190914, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0x9340ce53, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xd8e484f0, __VMLINUX_SYMBOL_STR(register_chrdev_region) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0x77bc13a0, __VMLINUX_SYMBOL_STR(strim) },
	{ 0x85df9b6c, __VMLINUX_SYMBOL_STR(strsep) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7a084a57, __VMLINUX_SYMBOL_STR(__free_pages) },
	{ 0xec6d644c, __VMLINUX_SYMBOL_STR(fuse_direct_io) },
	{ 0x68e30c4d, __VMLINUX_SYMBOL_STR(fuse_do_ioctl) },
	{ 0xe14caeba, __VMLINUX_SYMBOL_STR(fuse_do_open) },
	{ 0xb9d75383, __VMLINUX_SYMBOL_STR(fuse_conn_get) },
	{ 0xea45cdf5, __VMLINUX_SYMBOL_STR(fuse_conn_put) },
	{ 0x9cb0a909, __VMLINUX_SYMBOL_STR(fuse_sync_release) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9469482, __VMLINUX_SYMBOL_STR(kfree_call_rcu) },
	{ 0x34dfe80e, __VMLINUX_SYMBOL_STR(fuse_dev_release) },
	{ 0x43e84308, __VMLINUX_SYMBOL_STR(cdev_del) },
	{ 0x7485e15e, __VMLINUX_SYMBOL_STR(unregister_chrdev_region) },
	{ 0x1d4792f8, __VMLINUX_SYMBOL_STR(device_unregister) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd8cefab5, __VMLINUX_SYMBOL_STR(fuse_abort_conn) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fuse";


MODULE_INFO(srcversion, "1AB4BBABD9AD790EBAED7EB");
