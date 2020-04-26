#include "lists.h"

/**
* add_node_end - add an element at the end of a list
* @head: first node of list
* @str: element to be added;
* Return: new element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	unsigned int i;
	list_t *new, *end;


	end = *head;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	if (new->str == NULL)
	{
		return (NULL);
	}


	for (i = 0; new->str[i] != '\0'; i++)
	{
		new->len = i;
		new->next = NULL;
	}

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

		while (end->next)
			end = end->next;
			end->next = new;

		return (new);
}
