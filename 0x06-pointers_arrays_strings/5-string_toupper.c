#include "main.h"

/**
 * string_toupper - function that changes all lowercase
 * letters of a string to uppercase.
 * @s: string to be coverted to uppercase
 * Return: string coverted
 */

char *string_toupper(char *s)
{
	int index;

	for (index = 0; s[index] != '\0'; index++)
	{
		if (s[index] >= 'a' && s[index] <= 'z')
			s[index] -= 32;
	}
	return (s);
}
