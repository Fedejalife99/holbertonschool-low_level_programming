#include "main.h"

/**
 *print_most_numbers - print numbers
 *
 */

void print_most_numbers(void)
{
	int i = 0;

		for (i = '0'; i <= '9'; i++)
		{
			if (i == '2' || i == '4')
			{
				i++;
			}
			_putchar(i);
		}
		_putchar('\n');
}
