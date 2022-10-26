#include "lists.h"
/**
*delete_nodeint_at_index - deletes node at index
*@head: head node of list
*@index: index of node to be deleted
*Return: 1 on success, -1 on failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	int counter = 0;
	listint_t *temp, *current;

	current = *head;
	while (current != NULL && counter != index)
		current = current->next;
