#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function
 *@size: unisgned int
 *@c: char
 *Return: 0 , NULL or h
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;

	char *h = malloc(sizeof(char) * size);

	if (size == 0 || h == 0)
	{
		return (0);
	}

	for (a = 0; a < size; a++)
	{
		h[a] = c;
	}
	return (h);
}
