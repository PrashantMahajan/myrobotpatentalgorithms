/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

Version Date: Mon Nov 12 11:18:49 EST 2007
-----------------------------------------------------------------
============================================================== */
#ifndef _ADC_H
#define _ADC_H

#define ADC_8BIT 			1
#define ADC_10BIT 			0
#define ADC_AVCC			1
#define ADC_AREF		 	0
#define ADC_11V				3

#include <ms.h>
#include <avr/io.h>

extern void adc_reference(char);
extern void adc_resolution(char);
extern void adc_prescale(char);
extern void adc_control(char);
extern void adc_init(void);
extern void analog_input(char);
extern unsigned int adc_read(char);
extern unsigned int analog_read(int);

#endif
