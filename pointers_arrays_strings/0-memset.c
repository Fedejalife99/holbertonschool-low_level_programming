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
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

