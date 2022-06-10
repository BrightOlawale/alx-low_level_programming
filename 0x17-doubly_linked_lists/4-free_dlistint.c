#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return (NULL);
	temp = head;
	free(head);
	while (temp != 0)
	{
		temp = temp->next;
		free(temp->prev);
	}
}