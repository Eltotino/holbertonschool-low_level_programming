#include <stdio.h>
#include "lists.h"
/**
*free_listint2 - frees the list
*@head: pointer to list
*
*
*Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *empt;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		empt = *head;
		*head = (*head)->next;
		free(empt);
	}
	head = NULL;
}
