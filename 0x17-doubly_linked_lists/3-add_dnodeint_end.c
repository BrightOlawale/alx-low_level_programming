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
	dlistint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	temp = *head;
	newnode = make_nodee(n);
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

/**
 * make_nodee - Creates a node.
 * @n: Integer value to add to a linked list node.
 * Return: Upon sucess pointer to a dlistint_t node. Otherwise NULL
 */
dlistint_t *make_nodee(const int n)
{
	dlistint_t *newnode;

	newnode = malloc(sizeof(dlistint_t));
	if (!newnode)
		return (NULL);
	newnode->prev = NULL;
	newnode->next = NULL;
	newnode->n = n;
	return (newnode);
}

