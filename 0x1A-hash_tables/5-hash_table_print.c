#include "hash_tables.h"

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	hash_node_t *current;
	int flag = 1;

	if (!ht)
	{
		printf("Invalid hash table\n");
		return;
	}

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		current = ht->array[i];	
		while (current != NULL)
		{
			if (flag)
			{
				printf("'%s': '%s'", current->key, current->value);
				flag = 0;
			}
			else
			{
				printf(",'%s': '%s'", current->key, current->value);
			}
			current = current->next;
			if (current != NULL)
				printf(", ");
		}

	}
	printf("}\n");
}
	

