#include "lists.h"
/**
*add_dnodeint_end - add node at end of list
*@head: pointer to the list
*@n : int
* Return:  number of elements
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new;
	dlistint_t *ptr;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		new->n = n;
		*head = new;
		return (new);
	}
	ptr = *head;

	while (ptr->next)
	{
		ptr = ptr->next;
	}

	new->prev = ptr;
	new->next = NULL;
	new->n = n;
	ptr->next =  new;
	return (new);
}
