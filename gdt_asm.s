; initializing the gdt on assembly side

global gdt_load

SEGSEL_KERNEL_CS equ	0x08
SEGSEL_KERNEL_DS equ	0x10


section .text 

gdt_load:
	mov		eax, [esp+4]	;add the variable sent here from stack
	lgdt	[eax]

	jmp		SEGSEL_KERNEL_CS:.reload_segments

.reload_segments:

	mov		ax, SEGSEL_KERNEL_DS
	mov		ds, ax
	mov		ss, ax
	mov		es,	ax
	mov		gs, ax
	mov		fs, ax
	ret
