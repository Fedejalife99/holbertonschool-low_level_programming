#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - function that prints from any number to 98
 *@n: int
 */

void print_to_98(int n)
{
	if (n <= 98)
	{
		while (n < 98)
		{
			printf("%d, ",n);
			n++;
		}
	}
	if (n >= 98)
	{
		while (n > 98)
		{
			printf("%d, ",n--);
		}
	} if (n == 98)
	{
		printf("98\n");
	}
					



}
