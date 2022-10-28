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

	if (separator == NULL)
		separator = "";
	va_start(num_print, n);
	for (i = 0; i < n; i++)
	{
		j = va_arg(num_print, int);
		if (i != 0)
			printf("%s", separator);
		printf("%d", j);
		if (n == 1)
			va_end(num_print);
	}
	printf("\n");
	va_end(num_print);
}
