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
	{ 0x220e54f, __VMLINUX_SYMBOL_STR(kmem_cache_destroy) },
	{ 0x8e3b64d1, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_deregister) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xd4993bf3, __VMLINUX_SYMBOL_STR(xfrm_unregister_type) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x704323, __VMLINUX_SYMBOL_STR(unregister_pernet_subsys) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x617dadf6, __VMLINUX_SYMBOL_STR(kmem_cache_free) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0x68ef979d, __VMLINUX_SYMBOL_STR(xfrm_register_type) },
	{ 0xa753e73c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x255d7073, __VMLINUX_SYMBOL_STR(register_pernet_subsys) },
	{ 0xeebaf751, __VMLINUX_SYMBOL_STR(kmem_cache_create) },
	{ 0xd57114d4, __VMLINUX_SYMBOL_STR(xfrm6_rcv_spi) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0xa75312bc, __VMLINUX_SYMBOL_STR(call_rcu_sched) },
	{ 0xb0bfa2c4, __VMLINUX_SYMBOL_STR(xfrm6_tunnel_register) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=tunnel6,ipv6";


MODULE_INFO(srcversion, "54242FDDF82541B2981856F");
