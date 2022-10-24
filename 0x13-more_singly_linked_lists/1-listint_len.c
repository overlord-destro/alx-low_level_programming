#include "lists.h"
/**
*listint_len - returns number of elements in list
*@h: node on list
*Return: number of elemts on list
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		count++;
		h = h->next;
	}

	return (count);
}
