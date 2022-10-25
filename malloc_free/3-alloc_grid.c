#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *alloc_grid - function
 *@width: unsigned int
 *@height: unsigned int
 *Return: p
 */

int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int **p;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = malloc(sizeof(p) * width);
	if (p == NULL)
	{
		free (p);
		return (NULL);
	}
	for (i = 0; i < width; i++)
	{
		p[i] = malloc(sizeof(int) * height);
	}
	for (j = 0; j < height; j++)
	{
		for (i = 0; i < width; i++)
		{
			p[i][j] = 0;
		}
	}
	return (p);
}
