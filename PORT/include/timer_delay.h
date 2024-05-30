#ifndef TIMER_DELAY_H_
#define TIMER_DELAY_H_

// Includes
#include "PORT/include/port_types.h"
#include "beaglebone.h"
#include "dmtimer.h"

// Counter value for 1ms
#define TIMER_DELAY_COUNT_1MS 24000u

// Startup method
void TIMER_DELAY_STARTUP(void);

// Delay method for milliseconds
void TIMER_DELAY_MS(unsigned int MS);

// Shutdown method
unsigned char TIMER_DELAY_SHUTDOWN(void);

#endif
