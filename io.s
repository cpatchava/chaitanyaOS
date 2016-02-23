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

global inb

;inb	-- returns a byte from the given I/O Port
;stack:	[esp +4]
;				[esp	 ]
inb:
	mov dx, [esp + 4]	;move the address of the I/O port to the dx register
	in	al,	dx				; read a byte from the I/O port and store into al
	ret								; return the byte 
