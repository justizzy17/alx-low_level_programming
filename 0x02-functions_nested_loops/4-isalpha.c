#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: is a letter, lowercase or uppercase to be checked
 * Return: 1 for alphabetic character or 0 for nothing else
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
