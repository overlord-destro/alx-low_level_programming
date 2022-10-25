#include "lists.h"
/**
*pop_listint - deletes head node of list
*@head: head node of list
*Return: returns data of head node
*/
int pop_listint(listint_t **head)
{
	listint_t *temp, *current;
	int data;


	if (head == NULL)
		return (0);

	current = *head;

	data = current->n;
	temp = current->next;

	free(current);

	*head = temp;

	return (data);
}
