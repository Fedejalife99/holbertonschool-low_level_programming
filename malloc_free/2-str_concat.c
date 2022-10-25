#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 *str_concat - function
 *@s1: pointer to a char
 *@s2: pointer to a char
 *Return: 0 or h
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0;

	unsigned int j;

	char *h = malloc(sizeof(char) * (strlen(s1) + strlen(s2)) + 1);

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (h == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(s1); i++)
	{
		h[i] = s1[i];
	}
	for (j = 0; j + i <= strlen(s2) + strlen(s1); j++)
	{
		h[j + strlen(s1)] = s2[j];
	}
	return (h);
}
