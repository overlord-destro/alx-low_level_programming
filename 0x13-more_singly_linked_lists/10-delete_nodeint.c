#include "lists.h"
/**
*delete_nodeint_at_index - deletes node at index
*@head: head node of list
*@index: index of node to be deleted
*Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp, *current;

	if (*head == NULL)
		return (-1);

	current = *head;
	if (current->next == NULL)
	{
		free(current);
		return (1);
	}

	while (current != NULL && counter < index - 1)
	{
		current = current->next;
		counter++;
	}
	temp = current->next;
	current->next = temp->next;
	free(temp);
	return (1);
}
