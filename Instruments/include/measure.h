#ifndef MEASURE_H_
#define MEASURE_H_

// Includes
#include "PORT/include/port.h"

// Global variables
extern portBOOLEAN MEASURE_RUNNING; // Indicates a measurement was triggered and is running
extern unsigned int MEASURE_VALUE; // Stores the value of the finished measurement

// Measure startup method
void MEASURE_STARTUP(void);

// Measure starting method
portBOOLEAN MEASURE_START(void);

// Measure pausing method
void MEASURE_PAUSE(void);

// Measure resuming method
void MEASURE_RESUME(void);

// Measure stopping method
void MEASURE_STOP(void);

// Measure reading method
unsigned int MEASURE_READ(void);

#endif
