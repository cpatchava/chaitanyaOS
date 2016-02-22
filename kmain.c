
#include "screen.h"

/*
#define	I_O_ADDR	0x000B8000
unsigned char * fb = (unsigned char *) I_O_ADDR;// directly forcing the fb pointer value to be where the address of buffer is
void fb_write_cell(int i, char c, unsigned char fg, unsigned char bg){

	fb[i]=c;
	fb[i+1]= ((fg & 0x0F) << 4) | (bg & 0x0F);

}

int sum_of_three(int arg1, int arg2, int arg3){

	return arg1 + arg2 + arg3;
}
*/

void kernel(){
	int x =0;
	while(x< 160){
		fb_write_cell(x, 'h', '1' ,'0' );	
		x+=2;
	}

}







