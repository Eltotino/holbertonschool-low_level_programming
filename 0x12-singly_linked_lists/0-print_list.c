#include "lists.h"

/**
* print_list - print all elements of a list
*@h: list contaning all elements to be printed
* Return: elements
*/

size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{	printf("[%d] %s\n", h->len, h->str);
			h = h->next;
		}
			else
			{
				printf("[0] (nil)\n");
			h = h->next;
			}
			i++;
	}
	return (i);
}
