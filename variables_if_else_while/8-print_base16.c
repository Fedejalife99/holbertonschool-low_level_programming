#include<stdio.h>

/**
 *main - Entry point
 *Return: 0
*/

int main(void)
{

	int m = '0';
	char h = 'a';

	do {
		putchar(m);
		m++;
	} while (m < '9');

	do {
		putchar(h);
		h++;
	} while (h  <= 'f');
	putchar('\n');
	return (0);
}
