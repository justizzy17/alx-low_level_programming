#include "main.h"

/**
 * _atoi - function that convert a string to an integer
 * @s: string to be checked
 * Return: an integer otherwise return 0 if no integer
 */

int _atoi(char *s)
{
	int outcome;
	int sign = 1;

	while (*s == ' ' || (*s >= 9 && *s <= 13))
		s++;

	if (*s == '-' || *s == '+')
	{
		sign = (*s == '-') ? -1 : 1;
		s++;
	}

	while (*s >= '0' && *s <= '9')
	{
		 outcome = outcome * 10 + (*s - '0');
	s++;
	}

	return (outcome * sign);
}
