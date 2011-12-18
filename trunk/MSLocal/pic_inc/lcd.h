/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2004.  All rights reserved

 Version Date:   12 January 2005
-----------------------------------------------------------------
============================================================== */
#ifndef _LCD_H_
#define _LCD_H_

#include "machinescience.h"
#include "delay.h"
#include "digits.h"

/* LCD DEFINES */

/* data and i/o pins on lcd */
#define LCD_RS   			RC4
#define LCD_EN   			RD3
#define LCD_DATA  			PORTD
#define LCD_RS_DIR  		TRISC4
#define LCD_EN_DIR  		TRISD3
#define LCD_DATA_DIR  		TRISD
#define LCD_START_BIT		4

/* lcd control commands */
#define CLEAR_DISPLAY    	0x01
#define CLEAR     			0x01
#define CURSOR_LEFT    		0x10
#define CURSOR_RIGHT   		0x14
#define DISPLAY_LEFT   		0x18
#define DISPLAY_RIGHT	  	0x1C
#define GOTO_LINE1    		0x80
#define GOTO_LINE2    		0xC0

/* lcd setup and mode commands */
#define DISPLAY_OFF    		0x08
#define DISPLAY_ON    		0x0C
#define CURSOR_OFF    		0x0C
#define CURSOR_ON    		0x0E
#define CURSOR_BLINK   		0x0F
#define CURSOR_NOBLINK		0x0C
#define ENTRY_MODE0    		0x06	//increment cursor, no display shift (default)
#define ENTRY_MODE1    		0x05	//decrement cursor, display shift
#define ENTRY_MODE2    		0x04	//decrement cursor, no display shift
#define ENTRY_MODE3    		0x07	//increment cursor, display shift
#define LCD_SETUP0    		0x28

/* locations for custom characters */
#define CUSTOM_CHARACTER0  	0x40
#define CUSTOM_CHARACTER1  	0x48
#define CUSTOM_CHARACTER2  	0x50
#define CUSTOM_CHARACTER3  	0x58
#define CUSTOM_CHARACTER4  	0x60
#define CUSTOM_CHARACTER5  	0x68
#define CUSTOM_CHARACTER6  	0x70
#define CUSTOM_CHARACTER7  	0x78

/* predefined custom character */
#define BLANK     			0x20

extern void lcd_init(void);      										//initialize lcd
extern void lcd_character(unsigned char);   							//write character byte to lcd
extern void lcd_instruction(unsigned char);  							//write instruction byte to lcd
extern void lcd_text(const char * s);   								//write string to lcd
extern void lcd_decimal(int value);    									//display integer as decimal on lcd
extern void lcd_digits(int value, char base, char zeros, char digits);	//display integer on lcd
extern void lcd_retrieve(unsigned char c);								//display custom character on lcd
extern void lcd_strobe(void);											//toggle enable pin on lcd
extern void lcd_store(char CGRAM, const char *s);						//store custom character in RAM
extern void lcd_send_data(unsigned char c);								//send byte to lcd

#endif

