#include<stdio.h>

/**
*main - the program begin
*Return: 0
*/

int main(void)
{
char letram = 'a';
char letraM = 'A';
do {
	putchar(letram);
	letram++;
	} while (letram <= 'z');
do {
	putchar(letraM);
	letraM++;
	} while (letraM <= 'Z');
putchar('\n');
return (0);
}
