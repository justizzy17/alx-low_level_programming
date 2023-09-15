#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times the alphabet
 * Return: 0 always
 */

void print_alphabet_x10(void)
{
	char small_letter;
	int i;

	for (i = 0; i < 10; i++)
	{
		small_letter = 'a';

		while (small_letter <= 'z')
		{
		}
		_putchar(small_letter);
		_putchar('\n');
	}
}
