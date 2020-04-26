#include "lists.h"

/**
* add_node - adds a node atthe head of the list
*@head: pointer to new node
*@str: string
* Return: number of elements
*/

list_t *add_node(list_t **head, const char *str)
{
	int i = 0;
	list_t *new;

	new = malloc(sizeof(list_t));
	
	new->str = strdup(str);
	new->next = *head;
	*head = new;
	if (new == NULL)
		return (NULL);

if (*head == NULL)
		return (NULL);

	while (str[i] != '\0')
	{
		i++;
		new->len = i;
	}

	return (new);
}
