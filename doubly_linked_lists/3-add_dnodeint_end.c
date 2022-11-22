#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint_end - function that adds a new node at the end of a list
 * @head: pointer to a pointer to a struct
 * @n: const int
 * Return: new
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	last = *head;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;

	if (*head == NULL)
		*head = new;

	if (last != NULL)
	{
		for (last = *head; last->next != NULL; last = last->next)
			continue;
		new->prev = last;
		last->next = new;
	}

	return (new);
}
