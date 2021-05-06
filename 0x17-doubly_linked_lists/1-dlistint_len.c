#include "lists.h"
/**
*dlistint_len - returns lens of list
*@h: pointer to the list
*
* Return:  number of elements
*/
size_t dlistint_len(const dlistint_t *h)
{
		size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
return (i);
}
