#include "main.h"

/**
 *_strpbrk - function
 *@s: char
 *@accept: char
 *Return: s + i; NULL
 *
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (accept[j] == s[i])
			{
				return (s + i);
			}
		}
	}
	return (NULL);

}

