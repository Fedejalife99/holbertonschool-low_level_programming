#include<stdio.h>
#include <stdlib.h>
/**
 *main - function
 *@argc: int
 *@argv: char
 *Return: 0
 */

int main(int argc, char *argv[])

{
	int i = 1;

	int j = 0;

	int result = 0;

	for (i = 0; i < argc; i++)
	{
		for (j = 1; *(argv[i] + j) != '\0'; j++)
		{
			if (*(argv[i] + j) >= 'A' && (*(argv[i]  + j) <= 'z'))
			{
				printf("Error\n");
				return (1);
			}
		}
	}

}

