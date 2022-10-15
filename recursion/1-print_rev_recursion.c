#include "main.h"

/**
 * _print_rev_recursion - function
 * @s: pointer to a char
 *
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\0');
	}
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
}
