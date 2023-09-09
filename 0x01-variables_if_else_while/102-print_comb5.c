#include <stdio.h>

/**
 * main -  prints all possible combinations of two two-digit numbers.
 * Return: 0 always
 */

int main(void)
{
	int n, m;

	for (n = 0; n < 100; n++)
	{
		for (m = n + 1; m < 100; m++)
		{
			putchar('0' + (n / 10));
			putchar('0' + (n % 10));
			putchar(' ');

			putchar('0' + (m / 10));
			putchar('0' + (m % 10));

			if (n != 98 || m != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
