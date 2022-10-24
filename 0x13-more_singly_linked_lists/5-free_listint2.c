#include "lists.h"
/**
*free_listint2 - frees list and sets head to null
*@head: head node of list
*/
void free_listint2(listint_t **head)
{
	listint_t *temp, *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
	}
	*head = NULL;
}
