#include "main.h"

/**
 *
 * 
 */
void print_triangle(int size)
{
        int esp = 0;
	int num = 1;

        if (size <= 0)
        {
		_putchar('\n');
        }
	for (esp = 0; esp == size - num; esp++)
	{
		_putchar(' ');
		if (esp + num == size)
		{	
			_putchar('\n');
		}
	for (num = 0; num == size - num;num++)
	{
		_putchar(35);
	}	

	}
}
