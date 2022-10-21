#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *free_grid - function
 *@grid: int
 *@height: int
 *
 */

void free_grid(int **grid, int height)
{
	int i;

	int j;

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < height; j++)
		{
			free(grid[i][j]);
		}
	}

	free(grid);
}

