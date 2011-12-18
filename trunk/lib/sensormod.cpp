/* -------------------------------------------------------------
 Machine Science API

 (c) Copyright Machine Science, 2009.  All rights reserved

Version Date: Tue May  5 16:26:35 EDT 2009
-----------------------------------------------------------------
============================================================== */

#include <sensormod.h>

unsigned int sensormod_data(char sensor)
{
	if (sensor == 4) sensor = 6;
	if (sensor == 5) sensor = 7;
	while(twiBusy());
	twiMsgSize = 2;
	twiData[0] = ((SENSOR_MODULE << 1) | (TWI_WRITE));
	twiData[1] = CMD_SENSOR_READ;
	twiData[2] = sensor;
	TWCR = TWIMASTERSTART;

	while(twiBusy());
	twiMsgSize = 2;
	twiData[0] = ((SENSOR_MODULE << 1) | (TWI_READ));
	TWCR = TWIMASTERSTART;

	while(twiBusy());
	return (twiData[1] << 8) | twiData[2];
}

unsigned int sensormod_gps(char sensor)
{
	while(twiBusy());
	twiMsgSize = 2;
	twiData[0] = ((SENSOR_MODULE << 1) | (TWI_WRITE));
	twiData[1] = CMD_SENSOR_GPS_VALUE;
	twiData[2] = sensor;
	TWCR = TWIMASTERSTART;

	while(twiBusy());
	twiMsgSize = 2;
	twiData[0] = ((SENSOR_MODULE << 1) | (TWI_READ));
	TWCR = TWIMASTERSTART;

	while(twiBusy());
	return (twiData[1] << 8) | twiData[2];
}

