#include "lists.h"
/**
*insert_dnodeint_at_index - inserts node at a certain index in list
*@h: pointer to the list
*@idx: int index in the list
*@n: int , data in the list
* Return:  pointer to the nth node
*/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new;
	dlistint_t *ptr;
	unsigned int count = 1;

	if (idx == 0)
	{
		new = add_dnodeint(h, n);
		return (new);
	}
	ptr = (*h)->next;

	while (ptr)
	{
		if (idx == count)
		{
			new = malloc(sizeof(dlistint_t));
			if (new == NULL)
			{
				return (NULL);
			}
			new->n = n;
			new->prev = ptr->prev;
			new->next = ptr;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
		count++;
		ptr = ptr->next;
	}
	if (count == idx)
	{
		new = add_dnodeint_end(h, n);
		return (new);
	}
	return (NULL);
}
