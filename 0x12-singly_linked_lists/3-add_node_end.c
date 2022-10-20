#include "lists.h"
/**
*add_node_end - adds node at end of list
*@head: head of list
*@str: string to be added
*Return: list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode;
	int i;
	size_t counter = 0;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = NULL;


	newnode = *head;

	while (newnode->next != NULL)
		newnode = newnode->next;

	newnode->next = newnode;

	return (*head);
}
