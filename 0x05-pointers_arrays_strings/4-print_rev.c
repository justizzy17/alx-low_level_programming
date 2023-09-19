#include "main.h"

/**
 * print_rev -  function that prints a string, in reverse
 * @s: string to be inputted
 */

void print_rev(char *s)
{
	int arr_index, i;

	arr_index = 0;

	while (s[arr_index] != '\0')
		arr_index++;

	for (i = arr_index; i >= 0; i--)
		_putchar(s[i]);
}
