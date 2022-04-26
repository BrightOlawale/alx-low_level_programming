#include "lists.h"
/**
 * listint_len -prints the number of element in list
 * @h: pointer to list
 * Return: number of element in list
 */

size_t listint_len(const listint_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);
	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
