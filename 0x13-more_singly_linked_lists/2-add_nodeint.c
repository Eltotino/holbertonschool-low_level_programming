#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*add_nodeint - add a node at the beginning of the list
*@head: pointer to list
*@n: data in the node
*
*Return:  new node
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new;

new = malloc(sizeof(listint_t));
new->n = n;
new->next = *head;
*head = new;

if (new == NULL)
{
return (NULL);
}

return (new);
}
