#include "main.h"

/**
 * leet -  function that encodes a string into 133
 * @s: string to be checked
 * Return: s
 */

char *leet(char *s)
{
	int index = 0;
	int index2 = 0;
	char leet_words[] = "aAeEoOtTlL";
	char leet_numbers[] = "4433007711";

	for (index = 0; s[index] != '\0'; index++)
	{
		for (index2 = 0; index2 < 10; index2++)
		{
			if (s[index] == leet_words[index2])
				s[index] = leet_numbers[index2];
		}
	}
	return (s);
}
