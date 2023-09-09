#include <stdio.h>

/*
 * main -  program that prints from 0 to 9
 * Return: 0 always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		num++;
	}
	putchar('\n');
	return (0);
}
