#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * alloc_grid -  function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: number of width inputted
 * @height: number of height inputted
 * Return: pointer 
 */

int **alloc_grid(int width, int height)
{
	int **ptr_grid;
	int i = 0;
	int j = 0;

	if (width <= 0 || height <= 0)
		return (0);

	ptr_grid = malloc(sizeof(int *) * height);

	if (ptr_grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		ptr_grid[i] = malloc(sizeof(int) * width);

		if (ptr_grid[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr_grid[j]);
			}
			free(ptr_grid);
			return (NULL);
		}

	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			ptr_grid[i][j] = 0;
		}
	}


	return (ptr_grid);
}
