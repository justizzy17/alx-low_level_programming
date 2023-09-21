#include "main.h"

/**
 * rev_string -  function that reverses a string
 * @s: string to be reversed
 */

void rev_string(char *s)
{
	char *first_letter = s;
	char *last_letter = s;
	char swap;


	while (*last_letter != '\0')
	{
		last_letter++;
	}

	if (last_letter > s)
	{
		last_letter--;
	}

	while (first_letter < last_letter)
	{
		swap = *first_letter;
		*first_letter = *last_letter;
		*last_letter = swap;

		first_letter++;
		last_letter--;
	}
}
