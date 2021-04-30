#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint_end - add a node at the end of the list
*@head: pointer to list
*@n: data in the node
*
*Return:  new node
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;
	new->next = NULL;


	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
	{
		temp = temp->next;
	}
	temp->next = new;
	return (new);
}
