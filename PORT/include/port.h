#ifndef PORT_H_
#define PORT_H_

// Hardware includes
#include "PORT/include/console.h"
#include "PORT/include/timer_delay.h"
#include "cp15.h"
#include "cache.h"
#include "beaglebone.h"
#include "interrupt.h"
#include "gpio_v2.h"
#include "dmtimer.h"
#include "measure.h"

// Optional hardware includes
#include "tsc_adc.h"
#include "ehrpwm.h"
#include "pwmss.h"
#include "pwmss.h"

// Vector table size
#define PORT_VECTORTABLE_SIZE 16

// Reset handler method - Defined in ASM module
extern void PORT_RESETHANDLER(void);

// Abort handler method - Defined in ASM module
extern void PORT_ABORTHANDLER(void);

// Undefined instruction handler method - Defined in ASM module
extern void PORT_UNDEFINEDINSTRUCTIONHANDLER(void);

// IRQ handler method - Defined in ASM module
extern void PORT_IRQHANDLER(void);

// FIQ handler method - Defined in ASM module
extern void PORT_FIQHANDLER(void);

// SVC handler method - Defined in ASM module
extern void PORT_SVCHANDLER(void);

#endif
