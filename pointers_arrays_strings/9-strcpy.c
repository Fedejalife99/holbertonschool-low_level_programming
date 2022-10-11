#include "main.h"
/**
 **_strcpy - function
 *@dest: char
 *@src: char
 */


char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	i--;
	return (dest);

}

