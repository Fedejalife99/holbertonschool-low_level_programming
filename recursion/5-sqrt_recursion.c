#include "main.h"
#include <math.h>
/**
 * raiz_cuadrada - function that returns the natural square root of a number
 * @x: int
 * @y: int
 * Return: square root or -1 if it is not natural.
 */
int raiz_cuadrada(int x, int y)
{
	if (x < y * y)
	{
		return (-1);
	}
	if (x == y * y && x % y == 0)
	{
		return (y);
	}
	if (x != y * y)
	{
		return (raiz_cuadrada(x, y + 1));
	}
	return (0);
}

/**
 * _sqrt_recursion - function that give me the number to return the square root
 * Return: square root
 * @n: int
 */
int _sqrt_recursion(int n)
{
	return (raiz_cuadrada(n, 0));

}
