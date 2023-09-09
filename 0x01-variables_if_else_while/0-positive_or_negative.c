#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - a program that determines positive or negative number
 * Return: 0 always
 */

int main(void)
{
	int n;
	int a = 0;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > a)
		printf("%d is positive\n", n);
	else if (n == a)
		printf("%d is zero\n", n);
	else
		printf("%d is negative\n", n);
	return (0);
}
