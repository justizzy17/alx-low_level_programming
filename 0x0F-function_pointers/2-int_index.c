#include "function_pointers.h"
#include <stdlib.h>

/**
 * int_index -  function that searches for an integer.
 * @array: array of integers to check
 * @size: size of the array
 * @cmp: pointer to the function to compare numbers
 * Return: int of the function
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, result;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i <= size - 1; i++)
	{
		result = cmp(array[i]);

		if (result != 0)
			return (i);
	}
	return (-1);
}
