#include "lists.h"
#include <string.h>
/**
 * add_node - Function that add a new node at the begining of the list
 * @head: pointer to a pointer to a struct
 * @str: string
 * Return: head
 */

list_t *add_node(list_t **head, const char *str)
{

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	if (str == NULL)
		return (NULL);
	if (head  == NULL)
		return (NULL);
	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;

	return (*head);
}
