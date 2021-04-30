#include <stdio.h>
#include "lists.h"
/**
*free_listint - free the list
*@head: pointer to list
*
*
*Return: nothing
*/
void free_listint(listint_t *head)
{
	listint_t *empt;

	while (head != NULL)
	{
		empt = head;
		head = head->next;
		free(empt);
	}
}
