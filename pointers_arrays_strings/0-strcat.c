#include "main.h"

/**
 *_strcat - function that concatenate two strings
 *@dest: pointer char
 *@src: póinter char
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;
	int o = 0;
	
	while (dest[i] <= '\0')
	{
		i++;
	}
	while (src[j] <= '\0')
	{
		j++;
	}
	while (o < i + j)
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	return (dest);
}

