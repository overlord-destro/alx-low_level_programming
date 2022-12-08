#include "lists.h"
/**
*dlistint_len - returns number of elements in a linked list
*@h: head node
*Return: returns number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t counter = 0;

	if (h == NULL)
		return (counter);

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
