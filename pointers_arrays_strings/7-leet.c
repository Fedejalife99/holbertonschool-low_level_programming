#include "main.h"

/**
 *leet - function
 *@s: char
 *Return: s
 */

char *leet(char *s)
{
	int i;
	int x;
	char l[] = {'A', 'a', 'E', 'e', 'O', 'o', 'L', 'l', 'T', 't'};
	int t[] = {'4', '4', '3', '3', '0', '0', '1', '1', '7', '7'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (x = 0; x <= 9; x++)
		{
			if (s[i] == l[x])
			{
				s[i] = t[x];
			}
		}
	}
	return (s);
}
