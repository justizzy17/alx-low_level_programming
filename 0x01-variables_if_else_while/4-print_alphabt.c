#include <stdio.h>

/**
 * main -  program that prints the alphabet in lowercase
 * except letter q and e.
 * Return: 0 always
 */

int main(void)
{
	char lowerCase;

	for (lowerCase = 'a'; lowerCase <= 'z'; lowerCase++)
	{
		if (lowerCase != 'q' && lowerCase != 'e')
			putchar(lowerCase);
	}
	putchar('\n');

	return (0);
}

