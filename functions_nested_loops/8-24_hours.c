#include "main.h"

/**
 * jack_bauer - Entry point
 *
 */
void jack_bauer(void)
{
	int horas = 0;
	int minutos = 0;

	if (horas < 24)
	{
		do {
		if (minutos == 0)
		{
			_putchar((horas / 10) + '0');
			_putchar((horas % 10) + '0');
			_putchar(':');
			_putchar('0');
			_putchar('0');
			_putchar(10);
		}
		minutos++;
		if (minutos != 0)
		{

		_putchar((horas / 10) + '0');
		_putchar((horas % 10) + '0');
		_putchar(':');
		_putchar((minutos / 10) + '0');
		_putchar((minutos % 10) + '0');
		_putchar(10);
		}
		if (minutos == 59)
		{
			minutos = 0;
			horas++;
		}
		} while (horas <= 23 && minutos <= 59);
	}
}
