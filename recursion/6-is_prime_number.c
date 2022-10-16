#include "main.h"

/**
 * numero_primo - function
 * @x: int
 * @y: int
 * Return: numero primo
 *
 */

int numero_primo(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	if (x % y == 0)
	{
		return (0);
	}
	return (numero_primo(x, y + 1));

}

/**
 * is_prime_number -function
 * @n: int
 * Return: numero primo
 */


int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (numero_primo(n, 2));
}
