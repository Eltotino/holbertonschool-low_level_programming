#include "lists.h"

/**
* free_list - frees a list
*@head: pointer
*/
void free_list(list_t *head)
{
	list_t *empt;

	while (head != NULL)
	{
		empt = head;
		head = head->next;
		free(empt->str);
		free(empt);
	}
}
