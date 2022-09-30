#include "main.h"

/**
*print_alphabet_x10 - the program begin
*Return: 0
*/

void print_alphabet_x10(void)
{
	char alf = 'a';
	int contador = 0;

	for (alf = 'a'; contador == 250; alf++)
	{
		_putchar(alf);

		if (alf == 'z')
		{
			_putchar('\n');
		}
		contador++;
	} 
}
