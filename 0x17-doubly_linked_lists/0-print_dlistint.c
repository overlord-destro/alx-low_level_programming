#include "lists.h"
/**
*print_dlistint - prints elements 0f a doubly linked list
*@h: head node
*Return: returns number of nodes
*/
size_t print_dlistint(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		counter++;
		h = h->next;
	}
	return (counter);
}
