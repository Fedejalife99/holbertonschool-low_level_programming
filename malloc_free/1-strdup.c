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
	char *h = malloc((sizeof(char) * strlen(str)) + 1);

	unsigned int i = 0;

	if (str == NULL)
	{
		return (0);
	}
	for (i = 0; i < strlen(str); i++)
	{
		h[i] = str[i];
		if (h[i] == '\0')
		{
			return (NULL);
		}
	}

	return (h);
}
