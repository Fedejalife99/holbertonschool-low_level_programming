#include "main.h"

int main(void)
{
	int i = 0, fac1 = 0, fac2 = 0;
	
	 for (fac1 = 0; fac1 <= 9; fac1++)
        {
                _putchar('\n');
                for (fac2 = 0; fac2 <= 9; fac2++)
                {
                        printf("%d, ", fac1 * fac2);
                }
	}
	return (0);
}
