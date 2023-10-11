#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */
char *_strdup(char *str)
{
	char *ptr_str;
	int index;
	int index2;

	if (str == NULL)
		return (NULL);

	index = 0;
	while (str[index] != '\0')
		index++;

	ptr_str = malloc((sizeof(char) * index) + 1);

	if (ptr_str == NULL)
		return (NULL);

	for (index2 = 0; index2 < index; index2++)
		ptr_str[index2] = str[index2];

	ptr_str[index2] = '\0';

	return (ptr_str);
}
