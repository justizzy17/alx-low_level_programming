#include <stdio.h>

/*
 * main -  prints all possible different combinations of two digits
 * Return: 0 always
 */

int main(void)
{
	int digit1, digit2;

	for (digit1 = 0; digit1 <= 10; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit2++)
		{
			putchar('0' + digit1);
			putchar('0' + digit2);

			if (digit1 != 8 || digit2 != 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
