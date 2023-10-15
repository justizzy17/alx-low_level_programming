#include "main.h"
#include <stdlib.h>

/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to the memory previously allocated
 * @old_size: size of the previous memory
 * @new_size: size of the new memory
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *ptr_realloc;
	char *old_ptr;
	unsigned int index;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
		return (malloc(new_size));

	ptr_realloc = malloc(new_size);

	old_ptr = ptr;

	if (ptr_realloc == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		for (index = 0; index < old_size; index++)
			ptr_realloc[index] = old_ptr[index];
	}

	else
	{
		for (index = 0; index < new_size; index++)
			ptr_realloc[index] = old_ptr[index];
	}

	free(ptr);

	return (ptr_realloc);
}

