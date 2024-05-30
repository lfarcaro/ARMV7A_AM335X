#ifndef PORT_TYPES_H_
#define PORT_TYPES_H_

// Includes
#include "hw_types.h"
#include "soc_AM335x.h"
#include "hw_control_AM335x.h"

// Definitions
#ifndef false
#define false 0
#endif
#ifndef true
#define true 1
#endif
#ifndef null
#define null 0
#endif

// Common types
typedef unsigned char portBOOLEAN;
typedef unsigned char portCHARACTER;
typedef unsigned char portBYTE;

// Base type (architecture base length integer)
typedef unsigned int portUINTBASE;

// Pointer unsigned integer (pointer length unsigned integer)
typedef unsigned int portUINTPOINTER;

// Address
typedef void *portADDRESS;

// Stack row
typedef unsigned int portSTACKROW;

// Parameter
typedef unsigned int portPARAMETER;

// Size
typedef unsigned int portSIZE;

// Index
typedef unsigned int portINDEX;

#endif
