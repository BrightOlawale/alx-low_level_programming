#include "lists.h"

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
{
	int idx = 0;

	if (head == NULL)
		return (NULL);
	while (idx != index)
	{
		head = head->next
		idx++;
	}
	return (head->n);
}
