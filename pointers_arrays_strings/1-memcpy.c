#include "main.h"

/**
 *_memcpy - function
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;
	
	char *p = dest;

	for (i = 0; i < n; i++)
	{	
		*dest = *src;
		dest++;
		src++;
	}
	return (p);
}	

