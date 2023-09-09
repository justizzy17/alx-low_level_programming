#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - prints the last digit of a random number
 * Return:(0) always
 */

int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	last = n % 10;

	if (last > 5)
	printf("the last digit of %d is %d and is greater than 5\n", n, last);

	else if (last < 6 && last != 0)
	printf("the last digit of %d is %d and is less than 6 and not 0\n", n, last);

	else if (last == 0)
		printf("the last digit of %d is %d and is 0\n", n, last);
	return (0);
}
