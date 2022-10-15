#include "main.h"

/**
 *_pow_recursion - function that prints a power of a function
 *@x: int
 *@y: int
 *Return: power
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	if (y >= 1)
	{
	return (x * _pow_recursion(x, y - 1));
	}
	return (-1);
}
