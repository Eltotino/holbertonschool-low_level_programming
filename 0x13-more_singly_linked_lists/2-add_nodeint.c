#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
*listint_len - returns lenghth of list
*@h: pointer to list
*
*Return:  length of list
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
        listint_t *new;

        new = malloc(sizeof(listint_t));
        new->n = n;
        new->next = *head;
        *head = new;

        if (new == NULL)
                return NULL;
        
        return (new);
}