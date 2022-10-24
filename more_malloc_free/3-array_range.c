#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function creates an array of integers.
 *@min: first element of the array
 *@max: last element  of the array
 *Return: p
 */

int *array_range(int min, int max)
{
	int i;

	int *p;

	if (min > max)
		return (NULL);
	if (min < 0)
	{
		p = malloc(sizeof(int) * (max - (min * -1) + 1));
		for (i = 0; p[i] <= (max - min + 1); i++)
			p[i] = min++;
		if (p == NULL)
			return (NULL);
		return (p);
	}
	if (max < 0)
	{
		p = malloc(sizeof(int) * (max * -1) - min + 1);
		for (i = 0; p[i] <= (max - min + 1); i++)
			p[i] = min++;
		if (p == NULL)
			return (NULL);
		return (p);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	for (i = 0; p[i] <= (max - min + 1); i++)
	{
		p[i] = min++;
	}
	if (p == NULL)
		return (NULL);
	return (p);
}
