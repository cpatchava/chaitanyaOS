#ifndef		GDT_ASM_H
#define		GDT_ASM_H
#include "stdint.h"

void gdt_load(uint32_t	gdt_pointer);

#endif
