#include "screen.h"
/*
 This will print onto the buffer space
 */

char * fb = (char *) I_O_ADDR;// directly forcing the fb pointer value to be where the address of buffer is

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg){

	fb[i]=c;
	fb[i+1]= ((fg & 0x0F) << 4) | (bg & 0x0F);

}
