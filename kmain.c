#include "cincludes.h"

/*
int sum_of_three(int arg1, int arg2, int arg3){

	return arg1 + arg2 + arg3;
}
*/

void kernel(){
	disable_interrupts();
	gdt_init();
	idt_init();
	pic_init();
	
	kbd_init();
	enable_interrupts();

	print("BLAH BLAH");
	
}







