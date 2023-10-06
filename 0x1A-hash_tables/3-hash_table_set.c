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
	current = ht->array[index];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (!current->value)
					return (0);
			return (1);
		}
			current = current->next;
	}
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}
		new_node->next = ht->array[index];
		ht->array[index] = new_node;
	return (1);
}
