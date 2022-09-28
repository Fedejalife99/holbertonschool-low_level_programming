#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: Always 0 (Succes)
*/

int main(void)
{
	int n;
	int Last = n % 10;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	if (Last > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, Last);
	}
	else if (Last < 6 && Last != 0)
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Last);
	}
	else
	{
		printf("Last digit of %d is %d and is 0\n", n, Last);
	}
	return (0);

}
