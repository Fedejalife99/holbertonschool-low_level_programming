#include "lists.h"

/**
 * print_dlistint - that prints all the elements of a list
 * @h: head of a link list
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	int i = 0;

	int num;

	if (h == NULL)
		return (0);

	while (h->next != NULL)
	{
		i++;
		num = h->n;
		printf("%d\n", num);
		h = h->next;
	}
	if (h->next == NULL)
	{
		num = h->n;
		printf("%d\n", num);
		i++;
	}
	return (i);
}
