#include <stdio.h>

/*
 * main -  main - prints all possible combinations of single-digit numbers
 * ReturN: 0 always
 */

int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar('0' + num);
		putchar(',');
		putchar(' ');
		num++;
	}
	putchar('\n');
	return (0);
}