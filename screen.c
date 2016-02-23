#include "screen.h"
#include "io.h"
/*
 This will print onto the buffer space
 */

char * fb = (char *) I_O_ADDR;// directly forcing the fb pointer value to be where the address of buffer is

void fb_write_cell(unsigned int i, char c, unsigned char fg, unsigned char bg){

	fb[i]=c;
	fb[i+1]= ((fg & 0x0F) << 4) | (bg & 0x0F);
	fb_move_cursor(i/2+1);
}

void fb_move_cursor(unsigned short pos){
	outb(FB_COMMAND_PORT, FB_HIGH_BYTE_COMMAND);	
	outb(FB_DATA_PORT, ((pos >> 8) & 0x00FF) );	
	outb(FB_COMMAND_PORT, FB_LOW_BYTE_COMMAND);	
	outb(FB_DATA_PORT, pos & 0x00FF);	

}
