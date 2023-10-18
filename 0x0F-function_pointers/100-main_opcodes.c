#include <stdio.h>
#include <stdlib.h>
/**
 * main -  prints the opcodes of its own main function
 * @argc: number of number to be inputted
 * @argv: array of numbers generated
 * Return: result
 */

int main(int argc, char *argv[])
{
	int i;
	int bytes;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i <= bytes - 1; i++)
	{
		if (i == bytes - 1)
		{
		printf("%02hhx\n", ((unsigned char *)main)[i]);
		}

		printf("%02hhx ", ((unsigned char *)main)[i]);
	}

	return (0);
}
