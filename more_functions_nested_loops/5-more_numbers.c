#include "main.h"

void more_numbers(void)
{
	int i = 0;
	int cont = 0; 

	for (cont = 0; cont < 10; cont++)
	{
		for (i = 0; i <= 14; i++)
		{
			if(i > 9)
			{
				_putchar((i / 10) + '0');
			}
			if(i <= 14)
			{
				_putchar((i % 10) + '0');
			}

		}
		_putchar('\n');
	}
}
