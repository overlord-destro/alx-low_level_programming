#include "lists.h"
/**
*insert_dnodeint_at_index - inserts node at index
*@h: head node of list
*@idx: index of insertion
*@n: data to insert
*Return: returns address of newnode
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int counter = 0;
	dlistint_t *newnode, *current;

	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *h;
		newnode->prev = NULL;
		*h = newnode;
		return (*h);
	}
	if (idx == 0 && h == NULL)
	{
		newnode->next = NULL;
		newnode->prev = NULL;
		*h = newnode;
		return (*h);
	}
	current = *h;
	while (current != NULL && counter < idx - 1)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL && counter != idx)
		return (NULL);

	if (counter < idx)
	{
		newnode->next = current->next;
		newnode->prev = current;
		current->next = newnode;
	}
	return (newnode);
}
