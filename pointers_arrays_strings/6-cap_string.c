#include "main.h"

/**
 *cap_string - function
 *@s: char
 *Return: s;
 *
 */

char *cap_string(char *s)
{
	int i;

	int j;

	char l[] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	if (s[0] >= 'a' && s[0] <= 'z')
	{
		s[0] = s[0] - 32;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; l[j] != '\0'; j++)
		{

			if (s[i] == l[j] && s[i + 1] >= 'a' && s[i + 1] <= 'z')
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}

