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
	{ 0xaef94712, __VMLINUX_SYMBOL_STR(netlink_kernel_release) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xfae47c09, __VMLINUX_SYMBOL_STR(__netlink_kernel_create) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0x4f391d0e, __VMLINUX_SYMBOL_STR(nla_parse) },
	{ 0xb96e8fad, __VMLINUX_SYMBOL_STR(__netlink_dump_start) },
	{ 0xb04d65c6, __VMLINUX_SYMBOL_STR(crypto_lookup_aead) },
	{ 0xb0a2f6a3, __VMLINUX_SYMBOL_STR(crypto_alg_mod_lookup) },
	{ 0x6d1f67d6, __VMLINUX_SYMBOL_STR(crypto_lookup_skcipher) },
	{ 0x43b0dc3c, __VMLINUX_SYMBOL_STR(crypto_unregister_instance) },
	{ 0x3de9cae1, __VMLINUX_SYMBOL_STR(crypto_remove_final) },
	{ 0x214aaece, __VMLINUX_SYMBOL_STR(up_write) },
	{ 0x978c9366, __VMLINUX_SYMBOL_STR(crypto_remove_spawns) },
	{ 0xee931785, __VMLINUX_SYMBOL_STR(down_write) },
	{ 0x6ccbe0b3, __VMLINUX_SYMBOL_STR(netlink_capable) },
	{ 0x4ab01540, __VMLINUX_SYMBOL_STR(netlink_unicast) },
	{ 0x1881ccde, __VMLINUX_SYMBOL_STR(crypto_mod_put) },
	{ 0x2838548b, __VMLINUX_SYMBOL_STR(__alloc_skb) },
	{ 0xd9ce8f0c, __VMLINUX_SYMBOL_STR(strnlen) },
	{ 0x74f4744c, __VMLINUX_SYMBOL_STR(crypto_alg_sem) },
	{ 0x8cd213cd, __VMLINUX_SYMBOL_STR(up_read) },
	{ 0x9baf277b, __VMLINUX_SYMBOL_STR(crypto_mod_get) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xeffec1fb, __VMLINUX_SYMBOL_STR(down_read) },
	{ 0x457594fa, __VMLINUX_SYMBOL_STR(crypto_alg_list) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0xef5d3e8f, __VMLINUX_SYMBOL_STR(skb_trim) },
	{ 0x2261dd86, __VMLINUX_SYMBOL_STR(__nlmsg_put) },
	{ 0x1cd2d528, __VMLINUX_SYMBOL_STR(nla_put) },
	{ 0x328a05f1, __VMLINUX_SYMBOL_STR(strncpy) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x84cff69f, __VMLINUX_SYMBOL_STR(netlink_rcv_skb) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "8E61A0CF835FCDE12300BE6");
