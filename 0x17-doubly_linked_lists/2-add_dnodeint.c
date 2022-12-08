#include "lists.h"
/**
*add_dnodeint - adds node to beginning of list
*@head: head node
*@n: data to be added
*Return: pointer to struct
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new, *temphead;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	temphead = *head;
	/*checking if list is empty*/
	if (head == NULL)
	{
		new->next = NULL;
		new->prev = NULL;
	}
	else
	{
		new->next = temphead;
		temphead->prev = new;
		new->prev = NULL;
	}

	*head = new;

	return (*head);
}
