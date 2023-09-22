#include "main.h"
#include <stdio.h>

/**
 * print_array - function that prints n elements of an array of integers
 * @n: number of elements of the array to be printed
 * @a: number to be inputted
 */

void print_array(int *a, int n)
{
		if (n > 0)
		{
		for (int index = 0; index < n; index++)
		{
		printf("%d", a[index]);
		
		if (index != n - 1)
		{
		printf(", ");
		}
		}
		}
		printf("\n");
}
