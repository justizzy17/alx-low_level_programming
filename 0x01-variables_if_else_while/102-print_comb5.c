#include <stdio.h>

/*
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: 0 always
 */

int min(void)
{
	int n, m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			putchar('0' + n);
			putchar('0' + m);

			if (if n < m || m < n)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
