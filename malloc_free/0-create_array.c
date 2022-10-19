#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *create_array - function
 *@size: unisgned int
 *@c: char
 *Return: 0 if size or c are 0, NULL; h if last thing dont happnend and NULL if there is an error.
 */

char *create_array(unsigned int size, char c)
{
	unsigned int a = 0;
	
	char* h = malloc(sizeof(char) * size);
	
	if (size == 0 )
	{
		return (0);
	}

	
	for (a = 0; a < size; a++)
	{
		h[a] = c;
	}
	return (h);
	return (NULL);
}
