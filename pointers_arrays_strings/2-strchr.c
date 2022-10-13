#include "main.h"

/**
 * _strchr - function
 * @s: char
 * @c: char
 * Return: s or NULL
 *
*/

char *_strchr(char *s, char c)
{
	int i = 0;

	if (s == NULL)
	{
		return (NULL);
	}

	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			return (s + i);
		}
		i++;
	}

	return (s + i);
}
