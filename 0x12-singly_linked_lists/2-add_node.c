#include "lists.h"
/**
*add_node - adds node at beginning of list
*@head: head of list
*@str: string to be added
*Return: list
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->len = i;
	newnode->str = strdup(str);

	newnode->next = *head;
	*head = newnode;

	return (*head);
}
