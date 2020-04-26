#include "lists.h"

/**
* add_node - adds a node atthe head of the list
*@head: pointer to new node
*@str: string
* Return: number of elements
*/

list_t *add_node(list_t **head, const char *str)
{
	int i;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);
	new->str = strdup(str);
	new->next = *head;
	*head = new;

	if (head == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
	{
		new->len = i;
	}

	return (*head);
}
