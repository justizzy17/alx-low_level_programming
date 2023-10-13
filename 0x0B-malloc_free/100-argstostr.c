#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * argstostr -  function that concatenates all the
 * arguments of your program.
 * @ac: number to be inputted
 * @av: string to be inputted
 * Return: pointer, otherwise return NULL
 */

char *argstostr(int ac, char **av)
{
       	char *ptr_argstostr;
	int i, j, k;
	int m = 0;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
		}
		m += j + 1;
	}

	ptr_argstostr = malloc(sizeof(char) * (m + 1));

	if (ptr_argstostr == NULL)
		return (NULL);

	k = 0;

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j]; j++)
		{
			ptr_argstostr[k] = av[i][j];
			k++;
		}
		ptr_argstostr[k] = '\n';
		k++;
	}

	ptr_argstostr[k] = '\0';

	return (ptr_argstostr);
}
