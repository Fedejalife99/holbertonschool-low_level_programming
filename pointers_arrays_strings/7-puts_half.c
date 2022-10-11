#include "main.h"

/**
 *puts_half - function
 *@str: parameter
 */


void puts_half(char *str)
{
	int p;
	int i = 0;
	int cont = 1;

	while (str[i] != '\0')
	{
		cont++;
		i++;
	}
	if (cont % 2 != 0)
	{
		p = (cont - 1) / 2;

		while (p <= cont)
		{
			_putchar(str[p]);
			p++;
		}
	}
	else
	{
		p = cont / 2;
		while (p <= cont)
		{
			_putchar(str[p]);
			p++;
		}
	}
	_putchar('\n');
}
