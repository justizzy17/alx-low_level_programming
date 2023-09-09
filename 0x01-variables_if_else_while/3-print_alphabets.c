#include <stdio.h>

/*
 * main -  program that prints the alphabet in lowercase
 * and then in uppercase.
 * Return: 0 always
 */

int main(void)
{
	char loweCaseLetter;
	char upperCaseLetter;

	for (loweCaseLetter = 'a'; loweCaseLetter <= 'z'; loweCaseLetter++)
		putchar (loweCaseLetter);
	for (upperCaseLetter = 'A'; upperCaseLetter <= 'Z'; upperCaseLetter++)
		putchar(upperCaseLetter);
	putchar('\n');
	return (0);
}

