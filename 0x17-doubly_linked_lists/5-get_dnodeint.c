#include "lists.h"
/**
*get_dnodeint_at_index - get node at certain index in list
*@head: pointer to the list
*
*@index : index of the node
* Return:  pointer to the nth node
*/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int count = 0;

	ptr = head;

	while (ptr)
	{
		if (count == index)
			return (ptr);
		count++;
		ptr = ptr->next;
	}
	return (NULL);
}
