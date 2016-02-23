#ifndef SERIAL_H
#define	SERIAL_H
#include "io.h"

/*
 All the I/O ports are calculated relative to the data port. All of the 
 COM ports have the ports in the same order, starting at different value
 * */

#define SERIAL_COM1_BASE								0x3F8

#define	SERIAL_DATA_PORT(base)					(base)
#define	SERIAL_FIFO_COMMAND_PORT(base)	(base	+ 2)
#define	SERIAL_LINE_COMMAND_PORT(base)	(base	+ 3)
#define	SERIAL_MODEM_COMMAND_PORT(base)	(base	+ 4)
#define	SERIAL_LINE_STATUS_PORT(base)		(base	+ 5)

#define	SERIAL_LINE_ENABLE_DLAB					0x80

void serial_configure_baud_rate(unsigned short com, unsigned short divisor);

#endif
