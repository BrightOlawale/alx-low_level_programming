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
	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
	{
		return (NULL);
	}
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;
	if (*head == NULL)
		*head = newnode;
		return (newnode);
	(*head)->prev = newnode;
	newnode->next = *head;
	*head = newnode;

	return (newnode);
}
