#include "lists.h"
/**
*insert_nodeint_at_index - inserts node at index
*@head: head node of list
*@idx: index of insertion
*@n: data to insert
*Return: returns address of newnode
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int counter = 0;
	listint_t *newnode, *current;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;

	if (idx == 0)
	{
		newnode->next = *head;
		*head = newnode;
		return (*head);
	}
	if (idx == 0 && head == NULL)
	{
		*head = newnode;
		return (*head);
	}

	current = *head;
	while (current != NULL && counter < idx)
	{
		current = current->next;
		counter++;
	}
	if (current == NULL && counter != idx)
		return (NULL);

	if (counter < idx)
	{
		newnode->next = current->next;
		current->next = newnode;
	}
	return (newnode);
}
