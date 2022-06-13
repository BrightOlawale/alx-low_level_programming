#include "lists.h"

/**
 * dlistint_len - get number of element in list;
 * @h: list passed to function
 * Return: number of element in list
 **/

size_t dlistint_len(const dlistint_t *h)
{
	int element_no = 0;

	if (h == NULL)
		return (0);
	while (h != 0)
	{
		element_no++;
		h = h->next;
	}
	return (element_no);
}
