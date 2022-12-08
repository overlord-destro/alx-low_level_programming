#include "lists.h"
/**
*sum_dlistint - sums all elements of list
*@head: head node
*Return: returns sum
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head)
	{
		while(head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
