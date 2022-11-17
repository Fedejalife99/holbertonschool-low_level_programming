#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - function that adds a new node at the end of a list
 * @head: pointer to a pointer to a struct
 * @n: int
 * Return: new
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	last = *head;

	new = malloc(sizeof(listint_t));

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
		last->next = new;
	}

	return (new);
}



