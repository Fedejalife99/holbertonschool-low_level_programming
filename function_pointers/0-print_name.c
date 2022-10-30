#include "function_pointers.h"
/**
 *f - function
 *@a: array of chars
 *Return: 0
 */
void *f(char *a)
{

	int i;

	for (i = 0; a[i] != '\0'; i++)
		_putchar(a[i]);
	return (0);
}


/**
 * print_name - function that prints a name
 * @name: pointer to an array of chars
 * @f: fuction called by a pointer
 */

void print_name(char *name, void (*f)(char *a))
{
	if (name == NULL)
		return;
	f(name);
}

