#include "lists.h"


size_t print_listint(const listint_t *h)
{
	unsigned int count = 1;

	if (h == NULL)
	{
		return (NULL);
	}
	while (h->next != NULL)
	{
		if (h->n == NULL)
		{
			return (NULL);
		}
		else
		{
			printf("%i\n", h->n);
		}
		h=h->next;
		count++;
	}
	return (count)
}
