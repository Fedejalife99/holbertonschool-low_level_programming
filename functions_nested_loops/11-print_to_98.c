#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints from any number to 98
 *@n: int
 */

void print_to_98(int n)
{
	int i = n;

	for (i = n; i <= 98; i++)
	{
		if (i == 0)
		{
			printf("%d", n);
			printf(" ");
			printf(",");
			i++;
		}
		if (i <= 97)
		{
			printf("%d", i);
			printf(" ");
			printf(",");
		}
		if (i == 98)
		{
			printf("%d", i);
			printf("\n");
		}

	}
	for (i = n && i != 98; i >= 98; i--)
	{
		if (i >= 99)
		{
			printf("%d", i);
			printf(" ");
			printf(",");
		}
	}





}
