#include <stdio.h>

/**
 * main -  program that prints the number of arguments passed into it.
 * @agrc: number of argument
 * @agrv: number of array
 * Return: (0)
 */

int main(int agrc, char *agrv[])
{
	(void)agrv;
			printf("%d\n", (agrc - 1));
	return (0);
}
