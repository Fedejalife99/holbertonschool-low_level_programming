#include "main.h"
#include<stdio.h>
#include<stdlib.h>

/**
 *_strdup - function
 *@str: pointer to a char
 *Return: h
 */
char *_strdup(char *str)
{
	char *h = malloc(sizeof(char) * strlen(str));

	int i = 0;

	if (strlen(str) == 0)
	{
		return (0);
	}

	for (i = 0; i < strlen(str); i++)
	{
		h[i] = str[i];

	}

	return (h);
}
