#include "lists.h"
/**
*delete_dnodeint_at_index - deletes node at a certain index in list
*@head: pointer to the list
*@index: int index in the list
*
* Return:  pointer to the nth node
*/
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 1;

	if (!head)
	{
		return (-1);
	}
	ptr = *head;
	if (index == 0)
	{
		if (!ptr)
		{
			return (-1);
		}
		*head = ptr->next;
		if (*head)
		{
			(*head)->prev = NULL;
		}
		free(ptr);
		return (1);
	}
	while (ptr)
	{
		if ((count - 1) == index)
		{
			if (ptr->next)
			{
				ptr->prev->next = ptr->next;
				ptr->next->prev = ptr->prev;
			}
			else
					ptr->prev->next = NULL;
			free(ptr);
			return (1);
	}
		count++;
		ptr = ptr->next;
	}
	return (-1);
}
