#include "main.h"

/**
 * jack_bauer - print every minute of the day
 *@hour: print hours
 *@minute : print minutes
 */

void jack_bauer(void)
	{
	int hour, minute;
    
	for (hour = 0; hour < 24; hour++)
	{
        for (minute = 0; minute < 60; minute++)
	{
		putchar((hour / 10) + '0');
		putchar((hour % 10) + '0');
		putchar(':');
		putchar((minute / 10) + '0');
		putchar((minute % 10) + '0');
		putchar('\n');
	}
	}

}
