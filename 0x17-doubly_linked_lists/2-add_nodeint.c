#include "lists.h"
/**
*add_nodeint - adds node to beginning of list
*@head: head node
*@n: data to be added
*Return: pointer to struct
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	*head->prev = new;
	new->next = *head;
	new->prev = NULL;
	*head = new;
	return (*head);
}
