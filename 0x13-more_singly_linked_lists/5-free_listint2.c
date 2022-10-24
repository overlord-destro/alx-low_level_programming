#include "lists.h"
/**
*free_listint2 - frees list and sets head to null
*@head: head node of list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = *head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
	*head = NULL;
}
