#include "variadic_functions.h"
#include <stdio.h>
#include <string.h>
/**
 * print_strings - function that prints strings
 * @separator: separator of strings
 * @n: number of strings to print
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list str_print;

	unsigned int i;

	char *j;

	va_start(str_print, n);

	if (separator == NULL)
		separator = "";

	for (i = 0; i < n; i++)
	{
		j = va_arg(str_print, char*);

		if (i != 0)
		{
			printf("%s", separator);
		}
		if (j == NULL)
			printf("(nil)");
		printf("%s", j);
		if (n == 1)
			va_end(str_print);
	}
	printf("\n");
	va_end(str_print);

}
