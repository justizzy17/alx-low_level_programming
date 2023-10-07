#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: number of input
 * @argv: array of strings
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int index1 = 1;
	int index2;
	int sum = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	while (index1 < argc)
	{
		for (index2 = 0; argv[index1][index2] != '\0'; index2++)
		{
			if (!isdigit(argv[index1][index2]))
			{
				printf("Error\n");
				return (1);
			}
		}
		index1++;
	}

	for (index1 = 1; index1 < argc; index1++)
	{
		sum += atoi(argv[index1]);
	}

	printf("%d\n", sum);
	return (0);
}
