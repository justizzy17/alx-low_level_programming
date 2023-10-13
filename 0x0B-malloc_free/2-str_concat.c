#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * str_concat -  function that concatenates two strings.
 * @s1: string to be inputted
 * @s2: string to be inputted
 * Return: pointer
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr_concat;
	int index, index2;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	index = 0;

	while (s1[index] != '\0')
		index++;
	index2 = 0;

	while (s2[index2] != '\0')
		index2++;

	ptr_concat = malloc((sizeof(char)) * (index + index2 + 1));

	if (ptr_concat == NULL)
		return (NULL);
	index = 0;

	while (index != '\0')
	{
		ptr_concat[index] = s1[index];
		index++;
	}
	index2 = 0;

	while (index2 != '\0')
	{
		ptr_concat[index] = s2[index2];
		index++;
		index2++;
	}
	ptr_concat[index] = '\0';
	return (ptr_concat);
}
