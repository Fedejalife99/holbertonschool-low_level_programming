#include "lists.h"
#include <string.h>

/**
 * add_nodeint - that adds a new node at the beginning of a listint_t list
 * @head: pointer to a pointer to a struct
 * @n: const int
 * Return: *head
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);
	if (head == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
