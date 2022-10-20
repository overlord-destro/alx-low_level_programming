#include "lists.h"
/**
*list_len - returns number of elements in list
*@h: node on list
*Return: number of elements in list
*/
size_t list_len(const list_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
