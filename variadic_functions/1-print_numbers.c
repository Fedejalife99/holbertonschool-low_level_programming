#include "variadic_functions.h"
#include <stdio.h>

/**
 * print_numbers - fuction that print numbers
 * @separator: separator of numbers
 * @n: number of number to print
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list num_print;

	unsigned int i;

	int j = 0;

	va_start(num_print, n);

	for (i = 0; i < n; i++)
	{
		j = va_arg(num_print, int);

		printf("%d", j);
		printf("%s", separator);
	}
	printf("\n");
	va_end(num_print);
}
