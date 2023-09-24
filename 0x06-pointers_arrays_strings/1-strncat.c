#include "main.h"

/**
 * _strncat - function that concatenates two strings
 * @dest: string to be copied
 * @src: string to be copied
 * @n: number of integer
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int index = 0;

	while (dest[index] != '\0')
		index++;

	while (src[index] != '\0' && n > 0)
	{
		dest[index] = src[index];
		index++;
	}

	dest[index] = '\0';

	return (dest);
}
