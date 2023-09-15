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
			if (b == 0 || a == 0)
			{
			_putchar('0' + calc);
			}

			else 
			{
				_putchar(',');
				_putchar(' ');

				if (calc < 10)
					_putchar(' ');
			}

			if (calc < 10)
			{
			_putchar('0' + calc);
			}

			else
			{
			_putchar('0' + (calc / 10));
			_putchar('0' + (calc % 10));
			}
		}
		_putchar('\n');
	}
}
