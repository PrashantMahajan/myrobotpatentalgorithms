/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _USART_H_
#define _USART_H_

#include <pic.h>
#include "machinescience.h"
#include "digits.h"

/* USART DEFINES */

/* basic usart defines */
#define USART_9BIT			0x01
#define USART_8BIT			0x00
#define USART_HIGH			0x16
#define USART_LOW			0x64
#define USART_LINEFEED		10
#define USART_RETURN		13

extern void usart_init ( unsigned long baud_rate );
extern unsigned char usart_read(void);
extern void usart_write ( unsigned char data );
extern void usart_text ( const char * s );
extern void usart_decimal ( unsigned int value );
extern void usart_digits( unsigned int value, char base, char zeros, char digits);

#endif
