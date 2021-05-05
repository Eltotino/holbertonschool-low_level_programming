#include <stdio.h>
#include "lists.h"
/**
*sum_listint - sums the data in the list
*@head: pointer to list
*
*
*Return: int
*/
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);

	while (head->next != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	sum += head->n;
	return (sum);
}
