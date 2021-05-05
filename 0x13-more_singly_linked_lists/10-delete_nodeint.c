#include <stdio.h>
#include "lists.h"
/**
*delete_nodeint_at_index - delete node atindex in the list
*@head: pointer to list
*
*@index: unsigned int
*
*Return: int
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp;
	listint_t *del;
	unsigned int count = 0;

	if (*head == NULL)
	{
		return (-1);
	}

	del = *head;

	if (index == 0)
	{
		*head = del->next;
		free(del);
		return (1);
	}
	while (count < index && del->next)
	{
		temp = del;
		del = del->next;
		count++;
	}
	if (count < index)
		return (-1);

	temp->next = del->next;
	free(del);


	return (1);
}
