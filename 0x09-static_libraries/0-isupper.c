#include "main.h"

/**
 * _isupper - function that checks for uppercase character
 * @c: character to be checked
 * Return: 0 otherwise
 */
int _isupper(int c)
{
	if (c <= 'Z' && c >= 'A')
	{
		return (1);
	}
	else
		return (0);
}
