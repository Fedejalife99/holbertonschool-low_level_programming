#include <stdio.h>

/**
 *main - Entry point
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
int chara = 1;
int inta = 4;
int longint = 4;
int longlongint = 8;
int floata = 4;
	printf("Size of a char: %d byte(s)\n", chara);
	printf("Size of an int: %d byte(s)\n", inta);
	printf("Size of a long int: %d byte(s)\n", longint);
	printf("Size of a long long int: %d byte(s)\n", longlongint);
	printf("Size of a float: %d byte(s)\n", floata);
	return (0);
}
