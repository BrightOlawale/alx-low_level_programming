#include "lists.h"
istint_t *newnode(const int n);

/**
 * add_nodeint_end - add new node at end of list
 * @head: first node of list
 * @n: element to be inserted to new list
 * Return: adress of new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextnode, *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);
	nextnode = newnode(n);
	if (nextnode == NULL);
		return (NULL);
	if (*head == NULL)
		*head = nextnode;
		return (*head);

	while (temp->next != NULL)
	{
		temp = temp->next;
	}
	temp->next = nextnode;
	return (nextnode);
}

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
