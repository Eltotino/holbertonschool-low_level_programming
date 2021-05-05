#include <stdio.h>
#include "lists.h"
/**
*pop_listint - deletes head node of the list
*@head: pointer to list
*
*
*Return: int
*/
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (!*head)
	{
		return (0);
	}
	temp = *head;
	n = (*head)->n;
	*head = (*head)->next;
	free(temp);

	return (n);
	}
