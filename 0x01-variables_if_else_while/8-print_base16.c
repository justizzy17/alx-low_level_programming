#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 and letters between a to f.
 * Return: 0 always
 */

int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar('0' + num);

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
