#include<stdio.h>
#include <stdlib.h>
/**
 *main - function
 *
 */

int main (int argc, char *argv[])
{
	int i;

	int result = 1;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	for (i = 1; i < argc; i++)
	{
		result = result * atoi(argv[i]);
	}
	printf("%d\n", result);
	
	return (0);
}

