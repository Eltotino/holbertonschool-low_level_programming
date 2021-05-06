#include "lists.h"
/**
*add_dnodeint - add node at beginning of list
*@head: pointer to the list
*@n : int
* Return:  number of elements
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
	}
	else
	{
	(*head)->prev = new;
	new->next = (*head);
	new->prev = NULL;
	}

	(*head) = new;

	return (new);
}
