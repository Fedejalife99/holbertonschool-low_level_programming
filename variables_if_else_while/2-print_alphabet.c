#include <stdio.h>

/**
*main - Entry point
*Return: 0
*/

char main(void)
{
char letra = 'a';
do {
putchar(letra);
letra++, "\n";
} while (letra <= 'z');
return (0);
}

