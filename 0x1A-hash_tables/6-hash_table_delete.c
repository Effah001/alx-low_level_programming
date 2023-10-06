#include "hash_tables.h"

/**
 * hash_table_delete - free allocated memory
 * @ht: pointer to the has table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node, temp;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			while (current)
			{
				temp = node
				node = node->next;
				free(temp->key);
				free(temp->value);
				free(temp);
			}
		}
	free(ht->array);
	free(ht);
	}
}
