#include "main.h"

/**
 *_memset - function that changes n bytes of an array to another
 *@s: char
 *@b: char
 *@n: int
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; s[i] != s[n]; i++)
	{
		s[i] = b;
	}
	return (s);
}

