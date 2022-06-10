#include "lists.h"

/**
 * print_dlistint - print data in list
 * @h: the list passed to the function
 * Return: number of nodes in list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	int node_count = 0;

	if (h != NULL)
	{
		return (0);
	}
	while (h != 0)
	{
		printf("%d", h->n);
		node_count++;
		temp = h->next;
	}
	return (node_count);
}
