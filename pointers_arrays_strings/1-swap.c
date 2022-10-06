#include "main.h"
/**
 * swap_int -- function that swaps two values
 * @a: int
 * @b: int
 */

void swap_int(int *a, int *b)
{

	int c = *a;

	*a = *b;
	*b = c;
}

