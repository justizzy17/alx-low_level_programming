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
	int index2 = 0;

	while (dest[index] != '\0')
		index++;

	while (src[index2] != '\0' && n > 0)
	{
		dest[index] = src[index2];
		index2++;
		index++;
		n--;
	}

	dest[index] = '\0';

	return (dest);
}
