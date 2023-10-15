#include "main.h"
#include <stdlib.h>

/**
 * array_range -  function that creates an array of integers.
 * @min: minimum number to be inputted
 * @max: maximum number to be inputed
 * Return: pointer, otherwise NULL
 */

int *array_range(int min, int max)
{
	int *ptr_array_range;
	int size, index;

	size = (max - min) + 1;

	if (min > max)
		return (NULL);

	ptr_array_range = malloc(sizeof(int) * size);

	if (ptr_array_range == 0)
		return (NULL);

	index = 0;

	while (min <= max)
	{
		ptr_array_range[index] = min++;
		index++;
	}

	return (ptr_array_range);
}
