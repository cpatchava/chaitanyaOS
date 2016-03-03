#ifndef	INTERRUPT_H
#define	INTERRUPT_H

#include "idt.h"
#include "stdint.h"

struct idt_info{
	uint32_t	idt_index;
	uint32_t	error_code;
}	__attribute__((packed));
typedef struct idt_info idt_info_t;

struct cpu_state{
	uint32_t edi;
	uint32_t esi;
	uint32_t ebp;
	uint32_t edx;
	uint32_t ecx;
	uint32_t ebx;
	uint32_t eax;
	uint32_t esp;
} __attribite__((packed));
typedef struct cpu_state cpu_state_t;

struct stack_state{
	uint32_t error_flags;
	uint32_t epi;
	uint32_t cs;
	uint32_t eflags;
} __attribute__((packed));
typedef struct stack_state stack_state_t;

#endif
