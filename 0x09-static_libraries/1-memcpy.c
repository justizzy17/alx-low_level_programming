#include "main.h"

/**
 * _memcpy -  function that copies memory area.
 * @dest: destination where the memory will be copied to
 * @src: copied from
 * @n: number of the string
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
