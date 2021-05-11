#include "hash_tables.h"

/**
*hash_table_set - insert element in hash table
*@ht: hashtable used
*@key: key
*@value: element to insert
* Return: index
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *temp;
	unsigned long int index;

	if (!value || !ht || !key || !*key)
		return (0);
	index = key_index((const unsigned char *) key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (!strcmp(key, temp->key))
		{
			free(temp->value);
			temp->value = strdup(value);
			if (!temp->value)
				return (0);
			return (1);
		}
		temp = temp->next;
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);
	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		free(new->key);
		return (0);
	}
	new->next = ht->array[index];
	ht->array[index] = new;
	return (1);
}
