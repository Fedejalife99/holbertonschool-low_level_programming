#include "main.h"

/**
*print_alphabet_x10 - the program begin
*Return: 0
*/

void print_alphabet_x10(void)
{
	char alf = 'a';
	int contador = 0;
	

	do {
		_putchar(alf);
		alf++;
		if (alf == 'z')
		{
			_putchar('\n');
			contador++;
		}
	} while ( contador <= 10);
}
