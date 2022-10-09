#include "main.h"

/**
 *puts_half - function
 *@str: parameter
 */


void puts_half(char *str)
{
	int p;
	int i = 0;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		p = (i - 1) / 2;

	while (p < i)
	{
		p++;
		_putchar(str[p]);
	}
	_putchar('\n');
	}
	else
	p = i / 2;
	while (p < i)
	{
	_putchar(str[p]);
	p++;
	}
}
