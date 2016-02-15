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
	{ 0xba1cee77, __VMLINUX_SYMBOL_STR(mmc_gpio_get_cd) },
	{ 0x1825d0c5, __VMLINUX_SYMBOL_STR(mmc_gpio_get_ro) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x470db77f, __VMLINUX_SYMBOL_STR(kmalloc_caches) },
	{ 0xdda6d1fb, __VMLINUX_SYMBOL_STR(mmc_gpio_request_ro) },
	{ 0xff84cd21, __VMLINUX_SYMBOL_STR(mmc_gpiod_request_cd_irq) },
	{ 0xc5a9db24, __VMLINUX_SYMBOL_STR(mmc_gpio_request_cd) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xf9c2f265, __VMLINUX_SYMBOL_STR(mmc_add_host) },
	{ 0x16cc3595, __VMLINUX_SYMBOL_STR(mmc_spi_get_pdata) },
	{ 0xe280e49e, __VMLINUX_SYMBOL_STR(mmc_alloc_host) },
	{ 0x3e77014c, __VMLINUX_SYMBOL_STR(kmem_cache_alloc_trace) },
	{ 0x5747e961, __VMLINUX_SYMBOL_STR(mem_map) },
	{ 0xdefe256c, __VMLINUX_SYMBOL_STR(mmc_request_done) },
	{ 0x42ad5814, __VMLINUX_SYMBOL_STR(spi_bus_unlock) },
	{ 0xf5b4a948, __VMLINUX_SYMBOL_STR(crc_itu_t) },
	{ 0x3af7ec98, __VMLINUX_SYMBOL_STR(flush_kernel_dcache_page) },
	{ 0xa1c76e0a, __VMLINUX_SYMBOL_STR(_cond_resched) },
	{ 0xb54533f7, __VMLINUX_SYMBOL_STR(usecs_to_jiffies) },
	{ 0xac4c14a3, __VMLINUX_SYMBOL_STR(spi_bus_lock) },
	{ 0xe707d823, __VMLINUX_SYMBOL_STR(__aeabi_uidiv) },
	{ 0xb81960ca, __VMLINUX_SYMBOL_STR(snprintf) },
	{ 0x66213969, __VMLINUX_SYMBOL_STR(crc7_be) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x723f1e22, __VMLINUX_SYMBOL_STR(spi_sync) },
	{ 0xfa2a45e, __VMLINUX_SYMBOL_STR(__memzero) },
	{ 0x5f754e5a, __VMLINUX_SYMBOL_STR(memset) },
	{ 0xf9a482f9, __VMLINUX_SYMBOL_STR(msleep) },
	{ 0x8797e1ed, __VMLINUX_SYMBOL_STR(spi_setup) },
	{ 0x7d11c268, __VMLINUX_SYMBOL_STR(jiffies) },
	{ 0x1000e51, __VMLINUX_SYMBOL_STR(schedule) },
	{ 0x16305289, __VMLINUX_SYMBOL_STR(warn_slowpath_null) },
	{ 0x4dbd99ef, __VMLINUX_SYMBOL_STR(spi_sync_locked) },
	{ 0xc87aefc7, __VMLINUX_SYMBOL_STR(mmc_detect_change) },
	{ 0x3bd1b1f6, __VMLINUX_SYMBOL_STR(msecs_to_jiffies) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xb1eda60c, __VMLINUX_SYMBOL_STR(arm_dma_ops) },
	{ 0x30f60f1d, __VMLINUX_SYMBOL_STR(mmc_spi_put_pdata) },
	{ 0xcf7eddc1, __VMLINUX_SYMBOL_STR(mmc_free_host) },
	{ 0x37a0cba, __VMLINUX_SYMBOL_STR(kfree) },
	{ 0xf91d0f4b, __VMLINUX_SYMBOL_STR(mmc_remove_host) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=of_mmc_spi,crc7";


MODULE_INFO(srcversion, "276706BC5EEEC68AD4DD717");
