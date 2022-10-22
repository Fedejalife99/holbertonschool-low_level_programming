#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include <malloc.h>

/**
 *malloc_checked - function
 *@b: int
 *Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p = malloc(b);

	int i = 98;

	int *pi = &i;

	if (b == 0)
	{
		return (pi);
	}
	return (p);
}
