#include "lists.h"
#include <string.h>
/**
 * add_node_end - function that add a node at the end of a list
 * @head: head of the list
 * @str: string
 * Return: new
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;

	list_t *last;

	char *string;

	last = *head;

	new = malloc(sizeof(list_t));

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	string = strdup(str);

	new->str = string;
	new->len = strlen(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
	}
	if (last != NULL)
	{
		for (last = *head; last->next != NULL; last = last->next)
			continue;

		last->next = new;
	}

	return (new);
}


