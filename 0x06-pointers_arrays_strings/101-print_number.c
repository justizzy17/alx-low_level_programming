#include "main.h"

/**
 * print_number - function that prints an integer
 * @n: integer to be inputted
 */

void print_number(int n)
{
	int reverse_n;
	int print_digit;

	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n == 0)
	{
		_putchar('0');
	}

	else
	{
		reverse_n = 0;

		while (n != 0)
		{
			print_digit = n % 10;
			reverse_n = reverse_n * 10 + print_digit;
			n = n / 10;
		}

		while (reverse_n != 0)
		{
			print_digit = reverse_n % 10;
			_putchar('0' + print_digit);
			reverse_n = reverse_n / 10;
		}
	}
}
