#include<stdio.h>

/**
 *main - Entry point
 *Return: 0
 */

int main(void)
{
	int letram;

	for (letram = 'z'; letram >= 'a'; letram--)
	{
		putchar(letram);
	}
	putchar('\n');
	return (0);
}
