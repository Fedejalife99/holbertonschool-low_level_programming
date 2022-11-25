#include "lists.h"
#include <stdlib.h>

/**
 * insert_dnodeint_at_index - function that inserts a new node at the index
 * @h: pointer to a pointer to a struct
 * @idx: index
 * @n: int
 * Return: new
 */


dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int cont = 0;

	dlistint_t *aux;

	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	aux = *h;
	new->n = n;
	if (h == NULL)
	{
		new->n = n;
		new->prev = aux;
		aux->next = new;
		return (new);
	}
	if (idx == 0)
	{
		new->next = aux;
		new->prev = *h;
		*h = new;
		return (new);
	}
	for (cont = 1; cont < idx; cont++)
	{
		if (aux == NULL || aux->next == NULL)
			return (NULL);
		aux = aux->next;
	}
	new->n = n;
	new->next = aux->next;
	new->prev = aux;
	aux->next = new;
	return (new);
}
