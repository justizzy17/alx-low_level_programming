#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - function that prints the result 
 * @argv: number of arguement to be entered
 * @argc: array of arguement to be processed
 * Return: result of the function
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*operator)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);
	operator = get_op_func(argv[2]);

	if (!operator)
	{
		printf("Error\n");
		exit(99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", operator(num1, num2));
	return (0);
}
