#include "main.h"

/**
 * print_sign - main fuction
 * @n: int
 * Return: 0 1 -1
 */

int print_sign(int n)
{


	if (n > 0)
	{
		_putchar('+');
		return (1);
	}

	if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
