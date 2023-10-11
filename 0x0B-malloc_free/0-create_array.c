#include "main.h"
#include <stdlib>
#include <stdio.h>

/**
 * create_array - function that creates an array of chars,
 * and initializes it with a specific char.
 * @size: lenght of the character
 * @c: character to be inputted
 * Return: (0) successful, or return NULL if empty
 */

char *create_array(unsigned int size, char c)
{
	char *ptr_create = create_array;
	int index;

	ptr_create = malloc(size * (sizeof(char)));

	if (size == 0)
		return ('\0');

	for (index = 0; index < size; index++)
	{
		ptr_create[index] = c;
	}
	return (ptr_create);
}
