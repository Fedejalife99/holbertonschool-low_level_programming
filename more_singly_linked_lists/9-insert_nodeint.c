#include "lists.h"
/**
 * insert_nodeint_at_index - function that add a new node at a given position
 * @head: pointer to a pointer to a struct
 * @n: int
 * @idx: index
 * Return: new
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int cont = 0;

	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
	{
		return (NULL);
	}

	new = *head;

	for (cont = 0; cont < idx; cont++)
	{
		if (cont == idx && new != NULL)
		{
			new->n = n;
			new = new->next;
		}
		if (new == NULL)
			return (NULL);
	}
	return (new);
}
