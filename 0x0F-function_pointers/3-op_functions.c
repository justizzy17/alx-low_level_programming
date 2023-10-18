#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * op_add - function that adds2 numbers
 * @a: integer to be inputted
 * @b: integer to be inputted
 * Return: the addition of integers
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that substract2 numbers
 * @a: integer to be inputted
 * @b: integer to be inputted
 * Return: the subtraction of integers
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function that multiply 2 numbers
 * @a: integer to be inputted
 * @b: integer to be inputted
 * Return: the multiplication of integers
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - function that divides 2 numbers
 * @a: integer to be inputted
 * @b: integer to be inputted
 * Return: integers
 */

int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - function that divides 2 numbers
 * @a: integer to be inputted
 * @b: integer to be inputted
 * Return: integers
 */

int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
