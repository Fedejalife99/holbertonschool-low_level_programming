#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * hash_table_create - function that creates a hash table
 * @size: size fo the array
 * Return: h
 */

hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;

	hash_table_t *h;

	h = malloc(sizeof(hash_table_t));

	if (h == NULL)
		return (NULL);

	h->size = size;
	h->array = malloc(sizeof(hash_node_t *) * size);
	if (h->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		h->array[i] = NULL;
	}

	return (h);
}

