#include "hash_tables.h"

/**
 * hash_table_print - prints the table
 * @ht: hash table
 *
 * Return: nothing
 */

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int flag = 1;

	if (!ht)
	{
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];
		while (current != NULL)
		{
			if (flag)
				flag = 0;
			else
				printf(", ");

			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
		}

	}
	printf("}\n");
}

