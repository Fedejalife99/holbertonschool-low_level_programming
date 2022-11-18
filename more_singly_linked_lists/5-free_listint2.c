#include "lists.h"
#include <stdio.h>

/**
 * free_listint2 - function that free a list and set head to NULL
 * @head: pointer to a pointer to a struct
 *
 */

void free_listint2(listint_t **head)
{

	listint_t *frii, *aux;

	aux = *head;

	if (head == NULL)
		return;

	while (aux->next)
	{
		frii = aux;
		aux = aux->next;
		free(frii);
	}
	if (aux->next == NULL)
	{
		frii = aux;
		aux = aux->next;
		free(frii);
	}

	*head = NULL;

}
