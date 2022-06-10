#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a linked list.
 * @head: Pointer to the first node of a linked list.
 * @index: Node index to return.
 * Return: If found the node at the index.
 */
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
	return (head);
}
