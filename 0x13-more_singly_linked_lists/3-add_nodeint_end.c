#include "lists.h"

/**
 * add_nodeint_end - add new node at end of list
 * @head: first node of list
 * @n: element to be inserted to new list
 * Return: adress of new list
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *nextnode, *temp;

	if (head == NULL)
		return (NULL);
	nextnode = malloc(sizeof(listint_t));
	if (nextnode == NULL)
		return (NULL);
	if (*head == NULL)
		*head = nextnode;
		return (*head);

	temp = *head;
	while (temp->next != NULL)
	{
		temp = nextnode->next;
	}
	nextnode->next = nextnode;
	nextnode->n = n;
	nextnode->next = NULL;
	return (nextnode);
}
