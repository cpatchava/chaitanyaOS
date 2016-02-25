#include "serial.h"

//the divisor value tells the serial port what value to divide the baud rate by
//16 bit number so you can divide 115200 by any of those

void serial_configure_baud_rate(unsigned short com, unsigned short divisor){
	
	outb(SERIAL_LINE_COMMAND_PORT(com), SERIAL_LINE_ENABLE_DLAB); //saying take high byte first
	outb(SERIAL_DATA_PORT(com), (divisor >> 8) & 0x00FF);//so you force the top 8 bits first
	outb(SERIAL_DATA_PORT(com), divisor & 0x00FF);//then the low 8 bits

}

void serial_configure_line(unsigned short com){
	/*Bit:			|7 |6 |5 4 3 | 2 | 1 0 |
	 *					|d |b | prty | s | d1	 |
	 *					|0 |0 |0 0 0 | 0 | 1 1 | = 0x03
	 */
	outb(SERIAL_LINE_COMMAND_PORT(com), 0x03);
}

void serial_configure_fifo_buffer(unsigned short com){
	/*Bit:			|7 6 |5 |4 |3  |2  |1  |0 |
	 *					|lvl |bs|r |dma|clt|clr|e |
	 *					|1 1 |0 |0 |0  | 1 | 1 |1 | = 0xC7
	 */
	outb(SERIAL_FIFO_COMMAND_PORT(com), 0xC7);
}

void serial_configure_modem(unsigned short com){
	/*Bit:			|7 |6 |5 |4 |3  |2  |1  |0  |
	 *					|r |r |af|lb|ao2|ao1|rts|dtr|
	 *					|0 |0 |0 |0 |0  |0  |1  |1  | = 0x03
	 */
	outb(SERIAL_MODEM_COMMAND_PORT(com), 0x03);
}

int serial_is_transmit_fifo_empty(unsigned int com){

	return inb(SERIAL_LINE_STATUS_PORT(com)) & 0x20;
}
