#include "main.h"
#include <stdio.h>
/**
 * print_times_table -  function that prints the n times table,
 * starting with 0.
 * @n: integer to be checked
 * Return:0
 */
void print_times_table(int n)
{
	int a, b, calc;

	if (n >= 0 && n <= 15)
	{
	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			calc = a * b;
			if (b == 0)
			_putchar('0' + calc);
			if (calc < 10 && b != 0)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(' ');
				_putchar('0' + calc);
			}
			else if (calc >= 10 && calc < 100)
			{
			_putchar(',');
			_putchar(' ');
			_putchar(' ');
			_putchar('0' + (calc / 10));
			_putchar('0' + (calc % 10));
			}
			else if (calc >= 100)
			{
				_putchar(',');
				_putchar(' ');
				_putchar('0' + (calc / 100));
				_putchar('0' + ((calc / 10) % 10));
				_putchar('0' + (calc % 10));
			}
			}
	_putchar('\n');
	}
	}
}
