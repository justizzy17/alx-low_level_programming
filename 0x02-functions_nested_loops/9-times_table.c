#include "main.h"

/**
 * times_table -  function that prints the 9 times table, starting with 0
 * Return: 0
 */

void times_table(void)
{
	int a, b, calc;

	for (a = 0; a < 10; a++)
	{
		for (b = 0; b < 10; b++)
		{
			calc = a * b;
			_putchar('0' + calc);

			if (b != 9)
			{
			_putchar(',');
			_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
