#include "lists.h"
/**
*add_nodeint - adds node to begining of list
*@head: head node of list
*@n: element to be added
*Return: returns pointer to list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newnode;

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);

	newnode->n = n;
	newnode->next = *head;
	*head = newnode;

	return (*head);
}
