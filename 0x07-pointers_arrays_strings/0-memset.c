#include "main.h"

/**
 * _memset -  function that fills memory with a constant byte
 * @s: pointer of inputted string
 * @n: number of bytes to fill
 * @b: constant to be filled with
 * Return: pointer of an array s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
