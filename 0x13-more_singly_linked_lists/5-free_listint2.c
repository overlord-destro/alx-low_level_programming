#include "lists.h"
/**
*free_listint2 - frees list and sets head to null
*@head: head node of list
*/
void free_listint2(listint_t **head)
{
	while (head != NULL)
	{
		free(head);
		**head = head->next;
	}
	*head = NULL;
}
