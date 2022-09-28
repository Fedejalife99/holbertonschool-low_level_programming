#include <stdio.h>

/**
*main - Entry point
*Return: 0
*/

int main(void)
{
char letra = 'a';
do {
putchar(letra);
letra++;
} while (letra <= 'z');
putchar('\n');
return (0);
}

