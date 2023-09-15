#include "main.h"

/**
 * jack_bauer - a function prints every minute of the day of Jack Bauer,
 * starting from 00:00 to 23:59
 * Return: o
 */

void jack_bauer(void)
{
	int hour, minute;

	for (hour = 0; hour < 24; hour++)
	{
		for (minute = 0; minute < 60; minute++)
		{
			_putchar('0' + hour);
			_putchar(':');
			_putchar('0' + minute);
			_putchar('\n');
		}
	}

}

