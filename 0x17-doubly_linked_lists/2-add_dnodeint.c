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
		return (0);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (0);
	}
	newnode->n = n;
	newnode->next = head;
	head = newnode;

	return (*head);
}
