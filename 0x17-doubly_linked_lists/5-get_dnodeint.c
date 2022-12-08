#include "lists.h"
/**
*get_dnodeint_at_index: gets node at specified index
*@head: head node
*@index: index of node
*Return: returns node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int counter = 0;

	while (head != NULL && counter != index)
	{
		counter++;
		head = head->next;
	}

	return (head);
}
