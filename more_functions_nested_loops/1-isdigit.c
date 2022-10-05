#include "main.h"

/**
 *_isdigit - function
 *Return:0 o 1
 *@c: int
 */
int _isdigit(int c)
{
	if (c == 48 && c < 57)
	{
		return (1);
	}
	if (c == '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
