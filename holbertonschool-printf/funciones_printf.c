#include <stdio.h>

void print_str(char *a)
{

	int i;

	for (i = 0; a[i] != '\0'; i++)
		putchar(a[i]);
}

void print_num(int a)
{
	putchar(a + '0');
}

/*void print_flo(float a)
{
}
*/
void print_char(char a)
{
	putchar(a);
}


