#include "main.h"
/**
 **_strcpy - function
 *@dest: char
 *@src: char
 *Return: dest
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);

}

