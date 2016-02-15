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
	{ 0x402b8281, __VMLINUX_SYMBOL_STR(__request_module) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xa527f0f2, __VMLINUX_SYMBOL_STR(sock_diag_put_meminfo) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x97255bdf, __VMLINUX_SYMBOL_STR(strlen) },
	{ 0x7e5d2caf, __VMLINUX_SYMBOL_STR(sock_diag_unregister) },
	{ 0xa1d55e90, __VMLINUX_SYMBOL_STR(_raw_spin_lock_bh) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0xdc10e026, __VMLINUX_SYMBOL_STR(sock_i_ino) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x3023a889, __VMLINUX_SYMBOL_STR(sock_diag_register) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x37befc70, __VMLINUX_SYMBOL_STR(jiffies_to_msecs) },
	{ 0x3c3fce39, __VMLINUX_SYMBOL_STR(__local_bh_enable_ip) },
	{ 0x71c90087, __VMLINUX_SYMBOL_STR(memcmp) },
	{ 0xcd279169, __VMLINUX_SYMBOL_STR(nla_find) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xdd3916ac, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_bh) },
	{ 0x468370d2, __VMLINUX_SYMBOL_STR(sock_diag_unregister_inet_compat) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0xa2cfc937, __VMLINUX_SYMBOL_STR(inet6_lookup) },
	{ 0x5873b95a, __VMLINUX_SYMBOL_STR(sock_gen_put) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x31b9195c, __VMLINUX_SYMBOL_STR(__local_bh_disable_ip) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x95baa8e8, __VMLINUX_SYMBOL_STR(sock_diag_check_cookie) },
	{ 0x8b618d08, __VMLINUX_SYMBOL_STR(overflowuid) },
	{ 0xcff0e979, __VMLINUX_SYMBOL_STR(sock_diag_save_cookie) },
	{ 0xb94da53e, __VMLINUX_SYMBOL_STR(__inet_lookup_listener) },
	{ 0x676f6d0e, __VMLINUX_SYMBOL_STR(nla_reserve) },
	{ 0x3f4bb487, __VMLINUX_SYMBOL_STR(sock_diag_register_inet_compat) },
	{ 0x2261dd86, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x56aedab7, __VMLINUX_SYMBOL_STR(sock_i_uid) },
	{ 0xb96e8fad, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0x56acc001, __VMLINUX_SYMBOL_STR(__inet_lookup_established) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "3F8B0A3AD307D6F0208D626");
