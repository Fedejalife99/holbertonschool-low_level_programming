#include "lists.h"
#include <stdio.h>
/**
 * sum_dlistint - function that returns the sum of all the data
 * @head: pointer to a struct
 * Return: sum
 */
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

	if (head == NULL)
		return (0);
	if (head->next == NULL)
	{
		sum += head->n;
		return (sum);
	}
	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	if (head->next == NULL)
		sum += head->n;
	return (sum);
}
