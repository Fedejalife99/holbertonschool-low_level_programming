#include "main.h"
#include <stdio.h>

void times_table(void)
{
	int fac1 = 0;

	int fac2 = 0;

	for (fac1 = 0; fac1 <= 9; fac1++)
        {
		for (fac2 = 0; fac2 <= 9; fac2++)
		{
			printf("%d, ", fac1 * fac2);
		}
		_putchar('\n');
	}	
}
