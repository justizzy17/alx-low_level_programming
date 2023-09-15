#include "main.h"

/**
 * print_last_digit - prints last digit of a number
 * @n: number to pick the last digit
 * Return: the value of the last digit
 */

int print_last_digit(int n)
{
	int last_digit;

	last_digit = n % 10;

	if (n < 0)
	{
		n = -n;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
