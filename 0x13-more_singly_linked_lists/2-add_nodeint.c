#include "lists.h"

/**
 * add_nodeint - add node at begining;
 * @head: pointer to first node of list
 * @n: new element to be added to list
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nextnode;

	if (head == NULL)
		return (NULL);

	nextnode = malloc(sizeof(listint_t));
	if (nextnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		nexnode->next = NULL;
	}
	else
		nextnode->next = *head;
	nextnode->n =n;
	*head = nextnode;
	return (*head);
}
