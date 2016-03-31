#include "interrupt.h"
#include "print.h"

static interrupt_handler_t interrupt_handlers[IDT_NUM_ENTRIES];

void interrupt_handler(cpu_state_t cpu_state, idt_info_t info, stack_state_t state){

	if(interrupt_handlers[info.idt_index]!=NULL){
		interrupt_handlers[info.idt_index](cpu_state, info, state);
	} else{
		switch(info.idt_index){
		case 0:
				print("0");
				break;
		case 1:
				print("1");
				break;
		case 2:
				print("2");
				break;
		case 3:
				print("3");
				break;
		case 4:
				print("4");
				break;
		case 5:
				print("5");
				break;
		case 6:
				print("6");
				break;
		case 7:
				print("7");
				break;
		case 8:
				print("8");
				break;
		case 9:
				print("9");
				break;
		case 10:
				print("10");
				break;
		case 11:
				print("11");
				break;
		case 12:
				print("12");
				break;
		case 13:
				print("13");
				break;
		case 14:
				print("14");
				break;
		case 15:
				print("15");
				break;
		case 16:
				print("16");
				break;
		case 17:
				print("17");
				break;
		case 18:
				print("18");
				break;
		case 19:
				print("19");
				break;
		case 32:
				print("32");
				break;
		case 33:
				print("33");
				break;
		case 34:
				print("34");
				break;
		case 35:
				print("35");
				break;
		case 36:
				print("36");
				break;
		case 37:
				print("37");
				break;
		case 38:
				print("38");
				break;
		case 39:
				print("39");
				break;
		case 40:
				print("40");
				break;
		case 41:
				print("41");
				break;
			
		default:
				print("INT NOT FOUND");
				break;
		}
	}

}

uint32_t register_interrupt_handler(uint32_t interrupt,
                                    interrupt_handler_t handler){
  if (interrupt > 255) {
      return 1;
  }
  if (interrupt_handlers[interrupt] != NULL) {
      return 1;
  }

  interrupt_handlers[interrupt] = handler;
  return 0;
}
