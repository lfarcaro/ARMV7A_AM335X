// Reset handler
-e PORT_RESETHANDLER

// Suppresses #10063-D warning
--diag_suppress=10063

// Suppresses #10068-D warning
--diag_suppress=10068

// Core #0 module stack region
_core0_module_stack_start = 0x80032000;
_core0_module_stack_end = 0x8002E000;

MEMORY
{

	/* Internal SRAM */

	/* Vector table region */
	SRAM_VECTORTABLE: o = 0x40300000 l = 0x00001000

	/* Peripherals */

	/* Peripherals region */
	PERIPHERALS: o = 0x44000000 l = 0x3C000000

	/* External DDR Bank 0 */

	/* System regions */
	DDR_SYSTEM_BOOT: o = 0x80000000 l = 0x00001000 /* Boot region */
	DDR_SYSTEM_CODE: o = 0x80001000 l = 0x00020000 /* Code region */
	DDR_SYSTEM_DATA: o = 0x80021000 l = 0x00020000 /* Data region */
}

SECTIONS
{

	/* External DDR Bank 0 */

	/* System region */
	.boot > DDR_SYSTEM_BOOT
	.text > DDR_SYSTEM_CODE
	.bss > DDR_SYSTEM_DATA
		RUN_START(_bss_start)
		RUN_END(_bss_end)
	.const > DDR_SYSTEM_DATA
	.data > DDR_SYSTEM_DATA
}
