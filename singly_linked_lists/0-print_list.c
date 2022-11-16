#include"lists.h"
/**
 * print_list - function that print elements of a node
 * @h: head of node
 * Return: value of i
 */

size_t print_list(const list_t *h)
{
	int i = 0;

	const list_t *lista;

	for (lista = h; lista != NULL; lista = lista->next)
	{
		if (lista->str == NULL)
		{
			printf("[0] (nil)\n");
			i++;
			lista = lista->next;
		}
		printf("[%d] ", lista->len);
		printf("%s\n", lista->str);
		i++;

	}

	return (i);
}

