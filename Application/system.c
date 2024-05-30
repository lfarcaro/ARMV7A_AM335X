// Includes
#include "system.h"
#include "test.h"
#include "measure.h"

// System default module
void main(void) {

    // Initializes test LEDs
    TEST_STARTUP();

    // Initializes delay timer
    TIMER_DELAY_STARTUP();

    // Initializes serial console
    CONSOLE_STARTUP();

    // Initializes measurement timer
    MEASURE_STARTUP();

    // Example loop
    while (true) {

        // Waits 500ms
        TIMER_DELAY_MS(500);

        // Starts counting time
        MEASURE_START();

        // Prints
        CONSOLE_PRINTF("Apfelstrudel, Rodolfo!\r\n");

        // Stops counting time
        MEASURE_STOP();

        // Prints execution time
        unsigned int EXECUTION_TIME = MEASURE_READ();
        CONSOLE_PRINTF("Execution time (ticks): %d\r\n", EXECUTION_TIME);

        // Waits 500ms
        TIMER_DELAY_MS(500);

        // Turns LED on
        TEST_LED1_ON();

        // Waits 500ms
        TIMER_DELAY_MS(500);

        // Turns LED off
        TEST_LED1_OFF();
    }

	// Infinite loop
	while (true);
}
