#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
#include <stddef.h>
#include <string.h>

int main (int argc, char** argv)
{
	int i = atoi(argv[1]);

	int h = atoi(argv[3]);

	char t = *argv[2];

	int (*calculator)(int, int);
	
	if (argc != 4)
	{	
		printf("Error\n");
		exit(98);
	}
	if ((strlen(argv[2]) != 1 ) || (t != '+' && t != '-' && t != '%' && t != '/' && t != '*'))
	{	printf("Error\n");
		exit(99);
	}
	if (h == 0 && (t == '/' || t == '%'))
	{
		printf("Error\n");
		exit(100);
        }

	calculator = get_op_func(argv[2]);
	printf("%d\n",calculator(h, i));
	return (0);
}
