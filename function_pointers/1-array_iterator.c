#include "function_pointers.h"

/**
 *array_iterator - function
 *@array: array of functions
 *@size: size_t
 *@action: pointer to a function
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{

	int i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	for (i = 0; size > 0; i++)
	{
		action(array[i]);
		size--;
	}
}
