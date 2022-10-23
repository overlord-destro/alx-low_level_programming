#include "lists.h"
#include <stdio.h>
/**
*print_list - prints all elements of list
*@h: node on list
*Return: returns number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t numbernodes = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");

		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		numbernodes++;
	}

	return (numbernodes);
}
