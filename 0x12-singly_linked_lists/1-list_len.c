#include "lists.h"
/**
*list_len - returns number of elements in a linked list
*@h: node on list
*Return: number of elements on list
*/
size_t list_len(const list_t *h)
{
	size_t numbelem = 0;

	while (h != NULL)
	{
		h = h->next;
		numbelem++;
	}

	return (numbelem);
}
