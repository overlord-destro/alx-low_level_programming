#include "lists.h"
/**
*free_listint - frees list
*@head: head node of list
*/
void free_listint(listint_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
