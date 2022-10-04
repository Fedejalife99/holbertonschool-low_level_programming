#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints from any number to 98
 *@n: int
 */

void print_to_98(int n)
{
	int i;


	for (i = n; i <= 98; i++)
	{
		if (i == 0)
		{
			printf("%d", i);
			i++;
		}
		printf(" ");
		printf(",");
		printf("%d", i);
		if (i == 98)
		{
			printf("\n");
		}
	}

}
