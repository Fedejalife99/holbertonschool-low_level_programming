#include<stdio.h>
#include "main.h"
/**
 * print_last_digit - main function
 * Return: last_digit
 * @x: int
 */

int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;

	if (last_digit < 0)
	{
		last_digit = last_digit * -1;
		_putchar(last_digit + '0');
	return (last_digit);
	}
	_putchar(last_digit + '0');
	return (last_digit);
}


