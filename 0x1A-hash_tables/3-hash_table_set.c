#include "hash_tables.h"

/**
 * hash_table_set - The function that adds an element
 * to the hash table.
 *@key: key
 *@value: value associated with the key
 *
 * Return: 1 if successful, 0 if otherwise
 */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned int long index;
	hash_node_t *new_node = NULL;
	hash_node_t *current;

	if (value == NULL || key == NULL || ht == NULL)
		return (0);

	index = key_index((unsigned char *) key, ht->size);
	new_node = malloc(sizeof(hash_node_t));
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
		return(0);

	if (ht->array[index] == NULL)
	{
		ht->array[index] = new_node;
	}
	else
	{
		current = ht->array[index];
		while (current->next != NULL)
		{
			current = current->next;
		}

		current->next = new_node;
	}

	return 1;
}
