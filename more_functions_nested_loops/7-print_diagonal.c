#include "main.h"
/**
 *print_diagonal - function
 *@n: int
 */

void print_diagonal(int n)
{
	int x;
	int y;

	if (n > 0)
	{
		for (x = 0; x <= n; x++)
		{
			for (y = 0; y < x + 1; y++)
			{
				_putchar(' ');

			}
			_putchar(92);
			_putchar('\n');

		}
	}
	else
	{
		_putchar('\n');
	}
}
