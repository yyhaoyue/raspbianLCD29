#include <linux/module.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

MODULE_INFO(vermagic, VERMAGIC_STRING);

__visible struct module __this_module
__attribute__((section(".gnu.linkonce.this_module"))) = {
	.name = KBUILD_MODNAME,
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

static const struct modversion_info ____versions[]
__used
__attribute__((section("__versions"))) = {
	{ 0x7869d85c, __VMLINUX_SYMBOL_STR(module_layout) },
	{ 0x7e85632b, __VMLINUX_SYMBOL_STR(get_phy_device) },
	{ 0x993bf68b, __VMLINUX_SYMBOL_STR(phy_attach_direct) },
	{ 0x2e5810c6, __VMLINUX_SYMBOL_STR(__aeabi_unwind_cpp_pr1) },
	{ 0x69fa1227, __VMLINUX_SYMBOL_STR(irq_of_parse_and_map) },
	{ 0xc80489cc, __VMLINUX_SYMBOL_STR(of_property_read_u32_array) },
	{ 0xb1ad28e0, __VMLINUX_SYMBOL_STR(__gnu_mcount_nc) },
	{ 0x56a8693e, __VMLINUX_SYMBOL_STR(of_device_is_compatible) },
	{ 0xcc9ad49f, __VMLINUX_SYMBOL_STR(phy_device_register) },
	{ 0x818c6c6e, __VMLINUX_SYMBOL_STR(phy_device_create) },
	{ 0x505e9cc9, __VMLINUX_SYMBOL_STR(phy_device_free) },
	{ 0xacf72271, __VMLINUX_SYMBOL_STR(dev_err) },
	{ 0x20c55ae0, __VMLINUX_SYMBOL_STR(sscanf) },
	{ 0xd2c106ba, __VMLINUX_SYMBOL_STR(of_find_property) },
	{ 0x900b512e, __VMLINUX_SYMBOL_STR(bus_find_device) },
	{ 0x4205cdf, __VMLINUX_SYMBOL_STR(of_prop_next_string) },
	{ 0xf1c77708, __VMLINUX_SYMBOL_STR(_dev_info) },
	{ 0xed36e3b4, __VMLINUX_SYMBOL_STR(mdiobus_register) },
	{ 0x8e8d1ed8, __VMLINUX_SYMBOL_STR(phy_connect_direct) },
	{ 0x5d59d800, __VMLINUX_SYMBOL_STR(of_get_property) },
	{ 0x1f5309a1, __VMLINUX_SYMBOL_STR(of_get_next_available_child) },
	{ 0x191913a6, __VMLINUX_SYMBOL_STR(mdio_bus_type) },
};

static const char __module_depends[]
__used
__attribute__((section(".modinfo"))) =
"depends=libphy";


MODULE_INFO(srcversion, "A8FA1010321B5272A8AE03F");
