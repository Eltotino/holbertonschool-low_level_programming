#include "lists.h"
/**
*free_dlistint - frees list
*@head: pointer to the list
*
* Return:  Void
*/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *empt;

	while (head != NULL)
	{
		empt = head;
		head = head->next;
		free(empt);
	}
}
