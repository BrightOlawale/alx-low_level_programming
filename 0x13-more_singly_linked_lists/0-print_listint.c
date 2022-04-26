#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 * @h: the pointer to a list
 * Return: the  number of the nodes
 */

size_t print_listint(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count)
}
