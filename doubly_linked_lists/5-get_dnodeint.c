#include <stdio.h>
#include "lists.h"
/**
 * get_dnodeint_at_index -  function that returns the nth node of a linked list
 * @head: pointer to a struct
 * @index: unsigned int
 * Return: head
 */



dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{

unsigned int i = 0;

	for (i = 0; i < index; i++)
	{
		if (head == NULL)
			return (NULL);
		head = head->next;
	}

	return (head);
}
