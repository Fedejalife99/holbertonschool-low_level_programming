#include "main.h"
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
/**
 *_strdup - function
 *@str: pointer to a char
 *Return: h
 */
char *_strdup(char *str)
{
	char *h = malloc(sizeof(char) * strlen(str));

	unsigned int i = 0;

	if (sizeof(char) * strlen(str) == 0)
	{
		return (NULL);
	}
	if (*str == NULL)
	{
		return (0);
	}

	for (i = 0; i < strlen(str); i++)
	{
		h[i] = str[i];

	}

	h[i + 1] = '\0';

	return (h);
}
