/* -------------------------------------------------------------
 Machine Science API
 
 (c) Copyright Machine Science, 2007.  All rights reserved

 Version Date: Mon Oct 25 11:13:05 EDT 2010
-----------------------------------------------------------------
============================================================== */
#ifndef _MACHINESCIENCE_H_
#define _MACHINESCIENCE_H_

#define PRESSED		1
#define UNPRESSED	0

#define input_bit(var, pin)		var &= ~(1<<(unsigned char) pin)
#define output_bit(var, pin)	var |= 1<<(unsigned char) pin

#define end()					while(TRUE)

#include <ms.h>
#include <pins.h>
#include <delay.h>
#include <avr/io.h>
#include <avr/interrupt.h>

#endif

