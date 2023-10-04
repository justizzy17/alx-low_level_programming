#include "main.h"
int string_lenght(char *s);
int check_if_palindrome(char *s, int start, int end);

/**
 * is_palindrome -  function that returns 1 if a string is a palindrome
 * and 0 if not.
 * @s: string to be inputted
 * Return: (1) if positive, otherwise return (0).
 */

int is_palindrome(char *s)
{
	int len = string_lenght(s);

	return (check_if_palindrome(s, 0, len - 1));
}

/**
 * string_lenght - calculates the lenght of the string
 * @s: string to be inputted
 * Return: lenght of string
 */

int string_lenght(char *s)
{
	if (*s == '\0')
		return (0);

	return (1 + (string_lenght(s + 1)));
}

/**
 * check_if_palindrome - function that checks if the string is palindrome
 * @s: inputted string
 * @start: start of a string
 * @end: end of the string
 * Return: the result of the function
 */

int check_if_palindrome(char *s, int start, int end)
{
	if (start >= end)
		return (1);

	if (s[start] != s[end])
		return (0);

	return (check_if_palindrome(s, start + 1, end - 1));
}
