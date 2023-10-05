#include "main.h"

/**
 * _strstr - function that locates a substring.
 * @haystack: string to be compared
 * @needle: string to be compared with
 * Return:  pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	char *h, *n;

	for (; *haystack; haystack++)
	{
		h = haystack;
		n = needle;

		while (*h == *n && *n)
		{
			h++;
			n++;
		}

		if (*n == '\0')
			return (haystack);

	}
	return ('\0');
}
