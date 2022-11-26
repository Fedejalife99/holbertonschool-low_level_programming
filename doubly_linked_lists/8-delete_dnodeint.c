#include "lists.h"
#include <stdlib.h>
/**
 * delete_dnodeint_at_index - function that deletes the node
 * @head: pointer
 * @index: unsigned int
 * Return: 1
 */


int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *aux, *frii;

	unsigned int cont = 0;

	aux = *head;

	frii = aux;

	if (*head == NULL)
		return (-1);

	if (aux == NULL)
		return (-1);
	if (index == 0)
	{
		*head = (*head)->next;
		free(frii);
		return (1);
	}

	for (cont = 0; cont < (index - 1) ; cont++)
	{
		if (aux->next == NULL)
			return (-1);
		aux = aux->next;
	}

		frii = aux->next;
		aux->next = frii->next;
		free(frii);
		return (1);
}
