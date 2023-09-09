#include <stdio.h>

/**
 * main - program that prints all single digit
 * numbers of base 10 starting from 0
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	return (0);
}


