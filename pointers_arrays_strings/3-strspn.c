#include "main.h"

/**
 * _strspn - function
 * @s: char
 * @accept: char
 * Return: cont
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;

	unsigned int t = 0;

	int cont = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == 32)
		{
			return (cont);
		}
		else
		{
			for (t = 0; accept[t] != '\0'; t++)
			{
				if (accept[t] == s[i])
				{
					cont++;
				}
			}
		}
	}
	return (cont);

}



