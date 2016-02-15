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
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x4c59790f, __VMLINUX_SYMBOL_STR(unregister_net_sysctl_table) },
	{ 0xe43274bc, __VMLINUX_SYMBOL_STR(proc_dointvec) },
	{ 0x4091e040, __VMLINUX_SYMBOL_STR(ip_fragment) },
	{ 0x18f28ddd, __VMLINUX_SYMBOL_STR(dst_release) },
	{ 0x4e6a3755, __VMLINUX_SYMBOL_STR(__vlan_find_dev_deep_rcu) },
	{ 0xe7a664c4, __VMLINUX_SYMBOL_STR(nf_hooks) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x9a16fd25, __VMLINUX_SYMBOL_STR(neigh_destroy) },
	{ 0xc8276a79, __VMLINUX_SYMBOL_STR(nf_hooks_needed) },
	{ 0x50b2323b, __VMLINUX_SYMBOL_STR(nf_hook_slow) },
	{ 0xdbecac2f, __VMLINUX_SYMBOL_STR(__pskb_pull_tail) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x747edf7a, __VMLINUX_SYMBOL_STR(br_dev_queue_push_xmit) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0x6f61b5b, __VMLINUX_SYMBOL_STR(skb_push) },
	{ 0xe65f3555, __VMLINUX_SYMBOL_STR(skb_pull) },
	{ 0xb924273d, __VMLINUX_SYMBOL_STR(init_net) },
	{ 0xe123aac3, __VMLINUX_SYMBOL_STR(nf_unregister_hooks) },
	{ 0x34e9e9c7, __VMLINUX_SYMBOL_STR(br_forward_finish) },
	{ 0x842e5b1c, __VMLINUX_SYMBOL_STR(ip_route_input_noref) },
	{ 0xf95efe2e, __VMLINUX_SYMBOL_STR(kfree_skb) },
	{ 0x9fa08c32, __VMLINUX_SYMBOL_STR(pskb_expand_head) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xe10f08c0, __VMLINUX_SYMBOL_STR(skb_pull_rcsum) },
	{ 0x950a887a, __VMLINUX_SYMBOL_STR(ip_route_output_flow) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0xb3bbbd66, __VMLINUX_SYMBOL_STR(___pskb_trim) },
	{ 0xce137539, __VMLINUX_SYMBOL_STR(nf_br_ops) },
	{ 0x29d2dba3, __VMLINUX_SYMBOL_STR(nf_register_hooks) },
	{ 0xba2a4c7b, __VMLINUX_SYMBOL_STR(br_handle_frame_finish) },
	{ 0x8b4bc5b8, __VMLINUX_SYMBOL_STR(register_net_sysctl) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=bridge";


MODULE_INFO(srcversion, "6BC922039142366461A2D0F");
