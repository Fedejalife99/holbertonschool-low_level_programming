#include "main.h"
/**
 *print_array - function that prints ints
 *
 *@a: array of ints
 *@n: number of ints
 */
void print_array(int *a, int n)
{
	int i = 0;

	while (i < n && n != 0)
	{
		if (i == n - 1)
		{
			printf("%d", a[i]);
			printf("\n");
		}
		else
		printf("%d, ", a[i]);
		i++;
	}
	while (n < 0)
	{
		printf("%d", a[n]);
	}
}

