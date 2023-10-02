#include "main.h"

/** _strlen_recursion -  function that returns
 * the length of a string
 * @s: inputted string
 * Return: lenght of string
 */

int _strlen_recursion(char *s)
{
	if (!*s)
		return (0);

	else
	{
		return (1 + (_strlen_recursion(s + 1)));
	}
}
