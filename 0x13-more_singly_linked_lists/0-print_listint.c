#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*size_ t print_listint - returns number of nodes in list
*@h :list
*@listint_t : structure
*Return :  number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
	}
