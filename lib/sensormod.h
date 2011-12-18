/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2009.  All rights reserved

Version Date: Tue Sep 15 10:04:45 EDT 2009
-----------------------------------------------------------------
============================================================== */

#ifndef _TWIM_SENSOR_H_
#define _TWIM_SENSOR_H_

#include <twi_master.h>

/* Commands for LCD module */
// REMOVED UNUSED DEFINES
#define CMD_SENSOR_GPS_READ		0x03
#define CMD_SENSOR_FLASH_READ	0x02
#define CMD_GPS_READ			0x01
#define CMD_SENSOR_GPS_VALUE	0x04
#define CMD_SENSOR_READ			0x00

/* Data values */
#define SENSOR_SOUND			0x00
#define SENSOR_XAXIS			0x01
#define SENSOR_YAXIS			0x02
#define SENSOR_ZAXIS			0x03
#define SENSOR_TEMP				0x04
#define SENSOR_LIGHT			0x05

/* GPS values */
#define GPS_SECONDS				0x00
#define GPS_MINUTES				0x01
#define GPS_HOURS				0x02
#define GPS_LATHIGH				0x03
#define GPS_LATLOW				0x04
#define GPS_LONHIGH				0x05
#define GPS_LONLOW				0x06
#define GPS_FIX					0x07
#define GPS_ALTITUDE			0x08
#define GPS_SATELITES			0x09
#define GPS_DIRECTION			0x0A
#define GPS_VELOCITY			0x0B
#define GPS_DAY				 	0x0C
#define GPS_MONTH				0x0D
#define GPS_YEAR				0x0E
#define GPS_STATUS				0x0F

/* LCD module functions */
//extern void sensormod_gps(char, char *);
extern unsigned int sensormod_data(char);
extern unsigned int sensormod_gps(char);
#endif
