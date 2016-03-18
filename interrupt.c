#include "interrupt.h"

static interrupt_handler_t interrupt_handlers[IDT_NUM_ENTRIES];

void interrupt_handler(cpu_state_t cpu_state, idt_info_t info, stack_state_t state){

	if(interrupt_handlers[info.idt_index]!=NULL){
		interrupt_handlers[info.idt_index](cpu_state, info, state);
	} else{

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
