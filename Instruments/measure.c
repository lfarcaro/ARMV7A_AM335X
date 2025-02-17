// General includes
#include "measure.h"

// Global variables
portBOOLEAN MEASURE_RUNNING;
unsigned int MEASURE_VALUE;

// Measure startup method
void MEASURE_STARTUP(void) {

	// Initializes state
	MEASURE_RUNNING = false;
	MEASURE_VALUE = 0;

	// Enables clocks for DMTimer
	DMTimer3ModuleClkConfig();

	// Configures DMTimer
	DMTimerModeConfigure(SOC_DMTIMER_3_REGS, DMTIMER_ONESHOT_NOCMP_ENABLE);
}

// Measure starting method
inline portBOOLEAN MEASURE_START(void) {

	// Verifies running flag
	if (MEASURE_RUNNING) {
		return false;
	}

	// Disables DMTimer
	DMTimerDisable(SOC_DMTIMER_3_REGS);

	// Loads initial value
	DMTimerCounterSet(SOC_DMTIMER_3_REGS, 0);

	// Sets running flag
	MEASURE_RUNNING = true;

	// Enables DMTimer
	DMTimerEnable(SOC_DMTIMER_3_REGS);

	// Start executed
	return true;
}

// Measure pausing method
void MEASURE_PAUSE(void) {

	// Verifies measurement running flag
	if (!MEASURE_RUNNING) {
		return;
	}

	// Disables DMTimer
	DMTimerDisable(SOC_DMTIMER_3_REGS);
}

// Measure resuming method
inline void MEASURE_RESUME(void) {

	// Verifies measurement running flag
	if (!MEASURE_RUNNING) {
		return;
	}

	// Enables DMTimer
	DMTimerEnable(SOC_DMTIMER_3_REGS);
}

// Measure stopping method
inline void MEASURE_STOP(void) {
	unsigned int VALUE;

	// Reads counter
	VALUE = DMTimerCounterGet(SOC_DMTIMER_3_REGS);

	// Disables DMTimer
	DMTimerDisable(SOC_DMTIMER_3_REGS);

	// Verifies running flag
	if (!MEASURE_RUNNING) {
		return;
	}

	// Stores measured value
	MEASURE_VALUE = VALUE;
}

// Measure reading method
inline unsigned int MEASURE_READ(void) {
	unsigned int VALUE;

	// Stores value
	VALUE = MEASURE_VALUE;

	// Resets state
	MEASURE_RUNNING = false;
	MEASURE_VALUE = 0;

	// Returns value
	return VALUE;
}
