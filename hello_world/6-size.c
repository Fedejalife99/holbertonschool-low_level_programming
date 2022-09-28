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
	printf("Size of a char: %ld byte(s)\n",sizeof chara);
	printf("Size of an int: %ld byte(s)\n",sizeof inta);
	printf("Size of a long int: %ld byte(s)\n",sizeof longint);
	printf("Size of a long long int: %ld byte(s)\n",sizeof longlongint);
	printf("Size of a float: %ld byte(s)\n",sizeof floata);
	return (0);
}
