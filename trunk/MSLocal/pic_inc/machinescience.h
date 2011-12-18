/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   2 August 2004
-----------------------------------------------------------------
============================================================== */
#ifndef _MACHINESCIENCE_H_
#define _MACHINESCIENCE_H_

#include <pic.h>

/* default oscillator speed */
#define FOSC 4000000

/* generic C defines */
#define INPUT   	1
#define OUTPUT   	0
#define HIGH   		1
#define LOW       	0
#define TRUE   		1
#define FALSE   	0

/* generic MPASM defines */
#define STATUS         	0x03        // Status register
#define ZF           	0x02        // Zero Flag = TATUS:0x02
#define CF           	0x00        // Carry Flag = STATUS:0x00

/* timer one defines */
#define DIV_2		0
#define DIV_4		1
#define DIV_8		2
#define DIV_16		3
#define DIV_32		4
#define DIV_64		5
#define DIV_128		6
#define DIV_256		7

/* pin defines */
#define PIN_B0  &PORTB,0b00000001
#define PIN_B1  &PORTB,0b00000010
#define PIN_B2	&PORTB,0b00000100
#define PIN_B3	&PORTB,0b00001000
#define PIN_B4	&PORTB,0b00010000
#define PIN_B5	&PORTB,0b00100000
#define PIN_B6	&PORTB,0b01000000
#define PIN_B7	&PORTB,0b10000000

#define PIN_D0  &PORTD,0b00000001
#define PIN_D1  &PORTD,0b00000010
#define PIN_D2	&PORTD,0b00000100
#define PIN_D3	&PORTD,0b00001000
#define PIN_D4	&PORTD,0b00010000
#define PIN_D5	&PORTD,0b00100000
#define PIN_D6	&PORTD,0b01000000
#define PIN_D7	&PORTD,0b10000000

#define PIN_C0  &PORTC,0b00000001
#define PIN_C1  &PORTC,0b00000010
#define PIN_C2	&PORTC,0b00000100
#define PIN_C3	&PORTC,0b00001000
#define PIN_C4	&PORTC,0b00010000
#define PIN_C5	&PORTC,0b00100000
#define PIN_C6	&PORTC,0b01000000
#define PIN_C7	&PORTC,0b10000000

extern void tmr0_init(unsigned char divide_by);

extern void end(void);

#endif

