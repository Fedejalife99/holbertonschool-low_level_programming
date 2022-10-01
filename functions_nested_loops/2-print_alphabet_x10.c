#include "main.h"

/**
*print_alphabet_x10 - the program begin
*Return: 0
*/

void print_alphabet_x10(void)
{
	char alf = 'a';
	int contador = 1;


	do {
		_putchar(alf);
		alf++;
		if (alf == '{')
		{
			contador++;
			alf = 'a';
			_putchar('\n');
		}
	} while (contador <= 10);
}
