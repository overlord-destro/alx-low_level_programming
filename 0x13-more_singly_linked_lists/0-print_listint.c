#include "lists.h"
#include <stddef.h>
/**
*print_listint - prints all element of list
*@h: node on list
*Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (count);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
