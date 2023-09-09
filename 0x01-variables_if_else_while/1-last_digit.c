#include <stdlib.h>
#include <time.h>
/*
 * main - prints the last digit of a random number
 * Return: 0 always
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	int lastDigit = n % 10;

	if (lastDigit > 5)
	printf("the last digit of %d is %d and is greater than 5\n", n, lastDigit);


	else if (lastDigit < 6 && lastDigit != 0)
	printf("the last digit of %d is %d and and is less than 6 and not 0\n", n, lastDigit);

	else if (lastDigit == 0)
        printf("the last digit of %d is %d and is 0\n", n, lastDigit);

	return (0);
}
