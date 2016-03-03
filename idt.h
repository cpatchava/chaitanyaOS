#ifndef IDT_H
#define IDT_H

#include "cincludes.h"
#include "stdint.h"

#define IDT_NUM_ENTRIES	256

void idt_init(void);

#endif
