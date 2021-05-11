#include "hash_tables.h"

/**
*hash_table_print - prints a hash table
*@ht: hashtable used
*
* Return: void
*/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int count;
	hash_node_t *temp;
	int point = 0;

	if (!ht)
		return;
	printf("{");
	for (count = 0; count < ht->size; count++)
	{
		temp = ht->array[count];
		while (temp)
		{
			if (point)
			{
				printf(", ");
			}
			printf("'%s': '%s'", temp->key, temp->value);
			point++;
			temp = temp->next;
		}
	}
	printf("}\n");
}
