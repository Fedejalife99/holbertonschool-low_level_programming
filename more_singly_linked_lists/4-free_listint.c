#include "lists.h"
#include <stdlib.h>

/**
 * free_listint - fuction that free a list
 * @head: head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *frii;

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
