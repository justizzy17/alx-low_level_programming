#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_grid -  function that frees a 2 dimensional grid
 * previously created by your alloc_grid function.
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: Nothing.
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	fre(grid);
}
