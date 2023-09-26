#include "main.h"

/**
 * cap_string - function that capitalizes all words of a string
 * @s: string to be inputted
 * Return: s
 */

char *cap_string(char *s)
{
	int index = 0;
	int capitalize_next;

	while (s[index] != '\0')
	{
		if (s[index] == ' ' || s[index] == '\t'
				|| s[index] == '\n' ||
				s[index] == ',' ||
				s[index] == ';' ||
				s[index] == '.' ||
				s[index] == '!' ||
				s[index] == '?' ||
				s[index] == '"' ||
				s[index] == '(' ||
				s[index] == ')' ||
				s[index] == '{' ||
				s[index] == '}')

			capitalize_next = 1;
		else if (capitalize_next)
		{
			if (s[index] >= 'a' && s[index] <= 'z')
				s[index] -= 32;

		capitalize_next = 0;
		}

		index++;
	}

	return (s);
}
