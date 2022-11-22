#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - fuction that free a double list
 * @head: head of the list
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *frii;

	if (head == NULL)
		return;
	while (head->next)
	{
		frii = head;
		head = head->next;
		free(frii);
	}
	if (head->next == NULL)
	{
		frii = head;
		head = head->next;
		free(frii);
	}

}
