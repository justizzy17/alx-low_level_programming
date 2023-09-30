#include "main.h"
#include <stdio.h>

/**
 * _strpbrk -  function that searches a string for any of a set of bytes.
 * @s: string to be iputeted
 * @accept: string to be searched through and compared
 * Return: s, otherwise NULL if not present
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j]; j++)
		{
			if (*s == accept[j])
			{
				return (s);
				break;
			}
		}

		s++;
	}
	return (NULL);
}
