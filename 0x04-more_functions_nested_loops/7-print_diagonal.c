#include "main.h"

/**
 * print_diagonal -  function that draws a diagonal line on the terminal
 * @n:  is the number of times the character \ should be printed
 * Return: void
 */

void print_diagonal(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (a = 1; a <= n; a++)
			_putchar('/');
		_putchar('\n');
	}
}
