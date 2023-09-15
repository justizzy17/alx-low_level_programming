#include "main.h"

/**
 * print_sign - function that prints the sign of a number
 * @c:the number to be checked
 * Return: 1 and prints +  or 0 if n is zero or -1  nothing else
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}

	else
	{
		_putchar('-');
		return (-1);
	}
}
