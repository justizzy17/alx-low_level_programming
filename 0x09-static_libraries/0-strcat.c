#include "main.h"

/**
 * _strcat -  function that concatenates two strings
 * @dest: string to be copied
 * @src: string to be moved
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int index1;
	int index2;

	index1 = 0;
	while (dest[index1] != '\0')
	{
		index1++;
	}

	index2 = 0;
	while (src[index2] != '\0')
	{
		dest[index1] = src[index2];
		index1++;
		index2++;
	}
	dest[index1] = '\0';
	return (dest);
}
