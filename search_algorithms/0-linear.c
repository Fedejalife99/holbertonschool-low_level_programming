#include "search_algos.h"

/**
 * linear_search - Function that search for a value and return the index
 * @array: array of int
 * @size: size of the array
 * @value: value what we are going to search for
 * Return: i on success or -1 on failure
 *
 */
int linear_search(int *array, size_t size, int value)
{
	unsigned int i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%d] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
	}
	return (-1);
}
