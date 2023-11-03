#include "main.h"
#include <stdlib.h>

/**
 * binary_to_uint - function converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */

unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int result = 0;

	if (*b == NULL)
		return (0);

	for (index = 0; b[index] != NULL; index++)
	{
		if (b[index] != '1' && b[index] != '0')
			return (0);

		result <<= 1;

		if (b[index] == '1')
			result += 1;
	}

	return (result);
}
