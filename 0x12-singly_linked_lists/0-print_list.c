#include "lists.h"
#include <stdio.h>
/**
*print_list - prints all elements of list
*@h: node on list
*Return: returns number of nodes
*/
size_t print_list(const list_t *h)
{
	size_t counter;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		counter++;
	}

	return (counter);
}
