#include<stdio.h>

/**
 *main - the program begin
 *Return: 0
 */

int main(void)
{
	char letram;

	for (letram = 'a'; letram <= 'z'; letram++)
	{
		if (letram == 'e' || letram == 'q')
			{
			}
		else
		{
			putchar(letram);
		}
	}
	putchar('\n');
	return (0);

}

