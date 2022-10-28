#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that sum
 * @n: number of numbers to sum
 * Return: sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list numeros;

	unsigned int i, suma, parametro;

	const unsigned int j = 0;

	suma = 0;

	if (n == j)
		return (0);
	va_start(numeros, n);
	for (i = 0; i < n; i++)
	{
		parametro = va_arg(numeros, int);
		suma += parametro;
	}

	va_end(numeros);
	return (suma);
}
