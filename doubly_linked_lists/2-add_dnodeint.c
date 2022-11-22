#include "lists.h"
#include <stdlib.h>
/**
 * add_dnodeint - fuction that adds a new node at the beginning of a list
 * @head: pointer to a pointer to a struct
 * @n: const int
 * Return: head
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));

	dlistint_t **aux = head;

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	new->prev = *aux;
	*head = new;
	(*head)->prev = NULL;
	return (new);
}
