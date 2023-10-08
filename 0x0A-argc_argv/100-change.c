#include <stdio.h>
#include <stdlib.h>

/**
 * main -  program that prints the minimum number
 * of coins to make change for an amount of money.
 * @argc: number of argument entered
 * @argv: value of number entered
 * Return: (0)
 */

int main(int argc, char *argv[])
{
	int result = 0;
	int argv_num;
	int coins[] = {25, 10, 5, 2, 1};
	int index;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	argv_num = atoi(argv[1]);

	if (argv_num < 0)
	{
		printf("0\n");
	}

	if (argv_num > 0)
	{
	for (index = 0; index < 5; index++)
	{
		while (argv_num >= coins[index])
		{
		result++;
		argv_num -= coins[index];
		}
	}

	printf("%d\n", result);
	}

	return (0);
}

