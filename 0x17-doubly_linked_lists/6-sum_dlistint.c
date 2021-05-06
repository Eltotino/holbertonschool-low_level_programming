#include "lists.h"
/**
*sum_dlistint - sums all elements in list
*@head: pointer to the list
*
*
* Return:  pointer to the nth node
*/
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
