#include "lists.h"
/**
 * dlistint_len - function that adds a new node at the beginning of a list
 * @h: head of the list
 * Return: i
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *lista;

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
