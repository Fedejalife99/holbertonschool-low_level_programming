#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - function that allocates memory for an array
 *@nmemb: unsigned int
 *@size: unsigned int
 *Return: p
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *p = malloc(size * nmemb);

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < nmemb * size; i++)
	{
		p[i] = 0;
	}
	return (p);
}
