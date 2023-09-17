#include "main.h"

/**
 * print_most_numbers -  function that prints the numbers, from 0 to 9
 * does not print 2 and 4
 * Return: void
 */

void print_most_numbers(void)
{
	int a;

	for (a = 0; a <= 9; a++)
	{
		if (a != 2 && a != 4)
			_putchar('0' + a);
	}
	_putchar('\n');
}

