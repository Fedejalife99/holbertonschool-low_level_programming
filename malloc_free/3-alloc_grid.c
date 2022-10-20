#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 *alloc_grid - function 
 *@i: unsigned int
 *@o: unsigned int
 *Return: p
 */

int **alloc_grid(int width, int height)
{
	int i;

	int j;

	int ** p = (int **) malloc (sizeof(int) * width);

	if (width == 0 || height == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < width; i++)
	{
		p[i] = (int *) malloc(sizeof(int) * height);
	}	
	return (p);
}
