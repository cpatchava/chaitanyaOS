#ifndef GDT_H
#define GDT_H

#include "cincludes.h"
#include "stdint.h"

#define PL0	0x0 //kernel level
#define	PL3	0x3 //user level

void gdt_init();


#endif
