#include<stdio.h>

/**
 *main - function
 *@argc: int
 *@agrv: char
 *Return: 0
 *
 */

int main(int argc, char *agrv[])
{
	(void) argc;

	while (*agrv)
	{
		printf("%s\n", *agrv);
		agrv++;
	}

	return (0);
}
