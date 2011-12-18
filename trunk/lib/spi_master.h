/* -------------------------------------------------------------
 Machine Science API
 (c) Copyright Machine Science, 2009.  All rights reserved

Version Date: Tue May  5 16:29:15 EDT 2009
 
-----------------------------------------------------------------
============================================================== */
#ifndef _SPI_MASTER_H_
#define _SPI_MASTER_H_

#define DDR_SPI					DDRB
#define DD_MOSI					3
#define DD_SCK					5

#define spi_start_command()		clear_bit(PORTD, 2);
#define spi_end_command() 		set_bit(PORTD, 2);

extern void spi_master_init(void);
extern unsigned char spi_transfer(char);
 
#endif
