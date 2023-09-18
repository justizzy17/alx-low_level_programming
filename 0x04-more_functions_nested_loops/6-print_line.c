#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n:  is the number of times the character _ 
 * should be printed
 * Return:void
 */

void print_line(int n)
{
	int a;

	if (n <= 0)
		_putchar('\n');

	for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
	_putchar('\n');
	
}
