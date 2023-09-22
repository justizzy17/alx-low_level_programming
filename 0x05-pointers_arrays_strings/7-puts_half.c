#include "main.h"

/**
 * puts_half - function that prints half of a string
 * @str: pointing at the array of characters to be inputted
 */

void puts_half(char *str)
{
	int n, i, length_of_the_string;
	int index = 0;

	while (str[index] != '\0')
	{
		index++;
	}

	length_of_the_string = index;

		if (length_of_the_string % 2 != 0)

			n = (length_of_the_string - 1) / 2;

		else

			 n = ((length_of_the_string) / 2) + 1;

		for (i = n; str[i] != ('\0'); i++)
		{
			_putchar(str[i]);
		}
	_putchar('\n');
}
