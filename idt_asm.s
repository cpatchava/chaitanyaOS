;	you want to set the interrupt handlers to go off

global	idt_load

; load_idt - Loads the interrupt descriptor table (IDT)
; stack: [esp + 4] address of first entry in IDT
;				 [esp		 ] return address

idt_load:
	mov		eax, [esp+4]	; moving the variable into eax
	lidt	[eax]						; loading the IDT which is the variable
	ret									; the esp did not advance so you are returning to esp
