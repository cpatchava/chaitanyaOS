#include "print.h"
#include "screen.h"
unsigned int curr = 0;
void print(char *data){
	unsigned int len=0;
	char *buf = data;
	while(*data != '\0' ){
		data++;
		len++;
	}
	fb_write(buf, len);
}

void fb_write(char *buf, unsigned int len){
	unsigned int x ;
	for(x = 0; x<len*2; x+=2){
		fb_write_cell(x+curr, buf[x/2], BLUE, BLACK);
	}
	curr = x+curr;

}
