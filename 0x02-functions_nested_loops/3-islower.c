#include "main.h"

/**
 * _islower - function that checks for lowercase character
 * c: integer to be checked
 * Return: 1 when successful or 0 when nothing
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
		return (0);
}
