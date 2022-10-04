#include "main.h"
#include <stdio.h>
/**
 *times_table - function that prints the 9 table
 */
void times_table(void)
{
	int fac1 = 0;

	int fac2 = 0;

	int res;

	for (fac1 = 0; fac1 <= 9; fac1++)
	{
		for (fac2 = 0; fac2 <= 9; fac2++)
		{
			res = fac1 * fac2;
			if (res <= 10 && res != 0 )
			{
                                _putchar(',');
                                _putchar(' ');
                                _putchar(' ');
				_putchar(res % 10 + '0');
			} else if (res == 0)
			{		
				_putchar('0');
			}else
			{
				_putchar(',');
                                _putchar(' ');
				_putchar(res / 10 + '0');
				_putchar(res % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
