/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _ANALOG_H_
#define _ANALOG_H_

#include "machinescience.h"
#include "delay.h"
#include <pic.h>

/* ADC HARDWARE DEFINES */

/* basic ADC defines */
#define ALL_ANALOG 				0b00000000
#define ALL_DIGITAL 			0b00000111
#define ADC_CLOCK_DIV_2 		0b00000000
#define ADC_CLOCK_DIV_8 		0b01000000
#define ADC_CLOCK_DIV_32 		0b10000000
#define ADC_CLOCK_INTERNAL 		0b11000000
#define ADC_ON					1
#define ADC_OFF 				0
#define ADC_RIGHT_JUSTIFY		0b10000000
#define ADC_LEFT_JUSTIFY		0b00000000


extern void adc_init(unsigned char port_type);
extern void adc_onoff(char adc_power);
extern unsigned int adc_read(char channel);

#endif
