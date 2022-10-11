#include "main.h"
#include <stdio.h>
/**
 * rev_string - prints a string in reverse
 * @s: char
 */

void rev_string(char *s)
{
	int q = 0;
	int p = 0;
	char i;

	while (s[p] != '\0')
	{
		p++;
	}
	p = p - 1;
	while (p > q)
	{
		i = s[p];
		s[p] = s[q];
		s[q] = i;
		p--;
		q++;
	}
}
