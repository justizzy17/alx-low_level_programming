#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: array of string to be inputted
 * @s2: array of string to be inputted
 * @n: lenght of string
 * Return: pointer, otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int index1, index2, size, i, j;
	char *ptr_nconcat;

	index1 = 0;
	while (s1[index1] != '\0')
		index1++;

	index2 = 0;
	while (s2[index2] != '\0')
		index2++;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	if (n >= index2)
		n = index2;

	size = index1 + n + 1;
	ptr_nconcat = malloc(sizeof(char) * size);

	if (ptr_nconcat == NULL)
		return (NULL);

	i = 0;
	while (i < index1)
	{
		ptr_nconcat[i] = s1[i];
		i++;
	}

	j = 0;
	while (j < n)
	{
		ptr_nconcat[i] = s2[j];
		j++;
		i++;
	}
	ptr_nconcat[size - 1] = '\0';
	return (ptr_nconcat);
}
