#include "main.h"

/**
 * _strncpy -  function that copies a string
 * @dest: string to be copied
 * @src: string to be inputted
 * @n: index for the array
 * Return: dest
 */

*_strncpy(char *dest, char *src, int n)
{
	int index = 0;
	int index2 = 0;

	while (src[index2] != '\0' && index2 < n)
	{
		dest[index] = src[index2];
			index++;
			index2++;
	}

	while (index < n)
	{
	dest[index] = '\0';
		index++;
	}

	return (dest);
}	
