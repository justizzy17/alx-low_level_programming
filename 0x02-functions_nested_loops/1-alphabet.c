#include "main.h"

/**
 * print_alphabet - function that prints the alphabet
 * Return: 0 always
 */

void print_alphabet(void)
{
	char small_letter = 'a';

	while (small_letter <= 'z')
	{
		_putchar(small_letter);
		small_letter++;
	}
	_putchar('\n');
	return (0);
}
