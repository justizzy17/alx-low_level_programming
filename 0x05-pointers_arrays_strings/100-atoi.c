#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be checked
 * Return: an integer otherwise return 0 if no integer
 */

int _atoi(char *s)
{
	int index = 0;
	unsigned int outcome = 0;
	int sign = 1;
	int has_a_digit = 0;

	while (s[index])
	{
		if (s[index] == 45)
		{
			sign *= -1;
		}
		while (s[index] >= 48 && s[index] <= 57)
		{
			has_a_digit = 1;
			outcome = (outcome * 10) + (s[index] - '0');
			index++;
		}
		if (has_a_digit == 1)
		{
			break;
		}
		index++;
	}
	outcome *= sign;
	return (outcome);
}
