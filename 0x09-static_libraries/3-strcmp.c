#include "main.h"

/**
 * _strcmp -  function that compares two strings
 * @s1: string to be inputted
 * @s2: string to be inputted and compared with s1
 * Return: integer
 */

int _strcmp(char *s1, char *s2)
{
	int index = 0;
	int compare;

	while (s1[index] != '\0' && s2[index] != '\0')
	{
		if (s1[index] != s2[index])
		{
			compare = s1[index] - s2[index];
			return (compare);
		}
		index++;
	}

	if (s1[index] == '\0' && s2[index] == '\0')
		return (0);

	return (s1[index] - s2[index]);
}
