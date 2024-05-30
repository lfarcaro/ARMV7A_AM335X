// Includes
#include "PORT/include/port.h"

// Core #0 vector table
portUINTBASE PORT_VECTORTABLE_CORE0[PORT_VECTORTABLE_SIZE] = {
/*ADD PC, PC, #18*/(portUINTBASE) 0xE59FF018,
/*ADD PC, PC, #18*/(portUINTBASE) 0xE59FF018,
/*ADD PC, PC, #18*/(portUINTBASE) 0xE59FF018,
/*ADD PC, PC, #18*/(portUINTBASE) 0xE59FF018,
/*ADD PC, PC, #14*/(portUINTBASE) 0xE59FF014,
/*SUB PC, PC, #8*/(portUINTBASE) 0xE24FF008,
/*ADD PC, PC, #10*/(portUINTBASE) 0xE59FF010,
/*ADD PC, PC, #10*/(portUINTBASE) 0xE59FF010,
/*Reset handler*/(portUINTBASE) PORT_RESETHANDLER,
/*Undefined instruction handler*/(portUINTBASE) PORT_UNDEFINEDINSTRUCTIONHANDLER,
/*SVC handler*/(portUINTBASE) PORT_SVCHANDLER,
/*Abort handler*/(portUINTBASE) PORT_ABORTHANDLER,
/*IRQ handler*/(portUINTBASE) PORT_IRQHANDLER,
/*FIQ handler*/(portUINTBASE) PORT_FIQHANDLER,
/*NULL*/(portUINTBASE) null,
/*NULL*/(portUINTBASE) null };

// Undefined instruction handler method
void PORT_UNDEFINEDINSTRUCTIONHANDLER(void) {
    CONSOLE_PRINTF("Undefined instruction handler");
}

// Abort handler method
void PORT_ABORTHANDLER(void) {
    CONSOLE_PRINTF("Abort handler");
}

// IRQ handler method
void PORT_IRQHANDLER(void) {
}

// FIQ handler method
void PORT_FIQHANDLER(void) {
}

// SVC handler method
void PORT_SVCHANDLER(void) {
}
