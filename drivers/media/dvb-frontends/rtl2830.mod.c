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
	{ 0x4b266e44, __VMLINUX_SYMBOL_STR(i2c_del_driver) },
	{ 0x5457d409, __VMLINUX_SYMBOL_STR(i2c_register_driver) },
	{ 0x5b19634d, __VMLINUX_SYMBOL_STR(div_s64_rem) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x392b06f6, __VMLINUX_SYMBOL_STR(__i2c_transfer) },
	{ 0xe5ae8707, __VMLINUX_SYMBOL_STR(intlog10) },
	{ 0x59e5070d, __VMLINUX_SYMBOL_STR(__do_div64) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf7802486, __VMLINUX_SYMBOL_STR(__aeabi_uidivmod) },
	{ 0x6b06fdce, __VMLINUX_SYMBOL_STR(delayed_work_timer_fn) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0x9d669763, __VMLINUX_SYMBOL_STR(memcpy) },
	{ 0x9880f0e0, __VMLINUX_SYMBOL_STR(i2c_add_mux_adapter) },
	{ 0x29ea8cb6, __VMLINUX_SYMBOL_STR(regmap_init) },
	{ 0x593a99b, __VMLINUX_SYMBOL_STR(init_timer_key) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0xbdf75cbb, __VMLINUX_SYMBOL_STR(regmap_bulk_read) },
	{ 0x2d3385d3, __VMLINUX_SYMBOL_STR(system_wq) },
	{ 0xe851bb05, __VMLINUX_SYMBOL_STR(queue_delayed_work_on) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x24d7b4eb, __VMLINUX_SYMBOL_STR(cancel_delayed_work_sync) },
	{ 0x676bbc0f, __VMLINUX_SYMBOL_STR(_set_bit) },
	{ 0x49ebacbd, __VMLINUX_SYMBOL_STR(_clear_bit) },
	{ 0x100d99c6, __VMLINUX_SYMBOL_STR(regmap_bulk_write) },
	{ 0x8ccacbae, __VMLINUX_SYMBOL_STR(i2c_unlock_adapter) },
	{ 0xeefe6127, __VMLINUX_SYMBOL_STR(i2c_lock_adapter) },
	{ 0x42d8b85, __VMLINUX_SYMBOL_STR(regmap_update_bits) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xd12e444f, __VMLINUX_SYMBOL_STR(regmap_exit) },
	{ 0xad2a816a, __VMLINUX_SYMBOL_STR(i2c_del_mux_adapter) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=dvb-core,i2c-mux";

MODULE_ALIAS("i2c:rtl2830");

MODULE_INFO(srcversion, "BC1881A7D7C7C4557209905");
