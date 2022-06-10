#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a node at a given position.
 * @h: Pointer to a pointer to the first node on a linked list.
 * @idx: Position for node to be inserted.
 * @n: Number in the node.
 * Return: The address of the new node, or NULL if it failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int index = 0;
	dlistint_t *newnode;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	newnode = do_node(n);
	if (!newnode)
		return (NULL);
	if (*h == NULL)
	{
		*h = newnode;
		return (newnode);
	}
	while (index < (idx + 1))
	{
		if (index == idx)
		{
			newnode->prev = *h;
			newnode->next = (*h)->next;
		}
		index++;
	}
	if (idx > index)
		return (NULL);
	return (newnode);
}


/**
 * do_node - Creates a node.
 * @n: Integer value to add to a linked list node.
 * Return: Upon sucess pointer to a dlistint_t node. Otherwise NULL
 */

dlistint_t *do_node(const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;
	return (newnode);
}
