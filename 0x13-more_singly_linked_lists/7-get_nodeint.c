#include <stdio.h>
#include "lists.h"
/**
*get_nodeint_at_index - get nth element of the list
*@head: pointer to list
*
*@index: unsigned int
*
*Return: int
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (count < index && head->next)
	{
		head = head->next;
		count++;
	}
	if (count < index)
	{
		return (NULL);
	}
	return (head);
}
