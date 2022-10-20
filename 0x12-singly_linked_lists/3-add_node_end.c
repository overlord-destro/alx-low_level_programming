#include "lists.h"
/**
*add_node_end - adds node at end of list
*@head: head of list
*@str: string to be added
*Return: list
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *newnode, *temp;
	int i;

	newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		;

	newnode->len = i;
	newnode->str = strdup(str);
	newnode->next = NULL;


	temp = *head;

	while (temp->next != NULL)
		temp = temp->next;

	temp->next = newnode;

	return (*head);
}
