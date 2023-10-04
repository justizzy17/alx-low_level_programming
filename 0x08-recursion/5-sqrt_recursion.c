#include "main.h"

int calc_sqrt(int n, int index);

/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number to calculate the square root of
 * Return: the resulting square root
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (calc_sqrt(n, 1));
}

/**
 * calculate_sqrt - recursively calculates the square root
 * @n: number to calculate the square root
 * @index: index for the square root to be calculated
 * Return:result of square root
 */

int calc_sqrt(int n, int index)
{
	if (index * index == n)
		return (index);

	if (index * index > n)
		return (-1);

	return (calc_sqrt(n, index + 1));
}
