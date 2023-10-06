#include "hash_tables.h"

/**
 * hash_table_delete - free allocated memory
 * @ht: pointer to the has table
 *
 * Return: nothing
 */

void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *node;
	unsigned long int i;

	if (ht)
	{
		for (i = 0; i < ht->size; i++)
		{
			node = ht->array[i];
			free(node->key);
			free(node->value);
			free(node);
		}
		free(ht->array);
		free(ht);
	}
}
