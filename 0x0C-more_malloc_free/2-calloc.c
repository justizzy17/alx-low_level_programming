#include "main.h"
#include <stdlib.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}


/**
 * _calloc - function that allocates memory for an array, using malloc
 * @nmemb: integer to be inputted
 * @size: size of the nmemb inputted
 * Return: pointer, otherwise NULL
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr_calloc;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr_calloc = malloc(nmemb * size);

	if (ptr_calloc == NULL)
		return (NULL);

	_memset(ptr_calloc, 0, nmemb * size);

	return (ptr_calloc);
}
