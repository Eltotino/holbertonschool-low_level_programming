#include "hash_tables.h"

/**
*hash_table_delete - deletes a hash table
*@ht: hashtable used
*
* Return: void
*/
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp, *ptr;
	unsigned long int count;

	if (!ht)
		return;
	for (count = 0; count  < ht->size; count++)
	{
		ptr = ht->array[count];
		while (ptr)
		{
			temp = ptr->next;
			free(ptr->key);
			free(ptr->value);
			free(ptr);
			ptr = temp;
		}
	}
	free(ht->array);
	free(ht);
}
