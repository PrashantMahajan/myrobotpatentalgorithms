/* -------------------------------------------------------------
 Machine Science API
 
 (c) Copyright Machine Science, 2007.  All rights reserved

 Version Date: Fri Oct 30 09:52:45 EDT 2009
-----------------------------------------------------------------
============================================================== */
#ifndef _MACHINESCIENCE_H_
#define _MACHINESCIENCE_H_

#define FOSC 16000000L
#define FOSM FOSC/1000000L

/* generic */
#define HIGH   		1
#define LOW       	0
#define TRUE   		1
#define FALSE   	0
#define ON    		1
#define OFF   		0
#define TOGGLE		2
#define ENABLE		1
#define DISABLE		0
#define PRESSED		1
#define UNPRESSED	0
#define NO			0	
#define YES			1

#define set_bit(var, pin)		var |= 1<<(unsigned char) pin
#define clear_bit(var, pin)		var &= ~(1<<(unsigned char)pin)
#define test_bit(var, pin)		((var & (1<<(unsigned char) pin)) >> pin)
#define toggle_bit(var, pin)	var ^= 1<<(unsigned char) pin	

#include <avr/io.h>
#include <avr/interrupt.h>

#endif

