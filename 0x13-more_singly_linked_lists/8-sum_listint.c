#include "lists.h"
/**
*sum_listint - adds all data on a list
*@head: head node of list
*Return: returns sum
*/
int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *current;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
