#include <stdio.h>
#include <stdlib.h>

/**
 * main - Write a program that multiplies two numbers
 * @argc: number of count
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int mul;

		if (argc != 3)
		{
			printf("Error\n");
			return (1);
		}

	if (argc > 1)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", mul);
	}
	return (0);
}
