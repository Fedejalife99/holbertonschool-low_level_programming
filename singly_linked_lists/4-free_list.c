#include "lists.h"
#include <stdlib.h>

/**
 * free_list - fuction that free a list
 * @head: head of the list
 */

void free_list(list_t *head)
{
	list_t *frii;

	while (head->next)
	{
		frii = head;
		free(frii->str);
		head = head->next;
		free(frii);
	}
}


