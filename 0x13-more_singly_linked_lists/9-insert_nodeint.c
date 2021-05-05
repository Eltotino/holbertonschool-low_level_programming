#include <stdio.h>
#include "lists.h"
/**
*insert_nodeint_at_index - insert node atindex in the list
*@head: pointer to list
*@n : int data
*@idx: unsigned int
*
*Return: int
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)

{
	listint_t *new;
	listint_t *temp;
	unsigned int index = 0;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		return (new);
	}

	if (idx == 0)
		new->next = *head;
		*head = new;
		return (new);

	temp = *head;

	while (index < (idx - 1) && temp->next)
		temp = temp->next;
		index++;

	if ((index < (idx - 1)))
		return (NULL);


	new->next = temp->next;
	temp->next = new;

	return (new);
}
