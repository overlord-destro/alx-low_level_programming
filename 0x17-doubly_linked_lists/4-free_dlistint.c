#include "lists.h"
/**
*free_dlistint - frees list
*@head: head node
*/
void free_dlistint(dlistint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
