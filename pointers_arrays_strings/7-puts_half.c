#include "main.h"

/**
 *puts_half - function
 *@str: parameter
 */


void puts_half(char *str)
{
	int p;
	int i = 0;
	int cont = 0;

	while (str[i] != '\0')
	{
		cont++;
		i++;
	}
	cont--;
	if (cont % 2 != 0)
	{
		p = (cont - 1) / 2;

		while (p <= cont)
		{
			p++;
			_putchar(str[p]);
		}
	}
	else
	{
		p = cont / 2;
		while (p <= cont)
		{
			p++;
			_putchar(str[p]);
		}
	}
	_putchar('\n');
}
