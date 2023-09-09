#include <stdio.h>
/*
 * main -  program that prints the alphabet in lowercase
 * Return: 0 always
 */

int main(void)
{
	char lowerCaseAlphabet;

	for (lowerCaseAlphabet = 'a'; lowerCaseAlphabet <= 'z'; lowerCaseAlphabet++)
	putchar (lowerCaseAlphabet);
	putchar('\n');

	return (0);
}

