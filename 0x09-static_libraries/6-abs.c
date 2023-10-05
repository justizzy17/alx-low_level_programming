#include "main.h"

/**
 * _abs - Computes the absolute value of an integer.
 * @c: The integer to find the absolute value of.
 *
 * Return: The absolute value of the integer.
 */

int _abs(int c)
{

	if (c < 0)
		return (-c);
	else
		return (c);
}
