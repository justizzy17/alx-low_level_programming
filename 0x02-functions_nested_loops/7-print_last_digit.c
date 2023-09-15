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
	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
	}
	_putchar('0' + last_digit);
	return (last_digit);
}
