#include "main.h"

/**
 *reverse_array - function
 *@a: int
 *@n: int
 *
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int j;

	while (i < n)
	{
		j = a[n - 1];
		a[n - 1] = a[i];
		a[i] = j;
		i++;
		n--;
	}
}
