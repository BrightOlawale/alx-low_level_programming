#include "lists.h"

/**
 * print_dlistint - print data in list
 * @h: the list passed to the function
 * Return: number of nodes in list
 **/
size_t print_dlistint(const dlistint_t *h)
{
	dlistint_t *temp;
	int node_count = 0;

	if (h != NULL)
	{
		temp = h;
		while (temp != 0)
		{
			printf("%d", temp->n);
			node_count++;
			temp = temp->next;
		}
	}
	return (node_count);
}
