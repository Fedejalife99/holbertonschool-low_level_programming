#include "main.h"

/**
 *print_line - function
 *@n: int
 *
 */

void print_line(int n)
{
	int cont = 0;

	for (cont = 0; cont <= n; cont++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		} else
		{
		_putchar('_');
		}
	}
	_putchar('\n');
}
