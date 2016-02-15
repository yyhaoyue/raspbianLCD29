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
	{ 0xb46debfd, __VMLINUX_SYMBOL_STR(bus_register) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xcae1e061, __VMLINUX_SYMBOL_STR(driver_register) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x139396b, __VMLINUX_SYMBOL_STR(device_release_driver) },
	{ 0x4205ad24, __VMLINUX_SYMBOL_STR(cancel_work_sync) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x3946ac6d, __VMLINUX_SYMBOL_STR(mutex_unlock) },
	{ 0x91715312, __VMLINUX_SYMBOL_STR(sprintf) },
	{ 0xd697e69a, __VMLINUX_SYMBOL_STR(trace_hardirqs_on) },
	{ 0x131db64a, __VMLINUX_SYMBOL_STR(system_long_wq) },
	{ 0x8a439299, __VMLINUX_SYMBOL_STR(device_bind_driver) },
	{ 0xc231cb9b, __VMLINUX_SYMBOL_STR(device_del) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x51d559d1, __VMLINUX_SYMBOL_STR(_raw_spin_unlock_irqrestore) },
	{ 0xf6615c37, __VMLINUX_SYMBOL_STR(mutex_lock_interruptible) },
	{ 0x59cd8be5, __VMLINUX_SYMBOL_STR(__mutex_init) },
	{ 0x27e1a049, __VMLINUX_SYMBOL_STR(printk) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x84b183ae, __VMLINUX_SYMBOL_STR(strncmp) },
	{ 0xec97dd82, __VMLINUX_SYMBOL_STR(mutex_lock) },
	{ 0x70eea281, __VMLINUX_SYMBOL_STR(device_attach) },
	{ 0xb7abba95, __VMLINUX_SYMBOL_STR(device_add) },
	{ 0x94c057b4, __VMLINUX_SYMBOL_STR(bus_unregister) },
	{ 0xe85aab60, __VMLINUX_SYMBOL_STR(module_put) },
	{ 0x68ee6c6, __VMLINUX_SYMBOL_STR(put_device) },
	{ 0x3507a132, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irq) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x598542b2, __VMLINUX_SYMBOL_STR(_raw_spin_lock_irqsave) },
	{ 0x6c2591be, __VMLINUX_SYMBOL_STR(__module_get) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0x9340ce53, __VMLINUX_SYMBOL_STR(device_initialize) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x96b609ba, __VMLINUX_SYMBOL_STR(driver_attach) },
	{ 0xb2d48a2e, __VMLINUX_SYMBOL_STR(queue_work_on) },
	{ 0x73190914, __VMLINUX_SYMBOL_STR(dev_set_name) },
	{ 0xd6976617, __VMLINUX_SYMBOL_STR(driver_find) },
	{ 0x984c7493, __VMLINUX_SYMBOL_STR(try_module_get) },
	{ 0x6c07d933, __VMLINUX_SYMBOL_STR(add_uevent_var) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=";


MODULE_INFO(srcversion, "53CE8AC582C243AEE1EA817");
