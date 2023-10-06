#include <stdio.h>

/**
 * main - program that prints all arguments it receives
 * @argc: number of count
 * @argv: array of string
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int index;

	if (argc > 0)
	{
		for (index = 0; index < argc; index++)
		{
			printf("%s\n", argv[index]);
		}
	}
	return (0);
}
