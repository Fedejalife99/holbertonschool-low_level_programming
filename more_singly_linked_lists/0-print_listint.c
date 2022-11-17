#include "lists.h"
/**
 * print_listint - function that prints the elements of a node
 * @h: pointer to the first struct of the list
 * Return: i
 */

size_t print_listint(const listint_t *h)
{
	int i = 0;

	const listint_t *lista;

	if (h == NULL)
		return (i);

	for (lista = h; lista->next != NULL; lista = lista->next)
	{
		printf("%d\n", lista->n);
		i++;
	}

	if (lista->next == NULL)
	{
		printf("%d\n", lista->n);
		i++;
	}
	return (i);
}
