#include "lists.h"

/**
 * add_dnodeint - add new element to list;
 * @head: the list to be added into
 * @n: data to be added
 * Return: The updated list
 **/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = make_node(n);
	if (!newnode)
		return (NULL);
	if (*head == NULL)
		*head = newnode;
		return (newnode);
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}

/**
 * make_node - Creates a node.
 * @n: Integer value to add to a linked list node.
 * Return: Upon sucess pointer to a dlistint_t node. Otherwise NULL
 */

dlistint_t *make_node(const int n)
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
