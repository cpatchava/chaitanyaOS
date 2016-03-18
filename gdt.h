#ifndef GDT_H
#define GDT_H

#include "cincludes.h"

#define PL0	0x0 //kernel level
#define	PL3	0x3 //user level

void gdt_init();

void gdt_create_entry(uint32_t n, uint8_t pl, uint8_t type);

#endif
