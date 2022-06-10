#include "lists.h"
/**
 * add_dnodeint_end - Function to add new node to the end of list
 * @head: The list pased to the function
 * @n: The data to be updated in the list
 * Return: The new data
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *temp = *head;

	if (head == NULL)
	{
		return (NULL);
	}
	newnode = make_node(n);
	if (!newnode)
	{
		return (NULL);
	}
	if (*head == NULL)
	{
		*head = newnode;
		return (newnode);
	}
	while (temp->next != 0)
	{
		temp = temp->next;
	}
	temp->next = newnode;
	newnode->prev = temp;

	return (newnode);
}
