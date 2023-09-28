#include "main.h"

/**
 * rot13 -  function that encodes a string using rot13
 * @s: string to be checked
 * Return: s
 */

char *rot13(char *s)
{
	int index, index2;
	char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot13_alpha[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; index2 < 52; index2++)
		{
			if (s[index] == alphabet[index2])

				s[index] = rot13_alpha[index2];
			break;

			}
		}

	return (s);
}
