#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c:the character to be checked
 * Return: 1 if c is an alphabet, 0 otherwise
 */

int _islower(int c);
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else if (c >= 'A' && C <= 'Z')
		return (1);
	return (0);
}
