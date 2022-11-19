#include <stdio.h>
#include "main.h"
#include <string.h>

/**
 * binary_to_unit - function that prints the binary representation of a number
 * @b: const char
 * Return: number in base 10
 */


unsigned int binary_to_uint(const char *b)
{
	int i = 0;

	int sum = 0;

	int po = 1;

	int j = strlen(b);

	if (b == NULL)
		return (0);

	for (i = j - 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);

		sum += ((b[i] - '0') * po);

		po *= 2;

	}

	return (sum);
}
