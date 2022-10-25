#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - function that concatenate n chars the second string
 * @s1: pointer to a char
 * @s2: pointer to a char
 * @n: unsigned int
 * Return: h
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;

	unsigned int j;

	char *h = malloc(sizeof(char) * strlen(s1) + n + 1);

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (h == NULL)
		return (NULL);
	for (i = 0; i < strlen(s1); i++)
	{	
		h[i] = s1[i];
		if (n >= strlen(s2))
			for (j = 0; j + i <= strlen(s1) + strlen(s2); j++)
				h[j + strlen(s1)] = s2[j];
	}
	for (j = 0; j + i < strlen(s1) + n; j++)
		h[strlen(s1) + j] = s2[j];
	h[i + j] = '\0';
	return (h);
}


