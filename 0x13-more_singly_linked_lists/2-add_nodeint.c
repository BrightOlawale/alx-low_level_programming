#include "lists.h"
listint_t *newnode(const int n);

/**
 * add_nodeint - add node at begining;
 * @head: pointer to first node of list
 * @n: new element to be added to list
 * Return: pointer to the new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *nextnode;
	nextnode = newnode(n);
	if (nextnode == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = nextnode;
	}
	nextnode->next = *head;
	*head = nextnode;
	return (*head);
}

/**
 * newnode - create a new node
 * @n: new element to be added
 * Return: pointer to the node created
 */
listint_t *newnode(const int n)
{
	listint_t *nextnode;

	nextnode = malloc(sizeof(listint_t));
	if (nextnode == NULL)
		return (NULL);
	nextnode->n = n;
	nextnode->next = NULL;
	return (nextnode);
}
