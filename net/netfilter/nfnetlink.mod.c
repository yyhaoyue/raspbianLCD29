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
	{ 0x609f1c7e, __VMLINUX_SYMBOL_STR(synchronize_net) },
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xe65090a0, __VMLINUX_SYMBOL_STR(netlink_has_listeners) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x38a02db9, __VMLINUX_SYMBOL_STR(skb_clone) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xb6327fcb, __VMLINUX_SYMBOL_STR(nlmsg_notify) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaef94712, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0x84cff69f, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0x16e5934, __VMLINUX_SYMBOL_STR(netlink_alloc_skb) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0xc2cdbf1, __VMLINUX_SYMBOL_STR(synchronize_sched) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x8a7d1c31, __VMLINUX_SYMBOL_STR(high_memory) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xf3afd11d, __VMLINUX_SYMBOL_STR(netlink_ack) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xfa78d689, __VMLINUX_SYMBOL_STR(netlink_set_err) },
	{ 0xfae47c09, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x32c44b33, __VMLINUX_SYMBOL_STR(netlink_net_capable) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "2057F8400AB7A03B7AD75CD");
