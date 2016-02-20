#ifndef	SCREEN_H_
#define	SCREEN_H_

/*
I/O frame buffer starts at 0x000B8000 

|15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0|
|ASCII							 |FG		 |BG			|

This is the bit pattern for displaying onto screen

 */

#define	I_O_ADDR	0x000B8000

#define BLACK			0
#define	BLUE			1
#define	GREEN			2
#define	CYAN			3
#define	RED				4
#define	MAGENTA		5
#define BROWN			6
#define	L_GREY		7
#define	D_GREY		8
#define	L_BLUE		9
#define	L_GREEN		10
#define	L_CYAN		11
#define	L_RED			12
#define	L_MAGENTA	13
#define	L_BROWN		15
#define	WHITE			16

unsigned char * fb = I_O_ADDR;

#endif
