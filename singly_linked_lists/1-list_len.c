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

	lista = h;

	if (h == NULL)
		return (i);
	if (lista->next == NULL)
	{
		i++;
		return (i);
	}
	for (lista = h; lista->next; lista = lista->next)
		i += 1;

	if (lista->next == NULL)
	{
		i++;
	}

	return (i);
}
