#include "main.h"

/**
 * _strcat -  function that concatenates two strings
 * @dest: string to be copied
 * @src: string to be moved
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{

	int index;

	for (index = 0; dest[index] != '\0'; index++)
	{
	}
	index = 0;
		while (src[index] != '\0')
		{
			dest[index] = src[index];
			index++;
		}
	dest[index] = '\0';

	return (dest);
}
