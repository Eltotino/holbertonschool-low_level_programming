#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*listint_len - returns lenghth of list
*@h : pointer to list
*Return :  length of list
*/
size_t listint_len(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
