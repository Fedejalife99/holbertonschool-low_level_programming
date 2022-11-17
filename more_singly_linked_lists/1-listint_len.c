#include "lists.h"

/**
 * listint_len - function that returns the num of members of a list
 * @h: pointer
 * Return: i
 */

size_t listint_len(const listint_t *h)
{
	int i = 0;

	const listint_t *lista;

	lista = h;

	if (h == NULL)
		return (i);
	if (lista->next == NULL)
	{
		i++;
		return (i);
	}
	for (lista = h; lista->next; lista = lista->next)
		i++;
	if (lista->next == NULL)
		i++;
	return (i);
}
