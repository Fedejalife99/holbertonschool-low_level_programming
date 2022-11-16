#include "lists.h"

/**
 * list_len - list of nodes
 * @h: head of the list
 * Return: i
 */

size_t list_len(const list_t *h)
{
	const list_t *lista;

	int i = 0;

	if (h == NULL)
		return (i);

	for (lista = h; lista->next != NULL; lista = lista->next)
		i += 2;

	return (i);
}
