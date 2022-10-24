#include "lists.h"
/**
*get_nodeint_at_index -returns nth node
*@head: head node of list
*@index: index of nth node
*Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current;

	current = head;

	while (current != NULL && count != index)
	{
		count++;
		current = current->next;
	}

	return (current);

}
