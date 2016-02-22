global outb

;outb -- send a byte to I/O port
;stack: [esp + 8]	the data byte
;				[esp + 4]	the I/O port
;				[esp		]	return address	

outb:
	mov al, [esp+8]		; move data sent to al register
	mov dx, [esp+4]		; move address of I/O port into dx
	out	dx, al				; send that data to the I/O port
	ret								; done	 	
