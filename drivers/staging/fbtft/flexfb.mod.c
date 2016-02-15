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

MODULE_INFO(staging, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x62a79a6c, __VMLINUX_SYMBOL_STR(param_ops_charp) },
	{ 0x1f54e93d, __VMLINUX_SYMBOL_STR(param_array_ops) },
	{ 0x149c7752, __VMLINUX_SYMBOL_STR(param_ops_uint) },
	{ 0x60ee9172, __VMLINUX_SYMBOL_STR(param_ops_bool) },
	{ 0x51eafc8e, __VMLINUX_SYMBOL_STR(param_ops_int) },
	{ 0x9abedda8, __VMLINUX_SYMBOL_STR(platform_driver_unregister) },
	{ 0xaf90711f, __VMLINUX_SYMBOL_STR(driver_unregister) },
	{ 0x16f490dc, __VMLINUX_SYMBOL_STR(__platform_driver_register) },
	{ 0x5d113c0, __VMLINUX_SYMBOL_STR(spi_register_driver) },
	{ 0x5f3b10b, __VMLINUX_SYMBOL_STR(fbtft_write_gpio8_wr) },
	{ 0x9ff08d10, __VMLINUX_SYMBOL_STR(fbtft_write_spi_emulate_9) },
	{ 0x4e248afc, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus16) },
	{ 0xdf4efe14, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr) },
	{ 0xfa3e2821, __VMLINUX_SYMBOL_STR(fbtft_write_gpio16_wr_latched) },
	{ 0x9e387014, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus16) },
	{ 0x3047d820, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus8) },
	{ 0x6a858120, __VMLINUX_SYMBOL_STR(fbtft_register_backlight) },
	{ 0x3a8f584c, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus8) },
	{ 0xb9462582, __VMLINUX_SYMBOL_STR(fbtft_write_vmem16_bus9) },
	{ 0xf3a256a4, __VMLINUX_SYMBOL_STR(fbtft_write_reg8_bus9) },
	{ 0xab6736e7, __VMLINUX_SYMBOL_STR(fbtft_write_spi) },
	{ 0x547ef962, __VMLINUX_SYMBOL_STR(fbtft_write_reg16_bus8) },
	{ 0x67a211a7, __VMLINUX_SYMBOL_STR(fbtft_init_display) },
	{ 0x62d6b7f1, __VMLINUX_SYMBOL_STR(devm_kmalloc) },
	{ 0x2f47b4f6, __VMLINUX_SYMBOL_STR(dev_warn) },
	{ 0x395d7210, __VMLINUX_SYMBOL_STR(fbtft_register_framebuffer) },
	{ 0xa0119799, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_alloc) },
	{ 0xe2d5255a, __VMLINUX_SYMBOL_STR(strcmp) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0xf13b4507, __VMLINUX_SYMBOL_STR(fbtft_framebuffer_release) },
	{ 0xffff4fe7, __VMLINUX_SYMBOL_STR(fbtft_unregister_framebuffer) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=fbtft";


MODULE_INFO(srcversion, "5107E4EF181A039C7B83B3C");
