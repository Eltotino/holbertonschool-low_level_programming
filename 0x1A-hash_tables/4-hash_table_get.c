#include "hash_tables.h"

/**
*hash_table_get - get element in hash table
*@ht: hashtable used
*@key: key
* Return: value associated with element
*/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *temp;
	unsigned long int index;

	if (!ht || !key)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	temp = ht->array[index];

	while (temp)
	{
		if (strcmp(key, temp->key) == 0)
			return (temp->value);
		temp = temp->next;
	}
	return (NULL);
}
