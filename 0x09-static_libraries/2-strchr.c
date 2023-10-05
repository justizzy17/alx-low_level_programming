#include "main.h"
#include <stdio.h>

/**
 * _strchr - function that locates a character in a string.
 * @s: string to be iputted
 * @c: character to be compared with
 * Return: pointer to a string, if not NULL
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[i]  == c)
			return (&s[i]);
		i++;
	}
return (NULL);
}
