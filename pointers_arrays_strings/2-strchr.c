#include "main.h"

/**
 *_strchr - function
 *@s: char
 *@c: char
 *Return: s or NULL
 *
*/

char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	return (NULL);


}

