#include "main.h"

/**
 * reverse_array - function that reverses the content of an array of integers
 * @a: array of integers to be reversed
 * @n: nnumber of array elements
 */

void reverse_array(int *a, int n)
{
	int reverse_array;
	int start = 0;
	int end = n - 1;

	while (start < end)
	{
		reverse_array = a[start];
		a[start] = a[end];
		a[end] = reverse_array;

		end--;
		start++;
	}
}
